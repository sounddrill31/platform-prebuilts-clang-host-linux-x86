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

package clangprebuilts

import (
	"path"
	"strings"

	"github.com/google/blueprint/proptools"

	"android/soong/android"
	"android/soong/cc"
	"android/soong/cc/config"
	"android/soong/genrule"
)

const libclangCppSoName = "libclang-cpp.so"
const libcxxSoName = "libc++.so"
const libcxxabiSoName = "libc++abi.so"

var (
	// Files included in the llvm-tools filegroup in ../Android.bp
	llvmToolsFiles = []string{
		"bin/llvm-symbolizer",
		"bin/llvm-cxxfilt",
		"lib/libc++.so",
	}
)

// This module is used to generate libfuzzer, libomp static libraries and
// libclang_rt.* shared libraries. When LLVM_PREBUILTS_VERSION and
// LLVM_RELEASE_VERSION are set, the library will generated from the given
// path.
func init() {
	android.RegisterModuleType("llvm_host_defaults",
		llvmHostDefaultsFactory)
	android.RegisterModuleType("llvm_prebuilt_library_shared",
		llvmPrebuiltLibrarySharedFactory)
	android.RegisterModuleType("llvm_prebuilt_library_static",
		llvmPrebuiltLibraryStaticFactory)
	android.RegisterModuleType("llvm_prebuilt_build_tool",
		llvmPrebuiltBuildToolFactory)
	android.RegisterModuleType("libclang_rt_prebuilt_library_shared",
		libClangRtPrebuiltLibrarySharedFactory)
	android.RegisterModuleType("libclang_rt_prebuilt_library_static",
		libClangRtPrebuiltLibraryStaticFactory)
	android.RegisterModuleType("libclang_rt_prebuilt_object",
		libClangRtPrebuiltObjectFactory)
	android.RegisterModuleType("llvm_darwin_filegroup",
		llvmDarwinFileGroupFactory)
	android.RegisterModuleType("clang_builtin_headers",
		clangBuiltinHeadersFactory)
	android.RegisterModuleType("llvm_tools_filegroup",
		llvmToolsFilegroupFactory)
}

func getClangPrebuiltDir(ctx android.LoadHookContext) string {
	return path.Join(
		"./",
		ctx.Config().GetenvWithDefault("LLVM_PREBUILTS_VERSION", config.ClangDefaultVersion),
	)
}

func getClangResourceDir(ctx android.LoadHookContext) string {
	clangDir := getClangPrebuiltDir(ctx)
	releaseVersion := ctx.Config().GetenvWithDefault("LLVM_RELEASE_VERSION",
		config.ClangDefaultShortVersion)
	return path.Join(clangDir, "lib", "clang", releaseVersion, "lib", "linux")
}

func getSymbolFilePath(ctx android.LoadHookContext) string {
	libDir := getClangResourceDir(ctx)
	return path.Join(libDir, strings.TrimSuffix(ctx.ModuleName(), ".llndk")+".map.txt")
}

func trimVersionNumbers(ver string, retain int) string {
	sep := "."
	versions := strings.Split(ver, sep)
	return strings.Join(versions[0:retain], sep)
}

func libcxxHeaderDir(ctx android.LoadHookContext) string {
	// TODO: Add the directory containing the right __config_site?
	clangDir := getClangPrebuiltDir(ctx)
	return path.Join(clangDir, "include", "c++", "v1")
}

type archInnerProps struct {
	Enabled *bool
	Srcs    []string
	Stem    *string
}

