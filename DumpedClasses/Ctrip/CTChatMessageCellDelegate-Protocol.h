//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTChatMessageCell, NSString;

@protocol CTChatMessageCellDelegate <NSObject>

@optional
- (void)cellDidFinishPlayingWithCell:(CTChatMessageCell *)arg1 isFinished:(_Bool)arg2;
- (void)callAlertWithPhoneNumber:(NSString *)arg1;
- (void)loadUrlWithUrl:(NSString *)arg1;
- (void)copyMessageWithCell:(CTChatMessageCell *)arg1;
- (void)shareMessagetoOtherWithCell:(CTChatMessageCell *)arg1;
- (void)deleteMessageWithCell:(CTChatMessageCell *)arg1;
- (void)avatarImageViewLongPressed:(CTChatMessageCell *)arg1;
- (void)resendMessage:(CTChatMessageCell *)arg1;
- (void)textMessageCellDoubleTapped:(CTChatMessageCell *)arg1;
- (void)messageCellTappedMessage:(CTChatMessageCell *)arg1;
- (void)messageCellTappedHead:(CTChatMessageCell *)arg1;
- (void)messageCellTappedBlank:(CTChatMessageCell *)arg1;
@end
