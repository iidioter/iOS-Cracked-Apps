//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSString;

@interface QQGroupGrayTipsTableOperation : NSObject <IQQDBOperationBase>
{
}

- (id)GenerateMsgModel:(id)arg1;
- (_Bool)clearAllOverdueGrayTipsMsg:(id)arg1;
- (_Bool)updateGrayTipsMsgArray:(id)arg1 inDb:(id)arg2;
- (_Bool)insertGrayTipsMsgArray:(id)arg1 inDb:(id)arg2;
- (id)GetGrayTipsMsgOfGroup:(long long)arg1 Type:(int)arg2 Seq:(int)arg3 inDb:(id)arg4;
- (id)getGrayTipsMsgOfGroup:(long long)arg1 Type:(int)arg2 AscOrder:(_Bool)arg3 HadReaded:(_Bool)arg4 inDb:(id)arg5;
- (id)getUnreadAndTimeRangeGrayTipsMsgOfGroup:(long long)arg1 typeArray:(id)arg2 ascOrder:(_Bool)arg3 startTime:(long long)arg4 endTime:(long long)arg5 inDb:(id)arg6;
- (id)getGrayTipsMsgOfGroup:(long long)arg1 TypeArray:(id)arg2 AscOrder:(_Bool)arg3 StartTime:(long long)arg4 EndTime:(long long)arg5 inDb:(id)arg6;
- (void)updateGrayTipsMsgTable:(id)arg1;
- (void)transferQQDBData;
- (void)createGrayTipsMsgTable:(id)arg1;
- (unsigned long long)getTableSign;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
