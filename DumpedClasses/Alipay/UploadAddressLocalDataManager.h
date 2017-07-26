//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCustomStorage;

@interface UploadAddressLocalDataManager : NSObject
{
    id <UploadAddressDataProtocol> _uploadLocalProxy;
    APCustomStorage *_storage;
}

@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)userPreferences;
- (id)deleteAddressByIndexes:(id)arg1;
- (id)clearAllAddresses;
- (id)deleteAddressByPhoneNumber:(id)arg1 phoneBookName:(id)arg2;
- (id)queryAllUploadedAddresses;
- (id)queryAddressByPhoneNumber:(id)arg1 phoneBookName:(id)arg2;
- (id)queryAddressByPhoneNumber:(id)arg1;
- (id)insertUploadedAddressList:(id)arg1;
- (id)insertUploadedAddress:(id)arg1;
- (id)init;

@end
