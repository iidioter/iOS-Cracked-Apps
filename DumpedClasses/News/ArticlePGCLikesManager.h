//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSString, SSHttpOperation;

@interface ArticlePGCLikesManager : NSObject
{
    _Bool _hasMore;
    _Bool _loading;
    NSMutableArray *_likePGCAccounts;
    id <ArticlePGCLikesManagerDelegate> _delegate;
    NSString *_userID;
    unsigned long long _offset;
    NSMutableSet *_likePGCAccountIDs;
    SSHttpOperation *_fetchPGCLikeUsersRequest;
}

@property(retain, nonatomic) SSHttpOperation *fetchPGCLikeUsersRequest; // @synthesize fetchPGCLikeUsersRequest=_fetchPGCLikeUsersRequest;
@property(retain, nonatomic) NSMutableSet *likePGCAccountIDs; // @synthesize likePGCAccountIDs=_likePGCAccountIDs;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <ArticlePGCLikesManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableArray *likePGCAccounts; // @synthesize likePGCAccounts=_likePGCAccounts;
- (void).cxx_destruct;
- (void)operation:(id)arg1 finishedResult:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)loadMore;
- (void)fetchPGCLikeUsersListByUserID:(id)arg1;
- (void)resetData;
- (void)dealloc;

@end

