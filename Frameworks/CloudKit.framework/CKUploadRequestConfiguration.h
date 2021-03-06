/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUploadRequestConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerIdentifier;
    CKRecordZoneID * _repairZoneID;
    NSString * _sourceApplicationBundleID;
}

@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic, copy) CKRecordZoneID *repairZoneID;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;

+ (id)configurationFromBaseContainer:(id)arg1;
+ (id)resolvedConfigurationWithBaseContainer:(id)arg1 overrides:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromBaseContainer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)repairZoneID;
- (void)setContainerIdentifier:(id)arg1;
- (void)setRepairZoneID:(id)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (id)sourceApplicationBundleID;

@end
