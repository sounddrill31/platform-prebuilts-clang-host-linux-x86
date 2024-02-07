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
    "ALL_CC_LINK_ACTION_NAMES",
    "ALL_CC_COMPILE_ACTION_NAMES",
)

# From _setup_env.sh, HOSTCFLAGS / HOSTLDFLAGS
# Note: openssl (via boringssl) and elfutils should be added explicitly
# via //prebuilts/kernel-build-tools:linux_x86_imported_libs
# Hence not listed here.
# See example in //build/kernel/kleaf/tests/cc_testing:openssl_client

def _linux_ldflags(ndk_triple):
    return feature(
        name = "kleaf-host-ldflags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_LINK_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "--target={}".format(ndk_triple),
                        ],
                    ),
                ],
            ),
        ],
        # From _setup_env.sh
        # HOSTLDFLAGS
        implies = [
            "kleaf-lld-compiler-rt",
        ],
    )

def _linux_clfags(ndk_triple):
    return feature(
        name = "kleaf-host-cflags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_COMPILE_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "--target={}".format(ndk_triple),
                        ],
                    ),
                ],
            ),
        ],
    )

def _linux_features(ctx):
    return [
        _linux_ldflags(ctx.attr.ndk_triple),
        _linux_clfags(ctx.attr.ndk_triple),
    ]

linux = struct(
    features = _linux_features,
)
