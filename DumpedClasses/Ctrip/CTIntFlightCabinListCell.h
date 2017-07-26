//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

#import "CTFlightIntPopViewDelegate.h"

@class CTDashLineView, CTFlightRadioView, CTIntlFlightPolicyInfoViewModel, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CTIntFlightCabinListCell : CTCustomeGroupTableViewCell <CTFlightIntPopViewDelegate>
{
    id <CTIntFlightCabinListCellDelegate> _delegate;
    NSString *_invoiceUrl;
    CTFlightRadioView *_imvBackground;
    UILabel *_labelCabinDiscount;
    UILabel *_labelClass;
    UIView *_tagArea1;
    UILabel *_labelCurrency;
    UILabel *_labelTotalPriceAmount;
    UILabel *_labelChooseOnePackagePrice;
    UIButton *_buttonBook;
    UILabel *_labelRefundExchange;
    UILabel *_labelTicketTax;
    UIView *_tagArea2;
    UIView *_tagArea3;
    UIView *_tagArea4;
    UIView *_tagArea5;
    UILabel *_labelComment;
    UIImageView *_imageViewMultiPU;
    UILabel *_labelMultiPU;
    CTIntlFlightPolicyInfoViewModel *_policyInfoViewModel;
    long long _myAdultAmount;
    long long _myChildrenAmount;
    long long _myBabyAmount;
    NSLayoutConstraint *_cnsTag1Width;
    NSLayoutConstraint *_cnsTag2Width;
    NSLayoutConstraint *_cnsTag3Width;
    NSLayoutConstraint *_cnsTag4Width;
    NSLayoutConstraint *_cnsTag5Width;
    NSLayoutConstraint *_cnslabelClassWidth;
    NSLayoutConstraint *_cnsTag1X;
    NSLayoutConstraint *_cnsTag2X;
    NSLayoutConstraint *_cnsTag3X;
    NSLayoutConstraint *_cnsBackY;
    NSLayoutConstraint *_cnslabelCabinDiscountWidth;
    NSLayoutConstraint *_cnslabelCabinDiscountHeight;
    NSLayoutConstraint *_cnslabelClassHeight;
    NSLayoutConstraint *_cnslabelCurrencyHeight;
    NSLayoutConstraint *_cnslabelTotalPriceAmountHeight;
    NSLayoutConstraint *_cnslabelRefundExchangeHeight;
    NSLayoutConstraint *_cnslabelTicketTaxHeight;
    NSLayoutConstraint *_cnslabelChooseOnePackagePriceWidth;
    NSLayoutConstraint *_cnslabelChooseOnePackagePriceHeight;
    NSLayoutConstraint *_cnslabellabelCommentHeight;
    NSLayoutConstraint *_cnsbuttonBookWidth;
    NSLayoutConstraint *_cnsbuttonBookHeight;
    NSLayoutConstraint *_cnsLabelMultiPuHeight;
    NSLayoutConstraint *_cnsImageViewMultiPUWidth;
    CTDashLineView *_dashLineView;
    NSLayoutConstraint *_cnsImageViewMultiPUTop;
    NSLayoutConstraint *_cnsTagArea4Height;
    NSLayoutConstraint *_cnsImageMultiPUHeight;
    NSLayoutConstraint *_commentToClassLabelTop;
    NSLayoutConstraint *_cnsDashLineTop;
    NSLayoutConstraint *_cnsBtnHeight;
}

