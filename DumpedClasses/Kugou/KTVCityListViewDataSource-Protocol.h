//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVCityCell, KTVCityListView, KTVSingerIndex, NSArray, NSString, SKSTableViewCell;

@protocol KTVCityListViewDataSource <NSObject>
- (void)cityList:(KTVCityListView *)arg1 configureProvinceIndex:(KTVSingerIndex *)arg2;
- (void)cityList:(KTVCityListView *)arg1 configureCityCell:(KTVCityCell *)arg2 forLetterIndex:(long long)arg3 andProvinceIndex:(long long)arg4 andCityIndex:(long long)arg5;
- (void)cityList:(KTVCityListView *)arg1 configureProvinceCell:(SKSTableViewCell *)arg2 forLetterIndex:(long long)arg3 andProvinceIndex:(long long)arg4;
- (long long)cityList:(KTVCityListView *)arg1 numberOfCitysForLetterIndex:(long long)arg2 andProvinceIndex:(long long)arg3;
- (long long)cityList:(KTVCityListView *)arg1 numberOfProvincesForLetterIndex:(long long)arg2;
- (NSArray *)historyCitysForCityList:(KTVCityListView *)arg1;
- (NSArray *)hotCitysForCityList:(KTVCityListView *)arg1;
- (NSString *)cityList:(KTVCityListView *)arg1 letterAtIndex:(long long)arg2;
- (long long)numberOfProvinceLettersForCityList:(KTVCityListView *)arg1;
@end

