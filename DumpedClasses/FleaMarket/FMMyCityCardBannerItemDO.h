//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FMMyCityCardBannerItemDO : NSObject
{
    NSString *_aspectRatio;
    NSString *_link;
    NSString *_picUrl;
    NSDictionary *_trackParams;
}

@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void).cxx_destruct;

@end

