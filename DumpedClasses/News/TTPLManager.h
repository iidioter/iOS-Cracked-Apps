//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTIMMsgExt.h"

@class NSMutableDictionary, NSString, TTIMChatCenterViewModel;

@interface TTPLManager : NSObject <TTIMMsgExt>
{
    _Bool _needShowTip;
    _Bool _hasShowTip;
    TTIMChatCenterViewModel *_chatCenterViewModel;
    unsigned long long _unreadNumber;
    NSString *_currentSession;
    NSMutableDictionary *_drafts;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *drafts; // @synthesize drafts=_drafts;
@property(readonly, nonatomic) _Bool hasShowTip; // @synthesize hasShowTip=_hasShowTip;
@property(nonatomic) _Bool needShowTip; // @synthesize needShowTip=_needShowTip;
@property(copy, nonatomic) NSString *currentSession; // @synthesize currentSession=_currentSession;
@property(nonatomic) unsigned long long unreadNumber; // @synthesize unreadNumber=_unreadNumber;
@property(retain, nonatomic) TTIMChatCenterViewModel *chatCenterViewModel; // @synthesize chatCenterViewModel=_chatCenterViewModel;
- (void).cxx_destruct;
- (id)getDraftWithSessionId:(id)arg1;
- (void)setDraft:(id)arg1 withSessionId:(id)arg2;
- (void)clearAllData;
- (void)setHasShowTip;
- (void)refreshUnreadNumber;
- (void)refreshChatCenterModel;
- (void)removeUnreadNumberWithSessionName:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

