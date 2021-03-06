//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DCOLHintUnitDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DCGLSectionFooterView, DCGroupListMaker, DCOLHintUnit, NSArray, NSString, UILabel, UITableView;

@interface DCGroupListView : UIView <UITableViewDataSource, UITableViewDelegate, DCOLHintUnitDelegate>
{
    DCGroupListMaker *_maker;
    id <DCGroupListViewDelegate> _groupListDelegate;
    NSArray *_groupDataArray;
    DCOLHintUnit *_hintUnit;
    UITableView *_tbView;
    UIView *_headerView;
    UIView *_fixView;
    UIView *_adView;
    double _navHeight;
    double _headerHeight;
    double _fixViewHeight;
    double _fixViewAdditionHeight;
    double _adHeight;
    double _listWidth;
    long long _askingMoreSection;
    long long _lastCellTag;
    DCGLSectionFooterView *_askingMoreSectionView;
    CDUnknownBlockType _updateBlock;
    UILabel *_defaultFooter;
}

+ (id)createView:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UILabel *defaultFooter; // @synthesize defaultFooter=_defaultFooter;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) DCGLSectionFooterView *askingMoreSectionView; // @synthesize askingMoreSectionView=_askingMoreSectionView;
@property(nonatomic) long long lastCellTag; // @synthesize lastCellTag=_lastCellTag;
@property(nonatomic) long long askingMoreSection; // @synthesize askingMoreSection=_askingMoreSection;
@property(nonatomic) double listWidth; // @synthesize listWidth=_listWidth;
@property(nonatomic) double adHeight; // @synthesize adHeight=_adHeight;
@property(nonatomic) double fixViewAdditionHeight; // @synthesize fixViewAdditionHeight=_fixViewAdditionHeight;
@property(nonatomic) double fixViewHeight; // @synthesize fixViewHeight=_fixViewHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) double navHeight; // @synthesize navHeight=_navHeight;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UIView *fixView; // @synthesize fixView=_fixView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tbView; // @synthesize tbView=_tbView;
@property(retain, nonatomic) DCOLHintUnit *hintUnit; // @synthesize hintUnit=_hintUnit;
@property(copy, nonatomic) NSArray *groupDataArray; // @synthesize groupDataArray=_groupDataArray;
@property(nonatomic) __weak id <DCGroupListViewDelegate> groupListDelegate; // @synthesize groupListDelegate=_groupListDelegate;
@property(retain, nonatomic) DCGroupListMaker *maker; // @synthesize maker=_maker;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)loadMoreDataSource;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didSelectHintView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshDataSource;
- (void)adjustViewHierarchy;
- (void)adjustHeaderFrame;
- (void)scrollToTopIfNeed;
- (void)updateHeaderHeight:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)resetAskingMoreSection;
- (void)reloadTableView;
- (void)resetNoMoreDataOfTableViewFooter;
- (void)noticeNoMoreDataOfTableViewFooter;
- (void)endRefreshingOfTableViewFooter;
- (void)hideTabelViewFooter;
- (void)showTableViewFooter;
- (void)buildView;
- (void)buildSignal;
- (void)resetContentSize;
- (void)updateContentInset;
- (_Bool)hasMore;
- (void)dealWithFooterDisplay;
- (void)updateFooterStatusWithDataIsEmpty:(_Bool)arg1;
- (void)updateFooterStatus;
- (void)setFooterManualStatus;
- (id)buildGroupListView;
- (void)dealloc;
- (void)closeRefresh;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

