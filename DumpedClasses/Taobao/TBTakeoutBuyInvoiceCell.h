//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutBuyCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UILabel, UISwitch, UITextField;

@interface TBTakeoutBuyInvoiceCell : TBTakeoutBuyCell <UITextFieldDelegate>
{
    UISwitch *_invoiceSwitch;
    UILabel *_invoiceTitle;
    UITextField *_invoiceValue;
}

@property(retain, nonatomic) UITextField *invoiceValue; // @synthesize invoiceValue=_invoiceValue;
@property(retain, nonatomic) UILabel *invoiceTitle; // @synthesize invoiceTitle=_invoiceTitle;
@property(retain, nonatomic) UISwitch *invoiceSwitch; // @synthesize invoiceSwitch=_invoiceSwitch;
- (void).cxx_destruct;
- (void)resginTextField;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)switchValueChanged:(id)arg1;
- (void)updateInvoice:(_Bool)arg1;
- (void)setModel:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
