/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDiscreteQuantitySampleQuantityFilter : _HKFilter {
    HKQuantity * _comparisonQuantity;
    NSString * _keyPath;
    unsigned long long  _operatorType;
    HKQuantityType * _quantityType;
}

@property (nonatomic, readonly, copy) HKQuantity *comparisonQuantity;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly, copy) HKQuantityType *quantityType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_allowedKeyPaths;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 comparisonQuantity:(id)arg3 quantityType:(id)arg4;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_quantityFromQuantitySample:(id)arg1;
- (bool)acceptsDataObject:(id)arg1;
- (id)comparisonQuantity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (unsigned long long)operatorType;
- (id)quantityType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