func llvmPrebuiltLibraryShared(ctx android.LoadHookContext) {
	moduleName := ctx.ModuleName()
	// XXX: Hack this on by default.
	//enabled := ctx.Config().IsEnvTrue("LLVM_BUILD_HOST_TOOLS")

	clangDir := getClangPrebuiltDir(ctx)

	type props struct {
		//Enabled             *bool
		Export_include_dirs []string
		Target              struct {
			Android_arm        archInnerProps
			Android_arm64      archInnerProps
			Android_x86        archInnerProps
			Android_x86_64     archInnerProps
			Glibc_x86          archInnerProps
			Glibc_x86_64       archInnerProps
			Linux_musl_x86     archInnerProps
			Linux_musl_x86_64  archInnerProps
			Darwin             archInnerProps
			Windows_x86        archInnerProps
			Windows_x86_64     archInnerProps
		}
		Stl *string
	}

	p := &props{}
	//p.Enabled = proptools.BoolPtr(true)
	if moduleName == "prebuilt_libc++" {
		p.Export_include_dirs = []string{libcxxHeaderDir(ctx)}
	} else if moduleName == "prebuilt_libc++abi_shared" {
		// Do nothing
	} else {
		p.Export_include_dirs = []string{path.Join(clangDir, "include")}
	}

	// fmt.Printf("XXX: moduleName=%s\n", moduleName)

	// XXX: distinguish between ndk, apex, and platform...
	if moduleName == "prebuilt_libc++" {
		makeSrcs := func(arch string) []string {
			return []string{path.Join(clangDir, "android_libc++", "platform",
				arch, "lib", "libc++.so")}
		}
		p.Target.Android_arm.Srcs = makeSrcs("arm")
		p.Target.Android_arm.Stem = proptools.StringPtr("libc++")
		p.Target.Android_arm.Enabled = proptools.BoolPtr(true)
		p.Target.Android_arm64.Srcs = makeSrcs("aarch64")
		p.Target.Android_arm64.Stem = proptools.StringPtr("libc++")
		p.Target.Android_arm64.Enabled = proptools.BoolPtr(true)
		p.Target.Android_x86.Srcs = makeSrcs("i386")
		p.Target.Android_x86.Stem = proptools.StringPtr("libc++")
		p.Target.Android_x86.Enabled = proptools.BoolPtr(true)
		p.Target.Android_x86_64.Srcs = makeSrcs("x86_64")
		p.Target.Android_x86_64.Stem = proptools.StringPtr("libc++")
		p.Target.Android_x86_64.Enabled = proptools.BoolPtr(true)
	} else {
		// XXX: Do we need to explicitly disable these? We can simplify if we don't need to, I think.
		p.Target.Android_arm.Enabled = proptools.BoolPtr(false)
		p.Target.Android_arm64.Enabled = proptools.BoolPtr(false)
		p.Target.Android_x86.Enabled = proptools.BoolPtr(false)
		p.Target.Android_x86_64.Enabled = proptools.BoolPtr(false)
	}

	if moduleName == "prebuilt_libc++" {
		// XXX: Do we even need to set Enabled on a per-target basis? We don't do that consistently later on, e.g. for static libs.
		p.Target.Glibc_x86.Srcs = []string{path.Join(clangDir, "lib", "i386-unknown-linux-gnu", libcxxSoName)}
		p.Target.Glibc_x86.Stem = proptools.StringPtr("libc++")
		p.Target.Glibc_x86.Enabled = proptools.BoolPtr(true)
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-unknown-linux-gnu", libcxxSoName)}
		p.Target.Glibc_x86_64.Stem = proptools.StringPtr("libc++")
		p.Target.Glibc_x86_64.Enabled = proptools.BoolPtr(true)
		p.Target.Linux_musl_x86.Srcs = []string{path.Join(clangDir, "musl", "lib", "i686-unknown-linux-musl", libcxxSoName)}
		p.Target.Linux_musl_x86.Stem = proptools.StringPtr("libc++")
		p.Target.Linux_musl_x86.Enabled = proptools.BoolPtr(true)
		p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(clangDir, "musl", "lib", "x86_64-unknown-linux-musl", libcxxSoName)}
		p.Target.Linux_musl_x86_64.Stem = proptools.StringPtr("libc++")
		p.Target.Linux_musl_x86_64.Enabled = proptools.BoolPtr(true)
	} else if moduleName == "prebuilt_libc++abi" {
		p.Target.Glibc_x86.Srcs = []string{path.Join(clangDir, "lib", "i386-unknown-linux-gnu", libcxxabiSoName)}
		p.Target.Glibc_x86.Stem = proptools.StringPtr("libc++abi")
		p.Target.Glibc_x86.Enabled = proptools.BoolPtr(true)
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-unknown-linux-gnu", libcxxabiSoName)}
		p.Target.Glibc_x86_64.Stem = proptools.StringPtr("libc++abi")
		p.Target.Glibc_x86_64.Enabled = proptools.BoolPtr(true)
	} else if moduleName == "prebuilt_libclang-cpp_host" {
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(clangDir, "lib", libclangCppSoName)}
		p.Target.Glibc_x86_64.Stem = proptools.StringPtr("libclang-cpp")
		p.Target.Glibc_x86_64.Enabled = proptools.BoolPtr(true)
	}

	darwinFileGroup := strings.TrimPrefix(moduleName, "prebuilt_") + "_darwin"
	p.Target.Darwin.Srcs = []string{":" + darwinFileGroup}
	p.Target.Darwin.Enabled = proptools.BoolPtr(true)
	//p.Target.Windows.Enabled = proptools.BoolPtr(false)
	p.Stl = proptools.StringPtr("none")
	ctx.AppendProperties(p)
}

