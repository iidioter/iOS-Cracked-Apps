//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEMiniProgramInfo;

@interface QLJCEShareItem : JceObjectV2
{
    BOOL jcev2_p_8_o_shareStyle;
    NSString *jcev2_p_0_o_shareUrl;
    NSString *jcev2_p_1_o_shareTitle;
    NSString *jcev2_p_2_o_shareSubtitle;
    NSString *jcev2_p_3_o_shareImgUrl;
    NSString *jcev2_p_4_o_circleShareKey;
    NSString *jcev2_p_5_o_shareSingleTitle;
    NSString *jcev2_p_6_o_shareContent;
    NSString *jcev2_p_7_o_shareContentTail;
    NSArray *jcev2_p_9_o_sharePicList__b0x9i_VOQLJCEPicData;
    QLJCEMiniProgramInfo *jcev2_p_10_o_miniProgramInfo;
    NSString *jcev2_p_11_o_captionKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_captionKey, setter=setJce_captionKey:) NSString *jcev2_p_11_o_captionKey; // @synthesize jcev2_p_11_o_captionKey;
@property(retain, nonatomic, getter=jce_miniProgramInfo, setter=setJce_miniProgramInfo:) QLJCEMiniProgramInfo *jcev2_p_10_o_miniProgramInfo; // @synthesize jcev2_p_10_o_miniProgramInfo;
@property(retain, nonatomic, getter=jce_sharePicList, setter=setJce_sharePicList:) NSArray *jcev2_p_9_o_sharePicList__b0x9i_VOQLJCEPicData; // @synthesize jcev2_p_9_o_sharePicList__b0x9i_VOQLJCEPicData;
@property(nonatomic, getter=jce_shareStyle, setter=setJce_shareStyle:) BOOL jcev2_p_8_o_shareStyle; // @synthesize jcev2_p_8_o_shareStyle;
@property(retain, nonatomic, getter=jce_shareContentTail, setter=setJce_shareContentTail:) NSString *jcev2_p_7_o_shareContentTail; // @synthesize jcev2_p_7_o_shareContentTail;
@property(retain, nonatomic, getter=jce_shareContent, setter=setJce_shareContent:) NSString *jcev2_p_6_o_shareContent; // @synthesize jcev2_p_6_o_shareContent;
@property(retain, nonatomic, getter=jce_shareSingleTitle, setter=setJce_shareSingleTitle:) NSString *jcev2_p_5_o_shareSingleTitle; // @synthesize jcev2_p_5_o_shareSingleTitle;
@property(retain, nonatomic, getter=jce_circleShareKey, setter=setJce_circleShareKey:) NSString *jcev2_p_4_o_circleShareKey; // @synthesize jcev2_p_4_o_circleShareKey;
@property(retain, nonatomic, getter=jce_shareImgUrl, setter=setJce_shareImgUrl:) NSString *jcev2_p_3_o_shareImgUrl; // @synthesize jcev2_p_3_o_shareImgUrl;
@property(retain, nonatomic, getter=jce_shareSubtitle, setter=setJce_shareSubtitle:) NSString *jcev2_p_2_o_shareSubtitle; // @synthesize jcev2_p_2_o_shareSubtitle;
@property(retain, nonatomic, getter=jce_shareTitle, setter=setJce_shareTitle:) NSString *jcev2_p_1_o_shareTitle; // @synthesize jcev2_p_1_o_shareTitle;
@property(retain, nonatomic, getter=jce_shareUrl, setter=setJce_shareUrl:) NSString *jcev2_p_0_o_shareUrl; // @synthesize jcev2_p_0_o_shareUrl;
- (void).cxx_destruct;
- (id)init;
- (void)DI_asynchDownloadImage:(id)arg1;

@end
