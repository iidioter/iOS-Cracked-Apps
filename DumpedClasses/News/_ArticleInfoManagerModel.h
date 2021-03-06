//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSArray<NSDictionary>, NSDictionary, NSMutableArray<Ignore>, NSMutableDictionary, NSNumber, NSString, NSString<Optional>, TTActivityModel;

@interface _ArticleInfoManagerModel : JSONModel
{
    NSString *_webViewTrackKey;
    NSString *_insertedJavaScript;
    NSString *_insertedContextJS;
    NSNumber *_articlePosition;
    NSDictionary *_corperationVideoDict;
    unsigned long long _likeAndShareFlag;
    NSArray<NSDictionary> *_dislikeWords;
    NSArray *_relateVideoArticles;
    NSDictionary *_videoBanner;
    NSString *_videoAbstract;
    NSDictionary *_videoExtendLink;
    NSMutableDictionary *_video_detail_tags;
    NSArray *_relateImagesArticles;
    NSArray *_webRecommandPhotosArray;
    NSArray *_relateSearchWordsArray;
    NSString<Optional> *_videoAdUrl;
    NSDictionary *_detailADJsonDict;
    NSDictionary *_videoEmbededAdInfo;
    NSDictionary *_adShareInfo;
    NSDictionary *_adminDebugInfo;
    TTActivityModel *_promotionModel;
    NSNumber *_relateVideoSection;
    NSDictionary *_relateEnterJson;
    NSString *_riskWarningTip;
    NSMutableDictionary *_ordered_info;
    NSMutableArray<Ignore> *_classNameList;
    NSString *_pgcActionEnterTitleStr;
    NSArray *_wendaArray;
    NSNumber *_flags;
    NSArray *_keywordJsons;
    NSDictionary *_forumLinkJson;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSDictionary *forumLinkJson; // @synthesize forumLinkJson=_forumLinkJson;
@property(retain, nonatomic) NSArray *keywordJsons; // @synthesize keywordJsons=_keywordJsons;
@property(retain, nonatomic) NSNumber *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSArray *wendaArray; // @synthesize wendaArray=_wendaArray;
@property(retain, nonatomic) NSString *pgcActionEnterTitleStr; // @synthesize pgcActionEnterTitleStr=_pgcActionEnterTitleStr;
@property(retain, nonatomic) NSMutableArray<Ignore> *classNameList; // @synthesize classNameList=_classNameList;
@property(retain, nonatomic) NSMutableDictionary *ordered_info; // @synthesize ordered_info=_ordered_info;
@property(copy, nonatomic) NSString *riskWarningTip; // @synthesize riskWarningTip=_riskWarningTip;
@property(retain, nonatomic) NSDictionary *relateEnterJson; // @synthesize relateEnterJson=_relateEnterJson;
@property(retain, nonatomic) NSNumber *relateVideoSection; // @synthesize relateVideoSection=_relateVideoSection;
@property(retain, nonatomic) TTActivityModel *promotionModel; // @synthesize promotionModel=_promotionModel;
@property(retain, nonatomic) NSDictionary *adminDebugInfo; // @synthesize adminDebugInfo=_adminDebugInfo;
@property(retain, nonatomic) NSDictionary *adShareInfo; // @synthesize adShareInfo=_adShareInfo;
@property(retain, nonatomic) NSDictionary *videoEmbededAdInfo; // @synthesize videoEmbededAdInfo=_videoEmbededAdInfo;
@property(retain, nonatomic) NSDictionary *detailADJsonDict; // @synthesize detailADJsonDict=_detailADJsonDict;
@property(copy, nonatomic) NSString<Optional> *videoAdUrl; // @synthesize videoAdUrl=_videoAdUrl;
@property(retain, nonatomic) NSArray *relateSearchWordsArray; // @synthesize relateSearchWordsArray=_relateSearchWordsArray;
@property(retain, nonatomic) NSArray *webRecommandPhotosArray; // @synthesize webRecommandPhotosArray=_webRecommandPhotosArray;
@property(retain, nonatomic) NSArray *relateImagesArticles; // @synthesize relateImagesArticles=_relateImagesArticles;
@property(retain, nonatomic) NSMutableDictionary *video_detail_tags; // @synthesize video_detail_tags=_video_detail_tags;
@property(retain, nonatomic) NSDictionary *videoExtendLink; // @synthesize videoExtendLink=_videoExtendLink;
@property(copy, nonatomic) NSString *videoAbstract; // @synthesize videoAbstract=_videoAbstract;
@property(retain, nonatomic) NSDictionary *videoBanner; // @synthesize videoBanner=_videoBanner;
@property(retain, nonatomic) NSArray *relateVideoArticles; // @synthesize relateVideoArticles=_relateVideoArticles;
@property(retain, nonatomic) NSArray<NSDictionary> *dislikeWords; // @synthesize dislikeWords=_dislikeWords;
@property(nonatomic) unsigned long long likeAndShareFlag; // @synthesize likeAndShareFlag=_likeAndShareFlag;
@property(retain, nonatomic) NSDictionary *corperationVideoDict; // @synthesize corperationVideoDict=_corperationVideoDict;
@property(retain, nonatomic) NSNumber *articlePosition; // @synthesize articlePosition=_articlePosition;
@property(copy, nonatomic) NSString *insertedContextJS; // @synthesize insertedContextJS=_insertedContextJS;
@property(copy, nonatomic) NSString *insertedJavaScript; // @synthesize insertedJavaScript=_insertedJavaScript;
@property(copy, nonatomic) NSString *webViewTrackKey; // @synthesize webViewTrackKey=_webViewTrackKey;
- (void).cxx_destruct;

@end

