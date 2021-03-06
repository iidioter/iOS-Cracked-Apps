//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMSnsUserInfo : NSObject
{
    NSString *_snsUid;
    NSString *_snsNickname;
    NSString *_uid;
    NSString *_nickname;
    unsigned long long _state;
    NSString *_snsType;
    NSString *_snsName;
}

@property(retain, nonatomic) NSString *snsName; // @synthesize snsName=_snsName;
@property(nonatomic) NSString *snsType; // @synthesize snsType=_snsType;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *snsNickname; // @synthesize snsNickname=_snsNickname;
@property(retain, nonatomic) NSString *snsUid; // @synthesize snsUid=_snsUid;
- (void).cxx_destruct;
- (id)getNickName;
- (void)fillWithUserInfo:(id)arg1;
- (id)initWithDictionary:(id)arg1 snsType:(id)arg2;

@end

