//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface QYApmPingbackMonitorData : NSObject
{
    double _startTime;
    double _endTime;
    long long _networkType;
    NSArray *_pingbackMonitorData;
}

@property(retain, nonatomic) NSArray *pingbackMonitorData; // @synthesize pingbackMonitorData=_pingbackMonitorData;
@property(nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;

@end

