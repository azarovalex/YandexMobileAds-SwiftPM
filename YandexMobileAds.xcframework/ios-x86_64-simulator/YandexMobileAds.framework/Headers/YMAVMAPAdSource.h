/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 YMAVMAPAdSource represents ad source.
 */
@interface YMAVMAPAdSource : NSObject

/**
 Indicates whether or not player should honor VAST ad pods
 or other multiple ad formats in the ad response document.
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *allowMultipleAds;

/**
 Ad source identifier.
 */
@property (nonatomic, copy, readonly, nullable) NSString *ID;

/**
 Indicates whether or not player should follow wrapper/redirects in the ad response document.
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *followRedirects;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
