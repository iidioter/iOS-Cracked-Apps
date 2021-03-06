//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSTimer;

@interface KGWebSocketHealthTimeManager : NSObject
{
    NSMutableArray *_writeTimeArray;
    double _watingWriteTime;
    NSTimer *_timerWrite;
    _Bool _hasTimer;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

- (void).cxx_destruct;
- (id)pathForLibraryResource:(id)arg1;
- (_Bool)samplingForStatistcs;
- (void)readTimeFromFile;
- (void)writeTimeToFileBackGround;
- (void)wirteTimeStringToFile:(id)arg1;
- (void)stopTimer;
- (void)resetTimer:(long long)arg1;
- (id)init;

@end

