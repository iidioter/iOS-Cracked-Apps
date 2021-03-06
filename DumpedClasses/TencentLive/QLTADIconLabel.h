//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UIImage, UIImageView;

@interface QLTADIconLabel : UILabel
{
    UIImage *_image;
    double _leftPadding;
    double _midPadding;
    double _width;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double midPadding; // @synthesize midPadding=_midPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)changeWidth;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)init;

@end

