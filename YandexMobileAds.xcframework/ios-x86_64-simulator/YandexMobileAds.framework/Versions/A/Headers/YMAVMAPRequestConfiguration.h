/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The class defines VMAP loader configuration.
 */
@interface YMAVMAPRequestConfiguration : NSObject <NSCopying, NSMutableCopying>

/**
 Unique identifier created in the Partner interface.
 */
@property (nonatomic, copy, readonly) NSString *pageID;

/**
 Category identifier.
 */
@property (nonatomic, copy, readonly) NSString *categoryID;

- (instancetype)init NS_UNAVAILABLE;

/**
 Initializes a new object of the YMAVMAPRequestConfiguration class.
 @param pageID Unique page ID, created in the Partner interface.
 */
- (instancetype)initWithPageID:(NSString *)pageID;

@end

/**
 YMAMutableVMAPRequestConfiguration allows to configure optional parameters for VMAP loading.
 */
@interface YMAMutableVMAPRequestConfiguration : YMAVMAPRequestConfiguration

/**
 Category identifier.
 */
@property (nonatomic, copy, nullable) NSString *categoryID;

@end

NS_ASSUME_NONNULL_END
