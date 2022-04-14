# this does NOT conform to Bazel Starlark, e.g. load() is undefined
# NOTE string.removeprefix()/removesuffix() unavailable in go interpreter
def _removeprefix(string, prefix):
  return string[len(prefix):] if string.startswith(prefix) else string


def _removesuffix(string, suffix):
  return string[0:-len(suffix)] if string.endswith(suffix) else string


def _get_release_version(ctx):
  return ctx.env.get(
      "LLVM_RELEASE_VERSION") or ctx.constants.CLANG_DEFAULT_SHORT_VERSION


def _get_clang_prebuilt_dir(ctx):
  return "./" + (
      ctx.env.get("LLVM_PREBUILTS_VERSION") or
      ctx.constants.CLANG_DEFAULT_VERSION
  )


def _get_clang_resource_dir(ctx):
  return _get_clang_prebuilt_dir(ctx) + "/lib64/clang/" + \
         _get_release_version(ctx) + "/lib/linux"


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
    return "unsupported host LLVM module"
  return {
      "Enabled": ctx.env.is_true("LLVM_BUILD_HOST_TOOLS"),
      "Export_include_dirs": [header_dir],
      "Target": {
          "Linux_glibc_x86_64": {"Srcs": [
              ("{}/lib64/{}".format(clang_prebuilt_dir, host_library))]},
          "Darwin_x86_64": {"Srcs": [
              _removesuffix(_removeprefix(ctx.module_name, "prebuilt_"),
                            "_host") + "_darwin"]},
          "Windows": {"Enabled": False},
      },
      "Stl": "none"
  }


def llvm_prebuilt_library_static(ctx):
  p = {}

  clang_prebuilt_dir = _get_clang_prebuilt_dir(ctx)
  name = _removeprefix(ctx.module_name, "prebuilt_") + ".a"

  if name == "libFuzzer.a":
    p["Export_include_dirs"] = [
        clang_prebuilt_dir + "/prebuilt_include/llvm/lib/Fuzzer"]

  clang_resource_dir = _get_clang_resource_dir(ctx)
  helper = lambda x: {"Srcs": [clang_resource_dir + "/" + x + "/" + name]}
  p["Target"] = {
      "Android_arm": helper("arm"),
      "Android_arm64": helper("aarch64"),
      "Android_x86": helper("i386"),
      "Android_x86_64": helper("x86_64"),
      "Linux_bionic_arm64": helper("aarch64"),
      "Linux_bionic_x86_64": helper("x86_64"),
      "Linux_musl_x86": helper("i686-linux-musl/lib"),
      "Linux_musl_x86_64": helper("x86_64-linux-musl/lib"),
  }
  return p


def libclang_rt_prebuilt_library_static_builtins_exported(ctx):
  return _helper(ctx, "libclang_rt.builtins", "-exported")


def libclang_rt_prebuilt_library_static(ctx):
  return _helper(ctx, None, None)


def _helper(ctx, lib_name, suffix):
  clang_resource_dir = _get_clang_resource_dir(ctx)
  name = _removesuffix(lib_name or _removeprefix(ctx.module_name, "prebuilt_"),
                       ".static")
  suffix = suffix or ""
  getSrcs = lambda x: {"srcs": [clang_resource_dir + "/" + name + "-" + x + suffix + ".a"]}
  return {
      "no_libcrt": True,
      # "stl": requiring to be set explicitly instead
      "system_shared_libs": [],
      "target": {
          "android_arm": getSrcs("arm-android"),
          "android_arm64": getSrcs("aarch64-android"),
          "android_x86": getSrcs("i686-android"),
          "android_x86_64": getSrcs("x86_64-android"),
          "linux_bionic_arm64": getSrcs("aarch64-android"),
          "linux_bionic_x86_64": getSrcs("x86_64-android"),
          "glibc_x86": getSrcs("i386"),
          "glibc_x86_64": getSrcs("x86_64"),
          "linux_musl_x86": {
              "srcs": [
                  clang_resource_dir + "/i686-linux-musl/lib/linux/" + name + "-i386" + suffix + ".a"]
          },
          "linux_musl_x86_64": {
              "srcs": [
                  clang_resource_dir + "/x86_64-linux-musl/lib/linux/" + name + "-x86_64" + suffix + ".a"]
          }
      }
  }
