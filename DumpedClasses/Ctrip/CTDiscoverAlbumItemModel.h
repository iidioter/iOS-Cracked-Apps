//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSMutableArray, NSString;

@interface CTDiscoverAlbumItemModel : CTJSONModel
{
    _Bool _isShow;
    long long _ID;
    NSString *_Name;
    NSString *_Slogan;
    NSMutableArray *_AlbumCityInfos;
}

+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) NSMutableArray *AlbumCityInfos; // @synthesize AlbumCityInfos=_AlbumCityInfos;
@property(copy, nonatomic) NSString *Slogan; // @synthesize Slogan=_Slogan;
@property(copy, nonatomic) NSString *Name; // @synthesize Name=_Name;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end
