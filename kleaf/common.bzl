"""Common features and helper functions for configuring CC toolchain for Android kernel."""

load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "feature",
    "flag_group",
    "flag_set",
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

def _common_cflags():
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

def _common_ldflags():
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

def _common_features(_ctx):
    """Features that applies to both android and linux toolchain."""
    return [
        _common_cflags(),
        _common_ldflags(),
    ]

common = struct(
    features = _common_features,
    toolchain_include_feature = _toolchain_include_feature,
    tool_paths = _tool_paths,
)
