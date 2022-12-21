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
load("@bazel_skylib//lib:new_sets.bzl", "sets")
load("//build/bazel/rules/cc:cc_library_static.bzl", "cc_library_static")
load(":cc_toolchain_constants.bzl", _actions = "actions")

_SHT_RELR = "sht"
_SHT_RELR_ARGS = ["-Wl,--pack-dyn-relocs=android+relr"]
_ANDROID_RELR = "android"
_ANDROID_RELR_ARGS = ["-Wl,--pack-dyn-relocs=android+relr", "-Wl,--use-android-relr-tags"]
_RELR_PACKER = "relr_packer"
_RELR_PACKER_ARGS = ["-Wl,--pack-dyn-relocs=android"]

def _relocations_features_test_impl(ctx):
    env = analysistest.begin(ctx)
    actions = analysistest.target_actions(env)

    found_link_action = False
    for action in actions:
        if action.mnemonic == "CppLink":
            found_link_action = True

            action_arg_set = sets.make(action.argv)
            sht_relr_arg_set = sets.make(_SHT_RELR_ARGS)
            android_relr_arg_set = sets.make(_ANDROID_RELR_ARGS)
            relr_packer_arg_set = sets.make(_RELR_PACKER_ARGS)
            if _SHT_RELR in ctx.attr.expected_relocation_features:
                asserts.true(
                    env,
                    sets.is_subset(sht_relr_arg_set, action_arg_set),
                    "action was expected to contain SHT_RELR arg, but did not; arguments: %s" % (action.argv)
                )
            elif _ANDROID_RELR in ctx.attr.expected_relocation_features:
                asserts.true(
                    env,
                    sets.is_subset(android_relr_arg_set, action_arg_set),
                    "action was expected to contain ANDROID_RELR arg, but did not; arguments: %s" % (action.argv)
                )
            else:
                asserts.true(
                    env,
                    # can use disjoint here because ANDROID_RELR and SHT_RELR share an argument
                    sets.disjoint(android_relr_arg_set, action_arg_set),
                    "action unexpectedly contained ANDROID_RELR arg; arguments: %s" % (action.argv)
                )

            if _RELR_PACKER in ctx.attr.expected_relocation_features:
                asserts.true(
                    env,
                    sets.is_subset(relr_packer_arg_set, action_arg_set),
                    "action was expected to contain RELR_PACKER arg, but did not; arguments: %s" % (action.argv)
                )
            else:
                asserts.true(
                    env,
                    sets.disjoint(relr_packer_arg_set, action_arg_set),
                    "action unexpectedly contained RELR_PACKER arg; arguments: %s" % (action.argv)
                )

    asserts.true(
        env,
        found_link_action,
        "expected to find link action, but did not",
    )

    return analysistest.end(env)

relocation_android_features_test = analysistest.make(
    _relocations_features_test_impl,
    attrs = {
        "expected_relocation_features": attr.string_list(
            mandatory = True,
        ),
    },
    config_settings = {
        "//command_line_option:platforms": "@//build/bazel/platforms:android_arm64",
    },
)

relocation_linux_features_test = analysistest.make(
    _relocations_features_test_impl,
    attrs = {
        "expected_relocation_features": attr.string_list(
            mandatory = True,
        ),
    },
    config_settings = {
        "//command_line_option:platforms": "@//build/bazel/platforms:linux_x86_64",
    },
)

# Include these different file types to make sure that all actions types are
# triggered
test_srcs = [
    "foo.cpp",
    "bar.c",
    "baz.s",
    "blah.S",
]

def _test_relocation_features(*, name, sdk_version, expected_features, extra_target_features = []):
    name = "relocation_features_" + name
    android_test_name = name + "_android_test"
    linux_test_name = name + "_linux_test"
    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = [
            "-sdk_version_default",
            "sdk_version_" + sdk_version,
        ] + extra_target_features,
        tags = ["manual"],
    )
    relocation_android_features_test(
        name = android_test_name,
        target_under_test = name,
        expected_relocation_features = expected_features,
    )
    relocation_linux_features_test(
        name = linux_test_name,
        target_under_test = name,
        expected_relocation_features = [],
    )
    return [
        android_test_name,
        linux_test_name,
    ]

def _generate_relocation_feature_tests():
    return (
        _test_relocation_features(
            name = "sdk_version_30",
            sdk_version = "30",
            expected_features = [_SHT_RELR],
        ) +
        _test_relocation_features(
            name = "sdk_version_29",
            sdk_version = "29",
            # this sdk_version is too low for sht_relr
            expected_features = [],
        ) +
        _test_relocation_features(
            name = "sdk_version_29_with_explicit_android_relr",
            sdk_version = "29",
            expected_features = [_ANDROID_RELR],
            extra_target_features = ["-sht_relr", "android_relr"],
        ) +
        _test_relocation_features(
            name = "sdk_version_27_with_explicit_android_relr",
            sdk_version = "27",
            # this sdk_version is too low for android_relr
            expected_features = [],
            extra_target_features = ["-sht_relr", "android_relr"],
        ) +
        _test_relocation_features(
            name = "sdk_version_30_with_explicit_relocation_packer",
            sdk_version = "30",
            expected_features = [_RELR_PACKER],
            extra_target_features = ["-sht_relr", "relocation_packer"],
        ) +
        _test_relocation_features(
            name = "sdk_version_24_with_explicit_relocation_packer",
            sdk_version = "24",
            expected_features = [_RELR_PACKER],
            extra_target_features = ["-sht_relr", "relocation_packer"],
        ) +
        _test_relocation_features(
            name = "sdk_version_22_with_explicit_relocation_packer",
            sdk_version = "22",
            # this sdk_version is too low for relocation_packer
            expected_features = [],
            extra_target_features = ["-sht_relr", "relocation_packer"],
        )
    )

def cc_toolchain_features_test_suite(name):
    native.test_suite(
        name = name,
        tests = _generate_relocation_feature_tests(),
    )
