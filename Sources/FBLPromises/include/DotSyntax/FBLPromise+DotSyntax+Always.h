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

#import "DotSyntax/FBLPromise+DotSyntax.h"
#import "FBLPromise+Always.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Convenience dot-syntax wrappers for `FBLPromise` `always` operators.
 Usage: promise.always(^{...})
 */
@interface FBLPromise<Value>(DotSyntax_AlwaysAdditions)

- (FBLPromise* (^)(void (^)(void)))always FBL_PROMISES_DOT_SYNTAX NS_SWIFT_UNAVAILABLE("");
- (FBLPromise* (^)(dispatch_queue_t, void (^)(void)))alwaysOn FBL_PROMISES_DOT_SYNTAX
    NS_SWIFT_UNAVAILABLE("");

@end

NS_ASSUME_NONNULL_END
