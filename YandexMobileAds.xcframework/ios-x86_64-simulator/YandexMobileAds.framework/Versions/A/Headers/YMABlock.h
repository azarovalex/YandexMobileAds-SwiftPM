/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

/**
 * VAST block type
 */

typedef NS_ENUM(NSUInteger, YMABlockType) {
    kYMABlockTypeUnknown,
    kYMABlockTypePreroll,
    kYMABlockTypeMidroll,
    kYMABlockTypePostroll,
    kYMABlockTypePauseroll,
    kYMABlockTypeOverlayroll
};

/**
 * Block description.
 */
@interface YMABlock : NSObject

/**
 * Block ID.
 */
@property (nonatomic, copy, readonly) NSString *ID;

/**
 * @see YMABlockType.
 */
@property (nonatomic, assign, readonly) YMABlockType blockType;

/**
 * Time offset relative to the video start in seconds.
 */
@property (nonatomic, assign, readonly) int startTime;

/**
 * Max block duration, seconds.
 */
@property (nonatomic, assign, readonly) int duration;

/**
 * Max number of positions in block.
 */
@property (nonatomic, assign, readonly) int positionsCount;

@end
