//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQChatImageMetaInfo, UIButton, UIImageView, UILabel;

@interface ArticleSearchCellView : UIView
{
    UILabel *_nicknameLabel;
    UILabel *_richStateView;
    NSString *_nickNameText;
    double _screenScale;
    UIImageView *_headerView;
    UILabel *_sourceLabel;
    UILabel *_hotwordTitleLabel;
    UIButton *_hotwordSpecialTopicBtn;
    UIView *_maskV;
    UIImageView *_imgMark;
    QQChatImageMetaInfo *_metaInfo;
    _Bool _bFtsCell;
    NSString *_pictureUrl;
}

@property(retain, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
- (void)onImageDownloadResult:(id)arg1;
- (void)setCoverUrl:(id)arg1;
- (void)setDataForHotWordSearch:(id)arg1;
- (void)setDataForArticleSearch:(id)arg1;
- (void)setDataForSearch:(id)arg1;
- (void)highlightText:(id)arg1 forLable:(id)arg2 withHighlight:(id)arg3 andLine:(unsigned long long)arg4 lineSpace:(float)arg5 needShift:(_Bool)arg6;
- (void)layoutSubviews;
- (_Bool)isDynamicSearchResult;
- (void)initData;
- (double)screenScale;
- (void)dealloc;
- (id)init;
- (id)initFtsCell;

@end
