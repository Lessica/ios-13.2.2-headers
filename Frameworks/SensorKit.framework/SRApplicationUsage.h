/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SensorKit.framework/SensorKit
 */

@interface SRApplicationUsage : NSObject <NSSecureCoding, SRSampleExporting> {
    NSString * _bundleIdentifier;
    double  _totalUsageTime;
    double  _usageTime;
}

@property (copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property double totalUsageTime;
@property (readonly) double usageTime;

+ (id)applicationUsageWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)bundleIdentifier;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setTotalUsageTime:(double)arg1;
- (id)sr_dictionaryRepresentation;
- (double)totalUsageTime;
- (double)usageTime;

@end
