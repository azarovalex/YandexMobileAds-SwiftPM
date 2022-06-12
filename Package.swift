// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "YandexMobileAds",
    platforms: [.iOS(.v9)],
    products: [
        .library(
            name: "YandexMobileAds",
            targets: ["YandexMobileAdsWrapper"]),
    ],
    dependencies: [
        .package(name: "YandexMobileMetrica", url: "https://github.com/yandexmobile/metrica-sdk-ios.git", .upToNextMajor(from: "4.0.0"))
    ],
    targets: [
        .target(
            name: "YandexMobileAdsWrapper",
            dependencies: [
                "YandexMobileAds",
                "YandexMobileMetrica"
            ],
            path: "YandexMobileAdsWrapper",
            linkerSettings: [
                .linkedLibrary("xml2"),
                .linkedFramework("AdSupport"),
                .linkedFramework("WebKit")
            ]
        ),
        .binaryTarget(name: "YandexMobileAds", path: "./YandexMobileAds.xcframework")
    ]
)
