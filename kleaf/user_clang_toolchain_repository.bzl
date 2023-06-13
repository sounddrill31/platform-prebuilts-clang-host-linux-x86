# Copyright (C) 2022 The Android Open Source Project
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

"""Defines a repository that provides a clang version at a user defined path."""

def _user_clang_toolchain_repository_impl(repository_ctx):
    repository_ctx.file("WORKSPACE.bazel", """\
workspace(name = "{}")
""".format(repository_ctx.attr.name))

    if "KLEAF_USER_CLANG_TOOLCHAIN_PATH" not in repository_ctx.os.environ:
        _empty_user_clang_toolchain_repository_impl(repository_ctx)
    else:
        _real_user_clang_toolchain_repository_impl(repository_ctx)

def _empty_user_clang_toolchain_repository_impl(repository_ctx):
    build_file_content = '''\

"""Fake user C toolchains.

These toolchains are not registered with the C toolchain type.
"""

load("{architecture_constants}", "SUPPORTED_ARCHITECTURES")
load("{empty_toolchain}", "empty_toolchain")

toolchain_type(
    name = "empty_toolchain_type",
    visibility = ["//visibility:private"],
)

[empty_toolchain(
    name = "user_{{}}_{{}}_clang_toolchain".format(target_os, target_cpu),
    toolchain_type = ":empty_toolchain_type",
    visibility = ["//visibility:private"],
) for target_os, target_cpu in SUPPORTED_ARCHITECTURES]
'''.format(
        architecture_constants = Label(":architecture_constants.bzl"),
        empty_toolchain = Label(":empty_toolchain.bzl"),
    )
    repository_ctx.file("BUILD.bazel", build_file_content)

def _real_user_clang_toolchain_repository_impl(repository_ctx):
    repository_ctx.symlink(
        repository_ctx.os.environ["KLEAF_USER_CLANG_TOOLCHAIN_PATH"],
        repository_ctx.attr.local_symlink_name,
    )

    build_file_content = '''\
"""User C toolchains specified via command line flags."""

load("{architecture_constants}", "SUPPORTED_ARCHITECTURES")
load("{clang_toolchain}", "user_clang_toolchain")

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "binaries",
    srcs = glob([
        "{local_symlink_name}/bin/*",
        "{local_symlink_name}/lib/*",
    ]),
)

filegroup(
    name = "includes",
    srcs = glob([
        "{local_symlink_name}/lib/clang/*/include/**",
    ]),
)

[user_clang_toolchain(
    name = "user_{{}}_{{}}_clang_toolchain".format(target_os, target_cpu),
    target_cpu = target_cpu,
    target_os = target_os,
    clang_binary_prefix = ":{local_symlink_name}/",
    clang_includes = ":includes",
    clang_all_binaries = ":binaries",
) for target_os, target_cpu in SUPPORTED_ARCHITECTURES]
'''.format(
        architecture_constants = Label(":architecture_constants.bzl"),
        clang_toolchain = Label(":clang_toolchain.bzl"),
        local_symlink_name = repository_ctx.attr.local_symlink_name,
    )

    repository_ctx.file("BUILD.bazel", build_file_content)

user_clang_toolchain_repository = repository_rule(
    implementation = _user_clang_toolchain_repository_impl,
    attrs = {
        "local_symlink_name": attr.string(
            doc = """name of the symlink in the repository that points to the
                user clang toolchain path""",
            mandatory = True,
        ),
    },
    environ = [
        "KLEAF_USER_CLANG_TOOLCHAIN_PATH",
    ],
    local = True,
)
