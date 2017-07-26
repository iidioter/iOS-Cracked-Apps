//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightCreateRebateInformationModel, FlightIntlCreateOrderPaymentLimitInformationModel, NSMutableArray, NSString;

@interface IntlFlightOrderCreateResponse : CTBusinessBean
{
    int result;
    int resultAction;
    NSString *resultMessage;
    NSString *reminder;
    NSMutableArray *orderNoteList;
    NSString *gUID;
    NSString *messageToken;
    long long flag;
    NSString *externalNo;
    int payExpired;
    FlightCreateRebateInformationModel *rebateInfoModel;
    NSMutableArray *orderList;
    FlightIntlCreateOrderPaymentLimitInformationModel *paymentInfoModel;
    NSMutableArray *cartridgeList;
    NSString *fioData;
    NSMutableArray *passengerList;
    NSMutableArray *unsupportPackageList;
    NSMutableArray *notificationList;
    NSMutableArray *aBTInfoList;
    NSMutableArray *qTEPriceInfoList;
    NSMutableArray *noteList;
}

@property(retain, nonatomic) NSMutableArray *noteList; // @synthesize noteList;
@property(retain, nonatomic) NSMutableArray *qTEPriceInfoList; // @synthesize qTEPriceInfoList;
@property(retain, nonatomic) NSMutableArray *aBTInfoList; // @synthesize aBTInfoList;
@property(retain, nonatomic) NSMutableArray *notificationList; // @synthesize notificationList;
@property(retain, nonatomic) NSMutableArray *unsupportPackageList; // @synthesize unsupportPackageList;
@property(retain, nonatomic) NSMutableArray *passengerList; // @synthesize passengerList;
@property(copy, nonatomic) NSString *fioData; // @synthesize fioData;
@property(retain, nonatomic) NSMutableArray *cartridgeList; // @synthesize cartridgeList;
@property(retain, nonatomic) FlightIntlCreateOrderPaymentLimitInformationModel *paymentInfoModel; // @synthesize paymentInfoModel;
@property(retain, nonatomic) NSMutableArray *orderList; // @synthesize orderList;
@property(retain, nonatomic) FlightCreateRebateInformationModel *rebateInfoModel; // @synthesize rebateInfoModel;
@property(nonatomic) int payExpired; // @synthesize payExpired;
@property(copy, nonatomic) NSString *externalNo; // @synthesize externalNo;
@property(nonatomic) long long flag; // @synthesize flag;
@property(copy, nonatomic) NSString *messageToken; // @synthesize messageToken;
@property(copy, nonatomic) NSString *gUID; // @synthesize gUID;
@property(retain, nonatomic) NSMutableArray *orderNoteList; // @synthesize orderNoteList;
@property(copy, nonatomic) NSString *reminder; // @synthesize reminder;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(nonatomic) int resultAction; // @synthesize resultAction;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