type archProps struct {
	Android_arm         archInnerProps
	Android_arm64       archInnerProps
	Android_riscv64     archInnerProps
	Android_x86         archInnerProps
	Android_x86_64      archInnerProps
	Linux_bionic_arm64  archInnerProps
	Linux_bionic_x86_64 archInnerProps
	Glibc_x86           archInnerProps
	Glibc_x86_64        archInnerProps
	Linux_musl_x86      archInnerProps
	Linux_musl_x86_64   archInnerProps
	Linux_musl_arm      archInnerProps
	Linux_musl_arm64    archInnerProps
	Darwin              archInnerProps
	Windows_x86         archInnerProps
	Windows_x86_64      archInnerProps
}

func llvmPrebuiltLibraryStatic(ctx android.LoadHookContext) {
	clangDir := getClangPrebuiltDir(ctx)
	libDir := getClangResourceDir(ctx)
	moduleName := strings.TrimPrefix(ctx.ModuleName(), "prebuilt_")

	type props struct {
		Export_include_dirs []string
		Target              archProps
	}

	p := &props{}

	if moduleName == "libc++_static" {
		p.Export_include_dirs = []string{libcxxHeaderDir(ctx)}
		// XXX: Distinguish between NDK, apex, and platform (they probably share headers though?)
		makeAndroidSrcs := func(arch string) []string {
			return []string{path.Join(clangDir, "android_libc++", "platform",
				arch, "lib", "libc++_static.a")}
		}
		p.Target.Android_arm.Srcs = makeAndroidSrcs("arm")
		p.Target.Android_arm64.Srcs = makeAndroidSrcs("aarch64")
		p.Target.Android_riscv64.Srcs = makeAndroidSrcs("riscv64")
		p.Target.Android_x86.Srcs = makeAndroidSrcs("i386")
		p.Target.Android_x86_64.Srcs = makeAndroidSrcs("x86_64")
		p.Target.Glibc_x86.Srcs = []string{path.Join(clangDir, "lib", "i386-unknown-linux-gnu", "libc++.a")}
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-unknown-linux-gnu", "libc++.a")}
		p.Target.Darwin.Srcs = []string{":libc++_static_darwin"}
		p.Target.Windows_x86.Srcs = []string{path.Join(clangDir, "lib", "i686-w64-windows-gnu", "libc++.a")}
		p.Target.Windows_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-w64-windows-gnu", "libc++.a")}
		p.Target.Windows_x86.Enabled = proptools.BoolPtr(true)
		p.Target.Windows_x86_64.Enabled = proptools.BoolPtr(true)
	} else if moduleName == "libc++demangle" {
		// XXX: Distinguish between NDK, apex, and platform (they probably share headers though?)
		makeAndroidSrcs := func(arch string) []string {
			return []string{path.Join(clangDir, "android_libc++", "platform",
				arch, "lib", "libc++demangle.a")}
		}
		p.Target.Android_arm.Srcs = makeAndroidSrcs("arm")
		p.Target.Android_arm64.Srcs = makeAndroidSrcs("aarch64")
		p.Target.Android_riscv64.Srcs = makeAndroidSrcs("riscv64")
		p.Target.Android_x86.Srcs = makeAndroidSrcs("i386")
		p.Target.Android_x86_64.Srcs = makeAndroidSrcs("x86_64")
	} else if moduleName == "libc++abi_static" {
		// XXX: Distinguish between NDK, apex, and platform (they probably share headers though?)
		// makeAndroidSrcs := func(arch string) {
		// 	return []string{path.Join(clangDir, "android_libc++", "platform",
		// 		arch, "lib", "libc++abi.a")}
		// }
		// p.Target.Android_arm.Srcs = makeAndroidSrcs("arm")
		// p.Target.Android_arm64.Srcs = makeAndroidSrcs("aarch64")
		// p.Target.Android_x86.Srcs = makeAndroidSrcs("i386")
		// p.Target.Android_x86_64.Srcs = makeAndroidSrcs("x86_64")
		//
		// On the platform, libc++abi is only used by the memtrack executable and it
		// (seemingly?) isn't necessary there. The LLVM build *does* produce a libc++abi.a,
		// but its contents are also included in libc++_static.a, so there's no need to
		// enable the libc++abi soong module for the Android platform. (The APEX build is
		// probably the same, but the NDK build of libc++ doesn't include libc++abi in
		// libc++_static. We could conceivably change the NDK to match the platform
		// behavior...)
		p.Target.Glibc_x86.Srcs = []string{path.Join(clangDir, "lib", "i386-unknown-linux-gnu", "libc++abi.a")}
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-unknown-linux-gnu", "libc++abi.a")}
		p.Target.Darwin.Srcs = []string{":libc++abi_static_darwin"}
		p.Target.Windows_x86.Srcs = []string{path.Join(clangDir, "lib", "i686-w64-windows-gnu", "libc++abi.a")}
		p.Target.Windows_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-w64-windows-gnu", "libc++abi.a")}
		p.Target.Windows_x86.Enabled = proptools.BoolPtr(true)
		p.Target.Windows_x86_64.Enabled = proptools.BoolPtr(true)
	} else if moduleName == "libsimpleperf_readelf" {
		name := "libsimpleperf_readelf.a"
		headerDir := path.Join(getClangPrebuiltDir(ctx), "include")
		p.Export_include_dirs = []string{headerDir}
		p.Target.Android_arm.Srcs = []string{path.Join(libDir, "arm", name)}
		p.Target.Android_arm64.Srcs = []string{path.Join(libDir, "aarch64", name)}
		p.Target.Android_riscv64.Srcs = []string{path.Join(libDir, "riscv64", name)}
		p.Target.Android_x86.Srcs = []string{path.Join(libDir, "i386", name)}
		p.Target.Android_x86_64.Srcs = []string{path.Join(libDir, "x86_64", name)}
		p.Target.Linux_bionic_arm64.Srcs = []string{path.Join(libDir, "aarch64", name)}
		p.Target.Linux_bionic_x86_64.Srcs = []string{path.Join(libDir, "x86_64", name)}
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(getClangPrebuiltDir(ctx), "lib/x86_64-unknown-linux-gnu", name)}
		p.Target.Windows_x86_64.Srcs = []string{path.Join(getClangPrebuiltDir(ctx), "lib/x86_64-w64-windows-gnu", name)}
		p.Target.Darwin.Srcs = []string{":libsimpleperf_readelf_darwin"}
		p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(libDir, "x86_64-unknown-linux-musl/lib", name)}
		p.Target.Linux_musl_arm64.Srcs = []string{path.Join(libDir, "aarch64-unknown-linux-musl/lib", name)}
	} else {
		name := moduleName + ".a"
		if name == "libFuzzer.a" {
			headerDir := path.Join(clangDir, "prebuilt_include", "llvm", "lib", "Fuzzer")
			p.Export_include_dirs = []string{headerDir}
		}
		p.Target.Android_arm.Srcs = []string{path.Join(libDir, "arm", name)}
		p.Target.Android_arm64.Srcs = []string{path.Join(libDir, "aarch64", name)}
		p.Target.Android_riscv64.Srcs = []string{path.Join(libDir, "riscv64", name)}
		p.Target.Android_x86.Srcs = []string{path.Join(libDir, "i386", name)}
		p.Target.Android_x86_64.Srcs = []string{path.Join(libDir, "x86_64", name)}
		p.Target.Linux_bionic_arm64.Srcs = []string{path.Join(libDir, "aarch64", name)}
		p.Target.Linux_bionic_x86_64.Srcs = []string{path.Join(libDir, "x86_64", name)}
		p.Target.Linux_musl_x86.Srcs = []string{path.Join(libDir, "i686-linux-musl/lib", name)}
		p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(libDir, "x86_64-linux-musl/lib", name)}
		p.Target.Linux_musl_arm.Srcs = []string{path.Join(libDir, "arm-linux-musleabihf/lib", name)}
		p.Target.Linux_musl_arm64.Srcs = []string{path.Join(libDir, "aarch64-linux-musl/lib", name)}
	}

	ctx.AppendProperties(p)
}

