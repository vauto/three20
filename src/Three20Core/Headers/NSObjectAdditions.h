//
// Copyright 2009-2010 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

@interface NSObject (TTAdditions)

/**
 * Additional performSelector signatures that support up to 7 arguments.
 */
- (id)performSelector:(SEL)selector withObject:(id)p1 withObject:(id)p2 withObject:(id)p3;
- (id)performSelector:(SEL)selector withObject:(id)p1 withObject:(id)p2 withObject:(id)p3
  withObject:(id)p4;
- (id)performSelector:(SEL)selector withObject:(id)p1 withObject:(id)p2 withObject:(id)p3
  withObject:(id)p4 withObject:(id)p5;
- (id)performSelector:(SEL)selector withObject:(id)p1 withObject:(id)p2 withObject:(id)p3
  withObject:(id)p4 withObject:(id)p5 withObject:(id)p6;
- (id)performSelector:(SEL)selector withObject:(id)p1 withObject:(id)p2 withObject:(id)p3
  withObject:(id)p4 withObject:(id)p5 withObject:(id)p6 withObject:(id)p7;

/**
 * Returns a Boolean value that indicates whether the given objects are equal.
 * @param object1   The first object to compare.
 * @param object2   The second object to compare.
 * @return YES if the given objects are either reference-equal or object-equal, otherwise NO.
 *
 * Useful for performing equality checks on two objects where one or both might be nil.
 */
+ (BOOL)value:(id)object1 isEqual:(id)object2;

@end
