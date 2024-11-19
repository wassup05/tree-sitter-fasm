// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterFasm",
    products: [
        .library(name: "TreeSitterFasm", targets: ["TreeSitterFasm"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterFasm",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterFasmTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterFasm",
            ],
            path: "bindings/swift/TreeSitterFasmTests"
        )
    ],
    cLanguageStandard: .c11
)