func llvmPrebuiltBuildTool(ctx android.LoadHookContext) {
	clangDir := getClangPrebuiltDir(ctx)
	name := strings.TrimPrefix(ctx.ModuleName(), "prebuilt_")
	src := path.Join(clangDir, "bin", name)
	deps := []string{path.Join(clangDir, "lib", "libc++.so")}

	type props struct {
		Enabled *bool
		Target  struct {
			Linux struct {
				Enabled *bool
				Src     *string
				Deps    []string
			}
		}
	}
	p := &props{}
	p.Enabled = proptools.BoolPtr(false)
	p.Target.Linux.Enabled = proptools.BoolPtr(true)
	p.Target.Linux.Src = &src
	p.Target.Linux.Deps = deps
	ctx.AppendProperties(p)
}

type prebuiltLibrarySharedProps struct {
	Is_llndk *bool

	Shared_libs []string
}

type prebuiltLibraryProps struct {
	Lib_name *string

	Suffix *string
}

func libClangRtPrebuiltLibraryShared(ctx android.LoadHookContext, libProps *prebuiltLibraryProps,
	sharedProps *prebuiltLibrarySharedProps) {

	if ctx.Config().IsEnvTrue("FORCE_BUILD_SANITIZER_SHARED_OBJECTS") {
		return
	}

	libDir := getClangResourceDir(ctx)

	type props struct {
		Target             archProps
		System_shared_libs []string
		No_libcrt          *bool
		Sanitize           struct {
			Never *bool
		}
		Strip struct {
			None *bool
		}
		Pack_relocations *bool
		Stl              *string
		Stubs            struct {
			Symbol_file *string
			Versions    []string
		}
		Llndk struct {
			Symbol_file *string
		}
	}

	p := &props{}

	name := proptools.StringDefault(libProps.Lib_name, strings.TrimPrefix(ctx.ModuleName(), "prebuilt_"))
	suffix := proptools.String(libProps.Suffix)

	p.Target.Android_arm.Srcs = []string{path.Join(libDir, name+"-arm-android"+suffix+".so")}
	p.Target.Android_arm.Stem = proptools.StringPtr(name + "-arm-android" + suffix)
	p.Target.Android_arm.Srcs = []string{path.Join(libDir, name+"-arm-android"+suffix+".so")}
	p.Target.Android_arm.Stem = proptools.StringPtr(name + "-arm-android" + suffix)
	p.Target.Android_arm64.Srcs = []string{path.Join(libDir, name+"-aarch64-android"+suffix+".so")}
	p.Target.Android_arm64.Stem = proptools.StringPtr(name + "-aarch64-android" + suffix)
	p.Target.Android_riscv64.Srcs = []string{path.Join(libDir, name+"-riscv64-android"+suffix+".so")}
	p.Target.Android_riscv64.Stem = proptools.StringPtr(name + "-riscv64-android" + suffix)
	p.Target.Android_x86.Srcs = []string{path.Join(libDir, name+"-i686-android"+suffix+".so")}
	p.Target.Android_x86.Stem = proptools.StringPtr(name + "-i686-android" + suffix)
	p.Target.Android_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64-android"+suffix+".so")}
	p.Target.Android_x86_64.Stem = proptools.StringPtr(name + "-x86_64-android" + suffix)
	p.Target.Linux_bionic_arm64.Srcs = []string{path.Join(libDir, name+"-aarch64-android"+suffix+".so")}
	p.Target.Linux_bionic_arm64.Stem = proptools.StringPtr(name + "-aarch64-android" + suffix)
	p.Target.Linux_bionic_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64-android"+suffix+".so")}
	p.Target.Linux_bionic_x86_64.Stem = proptools.StringPtr(name + "-x86_64-android" + suffix)
	p.Target.Glibc_x86.Srcs = []string{path.Join(libDir, name+"-i386"+suffix+".so")}
	p.Target.Glibc_x86.Stem = proptools.StringPtr(name + "-i386" + suffix)
	p.Target.Glibc_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64"+suffix+".so")}
	p.Target.Glibc_x86_64.Stem = proptools.StringPtr(name + "-x86_64" + suffix)
	p.Target.Linux_musl_x86.Srcs = []string{path.Join(libDir, "i686-unknown-linux-musl/lib/linux", name+"-i386"+suffix+".so")}
	p.Target.Linux_musl_x86.Stem = proptools.StringPtr(name + "-i386" + suffix)
	p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(libDir, "x86_64-unknown-linux-musl/lib/linux", name+"-x86_64"+suffix+".so")}
	p.Target.Linux_musl_x86_64.Stem = proptools.StringPtr(name + "-x86_64" + suffix)
	p.Target.Linux_musl_arm.Srcs = []string{path.Join(libDir, "arm-unknown-linux-musleabihf/lib/linux", name+"-armhf"+suffix+".so")}
	p.Target.Linux_musl_arm.Stem = proptools.StringPtr(name + "-armhf" + suffix)
	p.Target.Linux_musl_arm64.Srcs = []string{path.Join(libDir, "aarch64-unknown-linux-musl/lib/linux", name+"-aarch64"+suffix+".so")}
	p.Target.Linux_musl_arm64.Stem = proptools.StringPtr(name + "-aarch64" + suffix)

	p.System_shared_libs = []string{}
	p.No_libcrt = proptools.BoolPtr(true)
	p.Sanitize.Never = proptools.BoolPtr(true)
	p.Strip.None = proptools.BoolPtr(true)
	disable := false
	p.Pack_relocations = &disable
	p.Stl = proptools.StringPtr("none")

	if proptools.Bool(sharedProps.Is_llndk) {
		p.Stubs.Versions = []string{"29", "10000"}
		p.Stubs.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx))
		p.Llndk.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx))
	}

	ctx.AppendProperties(p)
}

