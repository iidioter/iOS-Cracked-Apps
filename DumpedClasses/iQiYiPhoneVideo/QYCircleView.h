//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface QYCircleView : UIImageView <CAAnimationDelegate>
{
}

- (void)layoutSubviews;
- (void)bigerAndAlpheAnimationWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 desScale:(double)arg4 anotherAnimation:(CDUnknownBlockType)arg5 desAlphe:(double)arg6 disappearDuration:(double)arg7 completion:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

