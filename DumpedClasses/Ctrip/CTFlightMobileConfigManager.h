//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CTFlightMobileConfigManager : NSObject
{
    NSMutableDictionary *flightMobileConfigDic;
}

+ (void)saveSwitchValueWithModelToFlile:(id)arg1 key:(id)arg2;
+ (id)readHistoryStringValueWithType:(int)arg1 key:(id)arg2;
+ (id)getSavedFlightModelConfigDirectory;
+ (id)getFlightMobileConfigModelWith:(int)arg1;
+ (id)getDefaultFlightMobileConfigStringValueWith:(int)arg1;
+ (id)getFlightBussinessTypeKeyNameWith:(int)arg1;
+ (id)defaultManager;
- (void).cxx_destruct;
- (_Bool)isFlightBussinessSwitchOpneWith:(int)arg1;
- (id)getFlightMobileConfigNumberValueWith:(int)arg1;
- (void)saveFlightMobileConfigObjectWithKey:(id)arg1 value:(id)arg2;
- (id)getFlightMobileConfigObjectWithKey:(id)arg1;
- (id)init;

@end