func libClangRtPrebuiltLibraryStatic(ctx android.LoadHookContext, libProps *prebuiltLibraryProps) {
	libDir := getClangResourceDir(ctx)

	type props struct {
		Target             archProps
		System_shared_libs []string
		No_libcrt          *bool
		Stl                *string
	}

	name := proptools.StringDefault(libProps.Lib_name, strings.TrimPrefix(ctx.ModuleName(), "prebuilt_"))
	name = strings.TrimSuffix(name, ".static")
	suffix := proptools.String(libProps.Suffix)

	p := &props{}

	p.Target.Android_arm.Srcs = []string{path.Join(libDir, name+"-arm-android"+suffix+".a")}
	p.Target.Android_arm64.Srcs = []string{path.Join(libDir, name+"-aarch64-android"+suffix+".a")}
	p.Target.Android_riscv64.Srcs = []string{path.Join(libDir, name+"-riscv64-android"+suffix+".a")}
	p.Target.Android_x86.Srcs = []string{path.Join(libDir, name+"-i686-android"+suffix+".a")}
	p.Target.Android_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64-android"+suffix+".a")}
	p.Target.Linux_bionic_arm64.Srcs = []string{path.Join(libDir, name+"-aarch64-android"+suffix+".a")}
	p.Target.Linux_bionic_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64-android"+suffix+".a")}
	p.Target.Glibc_x86.Srcs = []string{path.Join(libDir, name+"-i386"+suffix+".a")}
	p.Target.Glibc_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64"+suffix+".a")}
	p.Target.Linux_musl_x86.Srcs = []string{path.Join(libDir, "i686-unknown-linux-musl/lib/linux", name+"-i386"+suffix+".a")}
	p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(libDir, "x86_64-unknown-linux-musl/lib/linux", name+"-x86_64"+suffix+".a")}
	p.Target.Linux_musl_arm.Srcs = []string{path.Join(libDir, "arm-unknown-linux-musleabihf/lib/linux", name+"-armhf"+suffix+".a")}
	p.Target.Linux_musl_arm64.Srcs = []string{path.Join(libDir, "aarch64-unknown-linux-musl/lib/linux", name+"-aarch64"+suffix+".a")}
	p.System_shared_libs = []string{}
	p.No_libcrt = proptools.BoolPtr(true)
	p.Stl = proptools.StringPtr("none")
	ctx.AppendProperties(p)
}

