/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

/**
 * VAST Creative.
 */
@interface YMACreative : NSObject

/**
 * Optional creative identifier.
 */
@property (nonatomic, copy, readonly) NSString *ID;

/**
 * Duration in seconds.
 */
@property (nonatomic, assign, readonly) NSInteger duration;

/**
 * URI to open when user clicks on the video.
 */
@property (nonatomic, copy, readonly) NSString *clickThrough;

/**
 * Array of YMAMediaFile objects.
 */
@property (nonatomic, copy, readonly) NSArray *mediaFiles;

/**
 * Array of YMAIcon objects.
 */
@property (nonatomic, copy, readonly) NSArray *icons;

@end
