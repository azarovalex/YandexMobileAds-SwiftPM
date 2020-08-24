/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>
#import <YandexMobileAds/YMANativeGenericAd.h>

@class YMANativeAppInstallAdView;
@protocol YMANativeAdDelegate;

NS_ASSUME_NONNULL_BEGIN

/**
 Binds ad data with an object of the YMANativeAppInstallAdView class.
 */
@protocol YMANativeAppInstallAd <YMANativeGenericAd>

/**
 Binds ad data with an object of the YMANativeAppInstallAdView class.
 @param view `View` with ad assets.
 @param delegate The object implements the YMANativeAdDelegate protocol
 that sends notifications of the user's interaction with the ad.
 @param error Information about the error (for details, see YMANativeErrorCode).
 @return The result of binding ad data with an object of the YMANativeAppInstallAdView class.
 */
- (BOOL)bindAppInstallAdToView:(YMANativeAppInstallAdView *)view
                      delegate:(nullable id<YMANativeAdDelegate>)delegate
                         error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
