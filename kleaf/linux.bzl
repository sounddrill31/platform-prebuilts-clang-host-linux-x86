# Copyright (C) 2023 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""For Android kernel builds, configure CC toolchain for host binaries."""

load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "feature",
    "flag_group",
    "flag_set",
)
load(
    "@rules_cc//cc:action_names.bzl",
    "ALL_CC_COMPILE_ACTION_NAMES",
    "ALL_CC_LINK_ACTION_NAMES",
    "ALL_CPP_COMPILE_ACTION_NAMES",
)

# From _setup_env.sh, HOSTCFLAGS / HOSTLDFLAGS
# Note: openssl (via boringssl) and elfutils should be added explicitly
# via //prebuilts/kernel-build-tools:linux_x86_imported_libs
# Hence not listed here.
# See example in //build/kernel/kleaf/tests/cc_testing:openssl_client

def _linux_ldflags(ctx):
    extra = []
    for bin_dir in ctx.files.bin_dirs:
        extra.append("-B" + bin_dir.path)
    for lib_dir in ctx.files.lib_dirs:
        extra.append("-L" + lib_dir.path)
    # extra.append("-Wl,-rpath,prebuilts/clang/host/linux-x86/clang-r498229b/lib/x86_64-unknown-linux-gnu/")

    return feature(
        name = "kleaf-host-ldflags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_LINK_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "--target={}".format(ctx.attr.target),
                            "-stdlib=libc++",
                        ] + extra,
                    ),
                ],
            ),
        ],
        implies = [
            "kleaf-lld",
        ],
    )

def _linux_cflags(ctx):
    extra_cpp_flags = []
    for bin_dir in ctx.files.bin_dirs:
        extra_cpp_flags.append("-B" + bin_dir.path)

    return feature(
        name = "kleaf-host-cflags",
        enabled = True,
        flag_sets = [
            flag_set(
                # Applies to C, C++ and assembly code.
                actions = ALL_CC_COMPILE_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "--target={}".format(ctx.attr.target),
                        ],
                    ),
                ],
            ),
            flag_set(
                # Applies to C++ code only.
                actions = ALL_CPP_COMPILE_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "-stdlib=libc++",
                        ] + extra_cpp_flags,
                    ),
                ],
            ),
        ],
    )

def _linux_features(ctx):
    return [
        _linux_ldflags(ctx),
        _linux_cflags(ctx),
    ]

linux = struct(
    features = _linux_features,
)
