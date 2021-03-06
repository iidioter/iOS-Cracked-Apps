//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBWVBaseController;

@interface TBWVJAEManager : NSObject
{
    TBWVBaseController *_viewController;
}

+ (long long)getWebviewModel;
@property(nonatomic) __weak TBWVBaseController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (_Bool)isThirdModel;
- (_Bool)isNeedSafePopup:(id)arg1;
- (_Bool)checkOpenSafeNotice:(id)arg1 fromType:(id)arg2;
- (void)resetWebview;
- (void)setCommWebview;
- (void)setThridWebview;
- (void)setJAEWebview;
- (_Bool)checkIsJAEDomain:(id)arg1;
- (long long)getUrlModel:(id)arg1;
- (void)setWebview:(id)arg1;
- (void)initUserScript:(id)arg1;

@end

