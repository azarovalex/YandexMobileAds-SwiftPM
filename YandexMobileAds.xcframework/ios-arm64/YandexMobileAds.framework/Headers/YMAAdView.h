/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <UIKit/UIKit.h>

@class YMAAdRequest;
@class YMAAdSize;
@class YMAVideoController;

@protocol YMAAdViewDelegate;
/**
 This class is responsible for setting up and displaying the banner.
 */
@interface YMAAdView : UIView

/**
 It monitors the ad and receives notifications about user interaction with the ad.
 @discussion It provides data necessary for displaying the ad
 (for example, a `UIViewController` object that `AdView` uses to show a modal controller
 in response to the user interacting with the banner).
 */
@property (nonatomic, weak) id<YMAAdViewDelegate> delegate;

/**
 The Block ID is a unique identifier in the R-M-XXXXXX-Y format, which is assigned in the Partner interface.
 */
@property (nonatomic, copy, readonly) NSString *blockID;

/**
 VideoController provides playback control for ad video.
 */
@property (nonatomic, strong, readonly) YMAVideoController *videoController;

/**
 Initializes an object of the YMAAdView class to display the banner with the specified size.
 @param blockID The Block ID is a unique identifier in the R-M-XXXXXX-Y format,
 which is assigned in the Partner interface.
 @param adSize The size of the banner. The size of the banner is set in the YMAAdSize class.
 @param delegate The object implements the YMAAdViewDelegate protocol that monitors the ad.
 @return Initializes an object of the YMAAdView class to display the banner with the specified size.
 */
- (instancetype)initWithBlockID:(NSString *)blockID
                         adSize:(YMAAdSize *)adSize
                       delegate:(id<YMAAdViewDelegate>)delegate;

/**
 Initializes an object of the YMAAdView class to display the banner with the fixed size.
 @warning This method is deprecated. Use [YMAAdView initWithBlockID:adSize:delegate:].
 @param blockID The Block ID is a unique identifier in the R-M-XXXXXX-Y format,
 which is assigned in the Partner interface.
 @param size The size of the banner.
 @param delegate The object implements the YMAAdViewDelegate protocol that monitors the ad.
 @return Initializes an object of the YMAAdView class to display the banner with the specified size.
 */
- (instancetype)initWithBlockID:(NSString *)blockID
                           size:(CGSize)size
                       delegate:(id<YMAAdViewDelegate>)delegate __attribute__((deprecated("[YMAAdView initWithBlockID:adSize:delegate:] should be used instead")));

/**
 Displays the banner centered at the top of the passed `View`.
 @param view Object of the `UIView` class to add the banner to.
 */
- (void)displayAtTopInView:(UIView *)view;

/**
 Displays the banner centered at the bottom of the passed `View`.
 @param view An object of the `UIView` class to add the banner to.
 */
- (void)displayAtBottomInView:(UIView *)view;

/**
 Loads a banner.
 */
- (void)loadAd;

/**
 Loads a banner with data for targeting.
 @param request Data for targeting.
 */
- (void)loadAdWithRequest:(YMAAdRequest *)request;

/**
 Returns the size of the banner content.
 @return The size of the banner content.
 */
- (CGSize)adContentSize;

@end

/**
 The protocol defines the methods of a delegate that monitors the ads.
 @discussion Methods are called by an object of the YMAAdView class when its state changes.
 */
@protocol YMAAdViewDelegate <NSObject>

@optional

/**
 Returns a `UIViewController` object that `AdView` uses to show a modal controller
 in response to the user's interaction with the banner.
 @discussion Since a single `UIViewController` can't show multiple modal controllers simultaneously,
 the returned `UIViewController` must be displayed in front of all the other ones.
 @return The `UIViewController` object that `AdView` uses for showing a modal controller
 in response to the user's interaction with the banner.
 */
- (UIViewController *)viewControllerForPresentingModalView;

/**
 Notifies that the banner is loaded.
 @discussion At this time, you can add `AdView` if you haven't done so yet.
 @param adView A reference to the object of the YMAAdView class that invoked the method.
 */
- (void)adViewDidLoad:(YMAAdView *)adView;

/**
 Notifies that the banner failed to load.
 @param adView A reference to the object of the YMAAdView class that invoked the method.
 @param error Information about the error (for details, see YMAAdErrorCode).
 */
- (void)adViewDidFailLoading:(YMAAdView *)adView error:(NSError *)error;

/**
 Notifies that the app will become inactive now because the user clicked on the banner ad
 and is about to switch to a different application (Phone, App Store, and so on).
 @param adView A reference to the object of the YMAAdView class that invoked the method.
 */
- (void)adViewWillLeaveApplication:(YMAAdView *)adView;

/**
 Notifies that the user has clicked on the banner and the in-app browser will open now.
 @param viewController Modal `UIViewController`.
 */
- (void)adViewWillPresentScreen:(UIViewController *)viewController;

/**
 Notifies that the user has closed the embedded browser.
 @param viewController Modal `UIViewController`.
 */
- (void)adViewDidDismissScreen:(UIViewController *)viewController;
@end
