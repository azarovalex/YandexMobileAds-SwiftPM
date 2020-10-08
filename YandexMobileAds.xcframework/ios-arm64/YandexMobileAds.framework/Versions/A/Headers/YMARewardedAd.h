/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

@protocol YMAReward;
@class YMAAdRequest;

@protocol YMARewardedAdDelegate;

/**
 This class is responsible for loading a full-screen rewarded ad.
 */
@interface YMARewardedAd : NSObject

/**
 The Block ID is a unique identifier in the R-M-XXXXXX-Y format, which is assigned in the Partner interface.
 */
@property (nonatomic, copy, readonly) NSString *blockID;

/**
 Notifies that the ad is loaded and ready to be displayed.
 @discussion After the property takes the `YES` value, the [YMARewardedDelegate rewardedAdDidLoadAd:]
 delegate method is called.
 */
@property (nonatomic, assign, readonly) BOOL loaded;

/**
 Tracks ad lifecycle events.
 */
@property (nonatomic, weak) id<YMARewardedAdDelegate> delegate;

/**
 Defines whether to open links in the app or in the browser installed on the device. The default value is `NO`.
 */
@property (nonatomic, assign) BOOL shouldOpenLinksInApp;

/**
 Notifies whether the ad was displayed.
 */
@property (nonatomic, assign, readonly) BOOL hasBeenPresented;

/**
 Unique string that identifies app's user.
 Default is nil.
 */
@property (nonatomic, copy) NSString *userID;

/**
 Initializes an object of the YMARewardedAd class with a rewarded ad.
 @param blockID The Block ID is a unique identifier in the R-M-XXXXXX-Y format, which is assigned in the Partner interface.
 @return An object of the YMARewardedAd class with a rewarded ad.
 */
- (instancetype)initWithBlockID:(NSString *)blockID;

/**
 Preloads an ad.
 @discussion After this, use the [YMARewardedAd presentFromViewController:] method to start displaying the ad.
 */
- (void)load;

/**
 Preloads the ad by setting the data for targeting.
 @param request Data for targeting.
 */
- (void)loadWithRequest:(YMAAdRequest *)request;

/**
 Use this method to display a rewarded ad after preloading.
 @param viewController An object of the `UIViewController` class, which is used to display a rewarded ad.
 */
- (void)presentFromViewController:(UIViewController *)viewController;

/**
 Use this method to display a rewarded ad after preloading if you need the app to perform some action immediately
 after showing the ad.
 @param viewController An object of the `UIViewController` class.
 @param dismissalBlock A block of code that executes after the ad is shown.
 */
- (void)presentFromViewController:(UIViewController *)viewController dismissalBlock:(void(^)(void))dismissalBlock;

@end

/**
 The protocol defines the methods of a delegate that monitors the ads.
 @discussion Methods are called by an object of the YMARewardedAd class when its state changes.
 */
@protocol YMARewardedAdDelegate <NSObject>

@optional

/**
 Notifies that rewarded ad has rewarded the user.
 @param rewardedAd A reference to an object of the YMARewardedAd class that invoked the method.
 @param reward Reward given to the user.
 */
- (void)rewardedAd:(YMARewardedAd *)rewardedAd didReward:(id<YMAReward>)reward;

/**
 Notifies that the ad loaded successfully.
 @param rewardedAd A reference to an object of the YMARewardedAd class that invoked the method.
 */
- (void)rewardedAdDidLoadAd:(YMARewardedAd *)rewardedAd;

/**
 Notifies that the ad failed to load.
 @param rewardedAd A reference to an object of the YMARewardedAd class that invoked the method.
 @param error Information about the error (for details, see YMAAdErrorCode).
 */
- (void)rewardedAdDidFailToLoadAd:(YMARewardedAd *)rewardedAd error:(NSError *)error;

/**
 Notifies that the app will run in the background now because the user clicked the ad and is switching to a
 different application (Phone, App Store, and so on).
 @param rewardedAd A reference to an object of the YMARewardedAd class that invoked the method.
 */
- (void)rewardedAdWillLeaveApplication:(YMARewardedAd *)rewardedAd;

/**
 Notifies that the ad can't be displayed.
 @param rewardedAd A reference to an object of the YMARewardedAd class that invoked the method.
 @param error Information about the error (for details, see YMAAdErrorCode).
 */
- (void)rewardedAdDidFailToPresentAd:(YMARewardedAd *)rewardedAd error:(NSError *)error;

/**
 Called before the rewarded ad appears.
 @param rewardedAd A reference to an object of the YMARewardedAd class that invoked the method.
 */
- (void)rewardedAdWillAppear:(YMARewardedAd *)rewardedAd;

/**
 Called after the rewarded ad appears.
 @param rewardedAd A reference to an object of the YMARewardedAd class that invoked the method.
 */
- (void)rewardedAdDidAppear:(YMARewardedAd *)rewardedAd;

/**
 Called before hiding the rewarded ad.
 @param rewardedAd A reference to an object of the YMARewardedAd class that invoked the method.
 */
- (void)rewardedAdWillDisappear:(YMARewardedAd *)rewardedAd;

/**
 Called after hiding the rewarded ad.
 @param rewardedAd A reference to an object of the YMARewardedAd class that invoked the method.
 */
- (void)rewardedAdDidDisappear:(YMARewardedAd *)rewardedAd;

/**
 Notifies that the embedded browser will be displayed.
 @param viewController The in-app browser.
 */
- (void)rewardedAd:(YMARewardedAd *)rewardedAd willPresentScreen:(UIViewController *)viewController;
@end
