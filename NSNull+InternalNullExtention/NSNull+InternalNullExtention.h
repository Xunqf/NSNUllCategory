//
//  NSNull+InternalNullExtention.h
//  TextField
//
//  Created by liujie on 14-10-23.
//  Copyright (c) 2014年 gumeipost. All rights reserved.
//

#define NSNullObjects @[@"",@0,@{},@[]]

#import <Foundation/Foundation.h>

@interface NSNull (InternalNullExtention)

- (NSMethodSignature*)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(NSInvocation *)anInvocation;
@end
