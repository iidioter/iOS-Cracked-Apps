//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshBaseView.h"

@interface MJRefreshFooterView : MJRefreshBaseView
{
    int _lastRefreshCount;
}

+ (id)footer;
@property(nonatomic) int lastRefreshCount; // @synthesize lastRefreshCount=_lastRefreshCount;
- (double)happenOffsetY;
- (double)heightForContentBreakView;
- (int)totalDataCountInScrollView;
- (void)setState:(int)arg1;
- (void)adjustStateWithContentOffset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)adjustFrameWithContentSize;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;

@end