func libClangRtPrebuiltObject(ctx android.LoadHookContext) {
	libDir := getClangResourceDir(ctx)

	type props struct {
		Arch struct {
			X86 struct {
				Srcs []string
			}
			X86_64 struct {
				Srcs []string
			}
			Arm struct {
				Srcs []string
			}
			Arm64 struct {
				Srcs []string
			}
		}
		System_shared_libs []string
		Stl                *string
	}

	name := strings.TrimPrefix(ctx.ModuleName(), "prebuilt_")

	p := &props{}
	p.Arch.X86.Srcs = []string{path.Join(libDir, name+"-i386.o")}
	p.Arch.X86_64.Srcs = []string{path.Join(libDir, name+"-x86_64.o")}
	p.Arch.Arm.Srcs = []string{path.Join(libDir, "arm-unknown-linux-musleabihf/lib/linux", name+"-armhf.o")}
	p.Arch.Arm64.Srcs = []string{path.Join(libDir, "aarch64-unknown-linux-musl/lib/linux", name+"-aarch64.o")}
	p.System_shared_libs = []string{}
	p.Stl = proptools.StringPtr("none")
	ctx.AppendProperties(p)
}

func llvmDarwinLib(ctx android.LoadHookContext) string {
	clangDir := getClangPrebuiltDir(ctx)
	moduleName := ctx.ModuleName()
	var libName string

	switch moduleName {
	case "libclang-cpp_host_darwin":
		libName = "libclang-cpp.dylib"
	case "libc++_darwin":
		libName = "libc++.dylib"
	case "libc++abi_shared_darwin":
		libName = "libc++abi.dylib"
	case "libc++_static_darwin":
		libName = "libc++.a"
	case "libc++abi_static_darwin":
		libName = "libc++abi.a"
	case "libsimpleperf_readelf_darwin":
		libName = "libsimpleperf_readelf.a"
	default:
		ctx.ModuleErrorf("unsupported host LLVM file group: " + moduleName)
	}

	return path.Join(clangDir, "lib", libName)
}

