/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 YMAVMAPExtension represents video extension.
 */
@interface YMAVMAPExtension : NSObject

/**
 Type of the extension.
 */
@property (nonatomic, copy, readonly) NSString *type;

/**
 Value of the extension.
 */
@property (nonatomic, copy, readonly) NSString *value;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
