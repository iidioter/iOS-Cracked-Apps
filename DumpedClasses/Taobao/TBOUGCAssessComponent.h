//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseUGCComponent.h"

@class TBOUGCAssessView, UIImageView;

@interface TBOUGCAssessComponent : TBOBaseUGCComponent
{
    _Bool _isNeeded;
    UIImageView *_assessObjImage;
    TBOUGCAssessView *_assessView;
}

+ (id)componentName;
@property(nonatomic) _Bool isNeeded; // @synthesize isNeeded=_isNeeded;
@property(retain, nonatomic) TBOUGCAssessView *assessView; // @synthesize assessView=_assessView;
@property(retain, nonatomic) UIImageView *assessObjImage; // @synthesize assessObjImage=_assessObjImage;
- (void).cxx_destruct;
- (void)publish:(CDUnknownBlockType)arg1;
- (_Bool)isValid;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end