func llvmDarwinFileGroup(ctx android.LoadHookContext) {
	lib := llvmDarwinLib(ctx)

	type props struct {
		Srcs []string
	}

	libPath := android.ExistentPathForSource(ctx, ctx.ModuleDir(), lib)
	if libPath.Valid() {
		p := &props{}
		p.Srcs = []string{lib}
		ctx.AppendProperties(p)
	}
}

func llvmDarwinFileGroupBazelHook(ctx android.LoadHookContext) string {
	return llvmDarwinLib(ctx)
}

func llvmPrebuiltLibraryStaticFactory() android.Module {
	module, _ := cc.NewPrebuiltStaticLibrary(android.HostAndDeviceSupported)
	android.AddLoadHook(module, llvmPrebuiltLibraryStatic)
	return module.Init()
}

func llvmPrebuiltBuildToolFactory() android.Module {
	module := android.NewPrebuiltBuildTool()
	android.AddLoadHook(module, llvmPrebuiltBuildTool)
	return module
}

func llvmPrebuiltLibrarySharedFactory() android.Module {
	module, _ := cc.NewPrebuiltSharedLibrary(android.HostAndDeviceSupported)
	android.AddLoadHook(module, llvmPrebuiltLibraryShared)
	return module.Init()
}

func libClangRtPrebuiltLibrarySharedFactory() android.Module {
	module, _ := cc.NewPrebuiltSharedLibrary(android.HostAndDeviceSupported)
	props := &prebuiltLibraryProps{}
	sharedProps := &prebuiltLibrarySharedProps{}
	module.AddProperties(props, sharedProps)
	android.AddLoadHook(module, func(ctx android.LoadHookContext) {
		libClangRtPrebuiltLibraryShared(ctx, props, sharedProps)
	})
	return module.Init()
}

