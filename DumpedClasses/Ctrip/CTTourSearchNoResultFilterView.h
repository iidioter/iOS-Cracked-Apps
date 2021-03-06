//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UILabel, UIScrollView;

@interface CTTourSearchNoResultFilterView : UIView
{
    NSArray *_itemsArrary;
    CDUnknownBlockType _filterBlock;
    NSMutableArray *_buttonsArray;
    UILabel *_titleLabel;
    UIScrollView *_scrollView;
    double _maxHeight;
}

@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(retain, nonatomic) NSArray *itemsArrary; // @synthesize itemsArrary=_itemsArrary;
- (void).cxx_destruct;
- (void)filterColseClicked:(id)arg1;
- (void)updateSelectedFiltersView:(id)arg1;
- (void)initScrollView;
- (void)initTitleView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

