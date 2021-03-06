//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSMutableAttributedString, NSString;

@interface CTLivechatRobotQuestionItem : CTJSONModel
{
    NSString *text;
    NSMutableAttributedString *htmlText;
    NSString *link;
    long long _Type;
    NSString *_Code;
    NSString *_Text;
    NSString *_Data;
    NSString *_Command;
    NSString *_Tree;
}

+ (id)GetFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *Tree; // @synthesize Tree=_Tree;
@property(retain, nonatomic) NSString *Command; // @synthesize Command=_Command;
@property(retain, nonatomic) NSString *Data; // @synthesize Data=_Data;
@property(retain, nonatomic) NSString *Text; // @synthesize Text=_Text;
@property(retain, nonatomic) NSString *Code; // @synthesize Code=_Code;
@property(nonatomic) long long Type; // @synthesize Type=_Type;
- (void).cxx_destruct;
- (void)GETLinkFromJson:(id)arg1;
- (id)getHtmlText;
- (id)getLink;
- (id)getText;
- (id)getCode;
- (void)SetItemTree:(id)arg1;

@end

