//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface _PTHTweetbotStatusMediaCellImageView : UIView
{
    NSMutableArray *_imageViews;
    unsigned long long _mediaCount;
}

@property(nonatomic) unsigned long long mediaCount; // @synthesize mediaCount=_mediaCount;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 atMediumIndex:(unsigned long long)arg2;
- (void)clearImages;
- (id)initWithFrame:(struct CGRect)arg1;

@end

