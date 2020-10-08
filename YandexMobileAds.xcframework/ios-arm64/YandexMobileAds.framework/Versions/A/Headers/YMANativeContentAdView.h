/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <UIKit/UIKit.h>

@protocol YMANativeContentAd;
@class YMANativeMediaView;

/**
 This class is responsible for creating the layout of a `Content` ad without using a template.
 */

NS_ASSUME_NONNULL_BEGIN

@interface YMANativeContentAdView : UIView

/**
 `UILabel` for information about age restrictions.
 */
@property (nonatomic, weak) IBOutlet UILabel *ageLabel;

/**
 `UILabel` for the main ad text.
 */
@property (nonatomic, weak) IBOutlet UILabel *bodyLabel;

/**
 `UIButton` for handling ad actions.
 */
@property (nonatomic, weak, nullable) IBOutlet UIButton *callToActionButton;

/**
 `UIButton` for handling reasons for ad closing.
 */
@property (nonatomic, weak, nullable) IBOutlet UIButton *feedbackButton;

/**
 `UILabel` for domain data.
 */
@property (nonatomic, weak, nullable) IBOutlet UILabel *domainLabel;

/**
 `UIImageView` for the icon.
 */
@property (nonatomic, weak, nullable) IBOutlet UIImageView *iconImageView;

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
 `UILabel` for data on the ad network.
 */
@property (nonatomic, weak, nullable) IBOutlet UILabel *sponsoredLabel;

/**
 `UILabel` for the ad title.
 */
@property (nonatomic, weak) IBOutlet UILabel *titleLabel;

/**
 `UILabel` for the warning.
 */
@property (nonatomic, weak) IBOutlet UILabel *warningLabel;

/**
 The ad object.
 */
@property (nonatomic, strong, readonly, nullable) id<YMANativeContentAd> ad;

@end

NS_ASSUME_NONNULL_END
