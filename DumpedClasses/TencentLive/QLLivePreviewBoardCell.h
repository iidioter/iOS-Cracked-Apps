//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "QLImageLoadDelegate.h"
#import "QLLightSprayVideoViewDelegate.h"
#import "QLONAPosterImageViewDataSouce.h"
#import "QLPlayerPreviewDelegate.h"
#import "QLSprayViewCellActionDelegate.h"

@class NSString, QLJCEONALivePreviewBoard, QLLightSprayView, QLLivePreviewBoardControlView;

@interface QLLivePreviewBoardCell : QLBaseTabelViewCell <QLLightSprayVideoViewDelegate, QLImageLoadDelegate, QLONAPosterImageViewDataSouce, QLPlayerPreviewDelegate, QLSprayViewCellActionDelegate>
{
    QLLivePreviewBoardControlView *_ctlView;
    QLLightSprayView *_sprayView;
    _Bool _isCheckingLiveStatus;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(nonatomic) _Bool isCheckingLiveStatus; // @synthesize isCheckingLiveStatus=_isCheckingLiveStatus;
@property(readonly) QLLightSprayView *sprayView; // @synthesize sprayView=_sprayView;
- (void).cxx_destruct;
- (_Bool)shouldResponseAutoPlay;
- (id)sprayViewInCell;
- (struct CGRect)getOnaPosterImageViewFrame;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2;
- (void)reportShowUp;
- (_Bool)isCurrentPreviewCharater;
- (void)lightSprayVideoViewDidFinished:(id)arg1;
- (void)lightSprayVideoViewDidStop:(id)arg1;
- (void)lightSprayVideoViewDidStarToPlay:(id)arg1;
- (void)stopPoll;
- (void)startPoll;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)refreshAttentState;
- (void)checkLiveStatus;
- (void)prepareForReuse;
@property(readonly) QLJCEONALivePreviewBoard *previewBoard;
- (void)didTapCtlView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

