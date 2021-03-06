//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, TTTAttributedLabel, UILabel, UITextField;
@protocol AUAmountInputFieldFooterViewDelegate;

@interface AUAmountInputFieldFooterView : UIView <TTTAttributedLabelDelegate>
{
    UIView *_bottomLine;
    id <AUAmountInputFieldFooterViewDelegate> _delegate;
    NSString *_placeHolder;
    UITextField *_inputTextField;
    TTTAttributedLabel *_descTextTTTLabel;
    UILabel *_descTextLabel;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UILabel *descTextLabel; // @synthesize descTextLabel=_descTextLabel;
@property(retain, nonatomic) TTTAttributedLabel *descTextTTTLabel; // @synthesize descTextTTTLabel=_descTextTTTLabel;
@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) __weak id <AUAmountInputFieldFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldChangeRange:(struct _NSRange)arg1 replacementString:(id)arg2 withFormatStringMaxLength:(int)arg3;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (id)createTTTAttributedLabel:(struct CGRect)arg1 labelText:(id)arg2 linkText:(id)arg3 linkToURL:(id)arg4;
- (void)setDescText:(id)arg1 linkText:(id)arg2;
- (void)createSubView;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(unsigned long long)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

