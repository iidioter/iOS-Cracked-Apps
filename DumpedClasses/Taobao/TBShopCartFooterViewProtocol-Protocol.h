//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIImage;

@protocol TBShopCartFooterViewProtocol <NSObject>
+ (double)cellCalHeight:(id)arg1;
- (void)bindData:(id)arg1 andStatus:(_Bool)arg2 cartType:(NSString *)arg3;

@optional
- (void)changeJSBgImage:(UIImage *)arg1 shareBgImage:(UIImage *)arg2 deleteBgImage:(UIImage *)arg3;
- (void)changeJiesuanFestival:(NSDictionary *)arg1;
@end
