//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AudioMix : NSObject
{
    struct CMixSound _mixSound;
}

- (int)ProcessLeftChannel:(char *)arg1 leftSize:(int)arg2 rightChannel:(char *)arg3 rightSize:(int)arg4 outBuffer:(char *)arg5 outSize:(int)arg6;
- (void)Uninit;
- (int)InitWithSampleRate:(int)arg1 channel:(int)arg2;

@end
