#!/bin/bash -ex

rm -rf parent
mkdir -p parent
mypath=$(dirname $(realpath $0))
clang_dir=$(dirname "$mypath")
find "$clang_dir" -maxdepth 1 -type d -name 'clang-*' -exec /bin/bash -c 'ln -sf $(realpath {} --relative-to '"$mypath"/parent') '"$mypath"'/parent/$(basename {})' \;
