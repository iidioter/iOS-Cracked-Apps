//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPCardFeedFlowsViewController.h"

@class NSNumber;

@interface QYPPCardWelfareViewController : QYPPCardFeedFlowsViewController
{
    NSNumber *_activityId;
    NSNumber *_targetCircleId;
}

@property(retain, nonatomic) NSNumber *targetCircleId; // @synthesize targetCircleId=_targetCircleId;
@property(retain, nonatomic) NSNumber *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)cardViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (id)invalidString;
- (double)bottomHeight;
- (double)topHeight;
- (_Bool)shouldHandlePulishEntity:(id)arg1;
- (id)cardFakeDataURLWithID:(id)arg1;
- (id)publishingFeeds;
- (_Bool)shouldClick2Edit:(id)arg1;
- (void)loadDataDone;
- (void)publishCicked;
- (id)refreshParamsDict;
- (id)baseURL;
- (id)p_getPageData;
- (void)didReceiveMemoryWarning;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)initTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

