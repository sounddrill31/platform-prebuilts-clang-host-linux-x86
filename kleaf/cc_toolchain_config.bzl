"""Configure CC toolchain for Android kernel."""

load(":common.bzl", "common")
load(":linux.bzl", "linux")

def _impl(ctx):
    if ctx.attr.target_os == "linux":
        features = linux.features(ctx)
        sysroot = linux.sysroot()
    else:
        fail("target_os == {} is not supported yet".format(ctx.attr.target_os))

    features += common.features(ctx)

    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = ctx.attr.toolchain_identifier,
        target_cpu = ctx.attr.target_cpu,
        tool_paths = common.tool_paths(ctx),
        features = features,
        builtin_sysroot = sysroot,

        # The attributes below are required by the constructor, but don't
        # affect actions at all.
        host_system_name = "__toolchain_host_system_name__",
        target_system_name = "__toolchain_target_system_name__",
        target_libc = "__toolchain_target_libc__",
        compiler = "__toolchain_compiler__",
        abi_version = "__toolchain_abi_version__",
        abi_libc_version = "__toolchain_abi_libc_version__",
    )

clang_config = rule(
    implementation = _impl,
    attrs = {
        "target_cpu": attr.string(mandatory = True, values = [
            "x86_64",
        ]),
        "target_os": attr.string(mandatory = True, values = [
            "linux",
        ]),
        "toolchain_identifier": attr.string(),
        "clang_version": attr.string(),
    },
    provides = [CcToolchainConfigInfo],
)
