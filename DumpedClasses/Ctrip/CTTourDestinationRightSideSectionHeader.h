//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UIButton, UIView;

@interface CTTourDestinationRightSideSectionHeader : UICollectionReusableView
{
    CDUnknownBlockType _collectionHeaderBlock;
    UIButton *_titleButton;
    UIView *_leftIcon;
}

@property(nonatomic) __weak UIView *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(nonatomic) __weak UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(copy, nonatomic) CDUnknownBlockType collectionHeaderBlock; // @synthesize collectionHeaderBlock=_collectionHeaderBlock;
- (void).cxx_destruct;
- (void)configTitle:(id)arg1;
- (void)titleButtonAction:(id)arg1;
- (void)awakeFromNib;

@end
