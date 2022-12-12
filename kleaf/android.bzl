"""For Android kernel builds, configure CC toolchain for target binaries."""
# TODO: For android arm64:
# NDK_TRIPLE=aarch64-linux-android31
# TODO: For target (platform:os=android), we use NDK_TRIPLE and sysroot under @prebuilt_ndk
# --sysroot=${NDK_DIR}/toolchains/llvm/prebuilt/linux-x86_64/sysroot
# TODO: USERCFLAGS
#  --target=${NDK_TRIPLE}
#  -Wno-unused-function
# TODO: USERLDFLAGS:
#  --target=${NDK_TRIPLE}
