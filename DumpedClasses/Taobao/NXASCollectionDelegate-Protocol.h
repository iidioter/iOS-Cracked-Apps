//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "NXASCommonCollectionViewDelegate.h"

@class NSIndexPath, NXASBatchContext, NXASCellNode, NXASCollectionView;

@protocol NXASCollectionDelegate <NXASCommonCollectionViewDelegate, NSObject>

@optional
- (void)collectionView:(NXASCollectionView *)arg1 willDisplayNodeForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)shouldBatchFetchForCollectionView:(NXASCollectionView *)arg1;
- (void)collectionView:(NXASCollectionView *)arg1 willBeginBatchFetchWithContext:(NXASBatchContext *)arg2;
- (void)collectionView:(NXASCollectionView *)arg1 didEndDisplayingNode:(NXASCellNode *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(NXASCollectionView *)arg1 willDisplayNode:(NXASCellNode *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (CDStruct_42a63532)collectionView:(NXASCollectionView *)arg1 constrainedSizeForNodeAtIndexPath:(NSIndexPath *)arg2;
@end
