/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

@class YMAVMAP;
@class YMAVMAPRequestConfiguration;
@protocol YMAVMAPLoaderDelegate;

NS_ASSUME_NONNULL_BEGIN

/**
 This class is responsible for loading VMAP.
 */
@interface YMAVMAPLoader : NSObject

/**
 Tracks the process of loading VMAP. The object implements the YMAVMAPLoaderDelegate protocol.
 */
@property (nonatomic, weak, nullable) id<YMAVMAPLoaderDelegate> delegate;

/**
 Loads VMAP with the specified configuration.
 @param requestConfiguration Loader configuration.
 */
- (void)loadVMAPWithRequestConfiguration:(YMAVMAPRequestConfiguration *)requestConfiguration;

@end


/**
 The protocol defines the methods of a delegate that monitors VMAP loading process.
 @discussion The methods are invoked by an object of the YMAVMAPLoader class.
 */
@protocol YMAVMAPLoaderDelegate <NSObject>

/**
 Notifies that VMAP was loaded.
 @param loader The loader that sends the message.
 @param VMAP Result of successful response.
 */
- (void)loader:(YMAVMAPLoader *)loader didLoadVMAP:(YMAVMAP *)VMAP;

/**
 Notifies that VMAP failed to load.
 @param loader The loader that sends the message.
 @param error NSError object describing problem encountered while loading VMAP (for details, @see YMAVMAPErrorCode).
 */
- (void)loader:(YMAVMAPLoader *)loader didFailLoadingVMAPWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
