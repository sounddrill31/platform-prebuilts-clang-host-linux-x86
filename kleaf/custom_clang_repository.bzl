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

def _custom_clang_repository_impl(repository_ctx):
    if "KLEAF_CUSTOM_CLANG_PATH" not in repository_ctx.os.environ:
        # Intentionally create an empty repository so any dependency on
        # it will fail.
        repository_ctx.file("BUILD.bazel", "")
        repository_ctx.file("WORKSPACE.bazel", "")
        return
    repository_ctx.symlink(repository_ctx.os.environ["KLEAF_CUSTOM_CLANG_PATH"], "clang-custom")

    build_file_content = """\
package(default_visibility = ["//visibility:public"])

filegroup(
    name = "binaries",
    srcs = glob([
        "clang-custom/bin/*",
        "clang-custom/lib/*",
    ]),
)

filegroup(
    name = "includes",
    srcs = glob([
        "clang-custom/lib/clang/*/include/**",
    ]),
)
"""

    repository_ctx.file("BUILD.bazel", build_file_content)
    repository_ctx.file("WORKSPACE.bazel", """\
workspace(name = "{}")
""".format(repository_ctx.attr.name))

_custom_clang_repository = repository_rule(
    implementation = _custom_clang_repository_impl,
    environ = [
        "KLEAF_CUSTOM_CLANG_PATH",
    ],
    local = True,
)

# buildifier: disable=unnamed-macro
def custom_clang_repository():
    """Defines a repository that provides a clang version at a user defined path."""
    _custom_clang_repository(
        name = "kleaf_custom_clang",
    )
