/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

/**
 YMAVMAPTimeOffset represents time offset for the ad break.
 */
@interface YMAVMAPTimeOffset : NSObject

/**
 Raw value of timeOffset attribute that represents the time offset for the ad break.
 */
@property (nonatomic, copy, readonly) NSString *rawValue;

- (instancetype)init NS_UNAVAILABLE;

@end
