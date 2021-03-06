//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotationView.h"

@class CAShapeLayer, CTARMapView, CTARObjectModel, CTImageView, NSString, UIButton, UIView;

@interface CTARAnnotationView : MKAnnotationView
{
    NSString *_identifier;
    UIView *_titleView;
    CTImageView *_circleImageView;
    CTImageView *_crownImageView;
    CAShapeLayer *_sLayer;
    CTARObjectModel *_objectModel;
    CTARMapView *_arMapView;
    UIButton *_titleButton;
}

@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) CTARMapView *arMapView; // @synthesize arMapView=_arMapView;
@property(retain, nonatomic) CTARObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(retain, nonatomic) CAShapeLayer *sLayer; // @synthesize sLayer=_sLayer;
@property(retain, nonatomic) CTImageView *crownImageView; // @synthesize crownImageView=_crownImageView;
@property(retain, nonatomic) CTImageView *circleImageView; // @synthesize circleImageView=_circleImageView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)clickAnnotation:(id)arg1;
- (void)addTriangle;
- (void)hightLightCircleForObjectOrNot:(_Bool)arg1;
- (void)hightLightCircleAndIfShowCrown:(_Bool)arg1;
- (id)init:(id)arg1 objectModel:(id)arg2;
- (void)didMoveToSuperview;
- (void)awakeFromNib;

@end

