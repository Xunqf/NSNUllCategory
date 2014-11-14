//
//  NSNull+OVNatural.m
//  TextField
//
//  Created by liujie on 14-10-23.
//  Copyright (c) 2014年 gumeipost. All rights reserved.
//

#import "NSNull+OVNatural.h"

@implementation NSNull (OVNatural)

- (void)forwardInvocation:(NSInvocation *)invocation
{
    if ([self respondsToSelector:[invocation selector]]) {
        [invocation invokeWithTarget:self];
    }
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)selector
{
    NSMethodSignature *sig = [[NSNull class] instanceMethodSignatureForSelector:selector];
    if(sig == nil) {
        sig = [NSMethodSignature signatureWithObjCTypes:"@^v^c"];
    }
    return sig;
}

@end
