//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SSThemedTableView, STTableViewCellItem, STTableViewSectionItem, UITapGestureRecognizer;

@interface SSDebugViewController : SSViewControllerBase <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_dataSource;
    SSThemedTableView *_tableView;
    STTableViewCellItem *_itemAB;
    STTableViewCellItem *_itemTTUGCCell;
    STTableViewCellItem *_itemSourceImg;
    STTableViewCellItem *_item01;
    STTableViewCellItem *_item10;
    STTableViewCellItem *_item11;
    STTableViewSectionItem *_section1;
    STTableViewCellItem *_item41;
    STTableViewCellItem *_itemFacebook;
    STTableViewCellItem *_itemOwnPlayer;
    STTableViewCellItem *_item50;
    STTableViewCellItem *_item51;
    STTableViewCellItem *_item52;
    STTableViewCellItem *_item53;
    STTableViewCellItem *_item54;
    UITapGestureRecognizer *_tapGestureForResignFirstResponder;
}

+ (_Bool)supportDebugSubitem:(long long)arg1;
+ (_Bool)supportDebugItem:(long long)arg1;
+ (_Bool)supportHttps;
+ (_Bool)supportWKWebView;
+ (_Bool)supportTestVideoOwnPlayer;
+ (_Bool)supportTestVideoFacebook;
+ (_Bool)supportTestImageSubject;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureForResignFirstResponder; // @synthesize tapGestureForResignFirstResponder=_tapGestureForResignFirstResponder;
@property(nonatomic) __weak STTableViewCellItem *item54; // @synthesize item54=_item54;
@property(nonatomic) __weak STTableViewCellItem *item53; // @synthesize item53=_item53;
@property(nonatomic) __weak STTableViewCellItem *item52; // @synthesize item52=_item52;
@property(nonatomic) __weak STTableViewCellItem *item51; // @synthesize item51=_item51;
@property(nonatomic) __weak STTableViewCellItem *item50; // @synthesize item50=_item50;
@property(nonatomic) __weak STTableViewCellItem *itemOwnPlayer; // @synthesize itemOwnPlayer=_itemOwnPlayer;
@property(nonatomic) __weak STTableViewCellItem *itemFacebook; // @synthesize itemFacebook=_itemFacebook;
@property(nonatomic) __weak STTableViewCellItem *item41; // @synthesize item41=_item41;
@property(nonatomic) __weak STTableViewSectionItem *section1; // @synthesize section1=_section1;
@property(nonatomic) __weak STTableViewCellItem *item11; // @synthesize item11=_item11;
@property(nonatomic) __weak STTableViewCellItem *item10; // @synthesize item10=_item10;
@property(nonatomic) __weak STTableViewCellItem *item01; // @synthesize item01=_item01;
@property(nonatomic) __weak STTableViewCellItem *itemSourceImg; // @synthesize itemSourceImg=_itemSourceImg;
@property(nonatomic) __weak STTableViewCellItem *itemTTUGCCell; // @synthesize itemTTUGCCell=_itemTTUGCCell;
@property(nonatomic) __weak STTableViewCellItem *itemAB; // @synthesize itemAB=_itemAB;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_cancelActionFired:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldResignFirstResponder;
- (void)resetUserWatchVideo;
- (void)clearUserCachedData;
- (void)_newUserSettingActionFired;
- (void)_goToDetail:(id)arg1;
- (void)commonParameterHandle:(id)arg1;
- (void)_autoFloatingRefreshBtnInterval:(id)arg1;
- (void)_showFloatingRefreshBtn:(id)arg1;
- (void)_lastReadStyleFired:(id)arg1;
- (void)_imCommunicateStrategy:(id)arg1;
- (void)cacheTTUniversalCommentCell:(id)arg1;
- (void)_waterMasterActionFired:(id)arg1;
- (void)videoDetailPlayLastShowTextActionFired:(id)arg1;
- (void)videoDetailPlayLastBtnEnableActionFired:(id)arg1;
- (void)VideoADReplayBtnEnabledActionFired:(id)arg1;
- (void)videoCellShowShareButton:(id)arg1;
- (void)videoAutoPlay:(id)arg1;
- (void)videoDetailIntensifyAuthor:(id)arg1;
- (void)videoAdCellDislike:(id)arg1;
- (void)videoBusinessSplit:(id)arg1;
- (void)videoNewRotate:(id)arg1;
- (void)videoNewRotateTip:(id)arg1;
- (void)videoProportion:(id)arg1;
- (void)feedUrlOpen:(id)arg1;
- (void)_multiResolutionActionFired:(id)arg1;
- (void)_httpsSettingActionFired:(id)arg1;
- (void)screenshotShare;
- (void)_appMemoryMonitorActionFired:(id)arg1;
- (void)_leakFinderAndMainThreadGuardActionFired:(id)arg1;
- (id)changeEnableWirhDict:(id)arg1 key:(id)arg2;
- (void)_fireHTSABDict;
- (void)_fireSpalshAd;
- (void)_crashActionFired;
- (void)_useLayOutForUnifyADCellFired:(id)arg1;
- (void)_useLayOutForCellFired:(id)arg1;
- (void)picturesSlideOutActionFired:(id)arg1;
- (void)_posterADActionFired:(id)arg1;
- (void)_encryActionFired:(id)arg1;
- (void)_taobaosdkActionFired:(id)arg1;
- (void)_wkwebviewSettingActionFired:(id)arg1;
- (long long)_fontSizeForCellSubtitle;
- (long long)_fontSizeForCellTitle;
- (_Bool)_shouldAllowHttps;
- (_Bool)_shouldAllowWKWebView;
- (_Bool)_shouldAutomaticallyChangeCity;
- (void)_setShouldAutomaticallyChangeCity:(_Bool)arg1;
- (void)_testVideoFacebookActionFired:(id)arg1;
- (void)_testVideoOwnPlayerActionFired:(id)arg1;
- (void)_testImageSubjectActionFired:(id)arg1;
- (void)_readUserDefaultsActionFired;
- (void)_testDNSActionFired;
- (void)_testTracerouteActionFired;
- (void)_testPingActionFired;
- (void)_fakeUserLocationActionFired;
- (void)_connectLogServerActionFired;
- (void)_openHTSVideoDetail;
- (void)_openCallNativePhoneWebPage;
- (void)_openNetworkStubActionFired;
- (void)_switchToNewMessageNotification:(id)arg1;
- (void)_switchImageTransitionAnimation:(id)arg1;
- (void)_switchLaunchHuoShanAppEnabled:(id)arg1;
- (void)_switchForthTabHtsTab:(id)arg1;
- (void)_switchTransitionAnimation:(id)arg1;
- (void)_switchSharedWebView:(id)arg1;
- (void)_switchToNewPullRefresh:(id)arg1;
- (void)_switchTo4G:(id)arg1;
- (void)_openFlexActionFired;
- (void)_openMessageNotificationActionFired:(id)arg1;
- (void)_openForumActionFired;
- (void)_logUmengActionFired:(id)arg1;
- (void)_setShouldUseRefactorTracker:(id)arg1;
- (_Bool)_shouldSaveApplog;
- (void)_setShouldSaveApplog:(id)arg1;
- (void)testGuideSettingActionFired;
- (void)_userSelectActionFired:(id)arg1;
- (void)_sourceImgActionFired:(id)arg1;
- (void)_ttUGCCellActionFired:(id)arg1;
- (void)_abActionFired:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)_sendDeviceActionFired:(id)arg1;
- (void)_reloadRightBarItem;
- (void)reloadData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)makeACrash;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

