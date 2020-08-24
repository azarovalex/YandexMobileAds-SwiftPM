/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

/**
 This class is responsible for logging actions in the SDK.
 @warning This class is deprecated. Use YMAMobileAds.
 */
__attribute__((deprecated("[YMAMobileAds enableLogging] should be used instead")))
@interface YMALog : NSObject

/**
 Enables logging. By default, logging is disabled.
 */
+ (void)enableLogging;

@end
