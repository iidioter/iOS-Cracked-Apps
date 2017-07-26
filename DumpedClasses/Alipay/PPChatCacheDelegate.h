//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PPChatCacheDelegate : NSObject
{
    NSString *_userId;
    id <PPChatCacheDAOProxy> _daoProxy;
}

@property(retain, nonatomic) id <PPChatCacheDAOProxy> daoProxy; // @synthesize daoProxy=_daoProxy;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)cacheClear;
- (void)updateMessages:(id)arg1;
- (void)saveSetting:(id)arg1;
- (void)saveMenu:(id)arg1 withPublicId:(id)arg2 thirdPartyAccountId:(id)arg3;
- (void)saveThirdPartyAccounts:(id)arg1 withPublicId:(id)arg2;
- (void)savePublicAccount:(id)arg1;
- (id)cachedMessagesForPublicId:(id)arg1 thirdPartyAccountId:(id)arg2 before:(id)arg3 limit:(int)arg4 gotAll:(_Bool *)arg5;
- (id)cachedSettingForPublicId:(id)arg1;
- (id)cachedMenuForPublicId:(id)arg1 thirdPartyAccountId:(id)arg2;
- (id)cachedThirdPartyAccountsForPublicId:(id)arg1;
- (id)cachedPublicAccountForPublicId:(id)arg1;
- (void)clearMessagesForPublicId:(id)arg1 thirdPartyAccountId:(id)arg2;
- (void)clearDataForObjectId:(id)arg1;
- (void)dealloc;
- (id)initWithUserId:(id)arg1;
- (_Bool)deleteMessagesWithOwnerId:(id)arg1;
- (_Bool)clearDataWithOwnerId:(id)arg1;
- (_Bool)writeEntityData:(id)arg1 forOwnerId:(id)arg2 type:(id)arg3;
- (id)queryEntityDataForOwnerId:(id)arg1 type:(id)arg2;
- (void)closeDatabase;
- (void)openDatabase;

@end
