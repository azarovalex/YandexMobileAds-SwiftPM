/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <UIKit/UIKit.h>

@protocol YMANativeAppInstallAd;
@protocol YMARating;
@class YMANativeMediaView;

/**
 This class is responsible for creating the layout of an `AppInstall` ad without using a template.
 */

NS_ASSUME_NONNULL_BEGIN

@interface YMANativeAppInstallAdView : UIView

/**
 `UILabel` for information about age restrictions.
 */
@property (nonatomic, weak) IBOutlet UILabel *ageLabel;

/**
 `UILabel` for the main ad text.
 */
@property (nonatomic, weak) IBOutlet UILabel *bodyLabel;

/**
 `UIButton` with a call to action.
 */
@property (nonatomic, weak) IBOutlet UIButton *callToActionButton;

/**
 `UILabel` for domain data.
 */
@property (nonatomic, weak, nullable) IBOutlet UILabel *domainLabel;

/**
 `UIButton` for handling reasons for ad closing.
 */
@property (nonatomic, weak, nullable) IBOutlet UIButton *feedbackButton;

/**
 `UIImageView` for the icon.
 */
@property (nonatomic, weak) IBOutlet UIImageView *iconImageView;

/**
 `UIImageView` for the ad's main image.
 @deprecated This property is deprecated. Use #mediaView instead.
 */
@property (nonatomic, weak, nullable) IBOutlet UIImageView *imageView __attribute__((deprecated("Use mediaView instead")));

/**
 `YMANativeMediaView` for the ad's media.
 */
@property (nonatomic, weak, nullable) IBOutlet YMANativeMediaView *mediaView;

/**
 `UILabel` for data on the price of the advertised app.
 */
@property (nonatomic, weak, nullable) IBOutlet UILabel *priceLabel;

/**
 `UIView` that implements the YMARating protocol for data on the app rating.
 */
@property (nonatomic, weak, nullable) IBOutlet UIView<YMARating> *ratingView;

/**
 `UILabel` for data on the number of app reviews.
 */
@property (nonatomic, weak, nullable) IBOutlet UILabel *reviewCountLabel;

/**
 `UILabel` for information about the ad network.
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
@property (nonatomic, strong, readonly, nullable) id<YMANativeAppInstallAd> ad;

NS_ASSUME_NONNULL_END

@end
