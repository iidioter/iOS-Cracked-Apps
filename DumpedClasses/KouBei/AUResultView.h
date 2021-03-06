//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TTTAttributedLabel, UIImage, UIImageView, UILabel;

@interface AUResultView : UIView
{
    _Bool _messageThrough;
    UIImage *_icon;
    NSString *_mainTitleText;
    NSString *_midTitleText;
    NSString *_bottomMessage;
    double _expectHeight;
    UIImageView *_iconView;
    UILabel *_mainTitleLabel;
    UILabel *_midTitleLabel;
    TTTAttributedLabel *_bottomMessageLabel;
}

@property(retain, nonatomic) TTTAttributedLabel *bottomMessageLabel; // @synthesize bottomMessageLabel=_bottomMessageLabel;
@property(retain, nonatomic) UILabel *midTitleLabel; // @synthesize midTitleLabel=_midTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) double expectHeight; // @synthesize expectHeight=_expectHeight;
@property(nonatomic) _Bool messageThrough; // @synthesize messageThrough=_messageThrough;
@property(retain, nonatomic) NSString *bottomMessage; // @synthesize bottomMessage=_bottomMessage;
@property(retain, nonatomic) NSString *midTitleText; // @synthesize midTitleText=_midTitleText;
@property(retain, nonatomic) NSString *mainTitleText; // @synthesize mainTitleText=_mainTitleText;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)initWithIcon:(id)arg1 mainTitleText:(id)arg2 midTitleText:(id)arg3 bottomMessage:(id)arg4 messageThrough:(_Bool)arg5;

@end

