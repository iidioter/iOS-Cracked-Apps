//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GpsData : NSObject
{
    int _longitude;
    int _latitude;
    int _altitude;
    int _timestamp;
    int _angle;
    int _speed;
    int _precision;
    int _no;
}

@property(nonatomic) int no; // @synthesize no=_no;
@property(nonatomic) int precision; // @synthesize precision=_precision;
@property(nonatomic) int speed; // @synthesize speed=_speed;
@property(nonatomic) int angle; // @synthesize angle=_angle;
@property(nonatomic) int timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int altitude; // @synthesize altitude=_altitude;
@property(nonatomic) int latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int longitude; // @synthesize longitude=_longitude;

@end

