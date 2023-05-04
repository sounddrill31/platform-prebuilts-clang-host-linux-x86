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
load(
    ":cc_toolchain_constants.bzl",
    "generated_config_constants",
    "generated_sanitizer_constants",
)
load(
    "//build/bazel/rules/test_common:flags.bzl",
    "action_flags_absent_for_mnemonic_test",
    "action_flags_present_for_mnemonic_nonexclusive_test",
)

def test_warnings_as_errors_feature():
    with_feature_name = "warnings_as_errors_feature"
    with_feature_test_name = with_feature_name + "_test"
    no_feature_name = "no_warnings_as_errors_feature"
    no_feature_test_name = no_feature_name + "_test"

    native.cc_library(
        name = with_feature_name,
        srcs = ["foo.c", "bar.cpp"],
        tags = ["manual"],
    )
    native.cc_library(
        name = no_feature_name,
        srcs = ["foo.c", "bar.cpp"],
        features = ["-warnings_as_errors"],
        tags = ["manual"],
    )

    action_flags_present_for_mnemonic_nonexclusive_test(
        name = with_feature_test_name,
        target_under_test = with_feature_name,
        mnemonics = ["CppCompile"],
        expected_flags = ["-Werror"],
    )
    action_flags_absent_for_mnemonic_test(
        name = no_feature_test_name,
        target_under_test = no_feature_name,
        mnemonics = ["CppCompile"],
        expected_absent_flags = ["-Werror"],
    )

    return [
        with_feature_test_name,
        no_feature_test_name,
    ]

def cc_toolchain_features_test_suite(name):
    native.test_suite(
        name = name,
        tests = (
            test_warnings_as_errors_feature()
        ),
    )
