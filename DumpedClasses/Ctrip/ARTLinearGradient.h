//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ARTBrush.h"

@interface ARTLinearGradient : ARTBrush
{
    struct CGGradient *_gradient;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

- (void)paint:(struct CGContext *)arg1;
- (void)dealloc;
- (id)initWithArray:(id)arg1;

@end
