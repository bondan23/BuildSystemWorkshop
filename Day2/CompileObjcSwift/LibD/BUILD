load("@build_bazel_rules_swift//swift:swift.bzl", "swift_library")
load("@build_bazel_rules_apple//apple:ios.bzl", "ios_unit_test")

swift_library(
    name = "LibD",
    module_name = "LibD",
    deps = [
        "//LibC:LibC", 
        "//LibB:LibB", 
    ],
    srcs = glob([
        "*.swift",
    ]),
	copts = [
		"-import-objc-header", 
        "LibD/LibD.h"
	],
    visibility = ["//visibility:public"],
)

objc_library(
    name = "LibD_ObjC",
	deps = [
		":LibD", 
		"//LibC:LibC",
        "//LibB:LibB", 
	],
    hdrs = glob([
        "*.h",
    ]),
    srcs = glob([
        "*.m",
    ]),
	includes = [
		"."
	],
    module_map = "LibD.modulemap",
    visibility = ["//visibility:public"],
	enable_modules = True,
    copts = [
        '-fmodules'
    ]
)