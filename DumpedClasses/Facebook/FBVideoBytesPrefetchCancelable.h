//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBCancelable-Protocol.h"

@interface FBVideoBytesPrefetchCancelable : NSObject <FBCancelable>
{
    _Bool _canceled;
    long long _currentOutgoingPrefetch;
}

@property(nonatomic) long long currentOutgoingPrefetch; // @synthesize currentOutgoingPrefetch=_currentOutgoingPrefetch;
@property(readonly, nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
- (void)cancel;

@end

