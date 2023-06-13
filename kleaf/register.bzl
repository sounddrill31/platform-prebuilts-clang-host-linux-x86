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

"""Registers all clang toolchains defined in this package."""

load(":architecture_constants.bzl", "SUPPORTED_ARCHITECTURES")
load(":user_clang_toolchain_repository.bzl", "user_clang_toolchain_repository")
load(":versions.bzl", "VERSIONS")

# buildifier: disable=unnamed-macro
def register_clang_toolchains(
        user_clang_toolchain_local_symlink):
    """Registers all clang toolchains defined in this package.

    The user clang toolchain is expected from the path defined in the
    `KLEAF_USER_CLANG_TOOLCHAIN_PATH` environment variable, if set.

    If there are `BUILD` files in the user clang toolchain path,
    `--deleted_packages={user_clang_toolchain_local_symlink}/...`
    must be set.

    Args:
        user_clang_toolchain_local_symlink: label to package where
            the user clang toolchain path should be symlinked to,
            e.g. `@kleaf_user_clang_toolchain//clang_user`.
    """

    user_toolchain_symlink_label = Label(
        user_clang_toolchain_local_symlink,
    )

    user_clang_toolchain_repository(
        name = user_toolchain_symlink_label.workspace_name,
        local_symlink_name = user_toolchain_symlink_label.package,
    )

    for target_os, target_cpu in SUPPORTED_ARCHITECTURES:
        native.register_toolchains(
            "@{}//:user_{}_{}_clang_toolchain".format(
                user_toolchain_symlink_label.workspace_name,
                target_os,
                target_cpu,
            ),
        )

    for version in VERSIONS:
        for target_os, target_cpu in SUPPORTED_ARCHITECTURES:
            native.register_toolchains(
                "//prebuilts/clang/host/linux-x86/kleaf:{}_{}_{}_clang_toolchain".format(version, target_os, target_cpu),
            )

    for target_os, target_cpu in SUPPORTED_ARCHITECTURES:
        native.register_toolchains(
            "//prebuilts/clang/host/linux-x86/kleaf:{}_{}_clang_toolchain".format(target_os, target_cpu),
        )
