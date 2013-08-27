//
//  MyHandler.h
//  objc_msgSendCallback
//
//  Created by 紫冬 on 13-8-27.
//  Copyright (c) 2013年 qsji. All rights reserved.
//

/*
 这里讲解了函数objc_msgSend的用法，实际上它就是一个调用函数的方式而已，无论如何实现回调，
 总体的思路都是向委托对象发送消息，让委托对象来代理自己完成指定的功能。
 */

#import <Foundation/Foundation.h>
#import <objc/message.h>

@interface MyHandler : NSObject

{
    id _callbackObject;
    NSString *_functionName;
}

@property(nonatomic, assign)id callbackObject;
@property(nonatomic, copy)NSString *functionName;

-(void)setCallbackObject:(id)callbackObject functionName:(NSString *)functionName;
-(void)handleThing;

@end
