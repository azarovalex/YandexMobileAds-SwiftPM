/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

@class YMAVMAPAdBreak;
@class YMAVMAPExtension;

NS_ASSUME_NONNULL_BEGIN

/**
 YMAVMAP represents VMAP model.
 */
@interface YMAVMAP : NSObject

/**
 Version of VMAP.
 */
@property (nonatomic, copy, readonly) NSString *version;

/**
 Array of YMAVMAPAdBreak objects.
 */
@property (nonatomic, copy, readonly) NSArray<YMAVMAPAdBreak *> *adBreaks;

/**
 Array of YMAVMAPExtension objects.
 */
@property (nonatomic, copy, readonly) NSArray<YMAVMAPExtension *> *extensions;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
