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

@class FBLPromise<id>;

@interface FBLPromisesTestInteroperabilityObjC<Value> : NSObject

+ (FBLPromise<Value> *)fulfillWithObject:(nullable Value)object NS_SWIFT_UNAVAILABLE("");
+ (FBLPromise<Value> *)fulfillWithObject:(nullable Value)object
                                   delay:(NSTimeInterval)delay NS_SWIFT_NAME(fulfill(_:delay:));
+ (FBLPromise<Value> *)rejectWithError:(NSError *)error NS_SWIFT_UNAVAILABLE("");
+ (FBLPromise<Value> *)rejectWithError:(NSError *)error
                                 delay:(NSTimeInterval)delay NS_SWIFT_NAME(reject(_:delay:));
+ (FBLPromise<Value> *)rejectWithException:(NSException *)exception NS_SWIFT_UNAVAILABLE("");
+ (FBLPromise<Value> *)rejectWithException:(NSException *)exception
                                     delay:(NSTimeInterval)delay NS_SWIFT_NAME(reject(_:delay:));

@end

NS_ASSUME_NONNULL_END
