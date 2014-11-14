//
//  NSNull+OVNatural.h
//  TextField
//
//  Created by liujie on 14-10-23.
//  Copyright (c) 2014年 gumeipost. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNull (OVNatural)

- (void)forwardInvocation:(NSInvocation *)invocation;

- (NSMethodSignature *)methodSignatureForSelector:(SEL)selector;

@end
