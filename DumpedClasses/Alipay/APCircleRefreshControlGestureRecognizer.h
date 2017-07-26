//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@interface APCircleRefreshControlGestureRecognizer : UIGestureRecognizer
{
    long long _touchCount;
}

@property(nonatomic) long long touchCount; // @synthesize touchCount=_touchCount;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)reset;
- (void)check;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
