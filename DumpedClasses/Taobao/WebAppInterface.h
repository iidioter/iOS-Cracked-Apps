//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class TBBarButtonItem;

@interface WebAppInterface : WVDynamicHandler
{
    _Bool _needResetRightItem;
    _Bool _needResetMoreItem;
    _Bool _needResetShortcutToDesktop;
    _Bool _needResetDefaultMoreItem;
    _Bool _needResetFestivalStyle;
    TBBarButtonItem *_oldRightItem;
    long long _oldFestivalStyle;
}

+ (void)enableHookNativeBack:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)pop:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)setPageUserInfo:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)forbidPanGesture:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)enableStatusBarClicked:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)addShortcutToDesktop:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)updateBadgeTextWithPrice:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)updateBadgeText:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (unsigned long long)instanceScope;
@property(nonatomic) long long oldFestivalStyle; // @synthesize oldFestivalStyle=_oldFestivalStyle;
@property(nonatomic) _Bool needResetFestivalStyle; // @synthesize needResetFestivalStyle=_needResetFestivalStyle;
@property(nonatomic) _Bool needResetDefaultMoreItem; // @synthesize needResetDefaultMoreItem=_needResetDefaultMoreItem;
@property(nonatomic) _Bool needResetShortcutToDesktop; // @synthesize needResetShortcutToDesktop=_needResetShortcutToDesktop;
@property(nonatomic) _Bool needResetMoreItem; // @synthesize needResetMoreItem=_needResetMoreItem;
@property(nonatomic) _Bool needResetRightItem; // @synthesize needResetRightItem=_needResetRightItem;
@property(retain, nonatomic) TBBarButtonItem *oldRightItem; // @synthesize oldRightItem=_oldRightItem;
- (void).cxx_destruct;
- (void)resetWVJSBridgeInstance:(id)arg1;
- (void)clearShortcutToDesktop:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)setShortcutToDesktop:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)setFestivalStyle:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)hideNaviBarDefaultMoreItem:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)clearNaviBarMoreItem:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)setNaviBarMoreItem:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)clearNaviBarRightItem:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)naviBarRightItemClicked:(id)arg1;
- (void)setNaviBarRightItem:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;

@end