+ (id)getChooseOnePackagePriceListWithPolicyModel:(id)arg1;
+ (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2 boundingSize:(struct CGSize)arg3 lineSpace:(double)arg4;
+ (struct CGSize)tagSizeWithArea:(int)arg1 policyModel:(id)arg2 adultsCount:(long long)arg3 childrenCount:(long long)arg4 babyCount:(long long)arg5;
+ (void)setTagArea:(int)arg1 policyModel:(id)arg2 adultsCount:(long long)arg3 childrenCount:(long long)arg4 babyCount:(long long)arg5 container:(id)arg6 withCell:(id)arg7;
+ (id)getCommentStr:(id)arg1 productViewModel:(id)arg2;
+ (id)userInfoForTags:(id)arg1 policyModel:(id)arg2 adultsCount:(long long)arg3 childrenCount:(long long)arg4 babyCount:(long long)arg5;
+ (double)setupCellSubView:(id)arg1 withPolicyModel:(id)arg2 tripType:(int)arg3 isSelected:(_Bool)arg4 productViewModel:(id)arg5 row:(unsigned long long)arg6 adultsCount:(long long)arg7 childrenCount:(long long)arg8 babyCount:(long long)arg9;
@property(retain, nonatomic) NSLayoutConstraint *cnsBtnHeight; // @synthesize cnsBtnHeight=_cnsBtnHeight;
@property(retain, nonatomic) NSLayoutConstraint *cnsDashLineTop; // @synthesize cnsDashLineTop=_cnsDashLineTop;
@property(nonatomic) __weak NSLayoutConstraint *commentToClassLabelTop; // @synthesize commentToClassLabelTop=_commentToClassLabelTop;
@property(retain, nonatomic) NSLayoutConstraint *cnsImageMultiPUHeight; // @synthesize cnsImageMultiPUHeight=_cnsImageMultiPUHeight;
@property(retain, nonatomic) NSLayoutConstraint *cnsTagArea4Height; // @synthesize cnsTagArea4Height=_cnsTagArea4Height;
@property(retain, nonatomic) NSLayoutConstraint *cnsImageViewMultiPUTop; // @synthesize cnsImageViewMultiPUTop=_cnsImageViewMultiPUTop;
@property(retain, nonatomic) CTDashLineView *dashLineView; // @synthesize dashLineView=_dashLineView;
@property(retain, nonatomic) NSLayoutConstraint *cnsImageViewMultiPUWidth; // @synthesize cnsImageViewMultiPUWidth=_cnsImageViewMultiPUWidth;
@property(nonatomic) __weak NSLayoutConstraint *cnsLabelMultiPuHeight; // @synthesize cnsLabelMultiPuHeight=_cnsLabelMultiPuHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnsbuttonBookHeight; // @synthesize cnsbuttonBookHeight=_cnsbuttonBookHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnsbuttonBookWidth; // @synthesize cnsbuttonBookWidth=_cnsbuttonBookWidth;
@property(nonatomic) __weak NSLayoutConstraint *cnslabellabelCommentHeight; // @synthesize cnslabellabelCommentHeight=_cnslabellabelCommentHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelChooseOnePackagePriceHeight; // @synthesize cnslabelChooseOnePackagePriceHeight=_cnslabelChooseOnePackagePriceHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelChooseOnePackagePriceWidth; // @synthesize cnslabelChooseOnePackagePriceWidth=_cnslabelChooseOnePackagePriceWidth;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelTicketTaxHeight; // @synthesize cnslabelTicketTaxHeight=_cnslabelTicketTaxHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelRefundExchangeHeight; // @synthesize cnslabelRefundExchangeHeight=_cnslabelRefundExchangeHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelTotalPriceAmountHeight; // @synthesize cnslabelTotalPriceAmountHeight=_cnslabelTotalPriceAmountHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelCurrencyHeight; // @synthesize cnslabelCurrencyHeight=_cnslabelCurrencyHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelClassHeight; // @synthesize cnslabelClassHeight=_cnslabelClassHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelCabinDiscountHeight; // @synthesize cnslabelCabinDiscountHeight=_cnslabelCabinDiscountHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelCabinDiscountWidth; // @synthesize cnslabelCabinDiscountWidth=_cnslabelCabinDiscountWidth;
@property(nonatomic) __weak NSLayoutConstraint *cnsBackY; // @synthesize cnsBackY=_cnsBackY;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag3X; // @synthesize cnsTag3X=_cnsTag3X;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag2X; // @synthesize cnsTag2X=_cnsTag2X;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag1X; // @synthesize cnsTag1X=_cnsTag1X;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelClassWidth; // @synthesize cnslabelClassWidth=_cnslabelClassWidth;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag5Width; // @synthesize cnsTag5Width=_cnsTag5Width;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag4Width; // @synthesize cnsTag4Width=_cnsTag4Width;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag3Width; // @synthesize cnsTag3Width=_cnsTag3Width;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag2Width; // @synthesize cnsTag2Width=_cnsTag2Width;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag1Width; // @synthesize cnsTag1Width=_cnsTag1Width;
@property(nonatomic) long long myBabyAmount; // @synthesize myBabyAmount=_myBabyAmount;
@property(nonatomic) long long myChildrenAmount; // @synthesize myChildrenAmount=_myChildrenAmount;
@property(nonatomic) long long myAdultAmount; // @synthesize myAdultAmount=_myAdultAmount;
@property(retain, nonatomic) CTIntlFlightPolicyInfoViewModel *policyInfoViewModel; // @synthesize policyInfoViewModel=_policyInfoViewModel;
@property(retain, nonatomic) UILabel *labelMultiPU; // @synthesize labelMultiPU=_labelMultiPU;
@property(retain, nonatomic) UIImageView *imageViewMultiPU; // @synthesize imageViewMultiPU=_imageViewMultiPU;
@property(retain, nonatomic) UILabel *labelComment; // @synthesize labelComment=_labelComment;
@property(retain, nonatomic) UIView *tagArea5; // @synthesize tagArea5=_tagArea5;
@property(retain, nonatomic) UIView *tagArea4; // @synthesize tagArea4=_tagArea4;
@property(retain, nonatomic) UIView *tagArea3; // @synthesize tagArea3=_tagArea3;
@property(retain, nonatomic) UIView *tagArea2; // @synthesize tagArea2=_tagArea2;
@property(retain, nonatomic) UILabel *labelTicketTax; // @synthesize labelTicketTax=_labelTicketTax;
@property(retain, nonatomic) UILabel *labelRefundExchange; // @synthesize labelRefundExchange=_labelRefundExchange;
@property(retain, nonatomic) UIButton *buttonBook; // @synthesize buttonBook=_buttonBook;
@property(retain, nonatomic) UILabel *labelChooseOnePackagePrice; // @synthesize labelChooseOnePackagePrice=_labelChooseOnePackagePrice;
@property(retain, nonatomic) UILabel *labelTotalPriceAmount; // @synthesize labelTotalPriceAmount=_labelTotalPriceAmount;
@property(retain, nonatomic) UILabel *labelCurrency; // @synthesize labelCurrency=_labelCurrency;
@property(retain, nonatomic) UIView *tagArea1; // @synthesize tagArea1=_tagArea1;
@property(retain, nonatomic) UILabel *labelClass; // @synthesize labelClass=_labelClass;
@property(retain, nonatomic) UILabel *labelCabinDiscount; // @synthesize labelCabinDiscount=_labelCabinDiscount;
@property(retain, nonatomic) CTFlightRadioView *imvBackground; // @synthesize imvBackground=_imvBackground;
@property(retain, nonatomic) NSString *invoiceUrl; // @synthesize invoiceUrl=_invoiceUrl;
@property(nonatomic) __weak id <CTIntFlightCabinListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isTagHasFinished:(id)arg1;
- (void)doTagCodeLogAction:(id)arg1 areaTag:(id)arg2;
- (id)formatAttrText:(id)arg1 withOutAttr:(id)arg2 withInAttr:(id)arg3;
- (void)clickPopViewBottomButton:(id)arg1;
- (void)popH5MaskView;
- (void)buttonBookingClicked:(id)arg1;
- (void)buttonBookingDownClicked:(id)arg1;
- (void)showCabinInfo:(id)arg1;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
