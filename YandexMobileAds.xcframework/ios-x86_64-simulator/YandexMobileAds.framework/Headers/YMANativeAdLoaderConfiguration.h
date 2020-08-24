/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Image size classes.
 */

/**
 Small images placed next to the ad.
 */
extern NSString *const kYMANativeImageSizeSmall;

/**
 Medium-sized images placed next to the ad.
 */
extern NSString *const kYMANativeImageSizeMedium;

/**
 Large images that are placed in the center or at the bottom of the ad
 and cover the entire or most of the ad's width.
 */
extern NSString *const kYMANativeImageSizeLarge;


/**
 This class is responsible for configuring native ad loading.
 */
@interface YMANativeAdLoaderConfiguration : NSObject

/**
 The Block ID is a unique identifier in the R-M-XXXXXX-Y format, which is assigned in the Partner interface.
 */
@property (nonatomic, copy, readonly) NSString *blockID;

/**
 A set of preferred image sizes.
 */
@property (nonatomic, copy, readonly) NSArray *imageSizes;

/**
 Flag for automatic image loading. Acceptable values: `YES` – Load automatically; `NO` – Load manually.
 @warning If the app simultaneously stores links to a large number of ads,
 we recommend using manual image loading.
 */
@property (nonatomic, assign, readonly) BOOL shouldLoadImagesAutomatically;

/**
 Initializes a new object of the YMANativeAdLoaderConfiguration class,
 i.e., configuration for loading native ads.
 @param blockID The Block ID is a unique identifier in the R-M-XXXXXX-Y format,
 which is assigned in the Partner interface.
 @param shouldLoadImagesAutomatically Flag for automatic image loading.
 @return An object of the YMANativeAdLoaderConfiguration class, i.e., configuration for loading native ads.
 */
- (instancetype)initWithBlockID:(NSString *)blockID
        loadImagesAutomatically:(BOOL)shouldLoadImagesAutomatically;

/**
 Initializes a new object of the YMANativeAdLoaderConfiguration class,
 i.e., configuration for native ads.
 @param blockID The Block ID is a unique identifier in the R-M-XXXXXX-Y format,
 which is assigned in the Partner interface.
 @param imageSizes A set of preferred image sizes.
 @param shouldLoadImagesAutomatically Flag for automatic image loading.
 @return Object of the YMANativeAdLoaderConfiguration class, i.e., configuration for native ads.
 */
- (instancetype)initWithBlockID:(NSString *)blockID
                     imageSizes:(NSArray *)imageSizes
        loadImagesAutomatically:(BOOL)shouldLoadImagesAutomatically NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
