//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CAAnimationDelegate-Protocol.h"
#import "YYTextKeyboardObserver-Protocol.h"

@class CAGradientLayer, NSString, ShareAnimationView, ShareHotspotManager, UIButton, UITextField, UIView;

@interface ShareSubmitViewController : UIViewController <CAAnimationDelegate, YYTextKeyboardObserver>
{
    UITextField *_pwdTextField;
    UIButton *_shareButton;
    ShareHotspotManager *_shareManager;
    UIView *_containerView;
    CAGradientLayer *_gradinentLayer;
    UIView *_bottomView;
    ShareAnimationView *_shareAnimationView;
}

@property(retain, nonatomic) ShareAnimationView *shareAnimationView; // @synthesize shareAnimationView=_shareAnimationView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) CAGradientLayer *gradinentLayer; // @synthesize gradinentLayer=_gradinentLayer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) ShareHotspotManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UITextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
- (void).cxx_destruct;
- (void)addShareAnimationView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)scalButton;
- (id)createGradientLayer;
- (void)backAniamtion;
- (void)startAnimation;
- (void)shareButtonClick;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setup_views;
- (_Bool)navigationShouldPopOnBackButton;
- (void)keyboardChangedWithTransition:(CDStruct_902a08d0)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

