//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBFeedToolboxManager, FBPullToRefreshView, FBSportsFactDataSource, FBTransientViewStateManager, FBUserSession, NSObject, NSString, UICollectionView;

@interface FBSportsPlaysViewController : UIViewController
{
    FBUserSession *_session;
    NSString *_pageID;
    unsigned long long _filter;
    NSObject *_scenePath;
    UICollectionView *_collectionView;
    FBPullToRefreshView *_ptrView;
    FBTransientViewStateManager *_viewStateManager;
    FBFeedToolboxManager *_toolboxManager;
    FBSportsFactDataSource *_playsDataSource;
}

- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsModule;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)fb_showNavBarSearchField;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithPageID:(id)arg1 filter:(unsigned long long)arg2 session:(id)arg3;

@end

