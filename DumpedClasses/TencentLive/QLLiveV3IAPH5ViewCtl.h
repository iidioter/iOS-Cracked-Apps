//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLWebViewController.h"

@class NSString;

@interface QLLiveV3IAPH5ViewCtl : QLWebViewController
{
    _Bool _shouldCallPop;
    NSString *_toolID;
    long long _productType;
}

@property(nonatomic) _Bool shouldCallPop; // @synthesize shouldCallPop=_shouldCallPop;
@property(nonatomic) long long productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *toolID; // @synthesize toolID=_toolID;
- (void).cxx_destruct;
- (void)popUp:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
