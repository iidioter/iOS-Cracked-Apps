//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWPageCarouselDelegate-Protocol.h"
#import "UIAccelerometerDelegate-Protocol.h"
#import "iCarouselDataSource-Protocol.h"
#import "iCarouselDelegate-Protocol.h"

@class GWOperateViewPageControl, GWPageCarousel, NSMutableArray, NSString, NSTimer;
@protocol GWOperateViewDelegate;

@interface GWOperateView : UIView <iCarouselDataSource, iCarouselDelegate, UIAccelerometerDelegate, GWPageCarouselDelegate>
{
    double oldX;
    double oldY;
    _Bool _moving;
    _Bool _closeAcce;
    id <GWOperateViewDelegate> _delegate;
    NSMutableArray *_operateItem;
    GWPageCarousel *_icarouselView;
    NSTimer *_timer;
    long long _autoScrollInterval;
    long long _secCount;
    GWOperateViewPageControl *_pageControl;
}

@property(retain, nonatomic) GWOperateViewPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) long long secCount; // @synthesize secCount=_secCount;
@property(nonatomic) long long autoScrollInterval; // @synthesize autoScrollInterval=_autoScrollInterval;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) GWPageCarousel *icarouselView; // @synthesize icarouselView=_icarouselView;
@property(retain, nonatomic) NSMutableArray *operateItem; // @synthesize operateItem=_operateItem;
@property(nonatomic) _Bool closeAcce; // @synthesize closeAcce=_closeAcce;
@property(nonatomic) _Bool moving; // @synthesize moving=_moving;
@property(nonatomic) __weak id <GWOperateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetViewCenter;
- (id)getBaseViewWithIndex:(long long)arg1;
- (id)imageWithIndex:(long long)arg1;
- (id)currentImage;
- (void)updateImageWithOffset:(double)arg1;
- (void)updateImg:(id)arg1;
- (void)timeChecker;
- (void)stopTimer;
- (void)startTimer;
- (void)startRoll;
- (void)carouselDidEndScrollingAnimation:(id)arg1;
- (void)carouselDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)carouselDidEndDecelerating:(id)arg1;
- (void)carouselWillBeginDragging:(id)arg1;
- (void)carouselDidScroll:(id)arg1;
- (void)carousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (double)carouselItemWidth:(id)arg1;
- (double)carousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (id)carousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInCarousel:(id)arg1;
- (void)dataInput:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

