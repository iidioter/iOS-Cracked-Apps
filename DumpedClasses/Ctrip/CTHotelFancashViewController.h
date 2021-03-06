//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class CTH5ViewController, CTHotelOrderCacheBean, UIButton, UILabel, UIView;

@interface CTHotelFancashViewController : CTRootViewController
{
    UIView *_infoView;
    UILabel *_infoLabel;
    UILabel *_amountLabel;
    UILabel *_remakLabel;
    UIButton *_selectButton;
    CTHotelOrderCacheBean *_orderCache;
    CTH5ViewController *_webViewController;
    id <CTHotelFancashDelegate> _mDelegate;
}

@property(nonatomic) __weak id <CTHotelFancashDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
@property(retain, nonatomic) CTH5ViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) __weak CTHotelOrderCacheBean *orderCache; // @synthesize orderCache=_orderCache;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UILabel *remakLabel; // @synthesize remakLabel=_remakLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
- (void).cxx_destruct;
- (void)selectAction:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)initSubView;
- (void)viewDidLoad;
- (id)initWithisOrderCache:(id)arg1 delegate:(id)arg2;

@end

