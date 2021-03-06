//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface ONESBaseMapNaviFullScreenTopView : UIView
{
    id <ONESBaseMapNaviFullScreenTopViewDelegate> _delegate;
    UIImageView *_routeSignImageView;
    UILabel *_distanceLabel;
    UILabel *_roadLabel;
    UIView *_lineView;
    UILabel *_etaInfoLabel;
    UIButton *_exitButton;
}

+ (id)imageInQMapBundleForName:(id)arg1;
+ (id)fullScreenTopView;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UILabel *etaInfoLabel; // @synthesize etaInfoLabel=_etaInfoLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *roadLabel; // @synthesize roadLabel=_roadLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UIImageView *routeSignImageView; // @synthesize routeSignImageView=_routeSignImageView;
@property(nonatomic) __weak id <ONESBaseMapNaviFullScreenTopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)exitButtonPressed:(id)arg1;
- (void)configViewWithRoute:(id)arg1;
- (void)layoutSubviews;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

