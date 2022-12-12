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
load("@bazel_tools//tools/build_defs/cc:action_names.bzl", "ACTION_NAMES")

# TODO use actions from cc_toolchain_constants.bzl
_actions = struct(
    compile = [
        ACTION_NAMES.c_compile,
        ACTION_NAMES.cpp_compile,
        ACTION_NAMES.assemble,
        ACTION_NAMES.preprocess_assemble,
    ],
    c_compile = ACTION_NAMES.c_compile,
    cpp_compile = ACTION_NAMES.cpp_compile,
    # Assembler actions for .s and .S files.
    assemble = [
        ACTION_NAMES.assemble,
        ACTION_NAMES.preprocess_assemble,
    ],
    # Link actions
    link = [
        ACTION_NAMES.cpp_link_executable,
        ACTION_NAMES.cpp_link_dynamic_library,
        ACTION_NAMES.cpp_link_nodeps_dynamic_library,
    ],
    # Differentiate archive actions from link actions
    archive = [
        ACTION_NAMES.cpp_link_static_library,
    ],
    cpp_link_dynamic_library = ACTION_NAMES.cpp_link_dynamic_library,
    cpp_link_nodeps_dynamic_library = ACTION_NAMES.cpp_link_nodeps_dynamic_library,
    cpp_link_static_library = ACTION_NAMES.cpp_link_static_library,
    cpp_link_executable = ACTION_NAMES.cpp_link_executable,
    strip = ACTION_NAMES.strip,
)

# FIXME dedup with cc_toolchain_features.bzl
def _toolchain_include_feature(system_includes = []):
    flags = []
    for include in system_includes:
        flags.append("-isystem")
        flags.append(include)
    if not flags:
        return None
    return feature(
        name = "toolchain_include_directories",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.compile,
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
    # TODO: Think of a way to not sync this list?
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

    # For android arm64:
    # NDK_TRIPLE=aarch64-linux-android31

    # Using a shell script to
    # redirect the binary; see
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

def _system_include_dirs(ctx):
    return [
        # FIXME short version
        "prebuilts/clang/host/linux-x86/kleaf/parent/clang-{}/lib/clang/15.0.2/include".format(ctx.attr.clang_version),
    ]

def _include_dirs():
    return [
        # From _setup_env.sh
        # add openssl (via boringssl) and other prebuilts into the lookup path
        "prebuilts/kernel-build-tools/linux-x86/include",

        # From sysroot
        "%sysroot%/usr/include",
    ]

def _sysroot():
    # From _setup_env.sh
    # For host
    # sysroot_flags+="--sysroot=${ROOT_DIR}/build/kernel/build-tools/sysroot "
    # FIXME: For target (platform:os=android), we use NDK_TRIPLE and sysroot under @prebuilt_ndk
    return "build/kernel/build-tools/sysroot"

def _select_clang_version_feature(ctx):
    # TODO(b/262046389): Drop the hack to set KLEAF_CLANG_VERSION once tool_path
    # supports labels, because KLEAF_CLANG_VERSION is only needed for
    # cc_toolchain_redirect.sh
    return feature(
        name = "kleaf-select-clang-version",
        enabled = True,
        env_sets = [
            env_set(
                actions = _actions.compile + _actions.link + [_actions.strip],
                env_entries = [
                    env_entry("KLEAF_CLANG_VERSION", ctx.attr.clang_version),
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
                actions = _actions.link,
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
    # HOST_LDFLAGS
    # FIXME this needs to be host only
    return feature(
        name = "kleaf-host-ldflags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.link,
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

def _features(ctx):
    return [
        _select_clang_version_feature(ctx),
        _toolchain_include_feature(_system_include_dirs(ctx)),
        _host_ldflags(ctx),
        _common_ldflags(ctx),
    ]

def _impl(ctx):
    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = ctx.attr.toolchain_identifier,
        target_cpu = ctx.attr.target_cpu,
        tool_paths = _tool_paths(ctx),
        features = _features(ctx),
        builtin_sysroot = _sysroot(),
        # This says "cxx" but apparently applies to C as well
        cxx_builtin_include_directories = _include_dirs(),

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
        "target_cpu": attr.string(),
        "toolchain_identifier": attr.string(),
        "clang_version": attr.string(),
    },
    provides = [CcToolchainConfigInfo],
)
