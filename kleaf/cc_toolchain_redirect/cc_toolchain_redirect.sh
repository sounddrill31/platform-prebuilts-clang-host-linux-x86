#!/bin/bash -ex

env >&2

prebuilts/clang/host/linux-x86/clang-${KLEAF_CLANG_VERSION}/bin/${0##*/} $@