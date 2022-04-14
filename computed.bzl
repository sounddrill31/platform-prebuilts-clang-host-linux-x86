# Note this does NOT conform to Bazel Starlark, e.g. load() is undefined

"""string.removeprefix() unavailable in go interpreter"""

def _removeprefix(string, prefix):
    return string[len(prefix):] if string.startswith(prefix) else string

"""string.removesuffix() unavailable in go interpreter"""

def _removesuffix(string, suffix):
    return string[0:-len(suffix)] if string.endswith(suffix) else string

def _get_release_version(ctx):
    return ctx.env.get(
        "LLVM_RELEASE_VERSION",
    ) or ctx.constants.CLANG_DEFAULT_SHORT_VERSION

def _get_clang_prebuilt_dir(ctx):
    return "./" + (
        ctx.env.get("LLVM_PREBUILTS_VERSION") or
        ctx.constants.CLANG_DEFAULT_VERSION
    )

def _get_clang_resource_dir(ctx):
    return _get_clang_prebuilt_dir(ctx) + "/lib64/clang/" + \
           _get_release_version(ctx) + "/lib/linux"

def _get_symbol_file_path(ctx):
    return _get_clang_resource_dir(ctx) + "/" + \
           _removesuffix(ctx.module_name, ".llndk") + ".map.txt"

def _trim_version(ver, retain):
    sep = "."
    versions = ver.split(sep)
    return sep.join(versions[0:retain])

def _get_host_library(ctx):
    release_version = _get_release_version(ctx)
    if ctx.module_name == "prebuilt_libclang-cpp_host":
        version_str = _trim_version(release_version, 1)
        return "libclang-cpp.so.{}git".format(version_str)
    if ctx.module_name == "prebuilt_libc++_host":
        return "libc++.so.1"
    if ctx.module_name == "prebuilt_libc++abi_host":
        return "libc++abi.so.1"
    return None

def llvm_host_prebuilt_library_shared(ctx):
    clang_prebuilt_dir = _get_clang_prebuilt_dir(ctx)
    header_dir = "{}/include".format(clang_prebuilt_dir)
    if ctx.module_name == "prebuilt_libc++_host":
        header_dir += "/c++/v1"
    host_library = _get_host_library(ctx)
    if not host_library:
        fail("unsupported host LLVM module " + ctx.module_name)
    return {
        "enabled": ctx.env.is_true("LLVM_BUILD_HOST_TOOLS"),
        "export_include_dirs": [header_dir],
        "target": {
            "linux_glibc_x86_64": {"srcs": [
                ("{}/lib64/{}".format(clang_prebuilt_dir, host_library)),
            ]},
            "darwin_x86_64": {"srcs": [
                _removesuffix(
                    _removeprefix(ctx.module_name, "prebuilt_"),
                    "_host",
                ) + "_darwin",
            ]},
            "windows": {"enabled": False},
        },
        "stl": "none",
    }

def llvm_prebuilt_library_static(ctx):
    p = {}

    clang_prebuilt_dir = _get_clang_prebuilt_dir(ctx)
    name = _removeprefix(ctx.module_name, "prebuilt_") + ".a"

    if name == "libFuzzer.a":
        p["export_include_dirs"] = [
            clang_prebuilt_dir + "/prebuilt_include/llvm/lib/Fuzzer",
        ]

    clang_resource_dir = _get_clang_resource_dir(ctx)

    def get_srcs(x):
        return {"srcs": [clang_resource_dir + "/" + x + "/" + name]}

    p["target"] = {
        "android_arm": get_srcs("arm"),
        "android_arm64": get_srcs("aarch64"),
        "android_x86": get_srcs("i386"),
        "android_x86_64": get_srcs("x86_64"),
        "linux_bionic_arm64": get_srcs("aarch64"),
        "linux_bionic_x86_64": get_srcs("x86_64"),
        "linux_musl_x86": get_srcs("i686-linux-musl/lib"),
        "linux_musl_x86_64": get_srcs("x86_64-linux-musl/lib"),
    }
    return p

