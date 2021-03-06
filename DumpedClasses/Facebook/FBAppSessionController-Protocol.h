//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBExceptionHandler, FBUserSession, NSString, UIWindow;
@protocol FBAppSessionControllerDelegate, FBNavigationCoordinator, FBNavigation_DEPRECATED_DO_NOT_USE, FBNetworkDispatch, FBPushHandler;

@protocol FBAppSessionController <NSObject>
@property(nonatomic) __weak id <FBAppSessionControllerDelegate> delegate;
- (void)showLogoutAlertAndPresentLogoutUI;
- (void)presentLogoutUIWithReason:(NSString *)arg1;
- (void)presentSessionUIFromLaunch:(_Bool)arg1 forceSessionStoreClear:(_Bool)arg2 showSpinner:(_Bool)arg3;
- (void)configureWithSession:(FBUserSession *)arg1 exceptionHandler:(FBExceptionHandler *)arg2 rootWindow:(UIWindow *)arg3 requesterConfiguration:(id <FBNetworkDispatch>)arg4;

@optional
@property(retain, nonatomic) UIWindow *rootWindow;
@property(retain, nonatomic) id <FBPushHandler> pushHandler;
@property(readonly, nonatomic) __weak id <FBNavigation_DEPRECATED_DO_NOT_USE> navigation;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator;
@property(readonly, nonatomic) int state;
- (void)presentLogoutConfirmationWithSuccessBlock:(void (^)(void))arg1;
- (void)showLogoutAlertAndPresentLogoutUIUsingAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 reason:(NSString *)arg3;
@end

