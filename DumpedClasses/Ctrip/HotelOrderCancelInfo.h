//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface HotelOrderCancelInfo : CTBusinessBean
{
    NSString *_cancelAlertDesc;
    NSMutableArray *_refundAmountInfoList;
    NSMutableArray *_refundDetailInfoList;
}

@property(retain, nonatomic) NSMutableArray *refundDetailInfoList; // @synthesize refundDetailInfoList=_refundDetailInfoList;
@property(retain, nonatomic) NSMutableArray *refundAmountInfoList; // @synthesize refundAmountInfoList=_refundAmountInfoList;
@property(copy, nonatomic) NSString *cancelAlertDesc; // @synthesize cancelAlertDesc=_cancelAlertDesc;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

