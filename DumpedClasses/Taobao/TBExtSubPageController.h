//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBExtBuyBuilderDelegate.h"

@class NSString;

@interface TBExtSubPageController : UIViewController <TBExtBuyBuilderDelegate>
{
    id <TBExtBuyBuilderProtocol> _builder;
}

@property(retain, nonatomic) id <TBExtBuyBuilderProtocol> builder; // @synthesize builder=_builder;
- (void).cxx_destruct;
- (void)backItemClicked:(id)arg1;
- (void)setNavigationRightBtn:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)showMessage:(id)arg1;
- (void)subPageBack;
- (void)setNavigationTitle:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

