/**
 Copyright 2018 Google Inc. All rights reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at:

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Possible error codes in `FBLPromiseErrorDomain`.
 */
typedef NS_ENUM(NSInteger, FBLPromiseErrorCode) {
  /** Objective-C exception was thrown. */
  FBLPromiseErrorCodeException = 1,
  /** Promise failed to resolve in time. */
  FBLPromiseErrorCodeTimedOut = 2,
  /** Validation predicate returned false. */
  FBLPromiseErrorCodeValidationFailure = 3,
} NS_REFINED_FOR_SWIFT;

extern NSString* const FBLPromiseErrorDomain NS_REFINED_FOR_SWIFT;
extern NSString* const FBLPromiseErrorUserInfoExceptionNameKey NS_REFINED_FOR_SWIFT;
extern NSString* const FBLPromiseErrorUserInfoExceptionReasonKey NS_REFINED_FOR_SWIFT;
extern NSString* const FBLPromiseErrorUserInfoExceptionUserInfoKey NS_REFINED_FOR_SWIFT;
extern NSString* const FBLPromiseErrorUserInfoExceptionReturnAddressesKey NS_REFINED_FOR_SWIFT;
extern NSString* const FBLPromiseErrorUserInfoExceptionCallStackKey NS_REFINED_FOR_SWIFT;

NS_ASSUME_NONNULL_END
