//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QXPluginBaseModel.h"

@class NSDictionary, NSString;

@interface QXSectionData : QXPluginBaseModel
{
    NSString *_title;
    NSString *_icon;
    long long _type;
    id _data;
    NSDictionary *_action;
}

+ (id)sectionDataWith:(id)arg1;
@property(retain, nonatomic) NSDictionary *action; // @synthesize action=_action;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

