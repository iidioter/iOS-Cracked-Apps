//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCCardPackageUsersView, DCRichLabel;

@interface DCCardPackagePushView : UIView
{
    DCCardPackageUsersView *_usersView;
    DCRichLabel *_priceView;
    DCRichLabel *_titleView;
}

@property(retain, nonatomic) DCRichLabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) DCRichLabel *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) DCCardPackageUsersView *usersView; // @synthesize usersView=_usersView;
- (void).cxx_destruct;
- (double)viewHeight;
- (id)getUIModel;
- (void)setupData:(id)arg1;
- (void)layoutSubviews;

@end

