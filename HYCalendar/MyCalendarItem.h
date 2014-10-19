//
//  MyCalendarItem.h
//  HYCalendar
//
//  Created by nathan on 14-9-17.
//  Copyright (c) 2014年 nathan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyCalendarItem : UIView

- (void)createCalendarViewWith:(NSDate *)date;
- (NSDate*)nextMonth:(NSDate *)date;

@property (nonatomic, strong) NSDate *date;

@end