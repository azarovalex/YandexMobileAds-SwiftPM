/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

/**
 Common domain for `Yandex Mobile Ads` library errors.
 */
extern NSString *const kYMAAdsErrorDomain;

/**
 Error description.
 */
typedef NS_ENUM(NSUInteger, YMAAdErrorCode) {
    /**
     The `BlockID` was omitted when loading the ad.
     */
    YMAAdErrorCodeEmptyBlockID,
    /**
     An invalid banner size is specified.
     */
    YMAAdErrorCodeInvalidBannerSize,
    /**
     An invalid `Application ID` was specified.
     */
    YMAAdErrorCodeInvalidUUID,
    /**
     The `BlockID` specified when loading the ad wasn't found.
     */
    YMAAdErrorCodeNoSuchBlockID,
    /**
     The ad was loaded successfully, but there aren't any available ads to display.
     */
    YMAAdErrorCodeNoFill,
    /**
     Unexpected server response when loading the ad.
     */
    YMAAdErrorCodeBadServerResponse,
    /**
     The ad size in the request does not match the ad size specified in the Partner interface for this ad block.
     */
    YMAAdErrorCodeBannerSizeMismatch,
    /**
     The ad type in the request does not match the ad type specified in the Partner interface for this ad block.
     */
    YMAAdErrorCodeAdTypeMismatch,
    /**
     The service is temporarily unavailable. Try sending the request again later.
     */
    YMAAdErrorCodeServiceTemporarilyNotAvailable,
    /**
     A full-screen ad can be shown only once.
     */
    YMAAdErrorCodeInterstitialHasAlreadyBeenPresented,
    /**
     The ad can't be displayed because of the orientation (the size of the screen and the ad don't match).
     */
    YMAAdErrorCodeInterstitialOrientationMismatch,
    /**
     The AppMetrica library hasn't been initialized.
     */
    YMAAdErrorCodeMetricaNotStarted,
    /**
     A rewarded ad can be shown only once.
     */
    YMAAdErrorCodeRewardedHasAlreadyBeenPresented,
    /**
     ViewController passed for presenting full-screen ad is nil
     */
    YMAAdErrorCodeNilPresentingViewController
};