def libclang_rt_prebuilt_library_static_builtins_exported(ctx):
    return libclang_rt_prebuilt_library_static(
        ctx,
        "libclang_rt.builtins",
        "-exported",
    )

def libclang_rt_prebuilt_library_static(ctx, lib_name = None, suffix = ""):
    clang_resource_dir = _get_clang_resource_dir(ctx)
    if lib_name == None:
        lib_name = _removeprefix(ctx.module_name, "prebuilt_")
    name = _removesuffix(lib_name, ".static")

    def get_srcs(x):
        return {"srcs": [clang_resource_dir + "/" + name + "-" + x + suffix + ".a"]}

    return {
        "no_libcrt": True,
        # "stl": requiring to be set explicitly instead
        "system_shared_libs": [],
        "target": {
            "android_arm": get_srcs("arm-android"),
            "android_arm64": get_srcs("aarch64-android"),
            "android_x86": get_srcs("i686-android"),
            "android_x86_64": get_srcs("x86_64-android"),
            "linux_bionic_arm64": get_srcs("aarch64-android"),
            "linux_bionic_x86_64": get_srcs("x86_64-android"),
            "glibc_x86": get_srcs("i386"),
            "glibc_x86_64": get_srcs("x86_64"),
            "linux_musl_x86": {
                "srcs": [
                    clang_resource_dir + "/i686-linux-musl/lib/linux/" + name + "-i386" + suffix + ".a",
                ],
            },
            "linux_musl_x86_64": {
                "srcs": [
                    clang_resource_dir + "/x86_64-linux-musl/lib/linux/" + name + "-x86_64" + suffix + ".a",
                ],
            },
        },
    }

def libclang_rt_prebuilt_library_shared_llndk(ctx):
    return libclang_rt_prebuilt_library_shared(ctx, is_llndk = True)

def libclang_rt_prebuilt_library_shared(
        ctx,
        lib_name = None,
        suffix = "",
        is_llndk = False,
        shared_libs = None):
    if ctx.env.is_true("FORCE_BUILD_SANITIZER_SHARED_OBJECTS"):
        return {}
    lib_dir = _get_clang_resource_dir(ctx)
    name = lib_name or _removeprefix(ctx.module_name, "prebuilt_")
    suffix = suffix or ""

    def get_srcs(x):
        return {
            "srcs": [lib_dir + "/" + name + "-" + x + suffix + ".so"],
            "stem": name + "-" + x + suffix,
        }

    p = {
        "target": {
            "android_arm": get_srcs("arm-android"),
            "android_arm64": get_srcs("aarch64-android"),
            "android_x86": get_srcs("i686-android"),
            "android_x86_64": get_srcs("x86_64-android"),
            "linux_bionic_arm64": get_srcs("aarch64-android"),
            "linux_bionic_x86_64": get_srcs("x86_64-android"),
            "glibc_x86": get_srcs("i386"),
            "glibc_x86_64": get_srcs("x86_64"),
            "linux_musl_x86": {
                "srcs": [
                    lib_dir + "/i686-linux-musl/lib/linux/" + name + "-i386" + suffix + ".so",
                ],
                "stem": name + "-i386" + suffix,
            },
            "linux_musl_x86_64": {
                "srcs": [
                    lib_dir + "/x86_64-linux-musl/lib/linux/" + name + "-86_64" + suffix + ".so",
                ],
                "stem": name + "-x86_64" + suffix,
            },
        },
        "system_shared_libs": [],
        "no_libcrt": True,
        "sanitize": {
            "never": True,
        },
        "strip": {
            "none": True,
        },
        "pack_relocations": False,
        # not setting "stl": "none" because we don't want to use computed properties as defaults
    }
    if is_llndk:
        symbol_file_path = _get_symbol_file_path(ctx)
        p["stubs"] = {
            "versions": ["29", "10000"],
            "symbol_file": symbol_file_path,
        }
        p["llndk"] = {
            "symbol_file": symbol_file_path,
        }
    return p
