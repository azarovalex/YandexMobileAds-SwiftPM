/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <UIKit/UIKit.h>

@protocol YMANativeImageAd;
@class YMANativeMediaView;

/**
 This class is responsible for creating the layout of an `Image` ad without using a template.
 @warning This class is only used for working with ADFOX.
 */

NS_ASSUME_NONNULL_BEGIN

@interface YMANativeImageAdView : UIView

/**
 `UIButton` for handling reasons for ad closing.
 */
@property (nonatomic, weak, nullable) IBOutlet UIButton *feedbackButton;

/**
 `UIImageView` for the ad's main image.
 @deprecated This property is deprecated. Use #mediaView instead.
 */
@property (nonatomic, weak) IBOutlet UIImageView *imageView __attribute__((deprecated("Use mediaView instead")));

/**
 `YMANativeMediaView` for the ad's media.
 */
@property (nonatomic, weak, nullable) IBOutlet YMANativeMediaView *mediaView;

/**
 The ad object.
 */
@property (nonatomic, strong, readonly, nullable) id<YMANativeImageAd> ad;

@end

NS_ASSUME_NONNULL_END
