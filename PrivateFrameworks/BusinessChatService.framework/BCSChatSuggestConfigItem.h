/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSChatSuggestConfigItem : NSObject <NSCopying, NSSecureCoding> {
    long long  _buckets;
    NSDate * _expirationDate;
    long long  _shards;
}

@property (nonatomic, readonly) long long buckets;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) long long shards;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)buckets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObj:(id)arg1;
- (long long)shards;

@end