//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CUBaseModel : NSObject
{
    NSString *_returnCode;
    NSString *_desc;
}

+ (id)modelWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *returnCode; // @synthesize returnCode=_returnCode;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

