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

"""For Android kernel builds, configure CC toolchain for target binaries."""

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
)

# FIXME load from build configs
NDK_TRIPLE = "aarch64-linux-android31"

def _arm64_ldflags():
    # From _setup_env.sh
    # USERLDFLAGS
    return feature(
        name = "kleaf-android-arm64-ldflags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_LINK_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "--target={}".format(NDK_TRIPLE),
                        ],
                    ),
                ],
            ),
        ],
    )

def _arm64_cflags():
    # From _setup_env.sh
    # USERCFLAGS
    return feature(
        name = "kleaf-android-arm64-ldflags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_COMPILE_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "--target={}".format(NDK_TRIPLE),
                            "-Wno-unused-function",
                        ],
                    ),
                ],
            ),
        ],
    )

def _arm64_features():
    return [
        _arm64_ldflags(),
        _arm64_cflags(),
    ]

android_arm64 = struct(
    features = _arm64_features,
)
