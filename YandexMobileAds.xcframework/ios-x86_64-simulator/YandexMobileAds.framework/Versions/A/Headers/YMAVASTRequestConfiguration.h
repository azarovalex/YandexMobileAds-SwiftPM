/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

@class YMAVMAPAdBreak;

NS_ASSUME_NONNULL_BEGIN

/**
 The class defines VAST loader configuration.
 */
@interface YMAVASTRequestConfiguration : NSObject <NSCopying, NSMutableCopying>

/**
 Ad break object.
 */
@property (nonatomic, strong, readonly) YMAVMAPAdBreak *adBreak;

/**
 Parameters for video ads request.
 */
@property (nonatomic, copy, readonly, nullable) NSDictionary *parameters;

- (instancetype)init NS_UNAVAILABLE;

/**
 Initializes a new object of the YMAVASTRequestConfiguration class.
 @param adBreak Ad break for VAST request.
 */
- (instancetype)initWithAdBreak:(YMAVMAPAdBreak *)adBreak;

@end

/**
 YMAMutableVASTRequestConfiguration allows to configure optional parameters for VAST loading.
 */
@interface YMAMutableVASTRequestConfiguration : YMAVASTRequestConfiguration

/**
 Parameters for video ads request.
 */
@property (nonatomic, copy, nullable) NSDictionary *parameters;

@end

NS_ASSUME_NONNULL_END
