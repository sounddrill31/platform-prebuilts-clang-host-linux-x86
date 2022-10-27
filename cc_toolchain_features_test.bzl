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

def _ubsan_integer_overflow_feature_test_impl(ctx):
    env = analysistest.begin(ctx)
    actions = analysistest.target_actions(env)

    for action in actions:
        if action.mnemonic in ["CppCompile", "CppLink"]:
            for sanitizer in ctx.attr.expected_sanitizers:
                asserts.true(
                    env,
                    ("-fsanitize=%s" % sanitizer) in action.argv,
                    "%s action did not contain %s sanitizer arg" % (
                        action.mnemonic,
                        sanitizer,
                    ),
                )

    return analysistest.end(env)

ubsan_sanitizer_test = analysistest.make(
    _ubsan_integer_overflow_feature_test_impl,
    attrs = {
        "expected_sanitizers": attr.string_list(
            doc = " Sanitizers expected to be supplied to the command line",
        ),
    },
)

test_srcs = [
    "foo.cpp",
    "bar.c",
    "baz.s",
    "blah.S",
]

def _test_ubsan_integer_overflow_feature():
    name = "ubsan_integer_overflow"
    test_name = name + "_test"
    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_integer_overflow"],
    )
    ubsan_sanitizer_test(
        name = test_name,
        target_under_test = name,
        expected_sanitizers = [
            "signed-integer-overflow",
            "unsigned-integer-overflow",
        ],
    )
    return test_name

def _test_ubsan_misc_undefined_feature():
    name = "ubsan_misc_undefined"
    test_name = name + "_test"
    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_undefined"],  # Just pick one; doesn't matter which
    )
    ubsan_sanitizer_test(
        name = test_name,
        target_under_test = name,
        expected_sanitizers = ["undefined"],
    )
    return test_name

def cc_toolchain_features_test_suite(name):
    native.test_suite(
        name = name,
        tests = [
            _test_ubsan_integer_overflow_feature(),
            _test_ubsan_misc_undefined_feature(),
        ],
    )
