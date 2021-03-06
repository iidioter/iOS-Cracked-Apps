//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString, NSTimer, TBModelStatusInfo;

@interface TBSearchCommonItem : NSObject
{
    _Bool _initiative;
    _Bool _searchFilterRequested;
    _Bool _searchHistoryRequested;
    _Bool _isMemoryLow;
    _Bool _isSpotlighting;
    int _deviceRank;
    NSTimer *_timer;
    NSMutableArray *_clickedItems;
    NSString *_lastKeyword;
    NSString *_page_n;
    NSString *_time_stamp;
    NSString *_sugg;
    NSString *_original_q;
    NSString *_back_val;
    NSString *_latitude;
    NSString *_longitude;
    NSMutableArray *_searchFilterType;
    NSMutableArray *_searchFilter;
    NSString *_requestMode;
    TBModelStatusInfo *_statusInfo;
    NSString *_lastShowedClipBoardString;
    NSDate *_searchdoorStartDate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *searchdoorStartDate; // @synthesize searchdoorStartDate=_searchdoorStartDate;
@property(retain, nonatomic) NSString *lastShowedClipBoardString; // @synthesize lastShowedClipBoardString=_lastShowedClipBoardString;
@property(retain, nonatomic) TBModelStatusInfo *statusInfo; // @synthesize statusInfo=_statusInfo;
@property(nonatomic) _Bool isSpotlighting; // @synthesize isSpotlighting=_isSpotlighting;
@property(nonatomic) _Bool isMemoryLow; // @synthesize isMemoryLow=_isMemoryLow;
@property(nonatomic) int deviceRank; // @synthesize deviceRank=_deviceRank;
@property(retain, nonatomic) NSString *requestMode; // @synthesize requestMode=_requestMode;
@property(nonatomic) _Bool searchHistoryRequested; // @synthesize searchHistoryRequested=_searchHistoryRequested;
@property(nonatomic) _Bool searchFilterRequested; // @synthesize searchFilterRequested=_searchFilterRequested;
@property(retain, nonatomic) NSMutableArray *searchFilter; // @synthesize searchFilter=_searchFilter;
@property(retain, nonatomic) NSMutableArray *searchFilterType; // @synthesize searchFilterType=_searchFilterType;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) _Bool initiative; // @synthesize initiative=_initiative;
@property(retain, nonatomic) NSString *back_val; // @synthesize back_val=_back_val;
@property(retain, nonatomic) NSString *original_q; // @synthesize original_q=_original_q;
@property(retain, nonatomic) NSString *sugg; // @synthesize sugg=_sugg;
@property(retain, nonatomic) NSString *time_stamp; // @synthesize time_stamp=_time_stamp;
@property(retain, nonatomic) NSString *page_n; // @synthesize page_n=_page_n;
@property(retain, nonatomic) NSString *lastKeyword; // @synthesize lastKeyword=_lastKeyword;
@property(retain, nonatomic) NSMutableArray *clickedItems; // @synthesize clickedItems=_clickedItems;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)startSpotlight;
- (void)stopTimer;
- (void)startTimer;
- (void)reset;
- (void)initFilterTMSConfig;
- (void)initWeexCell;
- (id)init;

@end

