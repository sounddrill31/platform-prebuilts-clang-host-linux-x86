"""Copyright (C) 2022 The Android Open Source Project

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

load("@bazel_skylib//lib:unittest.bzl", "analysistest", "asserts")
load("//build/bazel/rules/cc:cc_library_static.bzl", "cc_library_static")
load(":cc_toolchain_constants.bzl", _actions = "actions")

def _relocations_features_test_impl(ctx):
    env = analysistest.begin(ctx)
    actions = analysistest.target_actions(env)

    for action in actions:
        if action.mnemonic in _actions.link:
            print(action.mnemonic)

    return analysistest.end(env)

relocation_features_test = analysistest.make(
    _relocations_features_test_impl,
    attrs = {
        "expected_relocations_features": attr.string_list(
            mandatory = True,
        ),
    }
)

# Include these different file types to make sure that all actions types are
# triggered
test_srcs = [
    "foo.cpp",
    "bar.c",
    "baz.s",
    "blah.S",
]

def _test_relocation_features():
    name = "relocation_features"
    test_name = name + "_test"
    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["sdk_versoin_30"],
        tags = ["manual"],
    )
    relocation_features_test(
        name = test_name,
        target_under_test = name,
        expected_relocations_features = []
    )
    return test_name

def cc_toolchain_features_test_suite(name):
    native.test_suite(
        name = name,
        tests = [
            _test_relocation_features(),
        ],
    )
