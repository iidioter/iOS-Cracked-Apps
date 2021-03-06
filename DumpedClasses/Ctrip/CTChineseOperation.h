//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UITextField;

@interface CTChineseOperation : NSObject
{
    NSMutableArray *_givennamesObjs;
    NSMutableArray *_alertSurnameObjs;
    NSMutableArray *_alertGivennameObjs;
    _Bool _isSurnameHighlight;
    _Bool _isGivennameHighlight;
    CDUnknownBlockType _chineseBlock;
    UITextField *_nameTextField;
    UITextField *_surnameTextField;
    UITextField *_givennameTextField;
}

+ (id)operationWithNameTextField:(id)arg1 surnameTextField:(id)arg2 givennameTextField:(id)arg3;
@property(nonatomic) _Bool isGivennameHighlight; // @synthesize isGivennameHighlight=_isGivennameHighlight;
@property(nonatomic) _Bool isSurnameHighlight; // @synthesize isSurnameHighlight=_isSurnameHighlight;
@property(retain, nonatomic) UITextField *givennameTextField; // @synthesize givennameTextField=_givennameTextField;
@property(retain, nonatomic) UITextField *surnameTextField; // @synthesize surnameTextField=_surnameTextField;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(copy, nonatomic) CDUnknownBlockType chineseBlock; // @synthesize chineseBlock=_chineseBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)operationOff;
- (id)adjustGivenNameGivennames:(id)arg1;
- (void)handleGivennameWithName:(id)arg1;
- (void)handleSurnameWithName:(id)arg1;
- (void)textFieldDidBegin:(id)arg1;
- (void)textFieldChange:(id)arg1;
- (id)initWithNameTF:(id)arg1 surnameTF:(id)arg2 givennameTF:(id)arg3;

@end

