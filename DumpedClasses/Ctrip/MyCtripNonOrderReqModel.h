//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface MyCtripNonOrderReqModel : CTBusinessBean
{
    int flag;
    NSString *startTime;
    NSString *endTime;
}

@property(copy, nonatomic) NSString *endTime; // @synthesize endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime;
@property(nonatomic) int flag; // @synthesize flag;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
