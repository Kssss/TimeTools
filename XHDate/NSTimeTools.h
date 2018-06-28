//
//  NSTimeTools.h
//  TimeTest
//
//  Created by 谭建中 on 28/6/18.
//  Copyright © 2018年 谭建中. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimeTools : NSObject

//获取当前系统时间的时间戳
#pragma mark - 获取当前时间的 时间戳
+(NSInteger)getNowTimestamp;

//将某个时间转化成 时间戳
#pragma mark - 将某个时间转化成 时间戳
+(NSInteger)timeSwitchTimestamp:(NSString *)formatTime andFormatter:(NSString *)format;

//将某个时间戳转化成 时间
#pragma mark - 将某个时间戳转化成 时间
+(NSString *)timestampSwitchTime:(NSInteger)timestamp andFormatter:(NSString *)format;
@end
