//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseDialogViewController.h"

@class CFT_UIGroupStyleView, NSString, UIButton, UILabel, UIView;

@interface CFT_UIBaseRichViewController : CFT_UIBaseDialogViewController
{
    CFT_UIGroupStyleView *groupGoodsInfo;
    UILabel *labelTitle;
    UILabel *labelSubtitle1;
    UILabel *labelSubtitle2;
    UIButton *nextButton;
    UIView *topView;
    _Bool _callbackWhileClosed;
    int _style;
    NSString *_goodsName;
    NSString *_goodsPrice;
    NSString *_promotion;
    NSString *_promotionType;
    NSString *_promotion_show;
    NSString *_discount_type;
}

@property(nonatomic) _Bool callbackWhileClosed; // @synthesize callbackWhileClosed=_callbackWhileClosed;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *discount_type; // @synthesize discount_type=_discount_type;
@property(retain, nonatomic) NSString *promotion_show; // @synthesize promotion_show=_promotion_show;
@property(retain, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(retain, nonatomic) NSString *promotion; // @synthesize promotion=_promotion;
@property(retain, nonatomic) NSString *goodsPrice; // @synthesize goodsPrice=_goodsPrice;
@property(retain, nonatomic) NSString *goodsName; // @synthesize goodsName=_goodsName;
- (void)removeLoadingView;
- (void)showLoadingViewWithText:(id)arg1;
- (void)showLoadingView;
- (id)navigationController;
- (void)closeButtonClick:(id)arg1;
- (void)nextButtonClick:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)onBackgroundTapped;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)popTPViewController:(_Bool)arg1;
- (void)pushTPViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setScene:(int)arg1;
- (void)setNextButtonHidden:(_Bool)arg1;
- (void)setNextButtonTitle:(id)arg1;
- (void)dealloc;
- (void)layoutSubviewsOnView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
