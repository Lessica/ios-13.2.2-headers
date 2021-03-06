/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalRecord : HKSample <HDCoding, HKCodedSample, HKConceptIndexable, HKMedicalRecordCodings, HRWDDisplayable, NSCopying, NSSecureCoding> {
    HKFHIRIdentifier * _FHIRIdentifier;
    bool  _enteredInError;
    long long  _extractionVersion;
    NSLocale * _locale;
    NSDate * _modifiedDate;
    NSString * _note;
    HKConcept * _primaryConcept;
    HKSemanticDate * _sortDate;
}

@property (nonatomic, readonly, copy) HKFHIRIdentifier *FHIRIdentifier;
@property (readonly) NSUUID *UUID;
@property (nonatomic, readonly) HKInspectableValueCollection *chartValue;
@property (nonatomic, readonly) NSArray *conceptNameItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayNameForGroupByConcept;
@property (readonly) NSDate *endDate;
@property (nonatomic, readonly) bool enteredInError;
@property (nonatomic, readonly) long long extractionVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *indexKeywords;
@property (nonatomic, readonly) bool isDateLess;
@property (nonatomic, readonly) bool isDisplayable;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly) NSDate *meaningfulDate;
@property (nonatomic, readonly) NSString *meaningfulDateString;
@property (nonatomic, readonly) NSString *meaningfulDateTitle;
@property (nonatomic, readonly) NSArray *medicalRecordCodings;
@property (nonatomic, readonly) NSArray *medicalRecordPreferredSystems;
@property (nonatomic, readonly, copy) NSDate *modifiedDate;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly) NSString *preferredDisplayName;
@property (nonatomic, readonly) HKConcept *primaryConcept;
@property (nonatomic, readonly) long long recordCategoryType;
@property (nonatomic, readonly, copy) HKSemanticDate *sortDate;
@property (readonly) NSDate *startDate;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSString *titleDisplayStringForDetailViewController;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newMedicalRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 config:(id /* block */)arg11;
+ (id)_sortDateIntervalFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 error:(out id*)arg3;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)indexableConceptKeyPaths;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRIdentifier;
- (id)_init;
- (void)_setEnteredInError:(bool)arg1;
- (void)_setExtractionVersion:(long long)arg1;
- (void)_setFHIRIdentifier:(id)arg1;
- (void)_setLocale:(id)arg1;
- (void)_setModifiedDate:(id)arg1;
- (void)_setNote:(id)arg1;
- (void)_setPrimaryConcept:(id)arg1;
- (void)_setSortDate:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)enteredInError;
- (long long)extractionVersion;
- (id)fallbackDisplayString;
- (id)indexKeywords;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)locale;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)modifiedDate;
- (id)note;
- (id)primaryCodingContext;
- (id)primaryConcept;
- (id)sortDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
+ (bool)supportsSecureCoding:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)chartValue;
- (id)chartableCodedQuantitySet;
- (id)codings;
- (id)conceptNameItems;
- (id)displayNameForGroupByConcept;
- (void)fetchChartValueWithRangeWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchConceptRoomItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchDetailItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchDisplayNameItemWithHealthRecordsStore:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchObservationDetailItemsWithHealthRecordsStore:(id)arg1 style:(long long)arg2 completion:(id /* block */)arg3;
- (void)fetchStructuredFieldItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (bool)isDateLess;
- (bool)isDisplayable;
- (id)meaningfulDate;
- (id)meaningfulDateDisplayStringWithPreferredForm:(long long)arg1 showTime:(bool)arg2;
- (id)meaningfulDateString;
- (id)meaningfulDateTitle;
- (id)preferredDisplayName;
- (long long)recordCategoryType;
- (id)sortDateTitle;
- (id)subtitle;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

@end
