//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ShareTokenManager : NSObject
{
}

+ (void)shareTokenWithShareData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)shareTokenWithTitle:(id)arg1 preContent:(id)arg2 token:(id)arg3 endContent:(id)arg4 channel:(long long)arg5;
+ (void)shareTokenWithTitle:(id)arg1 preContent:(id)arg2 token:(id)arg3 endContent:(id)arg4;
+ (id)getVerifiedToken:(id)arg1;

@end
