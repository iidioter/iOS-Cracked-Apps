//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NXTAdapterManager : NSObject
{
    NSMutableDictionary *_impClassDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *impClassDict; // @synthesize impClassDict=_impClassDict;
- (void).cxx_destruct;
- (Class)adapterImplClassForProtocol:(id)arg1;
- (void)injectImplWithClass:(Class)arg1 forProtocol:(id)arg2;
- (id)init;

@end

