/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <UIKit/UIKit.h>

@class YMAAdRequest;

@protocol YMAInterstitialDelegate;
/**
 This class is responsible for loading a full-screen ad.
 */
@interface YMAInterstitialController : UIViewController

/**
 The Block ID is a unique identifier in the R-M-XXXXXX-Y format, which is assigned in the Partner interface.
 */
@property (nonatomic, copy, readonly) NSString *blockID;

/**
 Notifies that the ad is loaded and ready to be displayed.
 @discussion After the property takes the `YES` value,
 the [YMAInterstitialDelegate interstitialDidLoadAd:] delegate method is called.
 */
@property (nonatomic, assign, readonly) BOOL loaded;

/**
 Tracks ad lifecycle events.
 */
@property (nonatomic, weak) id<YMAInterstitialDelegate> delegate;

/**
 Defines whether to open links in the app or in the browser installed on the device. The default value is `NO`.
 */
@property (nonatomic, assign) BOOL shouldOpenLinksInApp;

/**
 Notifies whether the ad was displayed.
 */
@property (nonatomic, assign, readonly) BOOL hasBeenPresented;

/**
 Initializes an object of the YMAInterstitialController class with a full-screen ad.
 @param blockID The Block ID is a unique identifier in the R-M-XXXXXX-Y format,
 which is assigned in the Partner interface.
 @return An object of the YMAInterstitialController class with a full-screen ad.
 */
- (instancetype)initWithBlockID:(NSString *)blockID;

/**
 Preloads an ad.
 @discussion After this, use the [YMAInterstitialController presentInterstitialFromViewController:] method
 to start displaying the ad.
 */
- (void)load;

/**
 Preloads the ad by setting the data for targeting.
 @param request Data for targeting.
 */
- (void)loadWithRequest:(YMAAdRequest *)request;

/**
 Use this method to display a full-screen ad after preloading.
 @param viewController An object of the `UIViewController` class, which is used to display a full-screen ad.
 */
- (void)presentInterstitialFromViewController:(UIViewController *)viewController;

/**
 Use this method to display a full-screen ad after preloading
 if you need the app to perform some action immediately after showing the ad.
 @param viewController An object of the `UIViewController` class.
 @param dismissalBlock A block of code that executes after the ad is shown.
 */
- (void)presentInterstitialFromViewController:(UIViewController *)viewController dismissalBlock:(void(^)(void))dismissalBlock;

@end
/**
 The protocol defines the methods of a delegate that monitors the ads.
 @discussion Methods are called by an object of the YMAInterstitialController class when its state changes.
 */
@protocol YMAInterstitialDelegate <NSObject>

@optional

/**
 Notifies that the ad loaded successfully.
 @param interstitial A reference to an object of the YMAInterstitialController class that invoked the method.
 */
- (void)interstitialDidLoadAd:(YMAInterstitialController *)interstitial;

/**
 Notifies that the ad failed to load.
 @param interstitial A reference to an object of the YMAInterstitialController class that invoked the method.
 @param error Information about the error (for details, see YMAAdErrorCode).
 */
- (void)interstitialDidFailToLoadAd:(YMAInterstitialController *)interstitial error:(NSError *)error;

/**
 Notifies that the app will run in the background now because the user clicked the ad
 and is switching to a different application (Phone, App Store, and so on).
 @param interstitial A reference to an object of the YMAInterstitialController class that invoked the method.
 */
- (void)interstitialWillLeaveApplication:(YMAInterstitialController *)interstitial;

/**
 Notifies that the ad can't be displayed.
 @param interstitial A reference to an object of the YMAInterstitialController class that invoked the method.
 @param error Information about the error (for details, see YMAAdErrorCode).
 */
- (void)interstitialDidFailToPresentAd:(YMAInterstitialController *)interstitial error:(NSError *)error;

/**
 Called before the full-screen ad appears.
 @param interstitial A reference to an object of the YMAInterstitialController class that invoked the method.
 */
- (void)interstitialWillAppear:(YMAInterstitialController *)interstitial;

/**
 Called after the full-screen ad appears.
 @param interstitial A reference to an object of the YMAInterstitialController class that invoked the method.
 */
- (void)interstitialDidAppear:(YMAInterstitialController *)interstitial;

/**
 Called before hiding the full-screen ad.
 @param interstitial A reference to an object of the YMAInterstitialController class that invoked the method.
 */
- (void)interstitialWillDisappear:(YMAInterstitialController *)interstitial;

/**
 Called after hiding the full-screen ad.
 @param interstitial A reference to an object of the YMAInterstitialController class that invoked the method.
 */
- (void)interstitialDidDisappear:(YMAInterstitialController *)interstitial;

/**
 Notifies that the embedded browser will be displayed.
 @param webBrowser The in-app browser.
 */
- (void)interstitialWillPresentScreen:(UIViewController *)webBrowser;
@end
