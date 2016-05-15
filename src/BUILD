# This directory contains a few simple protocol buffers for testing
# proto_library build rules.

load("@protobuf_repo//:protobuf.bzl", "cc_proto_library")

cc_proto_library(
    name = "address_book_proto",
    srcs = ["address_book.proto"],
    deps = [":person_proto"],
    default_runtime = "@protobuf_repo//:protobuf",
    protoc = "@protobuf_repo//:protoc",
)

cc_proto_library(
    name = "person_proto",
    srcs = ["person.proto"],
    default_runtime = "@protobuf_repo//:protobuf",
    protoc = "@protobuf_repo//:protoc",
)