func libClangRtPrebuiltLibraryStaticFactory() android.Module {
	module, _ := cc.NewPrebuiltStaticLibrary(android.HostAndDeviceSupported)
	props := &prebuiltLibraryProps{}
	module.AddProperties(props)
	android.AddLoadHook(module, func(ctx android.LoadHookContext) {
		libClangRtPrebuiltLibraryStatic(ctx, props)
	})
	return module.Init()
}

func libClangRtPrebuiltObjectFactory() android.Module {
	module := cc.NewPrebuiltObject(android.HostAndDeviceSupported)
	android.AddLoadHook(module, libClangRtPrebuiltObject)
	return module.Init()
}

func llvmDarwinFileGroupFactory() android.Module {
	module := android.FileGroupFactory()
	android.AddLoadHook(module, llvmDarwinFileGroup)
	android.AddBazelHandcraftedHook(module.(android.BazelModule), llvmDarwinFileGroupBazelHook)
	return module
}

func llvmHostDefaults(ctx android.LoadHookContext) {
	type props struct {
		Enabled *bool
	}

	p := &props{}
	// XXX: Omit the !enabled, so modules are enabled by default.
	// if !ctx.Config().IsEnvTrue("LLVM_BUILD_HOST_TOOLS") {
	// 	p.Enabled = proptools.BoolPtr(false)
	// }
	ctx.AppendProperties(p)
}

func llvmHostDefaultsFactory() android.Module {
	module := cc.DefaultsFactory()
	android.AddLoadHook(module, llvmHostDefaults)
	return module
}

func clangBuiltinHeaders(ctx android.LoadHookContext) {
	type props struct {
		Cmd  *string
		Srcs []string
	}

	p := &props{}
	builtinHeadersDir := path.Join(
		getClangPrebuiltDir(ctx), "lib", "clang",
		ctx.Config().GetenvWithDefault("LLVM_RELEASE_VERSION",
			config.ClangDefaultShortVersion), "include")
	s := "$(location) " + path.Join(ctx.ModuleDir(), builtinHeadersDir) + " $(in) >$(out)"
	p.Cmd = &s

	p.Srcs = []string{path.Join(builtinHeadersDir, "**", "*.h")}
	ctx.AppendProperties(p)
}

func clangBuiltinHeadersFactory() android.Module {
	module := genrule.GenRuleFactory()
	android.AddLoadHook(module, clangBuiltinHeaders)
	return module
}

func llvmToolsFileGroup(ctx android.LoadHookContext) {
	type props struct {
		Srcs []string
	}

	p := &props{}
	prebuiltDir := path.Join(getClangPrebuiltDir(ctx))
	for _, src := range llvmToolsFiles {
		p.Srcs = append(p.Srcs, path.Join(prebuiltDir, src))
	}
	ctx.AppendProperties(p)
}

func llvmToolsFilegroupFactory() android.Module {
	module := android.FileGroupFactory()
	android.AddLoadHook(module, llvmToolsFileGroup)
	return module
}
