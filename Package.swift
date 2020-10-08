// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "YandexMobileAds",
    products: [
        .library(
            name: "YandexMobileAds",
            targets: ["YandexMobileAds"]),
    ],
    targets: [
        .binaryTarget(name: "YandexMobileAds", path: "./YandexMobileAds.xcframework")
    ]
)
