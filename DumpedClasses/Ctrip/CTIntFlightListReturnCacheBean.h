//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTIntFlightListBaseCacheBean.h"

@class CTIntlFlightSegmentListViewModel, NSMutableDictionary;

@interface CTIntFlightListReturnCacheBean : CTIntFlightListBaseCacheBean
{
    CTIntlFlightSegmentListViewModel *_selectFlightModelOfGo;
    NSMutableDictionary *_returnClickTraceDict;
}

@property(retain, nonatomic) NSMutableDictionary *returnClickTraceDict; // @synthesize returnClickTraceDict=_returnClickTraceDict;
@property(retain, nonatomic) CTIntlFlightSegmentListViewModel *selectFlightModelOfGo; // @synthesize selectFlightModelOfGo=_selectFlightModelOfGo;
- (void).cxx_destruct;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;

@end
