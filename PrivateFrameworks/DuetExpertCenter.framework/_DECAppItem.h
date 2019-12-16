/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECAppItem : _DECItem {
    NSString * _bundleIdentifier;
    long long  _reason;
    long long  _sources;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) long long reason;
@property (nonatomic, readonly) long long sources;

+ (id)appWithBundleIdentifier:(id)arg1;
+ (id)appWithBundleIdentifier:(id)arg1 sources:(long long)arg2;
+ (unsigned long long)category;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECAppItem:(id)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 sources:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (long long)reason;
- (void)setReason:(long long)arg1;
- (long long)sources;

@end
