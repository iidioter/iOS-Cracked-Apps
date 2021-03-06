//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QiXiuSegmentsView, UIButton, UICollectionView, UIPageControl;

@interface QXFullScreenEmotionView : UIView
{
    UICollectionView *_collectionView;
    UIView *_bottomView;
    UIPageControl *_pageControlView;
    QiXiuSegmentsView *_segment;
    UIButton *_sendBtn;
    UIView *_loadingView;
    UIView *_reloadView;
}

@property(nonatomic) __weak UIView *reloadView; // @synthesize reloadView=_reloadView;
@property(nonatomic) __weak UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) QiXiuSegmentsView *segment; // @synthesize segment=_segment;
@property(retain, nonatomic) UIPageControl *pageControlView; // @synthesize pageControlView=_pageControlView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)hideLoading;
- (void)showLoading;
- (void)hideReload;
- (void)showReload;
- (void)reload:(id)arg1;
- (void)qxUpdateViewContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

