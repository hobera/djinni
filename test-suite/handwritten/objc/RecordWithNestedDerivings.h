// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#import "RecordWithDerivings.h"
#import <Foundation/Foundation.h>

@interface RecordWithNestedDerivings : NSObject
- (nonnull instancetype)initWithKey:(int32_t)key
                                rec:(nonnull RecordWithDerivings *)rec;
+ (nonnull instancetype)recordWithNestedDerivingsWithKey:(int32_t)key
                                                     rec:(nonnull RecordWithDerivings *)rec;

@property (nonatomic, readonly) int32_t key;

@property (nonatomic, readonly, nonnull) RecordWithDerivings * rec;

- (NSComparisonResult)compare:(nonnull RecordWithNestedDerivings *)other;

@end
