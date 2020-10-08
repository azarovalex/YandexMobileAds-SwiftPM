/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>

@class YMACreative;

/**
 * VAST ad type.
 */
typedef NS_ENUM(NSUInteger, YMAVASTAdType) {
    YMAVASTAdTypeUnknown,
    YMAVASTAdTypeInLine,
    YMAVASTAdTypeWrapper
};

/**
 * VAST ad.
 */
@interface YMAVASTAd : NSObject

/**
 * VAST ad type.
 * @see YMAVASTAdType.
 */
@property (nonatomic, assign, readonly) YMAVASTAdType adType;

/**
 * Indicates source ad server.
 */
@property (nonatomic, copy, readonly) NSString *adSystem;

/**
 * Ad common name.
 */
@property (nonatomic, copy, readonly) NSString *adTitle;

/**
 * Ad description.
 */
@property (nonatomic, copy, readonly) NSString *adDescription;

/**
 * URI of request to survey vendor.
 */
@property (nonatomic, copy, readonly) NSString *survey;

/**
 * Array of YMACreative.
 */
@property (nonatomic, copy, readonly) NSArray *creatives;

/**
 * URI of ad tag of downstream Secondary Ad Server.
 */
@property (nonatomic, copy, readonly) NSString *VASTAdTagURI;

/**
 * Raw VAST XML
 */
@property (nonatomic, copy, readonly) NSString *rawVAST;

@end
