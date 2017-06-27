//
// Copyright (C) 2017 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

package libclang_rt

import (
	"path"
	"strings"

	"github.com/google/blueprint"

	"android/soong/android"
	"android/soong/cc"
	"android/soong/cc/config"
)

// This module is used to generate libclang_rt shared libraries. When
// LLVM_PREBUILTS_VERSION and LLVM_RELEASE_VERSION are set, the library will
// generated from the given path.

func init() {
	android.RegisterModuleType("libclang_rt_prebuilt_library_shared",
		libClangRtPrebuiltLibrarySharedFactory)
}

func libClangRtPrebuiltLibraryShared(ctx android.LoadHookContext) {
	if ctx.AConfig().IsEnvTrue("FORCE_BUILD_SANITIZER_SHARED_OBJECTS") {
		return
	}

	clangDir := path.Join(
		"./",
		ctx.AConfig().GetenvWithDefault("LLVM_PREBUILTS_VERSION", config.ClangDefaultVersion),
	)
	releaseVersion := ctx.AConfig().GetenvWithDefault("LLVM_RELEASE_VERSION",
		config.ClangDefaultShortVersion)
	libDir := path.Join(clangDir, "lib64", "clang", releaseVersion, "lib", "linux")

	type props struct {
		Target              struct {
			Android_arm struct {
				Srcs []string
			}
			Android_arm64 struct {
				Srcs []string
			}
			Android_mips struct {
				Srcs []string
			}
			Android_mips64 struct {
				Srcs []string
			}
			Android_x86 struct {
				Srcs []string
			}
			Android_x86_64 struct {
				Srcs []string
			}
		}
	}

	p := &props{}

	name := strings.Replace(ctx.ModuleName(), "prebuilt_", "", 1)

	p.Target.Android_arm.Srcs = []string{path.Join(libDir, name + "-arm-android.so")}
	p.Target.Android_arm64.Srcs = []string{path.Join(libDir, name + "-aarch64-android.so")}
	p.Target.Android_mips.Srcs = []string{path.Join(libDir, name + "-mips-android.so")}
	p.Target.Android_mips64.Srcs = []string{path.Join(libDir, name + "-mips64-android.so")}
	p.Target.Android_x86.Srcs = []string{path.Join(libDir, name + "-i686-android.so")}
	p.Target.Android_x86_64.Srcs = []string{path.Join(libDir, name + "-x86_64-android.so")}
	ctx.AppendProperties(p)
}

func libClangRtPrebuiltLibrarySharedFactory() (blueprint.Module, []interface{}) {
	module, _ := cc.NewPrebuiltSharedLibrary(android.DeviceSupported)
	android.AddLoadHook(module, libClangRtPrebuiltLibraryShared)
	return module.Init()
}
