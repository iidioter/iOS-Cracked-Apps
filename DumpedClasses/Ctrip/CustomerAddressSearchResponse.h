//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface CustomerAddressSearchResponse : CTBusinessBean
{
    int addressTotal;
    NSMutableArray *addressItemList;
}

@property(retain, nonatomic) NSMutableArray *addressItemList; // @synthesize addressItemList;
@property(nonatomic) int addressTotal; // @synthesize addressTotal;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

