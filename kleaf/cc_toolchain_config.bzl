load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "action_config",
    "env_entry",
    "env_set",
    "feature",
    "flag_group",
    "flag_set",
    "tool",
    "tool_path",
)
load(
    "@rules_cc//cc:action_names.bzl",
    "ALL_CC_COMPILE_ACTION_NAMES",
    "ALL_CC_LINK_ACTION_NAMES",
)

def _toolchain_include_feature(
        name,
        include_flag = None,
        includes = None):
    flags = []
    for include in (includes or []):
        flags.append(include_flag)
        flags.append(include)
    if not flags:
        return feature(
            name = name,
            enabled = True,
        )
    return feature(
        name = name,
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_COMPILE_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = flags,
                    ),
                ],
            ),
        ],
    )

def _tool_paths(ctx):
    # From _setup_env.sh
    #  HOSTCC=clang
    #  HOSTCXX=clang++
    #  CC=clang
    #  LD=ld.lld
    #  AR=llvm-ar
    #  NM=llvm-nm
    #  OBJCOPY=llvm-objcopy
    #  OBJDUMP=llvm-objdump
    #  OBJSIZE=llvm-size
    #  READELF=llvm-readelf
    #  STRIP=llvm-strip

    # Using symlink "parent" to find the binary because tool_path only accept
    # relative paths to cc_toolchain's package; see
    # https://github.com/bazelbuild/bazel/issues/8438

    return [
        tool_path(
            name = "gcc",
            path = "parent/clang-{}/bin/clang".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "ld",
            path = "parent/clang-{}/bin/ld.lld".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "ar",
            path = "parent/clang-{}/bin/llvm-ar".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "cpp",
            path = "parent/clang-{}/bin/clang++".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "nm",
            path = "parent/clang-{}/bin/llvm-nm".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "objdump",
            path = "parent/clang-{}/bin/llvm-objdump".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "strip",
            path = "parent/clang-{}/bin/llvm-strip".format(ctx.attr.clang_version),
        ),
    ]

def _host_include_dirs():
    # From _setup_env.sh, HOSTCFLAGS
    # openssl (via boringssl) and elfutils should be added explicitly
    # via //prebuilts/kernel-build-tools:*
    # Hence not listed here.
    return []

def _host_sysroot():
    # From _setup_env.sh
    # For host
    # sysroot_flags+="--sysroot=${ROOT_DIR}/build/kernel/build-tools/sysroot "
    return "build/kernel/build-tools/sysroot"

def _common_cflags(ctx):
    return feature(
        name = "kleaf-common-cflags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_COMPILE_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            # Work around https://github.com/bazelbuild/bazel/issues/4605
                            # "cxx_builtin_include_directory doesn't work with non-absolute path"
                            "-no-canonical-prefixes",
                        ],
                    ),
                ],
            ),
        ],
    )

def _common_ldflags(ctx):
    # From _setup_env.sh
    return feature(
        name = "kleaf-common-ldflags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_LINK_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "-fuse-ld=lld",
                            "--rtlib=compiler-rt",
                        ],
                    ),
                ],
            ),
        ],
    )

def _host_ldflags(ctx):
    # From _setup_env.sh
    # HOSTLDFLAGS
    return feature(
        name = "kleaf-host-ldflags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_LINK_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "-Wl,-rpath,prebuilts/kernel-build-tools/linux-x86/lib64",
                            "-L",
                            "prebuilts/kernel-build-tools/linux-x86/lib64",
                        ],
                    ),
                ],
            ),
        ],
    )

# TODO: For android arm64:
# NDK_TRIPLE=aarch64-linux-android31
# TODO: For target (platform:os=android), we use NDK_TRIPLE and sysroot under @prebuilt_ndk
# --sysroot=${NDK_DIR}/toolchains/llvm/prebuilt/linux-x86_64/sysroot
# TODO: USERCFLAGS
#  --target=${NDK_TRIPLE}
#  -Wno-unused-function
# TODO: USERLDFLAGS:
#  --target=${NDK_TRIPLE}

def _host_features(ctx):
    return [
        _toolchain_include_feature(
            name = "toolchain_include_directories",
            include_flag = "-I",
            includes = _host_include_dirs(),
        ),
        _common_cflags(ctx),
        _common_ldflags(ctx),
        _host_ldflags(ctx),
    ]

def _impl(ctx):
    if ctx.attr.target_os == "linux":
        features = _host_features(ctx)
        sysroot = _host_sysroot()
    elif ctx.attr.target_os == "android":
        # TODO android features and sysroot
        fail("target_os == android is not supported yet")

    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = ctx.attr.toolchain_identifier,
        target_cpu = ctx.attr.target_cpu,
        tool_paths = _tool_paths(ctx),
        features = features,
        builtin_sysroot = sysroot,

        # The attributes below are required by the constructor, but don't
        # affect actions at all.
        host_system_name = "__toolchain_host_system_name__",
        target_system_name = "__toolchain_target_system_name__",
        target_libc = "__toolchain_target_libc__",
        compiler = "__toolchain_compiler__",
        abi_version = "__toolchain_abi_version__",
        abi_libc_version = "__toolchain_abi_libc_version__",
    )

clang_config = rule(
    implementation = _impl,
    attrs = {
        "target_cpu": attr.string(mandatory = True, values = [
            "x86_64",
            "arm64",
            "riscv64",
        ]),
        "target_os": attr.string(mandatory = True, values = [
            "android",
            "linux",
        ]),
        "toolchain_identifier": attr.string(),
        "clang_version": attr.string(),
    },
    provides = [CcToolchainConfigInfo],
)
