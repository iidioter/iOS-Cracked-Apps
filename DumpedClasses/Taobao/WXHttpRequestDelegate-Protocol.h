//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, WXHttpRequest;

@protocol WXHttpRequestDelegate <NSObject>

@optional
- (void)request:(WXHttpRequest *)arg1 onProgress:(float)arg2;
- (void)request:(WXHttpRequest *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)requestDidFinishLoad:(WXHttpRequest *)arg1;
- (void)requestDidStartLoad:(WXHttpRequest *)arg1;
@end
