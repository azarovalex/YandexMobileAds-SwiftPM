/*
 * Version for iOS © 2015–2019 YANDEX
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at https://yandex.com/legal/mobileads_sdk_agreement/
 */
 
#import <Foundation/Foundation.h>

/* Yandex Mobile VMAP error domain. */
extern NSString *const kYMAVMAPErrorDomain;

/* Yandex Mobile VMAP error code. */
typedef NS_ENUM(NSUInteger, YMAVMAPErrorCode) {
    /* An invalid XML in VMAP response. */
        YMAVMAPErrorCodeInvalidXMLResponse
};
