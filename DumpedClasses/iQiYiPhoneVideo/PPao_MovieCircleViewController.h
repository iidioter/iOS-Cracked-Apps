//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPao_CircleViewController.h"

#import "PPao_CircleSubViewControllerDelegate-Protocol.h"
#import "QYPPViewSourceDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, QPHeadPlayTankView, QYPPCircleButton, QYPPHalfScreenMultiImageViewController, QYPPSeriesContainerView, QYPPVideoEpisodesViewSource, UIImageView, UIViewController;

@interface PPao_MovieCircleViewController : PPao_CircleViewController <PPao_CircleSubViewControllerDelegate, QYPPViewSourceDelegate, UIGestureRecognizerDelegate>
{
    QYPPSeriesContainerView *_containView;
    _Bool _isAutoShowEpisodeView;
    _Bool _isEnterAutoPlay;
    _Bool _isCancelShare;
    _Bool _playWhenShow;
    _Bool _isPlayAd;
    _Bool _isAnimatingBeforPlay;
    _Bool _isAutoShowCache;
    _Bool _isEnterSelf;
    _Bool _is4I;
    _Bool _is4II;
    _Bool _isReregisterHandler;
    NSDictionary *_selectEpisode;
    QPHeadPlayTankView *_playContainerView;
    UIViewController *_halfSreenFeedDetail;
    QYPPHalfScreenMultiImageViewController *_halfScreenMultiImageViewController;
    unsigned long long _fromSubType4Head;
    QYPPVideoEpisodesViewSource *_episodesSource;
    QYPPCircleButton *_backCircleBtn;
    QYPPCircleButton *_moreCircleBtn;
    UIImageView *_revertTipView;
    NSMutableArray *_headVideos;
    NSDictionary *_lastPlayerDic;
}

@property(nonatomic) _Bool isReregisterHandler; // @synthesize isReregisterHandler=_isReregisterHandler;
@property(nonatomic) _Bool is4II; // @synthesize is4II=_is4II;
@property(nonatomic) _Bool is4I; // @synthesize is4I=_is4I;
@property(nonatomic) _Bool isEnterSelf; // @synthesize isEnterSelf=_isEnterSelf;
@property(retain, nonatomic) NSDictionary *lastPlayerDic; // @synthesize lastPlayerDic=_lastPlayerDic;
@property(nonatomic) _Bool isAutoShowCache; // @synthesize isAutoShowCache=_isAutoShowCache;
@property(nonatomic) _Bool isAnimatingBeforPlay; // @synthesize isAnimatingBeforPlay=_isAnimatingBeforPlay;
@property(nonatomic) _Bool isPlayAd; // @synthesize isPlayAd=_isPlayAd;
@property(nonatomic) _Bool playWhenShow; // @synthesize playWhenShow=_playWhenShow;
@property(retain, nonatomic) NSMutableArray *headVideos; // @synthesize headVideos=_headVideos;
@property(retain, nonatomic) UIImageView *revertTipView; // @synthesize revertTipView=_revertTipView;
@property(retain, nonatomic) QYPPCircleButton *moreCircleBtn; // @synthesize moreCircleBtn=_moreCircleBtn;
@property(retain, nonatomic) QYPPCircleButton *backCircleBtn; // @synthesize backCircleBtn=_backCircleBtn;
@property(retain, nonatomic) QYPPVideoEpisodesViewSource *episodesSource; // @synthesize episodesSource=_episodesSource;
@property(nonatomic) unsigned long long fromSubType4Head; // @synthesize fromSubType4Head=_fromSubType4Head;
@property(nonatomic) _Bool isCancelShare; // @synthesize isCancelShare=_isCancelShare;
@property(nonatomic) __weak QYPPHalfScreenMultiImageViewController *halfScreenMultiImageViewController; // @synthesize halfScreenMultiImageViewController=_halfScreenMultiImageViewController;
@property(nonatomic) __weak UIViewController *halfSreenFeedDetail; // @synthesize halfSreenFeedDetail=_halfSreenFeedDetail;
@property(retain, nonatomic) QPHeadPlayTankView *playContainerView; // @synthesize playContainerView=_playContainerView;
@property(retain, nonatomic) NSDictionary *selectEpisode; // @synthesize selectEpisode=_selectEpisode;
@property(nonatomic) _Bool isEnterAutoPlay; // @synthesize isEnterAutoPlay=_isEnterAutoPlay;
@property(nonatomic) _Bool isAutoShowEpisodeView; // @synthesize isAutoShowEpisodeView=_isAutoShowEpisodeView;
- (void).cxx_destruct;
- (_Bool)getHeadPlayerShow;
- (void)setApplyMasterNeedJoinTipShow:(_Bool)arg1;
- (void)playEpisodeFromTail:(id)arg1;
- (void)updateNavbarWithAlpha:(double)arg1;
- (void)playVideo:(id)arg1;
- (void)subViewController:(id)arg1 scrollView:(id)arg2 offsetChange:(double)arg3;
- (void)showNavPlayBtn:(_Bool)arg1;
- (void)synchPlayViewTop:(double)arg1 scrollView:(id)arg2;
- (void)subViewController:(id)arg1 scrollTopViewTop:(double)arg2;
- (void)getConfigForSubViewController:(id)arg1;
- (void)addCircleNotification;
- (void)publish;
- (void)navBarPlayClick:(id)arg1;
- (void)updateSubViewControllers;
- (void)share;
- (void)more;
- (void)updateNavBarRightItems;
- (void)initEpisodeView;
- (_Bool)isShowHeadView;
- (_Bool)isShowRevertTip;
- (void)updateTabTypeIfNeed;
- (void)viewSourceDidFinish:(id)arg1;
- (void)loadQYPPTabBarController;
- (void)loadGlassView;
- (void)loadPublishButton;
- (void)loadTopView;
- (void)loadCustomNavBtns;
- (void)tapAction:(id)arg1;
- (void)hideRevertTip;
- (void)showRevertTip;
- (void)loadPlayContainerView;
- (void)showInitView;
- (void)showBtnsView;
- (id)getSelectSubViewController;
- (void)refresh;
- (void)refreshTheHeader;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)closePlay4VC;
- (void)autoPlayAction:(_Bool)arg1;
- (void)autoPlayAction;
- (void)checkAndAutoPlayAction;
- (void)cancelDelayPlay;
- (_Bool)isWrongFrame4SuperView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reregisterHandler;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

