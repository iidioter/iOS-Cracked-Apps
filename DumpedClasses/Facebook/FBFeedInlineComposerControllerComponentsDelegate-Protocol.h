//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFeedInlineComposerControllerComponents, FBInlineComposerComponentToolbox, FBInlineComposerPromptSession, FBInlineComposerViewSpecifier;

@protocol FBFeedInlineComposerControllerComponentsDelegate <NSObject>
- (void)inlineComposer:(FBFeedInlineComposerControllerComponents *)arg1 modelDidUpdate:(FBInlineComposerViewSpecifier *)arg2;
- (void)inlineComposer:(FBFeedInlineComposerControllerComponents *)arg1 toolboxDidUpdate:(FBInlineComposerComponentToolbox *)arg2;
- (void)inlineComposer:(FBFeedInlineComposerControllerComponents *)arg1 didUpdatePromptSession:(FBInlineComposerPromptSession *)arg2;
- (_Bool)inlineComposerIsVisible:(FBFeedInlineComposerControllerComponents *)arg1;
- (_Bool)inlineComposerCanReload:(FBFeedInlineComposerControllerComponents *)arg1;
- (void)inlineComposerNeedsReload:(FBFeedInlineComposerControllerComponents *)arg1;
@end

