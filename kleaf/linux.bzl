"""For Android kernel builds, configure CC toolchain for host binaries."""

load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "feature",
    "flag_group",
    "flag_set",
)
load(":common.bzl", "common")
load(
    "@rules_cc//cc:action_names.bzl",
    "ALL_CC_LINK_ACTION_NAMES",
)

def _linux_include_dirs():
    # From _setup_env.sh, HOSTCFLAGS
    # openssl (via boringssl) and elfutils should be added explicitly
    # via //prebuilts/kernel-build-tools:*
    # Hence not listed here.
    return []

def _linux_sysroot():
    # From _setup_env.sh
    # For host
    # sysroot_flags+="--sysroot=${ROOT_DIR}/build/kernel/build-tools/sysroot "
    return "build/kernel/build-tools/sysroot"

def _linux_ldflags():
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

def _linux_features(_ctx):
    return [
        common.toolchain_include_feature(
            name = "toolchain_include_directories",
            include_flag = "-I",
            includes = _linux_include_dirs(),
        ),
        _linux_ldflags(),
    ]

linux = struct(
    features = _linux_features,
    sysroot = _linux_sysroot,
)
