/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKConcept : NSObject <NSSecureCoding> {
    NSArray * _attributes;
    HKConcept * _groupByConcept;
    HKConceptIdentifier * _identifier;
    NSMutableArray * _relationships;
    bool  _relationshipsAreLoaded;
    NSString * nodeName;
    NSString * preferredName;
}

@property (nonatomic, readonly, copy) HKConceptAttribute *adHocCode;
@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, readonly, copy) HKConcept *chartedWithConcept;
@property (nonatomic, readonly) bool chartsBloodPressure;
@property (nonatomic, copy) HKConcept *groupByConcept;
@property (nonatomic, copy) HKConceptIdentifier *identifier;
@property (nonatomic, readonly) bool isAdHoc;
@property (nonatomic, readonly) bool isDisplayable;
@property (nonatomic, readonly) bool isUndefined;
@property (nonatomic, copy) NSString *nodeName;
@property (nonatomic, copy) NSString *preferredName;
@property (nonatomic, copy) NSArray *relationships;
@property (nonatomic) bool relationshipsAreLoaded;
@property (nonatomic, readonly) long long version;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_buildCategoryIdentifierWithCode:(unsigned long long)arg1;
+ (id)_conceptWithIdentifier:(id)arg1 attributes:(id)arg2;
+ (id)allergyCategoryIdentifier;
+ (id)conditionCategoryIdentifier;
+ (id)labCategoryIdentifier;
+ (id)medicationCategoryIdentifier;
+ (id)procedureCategoryIdentifier;
+ (bool)supportsSecureCoding;
+ (id)undefinedConcept;
+ (id)unknownCategoryIdentifier;
+ (id)vaccinationCategoryIdentifier;
+ (id)vitalCategoryIdentifier;

- (void).cxx_destruct;
- (id)_attributesMutableArray;
- (id)_firstConceptOfRelationshipType:(id)arg1;
- (id)_init;
- (id)adHocCode;
- (void)addAttribute:(id)arg1;
- (void)addRelationship:(id)arg1;
- (id)attributes;
- (id)attributesForName:(id)arg1;
- (id)chartedWithConcept;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstAttributeForName:(id)arg1;
- (id)groupByConcept;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAdHoc;
- (bool)isEqual:(id)arg1;
- (bool)isUndefined;
- (id)nodeName;
- (id)preferredName;
- (id)relationships;
- (bool)relationshipsAreLoaded;
- (void)setAttributes:(id)arg1;
- (void)setGroupByConcept:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNodeName:(id)arg1;
- (void)setPreferredName:(id)arg1;
- (void)setRelationships:(id)arg1;
- (void)setRelationshipsAreLoaded:(bool)arg1;
- (void)updateRelationshipsOwners;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (bool)chartsBloodPressure;
- (bool)isDisplayable;
- (id)preferredDisplayNameWithContext:(long long)arg1;

@end
