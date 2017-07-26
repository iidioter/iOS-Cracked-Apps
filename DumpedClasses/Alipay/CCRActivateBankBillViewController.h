//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRTableBaseViewController.h"

#import "ALPDatePickerDelegate.h"
#import "APSecurityCodeBoxDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class ALPDatePicker, APAgreementBox, APButton, APSmsSecurityCodeBox, AUInputBox, CCRCertTypeModel, CCRGetCreditCardBillQueryFormRespVO, CCRSavedCard, CCRSectionObject, NSMutableArray, NSString, UIView;

@interface CCRActivateBankBillViewController : CCRTableBaseViewController <UIAlertViewDelegate, ALPDatePickerDelegate, APSecurityCodeBoxDelegate, UIScrollViewDelegate>
{
    _Bool _needQueryBill;
    _Bool _isFromRecommend;
    _Bool _needDisplayAutoPhoneNumLabel;
    _Bool _userChangeId;
    int _datePickerType;
    int _needCleanIdFlag;
    CCRGetCreditCardBillQueryFormRespVO *_billQueryFormRespVO;
    CCRSavedCard *_savedCard;
    AUInputBox *_autoPhoneNumLabel;
    NSString *_autoPhoneNum;
    AUInputBox *_identifyNumInputBox;
    AUInputBox *_phoneNumInputBox;
    AUInputBox *_cvv2InputBox;
    APSmsSecurityCodeBox *_authCodeView;
    APButton *_submitButton;
    APAgreementBox *_agreementBox;
    UIView *_protocolView;
    ALPDatePicker *_datePicker;
    NSString *_validDateStr;
    long long _validSectionIndex;
    CCRCertTypeModel *_certTypeModel;
    long long _indtypeSectionIndex;
    NSMutableArray *_dataSource;
    CCRSectionObject *_section4;
    long long _section4Index;
}

@property(nonatomic) long long section4Index; // @synthesize section4Index=_section4Index;
@property(retain, nonatomic) CCRSectionObject *section4; // @synthesize section4=_section4;
@property(nonatomic) int needCleanIdFlag; // @synthesize needCleanIdFlag=_needCleanIdFlag;
@property(nonatomic) _Bool userChangeId; // @synthesize userChangeId=_userChangeId;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long indtypeSectionIndex; // @synthesize indtypeSectionIndex=_indtypeSectionIndex;
@property(retain, nonatomic) CCRCertTypeModel *certTypeModel; // @synthesize certTypeModel=_certTypeModel;
@property(nonatomic) long long validSectionIndex; // @synthesize validSectionIndex=_validSectionIndex;
@property(retain, nonatomic) NSString *validDateStr; // @synthesize validDateStr=_validDateStr;
@property(nonatomic) int datePickerType; // @synthesize datePickerType=_datePickerType;
@property(retain, nonatomic) ALPDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UIView *protocolView; // @synthesize protocolView=_protocolView;
@property(retain, nonatomic) APAgreementBox *agreementBox; // @synthesize agreementBox=_agreementBox;
@property(retain, nonatomic) APButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) APSmsSecurityCodeBox *authCodeView; // @synthesize authCodeView=_authCodeView;
@property(retain, nonatomic) AUInputBox *cvv2InputBox; // @synthesize cvv2InputBox=_cvv2InputBox;
@property(retain, nonatomic) AUInputBox *phoneNumInputBox; // @synthesize phoneNumInputBox=_phoneNumInputBox;
@property(retain, nonatomic) AUInputBox *identifyNumInputBox; // @synthesize identifyNumInputBox=_identifyNumInputBox;
@property(retain, nonatomic) NSString *autoPhoneNum; // @synthesize autoPhoneNum=_autoPhoneNum;
@property(nonatomic) _Bool needDisplayAutoPhoneNumLabel; // @synthesize needDisplayAutoPhoneNumLabel=_needDisplayAutoPhoneNumLabel;
@property(retain, nonatomic) AUInputBox *autoPhoneNumLabel; // @synthesize autoPhoneNumLabel=_autoPhoneNumLabel;
@property(nonatomic) _Bool isFromRecommend; // @synthesize isFromRecommend=_isFromRecommend;
@property(nonatomic) _Bool needQueryBill; // @synthesize needQueryBill=_needQueryBill;
@property(retain, nonatomic) CCRSavedCard *savedCard; // @synthesize savedCard=_savedCard;
@property(retain, nonatomic) CCRGetCreditCardBillQueryFormRespVO *billQueryFormRespVO; // @synthesize billQueryFormRespVO=_billQueryFormRespVO;
- (void).cxx_destruct;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)deleteAutoPhoneNumLabel;
- (void)insertAutoPhoneNumLabel;
- (void)onAuthTimerout:(id)arg1;
- (void)agreementBoxCheckboxClicked:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)cancelDatePicker:(id)arg1;
- (void)datePicker:(id)arg1 text:(id)arg2;
- (void)resetIndTypePicker;
- (void)resetDatePicker;
- (void)cancelDatePicker;
- (void)getDatePickerInstance;
- (void)requestSmsCodeAuth;
- (void)onSavedDataUpdated:(id)arg1;
- (void)requestApplyBillQuery;
- (_Bool)checkAutoPhoneNum:(id)arg1;
- (void)checkAuthCodeButton;
- (_Bool)checkSubmitButtonWithAlert;
- (void)checkSubmitButton;
- (void)sendSmsVerify;
- (void)submit;
- (id)cellObjectForCheckCode:(id)arg1 OtherParam:(id)arg2;
- (void)didTouchCvv2InputBoxTip;
- (id)cellObjectForCvv2:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForAutoMobile:(id)arg1 OtherParam:(id)arg2;
- (void)didTouchPhoneNumInputTip;
- (id)cellObjectForMobile:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForIdentity:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForIndtype:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForExpdate:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForTitle:(id)arg1 OtherParam:(id)arg2;
- (void)layoutWillChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)requestCreditCardBillQueryForm;
- (void)viewDidLoad;
- (id)initWithSavedCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
