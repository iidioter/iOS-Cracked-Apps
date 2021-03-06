//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFlipImageView.h"

#import "IAsynDownloadImageObserver.h"

@class NSString, UIImage;

@interface NearbyAsynUrlImageView : QQFlipImageView <IAsynDownloadImageObserver>
{
    _Bool _isNoneAsynLoad;
    _Bool _isCornerCropped;
    _Bool _resizeDisable;
    _Bool _isClipToSquare;
    NSString *_url;
    NSString *_sourceKey;
    UIImage *_defaultImage;
    struct CGSize _maxSize;
    _Bool _isResizeDefaultImage;
    _Bool _isLocalPath;
}

- (void).cxx_destruct;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (void)asynLoadImageFinished:(id)arg1;
- (id)clipImage:(id)arg1;
- (void)asynLoadImage:(id)arg1;
- (void)loadUrlImage:(id)arg1 isClipToSquare:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)addLoadUrlImageTask:(id)arg1;
- (void)setImageToCache:(id)arg1 withKey:(id)arg2;
- (id)getImageFromCache:(id)arg1;
- (id)getImageKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 defaultImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isClipToSquare; // @dynamic isClipToSquare;
@property(nonatomic) _Bool isCornerCropped; // @dynamic isCornerCropped;
@property(nonatomic) _Bool isNoneAsynLoad; // @dynamic isNoneAsynLoad;
@property(nonatomic) _Bool resizeDisable; // @dynamic resizeDisable;
@property(readonly) Class superclass;

@end

