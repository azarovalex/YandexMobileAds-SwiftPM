/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

@class YMAVMAPAdSource;
@class YMAVMAPTimeOffset;
@class YMAVMAPExtension;

NS_ASSUME_NONNULL_BEGIN

/**
 YMAVMAPAdBreak represents ad break.
 */
@interface YMAVMAPAdBreak : NSObject

/**
 Ad source for the ad break.
 */
@property (nonatomic, strong, readonly) YMAVMAPAdSource *adSource;

/**
 Ad break identifier. @see YMAVMAPBreakID.h for allowed values.
 */
@property (nonatomic, copy, readonly, nullable) NSString *breakID;

/**
 Allowed ad break types. @see YMAVMAPBreakType.h for allowed values.
 */
@property (nonatomic, strong, readonly) NSArray<NSString *> *breakTypes;

/**
 Ad break repeatAfter attribute in milliseconds.
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *repeatAfterMillis;

/**
 Time offset for the ad break.
 */
@property (nonatomic, strong, readonly) YMAVMAPTimeOffset *timeOffset;

/**
 Array of YMAVMAPExtension objects.
 */
@property (nonatomic, copy, readonly) NSArray<YMAVMAPExtension *> *extensions;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

