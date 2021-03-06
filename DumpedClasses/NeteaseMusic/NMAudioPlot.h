//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<OS_dispatch_queue>, UIColor;

@interface NMAudioPlot : UIView
{
    NSObject<OS_dispatch_queue> *_plotQueue;
    _Bool _shouldCenterYAxis;
    float _gain;
    float _multiplier;
    unsigned int _pointCount;
    UIColor *_color;
    struct CGPoint *_points;
}

@property(nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(nonatomic) struct CGPoint *points; // @synthesize points=_points;
@property(nonatomic) _Bool shouldCenterYAxis; // @synthesize shouldCenterYAxis=_shouldCenterYAxis;
@property(nonatomic) float multiplier; // @synthesize multiplier=_multiplier;
@property(nonatomic) float gain; // @synthesize gain=_gain;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (_Bool)isDeviceOriginFlipped;
- (void)setSampleData:(float *)arg1 length:(int)arg2;
- (void)updateBuffer:(float *)arg1 withBufferSize:(unsigned int)arg2 multiplier:(float)arg3;
- (void)updateBuffer:(float *)arg1 withBufferSize:(unsigned int)arg2;
- (void)samplePoints:(struct CGPoint **)arg1 pointCount:(unsigned int *)arg2;
- (void)_displayAsync:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)redraw;
- (void)clear;
- (void)initPlot;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

