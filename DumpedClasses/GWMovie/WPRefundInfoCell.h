//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface WPRefundInfoCell : UITableViewCell
{
    UILabel *_orderIdLabel;
    UILabel *_cinemaNameLabel;
    UILabel *_priceLabel;
}

@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *cinemaNameLabel; // @synthesize cinemaNameLabel=_cinemaNameLabel;
@property(nonatomic) __weak UILabel *orderIdLabel; // @synthesize orderIdLabel=_orderIdLabel;
- (void).cxx_destruct;
- (void)setUpWithMovieOrderModel:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

