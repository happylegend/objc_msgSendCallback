//
//  MyHandler.m
//  objc_msgSendCallback
//
//  Created by 紫冬 on 13-8-27.
//  Copyright (c) 2013年 qsji. All rights reserved.
//

#import "MyHandler.h"

@implementation MyHandler
@synthesize callbackObject = _callbackObject;
@synthesize functionName = _functionName;

-(void)setCallbackObject:(id)callbackObject functionName:(NSString *)functionName
{
    self.callbackObject = callbackObject;
    self.functionName = functionName;
}

-(void)handleThing
{
    SEL func = NSSelectorFromString(self.functionName);
    objc_msgSend(self.callbackObject, func);
//    当有参数的时候,后面可以继续添加参数
//    objc_msgSend(self.callbackObject, func, argument1, argument2,argument3......);
}

@end
