//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBCollectionAbstractCell.h"

@class FBMemTimelineAppCollectionItem, FBMemTimelineAppSection, FBNetworkImageView, FBRichTextView, FBStarRatingView;

@interface FBCollectionReviewsCell : FBCollectionAbstractCell
{
    FBNetworkImageView *_icon;
    FBStarRatingView *_ratingView;
    FBRichTextView *_titleLabel;
    FBRichTextView *_subtitleLabel;
    FBMemTimelineAppSection *_collectionSection;
    FBMemTimelineAppCollectionItem *_collectionItem;
}

+ (double)desiredHeight;
- (void).cxx_destruct;
- (id)attributedSubtitleStringForString:(id)arg1;
- (id)attributedTitleStringForString:(id)arg1;
- (double)verticalPadding;
- (double)horizontalPadding;
- (unsigned long long)titleFontSize;
- (id)titleColor;
- (unsigned long long)subtitleFontSize;
- (id)subtitleColor;
- (unsigned long long)maxNumberOfSubtitleLines;
- (unsigned long long)maxNumberOfTitleLines;
- (double)imageBorderWidth;
- (id)imageURLString:(id)arg1;
- (unsigned long long)iconSize;
- (void)setCollectionItem:(id)arg1 inCollectionSection:(id)arg2;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 showCustomBorder:(_Bool)arg3;

@end

