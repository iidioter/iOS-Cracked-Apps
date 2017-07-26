//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWalletBaseViewController.h"

#import "QQWalletCardViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, QQBankCard, QQWalletCardView;

@interface QQWalletCardDetailViewController : QQWalletBaseViewController <QQWalletCardViewDelegate, UIActionSheetDelegate>
{
    QQBankCard *_card;
    QQWalletCardView *_cardView;
    struct CGRect _beginRect;
    _Bool showAppearAnimation;
}

- (void).cxx_destruct;
- (_Bool)isSupportRightDragToGoBack;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didRepaymentBtnClicked;
- (void)removeBinding;
- (void)securityTips;
- (void)moreButtonDidTap;
- (void)closeButtonDidTap;
- (void)resetLeftButtonWithoutTheme;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCardInfo:(id)arg1 cardRectInWindow:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
