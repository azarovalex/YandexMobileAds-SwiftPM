/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 A class with data for a targeted ad request.
 */
@interface YMAAdRequest : NSObject <NSCopying, NSMutableCopying>

/**
 User location.
 */
@property (nonatomic, copy, readonly, nullable) CLLocation *location;

/**
 The search query that the user entered in the app.
 */
@property (nonatomic, copy, readonly, nullable) NSString *contextQuery;

/**
 List of tags. Matches the context in which the ad will be displayed.
 */
@property (nonatomic, copy, readonly, nullable) NSArray *contextTags;

/**
 The gender of the user. For a list of values, see the YMAGender section.
 */
@property (nonatomic, copy, readonly, nullable) NSString *gender;

/**
 User age.
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *age;

/**
 A set of arbitrary input parameters.
 */
@property (nonatomic, copy, readonly, nullable) NSDictionary *parameters;

/**
 Initializes an object of the `YMAAdRequest` class with the user's location, search query, and tags.
 @param location User location.
 @param contextQuery The search query that the user entered in the app.
 @param contextTags List of tags. Matches the context in which the ad will be displayed.
 @return An object of the `YMAAdRequest` class with the user's location, search query, and tags.
 */
- (instancetype)initWithLocation:(nullable CLLocation *)location
                    contextQuery:(nullable NSString *)contextQuery
                     contextTags:(nullable NSArray *)contextTags;

/**
 Initializes an object of the `YMAAdRequest` class with the user's location, search query,
 tags, and input parameters.
 @param location User location.
 @param contextQuery The search query that the user entered in the app.
 @param contextTags List of tags. Matches the context in which the ad will be displayed.
 @param parameters A set of arbitrary input parameters.
 @return An object of the `YMAAdRequest` class with the user's location, search query,
 tags, and input parameters.
 */
- (instancetype)initWithLocation:(nullable CLLocation *)location
                    contextQuery:(nullable NSString *)contextQuery
                     contextTags:(nullable NSArray *)contextTags
                      parameters:(nullable NSDictionary *)parameters NS_DESIGNATED_INITIALIZER;

@end

/**
 An editable version of the YMAAdRequest class with data for a targeted ad request.
 */
@interface YMAMutableAdRequest : YMAAdRequest

/**
 User location.
 */
@property (nonatomic, copy, nullable) CLLocation *location;

/**
 The search query that the user entered in the app.
 */
@property (nonatomic, copy, nullable) NSString *contextQuery;

/**
 List of tags. Matches the context in which the ad will be displayed.
 */
@property (nonatomic, copy, nullable) NSArray *contextTags;

/**
 The gender of the user. For a list of values, see the YMAGender section.
 */
@property (nonatomic, copy, nullable) NSString *gender;

/**
 User age.
 */
@property (nonatomic, strong, nullable) NSNumber *age;

/**
 A set of arbitrary input parameters.
 */
@property (nonatomic, copy, nullable) NSDictionary *parameters;

@end

NS_ASSUME_NONNULL_END
