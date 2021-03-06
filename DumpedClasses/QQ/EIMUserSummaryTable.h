//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"
#import "IQQDBOperationBase.h"

@class NSString;

@interface EIMUserSummaryTable : NSObject <DBAccountChangedProtocol, IQQDBOperationBase>
{
}

- (unsigned long long)getTableSign;
- (void)dealloc;
- (void)onDBChanged:(id)arg1;
- (id)init;
- (int)asyncSaveUserSummaryModelToDb:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (int)asyncGetUserSummaryModelFromDb:(long long)arg1 callback:(id)arg2 userdata:(id)arg3;
- (int)asyncDeleteUserSummaryModelFromDb:(long long)arg1 callback:(id)arg2 userdata:(id)arg3;
- (id)getUserSummaryFromDb:(long long)arg1;
- (_Bool)deleteUserSummaryModel:(long long)arg1 db:(id)arg2;
- (_Bool)saveUserSummaryModel:(id)arg1 db:(id)arg2;
- (id)getUserSummary:(long long)arg1 db:(id)arg2;
- (void)createUserSummaryTable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

