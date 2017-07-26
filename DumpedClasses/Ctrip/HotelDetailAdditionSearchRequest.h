//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class BasicCoordinateModel, NSMutableArray, NSString;

@interface HotelDetailAdditionSearchRequest : CTBusinessBean
{
    int _countryType;
    int _type;
    int _browseCount;
    int _cityID;
    NSMutableArray *_hotelEncourageUserInfoList;
    BasicCoordinateModel *_coordinate;
    NSString *_poi;
    NSString *_checkInDate;
    NSString *_checkOutDate;
    BasicCoordinateModel *_userPosition;
}

@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(retain, nonatomic) BasicCoordinateModel *userPosition; // @synthesize userPosition=_userPosition;
@property(retain, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(retain, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(nonatomic) int browseCount; // @synthesize browseCount=_browseCount;
@property(retain, nonatomic) NSString *poi; // @synthesize poi=_poi;
@property(retain, nonatomic) BasicCoordinateModel *coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *hotelEncourageUserInfoList; // @synthesize hotelEncourageUserInfoList=_hotelEncourageUserInfoList;
@property(nonatomic) int countryType; // @synthesize countryType=_countryType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
