/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKMedicalIDData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _allergyInfo;
    NSDate * _birthdate;
    long long  _bloodType;
    NSDate * _dateSaved;
    NSArray * _emergencyContacts;
    NSDate * _gmtBirthdate;
    HKQuantity * _height;
    bool  _isDisabled;
    NSNumber * _isOrganDonor;
    NSString * _medicalConditions;
    NSString * _medicalNotes;
    NSString * _medicationInfo;
    NSString * _name;
    NSData * _pictureData;
    long long  _schemaVersion;
    HKQuantity * _weight;
}

@property (nonatomic, copy) NSString *allergyInfo;
@property (nonatomic, retain) NSDate *birthdate;
@property (nonatomic) long long bloodType;
@property (nonatomic, retain) NSDate *dateSaved;
@property (nonatomic, copy) NSArray *emergencyContacts;
@property (nonatomic, retain) NSDate *gmtBirthdate;
@property (nonatomic, copy) NSDateComponents *gregorianBirthday;
@property (nonatomic, retain) HKQuantity *height;
@property (nonatomic) bool isDisabled;
@property (nonatomic, retain) NSNumber *isOrganDonor;
@property (nonatomic, copy) NSString *medicalConditions;
@property (nonatomic, copy) NSString *medicalNotes;
@property (nonatomic, copy) NSString *medicationInfo;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSData *pictureData;
@property (nonatomic) long long schemaVersion;
@property (nonatomic, retain) HKQuantity *weight;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_gregorianUtcCalendar;
- (id)allergyInfo;
- (id)birthdate;
- (long long)bloodType;
- (id)consolidatedSOSContactsWithSOSContactsManager:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSaved;
- (id)emergencyContacts;
- (void)encodeWithCoder:(id)arg1;
- (id)gmtBirthdate;
- (id)gregorianBirthday;
- (bool)hasAnyData;
- (id)height;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDisabled;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)isOrganDonor;
- (id)medicalConditions;
- (id)medicalNotes;
- (id)medicationInfo;
- (id)name;
- (id)pictureData;
- (void)recordFieldPresenceStatistics;
- (long long)schemaVersion;
- (void)setAllergyInfo:(id)arg1;
- (void)setBirthdate:(id)arg1;
- (void)setBloodType:(long long)arg1;
- (void)setDateSaved:(id)arg1;
- (void)setEmergencyContacts:(id)arg1;
- (void)setGmtBirthdate:(id)arg1;
- (void)setGregorianBirthday:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setIsDisabled:(bool)arg1;
- (void)setIsOrganDonor:(id)arg1;
- (void)setMedicalConditions:(id)arg1;
- (void)setMedicalNotes:(id)arg1;
- (void)setMedicationInfo:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPictureData:(id)arg1;
- (void)setSchemaVersion:(long long)arg1;
- (void)setWeight:(id)arg1;
- (id)weight;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)contactKeysToLoadForMedicalID;

- (id)_contactKeysToFetch;
- (bool)_updateExistingEmergencyContacts;
- (bool)_updateIdentifierByPhoneNumberForEmergencyContact:(id)arg1 contactStore:(id)arg2;
- (void)loadDataFromCNContact:(id)arg1;
- (bool)updateEmergencyContacts;

@end
