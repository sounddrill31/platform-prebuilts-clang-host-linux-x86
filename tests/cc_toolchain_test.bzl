# Copyright 2022 Google Inc. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http:#www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

load("@bazel_skylib//lib:unittest.bzl", "analysistest", "asserts")
load(":cc_toolchain.bzl", "cc_toolchain")

def _cc_toolchain_basic_test_impl(ctx):
    env = analysistest.begin(ctx)
    target = analysistest.target_under_test(env)
    outs = target[DefaultInfo].files.to_list()
    asserts.true(
        env,
        len(outs) == 1,
        "expected there to be 1 output but got:\n" + str(outs),
    )
    return analysistest.end(env)

_cc_toolchain_basic_test = analysistest.make(_cc_toolchain_basic_test_impl)

def _cc_toolchain_simple_test():
    name = "cc_toolchain_simple"
    cc_toolchain(
        name = name,
        src = "bin",
        tags = ["manual"],
    )
    test_name = name + "_test"
    _cc_toolchain_basic_test(
        name = test_name,
        target_under_test = name,
    )
    return test_name

def _cc_toolchain_features_test_impl(ctx):
    env = analysistest.begin(ctx)
    target = analysistest.target_under_test(env)
    outs = target[DefaultInfo].files.to_list()

    # TODO(alexmarquez): general feature testing
    return analysistest.end(env)

_cc_toolchain_features_test = analysistest.make(_cc_toolchain_features_test_impl)

def _cc_toolchain_get_features_test():
    name = "cc_toolchain_get_features_test"

    # TODO(alexmarquez): get_features test
    test_name = name + "_test"
    _cc_toolchain_features_test(
        name = test_name,
        target_under_test = name,
    )
    return test_name

def cc_toolchain_test_suite(name):
    native.test_suite(
        name = name,
        tests = [
            _cc_toolchain_simple_test(),
            _cc_toolchain_get_features_test(),
        ],
    )
