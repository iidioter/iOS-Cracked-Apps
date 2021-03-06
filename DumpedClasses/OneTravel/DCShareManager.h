//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONEShareSDKManagerDelegate.h"

@class JSONModel, NSString, UIImage;

@interface DCShareManager : NSObject <ONEShareSDKManagerDelegate>
{
    UIImage *_shareWechatImg;
    id <DCShareManagerDelegate> _delegate;
    JSONModel *_shareModel;
}

+ (id)baseShareParams;
+ (id)sharedInstance;
@property(retain, nonatomic) JSONModel *shareModel; // @synthesize shareModel=_shareModel;
@property(nonatomic) __weak id <DCShareManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *shareWechatImg; // @synthesize shareWechatImg=_shareWechatImg;
- (void).cxx_destruct;
- (long long)changeShareChannel:(long long)arg1;
- (unsigned long long)shareType;
- (id)shareContentModelForShareChannel:(long long)arg1;
- (void)shareSDKManagerSharedFail:(long long)arg1;
- (void)shareSDKManagerSharedSuccess:(long long)arg1;
- (id)shareSDK:(id)arg1 didSelcected:(long long)arg2 channelDesc:(id)arg3;
- (id)shareSDK:(id)arg1 didSelcected:(long long)arg2;
- (id)sharedChannel:(id)arg1;
- (void)clearShare:(id)arg1;
- (void)bingShareViewToFront;
- (void)showShareViewInSuperView:(id)arg1 withShareModel:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

