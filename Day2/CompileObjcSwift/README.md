# bazel-mixed-languages
An example using Bazel to build an iOS app and libraries containing Swift and Objective-C sources.

Structure:

* LibA: Objective-C library
* LibB: Objective-C library
    Deps:
        - LibA
* LibC: Swift library
* LibD: mixed Objective-C and Swift library
    Deps:
        - LibB
        - LibC