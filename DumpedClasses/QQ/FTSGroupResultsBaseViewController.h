//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "FTSGroupResultsDelegate.h"
#import "FTSNoMoreResultDelegate.h"
#import "QQDynamicSearchTableFootLoadingViewDelegate.h"
#import "UISearchBarDelegate.h"

@class FTSCustomSearchBar, FTSEntranceViewController, FTSGaussBlurMaskView, FTSGroupResultsTabViewController, FTSGroupResultsTableView, FTSNoMoreResultView, NSData, NSString, QQDynamicSearchTableFootLoadingView;

@interface FTSGroupResultsBaseViewController : QQViewController <FTSGroupResultsDelegate, FTSNoMoreResultDelegate, QQDynamicSearchTableFootLoadingViewDelegate, UISearchBarDelegate>
{
    FTSNoMoreResultView *_ftsNoResultView;
    FTSGaussBlurMaskView *_ftsSearchBgView;
    FTSGroupResultsTableView *_ftsGroupResultsTableView;
    long long _currentState;
    long long _lastState;
    NSString *_lastKeyWord;
    CDUnknownBlockType _onOperateCallBack;
    struct CGRect _contentFrame;
    QQDynamicSearchTableFootLoadingView *_footerView;
    long long _currentMoreStatus;
    _Bool _firstDontShowKeyboard;
    NSString *_searchVersion;
    _Bool _dontSetSearchBarDelegate;
    _Bool _dontShowAISearch;
    _Bool _needSearchNet;
    _Bool _isClickItemFirst;
    _Bool _isEnd;
    long long _showStyle;
    long long _pageShowStyle;
    FTSCustomSearchBar *_ftsContainerSearchBar;
    NSString *_searchBarPlaceholder;
    long long _searchStateFilter;
    FTSEntranceViewController *_ftsEntranceViewController;
    FTSGroupResultsTabViewController *_ftsGroupResultsTabViewController;
    NSData *_cookie;
}

+ (id)_searchTextAdapterZhEnHandle:(id)arg1;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(copy, nonatomic) NSData *cookie; // @synthesize cookie=_cookie;
@property(nonatomic) _Bool isClickItemFirst; // @synthesize isClickItemFirst=_isClickItemFirst;
@property(nonatomic) _Bool needSearchNet; // @synthesize needSearchNet=_needSearchNet;
@property(nonatomic) __weak FTSGroupResultsTabViewController *ftsGroupResultsTabViewController; // @synthesize ftsGroupResultsTabViewController=_ftsGroupResultsTabViewController;
@property(nonatomic) __weak FTSEntranceViewController *ftsEntranceViewController; // @synthesize ftsEntranceViewController=_ftsEntranceViewController;
@property(nonatomic) long long searchStateFilter; // @synthesize searchStateFilter=_searchStateFilter;
@property(nonatomic) _Bool dontShowAISearch; // @synthesize dontShowAISearch=_dontShowAISearch;
@property(nonatomic) _Bool dontSetSearchBarDelegate; // @synthesize dontSetSearchBarDelegate=_dontSetSearchBarDelegate;
@property(copy, nonatomic) NSString *searchBarPlaceholder; // @synthesize searchBarPlaceholder=_searchBarPlaceholder;
@property(retain, nonatomic) FTSCustomSearchBar *ftsContainerSearchBar; // @synthesize ftsContainerSearchBar=_ftsContainerSearchBar;
@property(nonatomic) long long pageShowStyle; // @synthesize pageShowStyle=_pageShowStyle;
@property(nonatomic) long long showStyle; // @synthesize showStyle=_showStyle;
- (void).cxx_destruct;
- (void)clickTabOrScrollTabShow;
- (id)getSearchVersion;
- (id)getLastKeyWord;
- (void)onTableFootLoadingViewClick:(id)arg1;
- (void)onClickNoMoreResultView:(id)arg1;
- (void)onDidScrollViewBeginDragging;
- (id)onGetSearchKeyword;
- (void)cancelSearchBarDelegate;
- (void)setSearchBarDelegate;
- (_Bool)hasFTSFeedListResult;
- (void)handleNewWorkState:(long long)arg1 text:(id)arg2;
- (void)setLoadMoreStatus:(long long)arg1;
- (id)ftsGetAllFeedModel;
- (void)forceStartNetSearch:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)_performHandleSearchProcess:(id)arg1;
- (void)_searchEventHandleSearchProcess:(id)arg1;
- (void)_searchEventHandleSearchProcessNew:(id)arg1;
- (void)searchEventHandleSearchProcess:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)_handleNormalInputLanguage:(id)arg1;
- (_Bool)_handleZhInputLanguage:(id)arg1;
- (void)delaySearchT9KeyBoard:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)openTimeInput;
- (_Bool)openZnHans;
- (id)_getHandledCurrentSearchText;
- (void)handleShowNoResult;
- (void)handleShowStateNormalNetSearchEnter;
- (void)handleShowStateNormal;
- (void)reloadSearchStateAppearance;
- (void)resetCurrentSearchState:(long long)arg1;
- (long long)currentSearchState;
- (void)refreshSearchGroupResults:(_Bool)arg1 isNeedContinueRefresh:(_Bool)arg2;
- (void)stopLoading;
- (void)startLoading;
- (void)clearLastSearchWord;
- (void)clearGroupResultsTable;
- (_Bool)isSupportFullScreenLayout;
- (_Bool)isSupportRightDragToGoBack;
- (void)dismissSearchBarFirstResponder;
- (void)ftsCustomSearchBarChange:(id)arg1;
- (void)ftsCustomSearchBarReturnButtonClicked:(id)arg1;
- (void)adjustViewFrameWhenCreateSearchBar;
- (void)keyboardWillShow:(id)arg1;
- (void)initializeFTSCustomSearchBar;
- (void)initializeGroupResultsTable;
- (void)initializeNoResultsPage;
- (void)initializeSearchBackgroud;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSearchKeyword:(id)arg1 onOperateCallBack:(CDUnknownBlockType)arg2;
- (id)initWithSearchKeyword:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
