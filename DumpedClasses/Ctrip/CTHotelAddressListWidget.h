//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTContactListWidget.h"

#import "CTContactEditWidgetDelegate.h"

@class NSString;

@interface CTHotelAddressListWidget : CTContactListWidget <CTContactEditWidgetDelegate>
{
    _Bool _isLoading;
    _Bool _backAfterAdd;
    int addressType;
    NSString *_contactMobile;
}

+ (id)findAddressByID:(int)arg1;
@property(retain, nonatomic) NSString *contactMobile; // @synthesize contactMobile=_contactMobile;
@property(nonatomic) _Bool backAfterAdd; // @synthesize backAfterAdd=_backAfterAdd;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) int addressType; // @synthesize addressType;
- (void).cxx_destruct;
- (void)doEditAddress:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)doAddAddress:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)doDelAddress:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)contactEditWidget:(id)arg1 deleteNode:(id)arg2;
- (void)contactEditWidget:(id)arg1 editedNode:(id)arg2;
- (void)contactEditWidget:(id)arg1 addNewNode:(id)arg2;
- (void)widgetGetNodeList;
- (void)updateNodeStates;
- (void)handleTitleBarLeftButton:(id)arg1;
- (void)handleEventSelectItem:(id)arg1;
- (void)nodeDidSelect:(id)arg1;
- (void)editNode:(id)arg1;
- (void)addNode;
- (_Bool)contactEditWidget:(id)arg1 checkNode:(id)arg2;
- (_Bool)checkSelectedNode:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)creationTitle;
- (void)widgetDidDisappear;
- (void)widgetDidAppear;
- (void)widgetWillAppear;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pullDownToRefreshWillBegin:(id)arg1;
- (void)pullDownToRefreshData:(id)arg1;
- (void)updateFail;
- (void)updateSuc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
