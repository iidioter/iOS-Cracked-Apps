//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface NVMMerchantCouponInfo : NVMModel
{
    NSString *_SN;
    long long _status;
    NSString *_statusText;
    long long _validCount;
    long long _invalidCount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long invalidCount; // @synthesize invalidCount=_invalidCount;
@property(nonatomic) long long validCount; // @synthesize validCount=_validCount;
@property(copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *SN; // @synthesize SN=_SN;
- (void).cxx_destruct;
- (_Bool)hasCoupon;
- (_Bool)enabled;

@end

