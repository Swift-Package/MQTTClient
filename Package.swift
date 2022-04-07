// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MQTTClient",
    products: [
        .library(
            name: "MQTTClient",
            targets: ["MQTTClient"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "MQTTClient", dependencies: [], path: "Sources/MQTTClient",
                exclude: [],
                resources: [],
                publicHeadersPath: "",
                cSettings: []),
        .testTarget(
            name: "MQTTClientTests",
            dependencies: ["MQTTClient"]),
    ]
)
