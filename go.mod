<<<<<<< HEAD   (c958c7 Merge empty history for sparse-7779620-L15600000954195552)
=======
module android/soong/clangprebuilts

require google.golang.org/protobuf v0.0.0

require github.com/google/blueprint v0.0.0

require android/soong v0.0.0

replace google.golang.org/protobuf v0.0.0 => ../../../../external/golang-protobuf

replace github.com/google/blueprint v0.0.0 => ../../../../build/blueprint

replace android/soong v0.0.0 => ../../../../build/soong

// Indirect deps from golang-protobuf
exclude github.com/golang/protobuf v1.5.0

replace github.com/google/go-cmp v0.5.5 => ../../../../external/go-cmp

// Indirect dep from go-cmp
exclude golang.org/x/xerrors v0.0.0-20191204190536-9bdfabe68543

go 1.16
>>>>>>> BRANCH (72ee4e Merge cherrypicks of ['aosp/2391481'] into sparse-8937393-L7)
