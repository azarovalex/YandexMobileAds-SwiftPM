/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

@class YMAVASTRequestConfiguration;
@protocol YMAVideoAdLoaderDelegate;

NS_ASSUME_NONNULL_BEGIN

/**
 This class is responsible for loading video ads.
 */
@interface YMAVideoAdLoader : NSObject

/**
 Tracks the process of loading video ads. The object implements the YMAVideoAdLoaderDelegate protocol.
 */
@property (nonatomic, weak, nullable) id<YMAVideoAdLoaderDelegate> delegate;

/**
 Loads video ads with the specified configuration.
 @param requestConfiguration Loader configuration.
 */
- (void)loadVASTWithRequestConfiguration:(YMAVASTRequestConfiguration *)requestConfiguration;

@end

NS_ASSUME_NONNULL_END
