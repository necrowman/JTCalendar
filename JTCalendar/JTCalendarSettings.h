//
//  JTCalendarSettings.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, JTCalendarWeekDayFormat) {
    JTCalendarWeekDayFormatSingle,
    JTCalendarWeekDayFormatShort,
    JTCalendarWeekDayFormatFull,
    JTCalendarWeekDayFormatShortCapitalized,
    JTCalendarWeekDayFormatFullCapitalized
};

@interface JTCalendarSettings : NSObject


// Content view

@property (nonatomic) BOOL pageViewHideWhenPossible;
@property (nonatomic) BOOL weekModeEnabled;


// Page view

// Must be less or equalt to 6, 0 for automatic
@property (nonatomic) NSUInteger pageViewNumberOfWeeks;
@property (nonatomic) BOOL pageViewHaveWeekDaysView;
@property (nonatomic) NSUInteger pageViewWeekModeNumberOfWeeks;
@property (nonatomic) BOOL pageViewWeekDaysViewAutomaticHeight;

// WeekDay view

@property (nonatomic) JTCalendarWeekDayFormat weekDayFormat;


// Day view

@property (nonatomic) BOOL zeroPaddedDayFormat;


// Use for override
- (void)commonInit;

@end
