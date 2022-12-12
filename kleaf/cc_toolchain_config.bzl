load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "action_config",
    "env_entry",
    "env_set",
    "feature",
    "tool",
    "tool_path",
)
load("@bazel_tools//tools/build_defs/cc:action_names.bzl", "ACTION_NAMES")

def _tool_paths():
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
            path = "cc_toolchain_redirect/clang",
        ),
        tool_path(
            name = "ld",
            path = "cc_toolchain_redirect/ld.lld",
        ),
        tool_path(
            name = "ar",
            path = "cc_toolchain_redirect/llvm-ar",
        ),
        tool_path(
            name = "cpp",
            path = "cc_toolchain_redirect/clang++",
        ),
        tool_path(
            name = "nm",
            path = "cc_toolchain_redirect/llvm-nm",
        ),
        tool_path(
            name = "objdump",
            path = "cc_toolchain_redirect/llvm-objdump",
        ),
        tool_path(
            name = "strip",
            path = "cc_toolchain_redirect/llvm-strip",
        ),
    ]

def _features(ctx):
    # TODO(b/262046389): Drop the hack to set KLEAF_CLANG_VERSION once tool_path
    # supports labels, because KLEAF_CLANG_VERSION is only needed for
    # cc_toolchain_redirect.sh
    return [
        feature(
            name = "kleaf-select-clang-version",
            enabled = True,
            env_sets = [
                env_set(
                    # TODO(b/262046389): Use cc_toolchain_constants.bzl actions from Soong
                    actions = [
                        ACTION_NAMES.c_compile,
                        ACTION_NAMES.cpp_compile,
                        ACTION_NAMES.assemble,
                        ACTION_NAMES.preprocess_assemble,
                        ACTION_NAMES.cpp_link_executable,
                        ACTION_NAMES.cpp_link_dynamic_library,
                        ACTION_NAMES.cpp_link_nodeps_dynamic_library,
                        ACTION_NAMES.cpp_link_static_library,
                        ACTION_NAMES.strip,
                    ],
                    env_entries = [
                        env_entry("KLEAF_CLANG_VERSION", ctx.attr.clang_version),
                    ],
                ),
            ],
        ),
    ]

def _impl(ctx):
    tool_paths = _tool_paths()
    features = _features(ctx)

    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = ctx.attr.toolchain_identifier,
        target_system_name = "local",
        target_cpu = ctx.attr.target_cpu,
        target_libc = "unknown",
        compiler = "clang",
        abi_version = "unknown",
        abi_libc_version = "unknown",
        tool_paths = tool_paths,
        features = features,
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
