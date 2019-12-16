/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INHomeFilter : NSObject <INJSONSerializable, NSCopying, NSSecureCoding, REDonatedActionIdentifierProviding> {
    long long  _deviceType;
    NSArray * _entityIdentifiers;
    INSpeakableString * _entityName;
    long long  _entityType;
    INSpeakableString * _group;
    INSpeakableString * _home;
    bool  _isExcludeFilter;
    INSpeakableString * _outerDeviceName;
    long long  _outerDeviceType;
    INSpeakableString * _room;
    INSpeakableString * _zone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceProfileType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly, copy) NSArray *entityIdentifiers;
@property (nonatomic, readonly, copy) INSpeakableString *entityName;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly, copy) INSpeakableString *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *home;
@property (nonatomic, readonly) bool isExcludeFilter;
@property (nonatomic, readonly, copy) INSpeakableString *outerDeviceName;
@property (nonatomic, readonly) long long outerDeviceType;
@property (nonatomic, readonly, copy) INSpeakableString *room;
@property (nonatomic, readonly, copy) INSpeakableString *scene;
@property (nonatomic, readonly, copy) INSpeakableString *service;
@property (nonatomic, readonly) long long serviceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *zone;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)deviceProfileType;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifiers;
- (id)entityName;
- (long long)entityType;
- (id)group;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 deviceProfileType:(long long)arg4 capabilityName:(id)arg5 capabilityProfileType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(bool)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 innerDeviceName:(id)arg5 innerDeviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(bool)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 outerDeviceName:(id)arg5 deviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(bool)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 entityType:(long long)arg8 serviceType:(long long)arg9 subServiceType:(long long)arg10 isExcludeFilter:(bool)arg11 entityName:(id)arg12;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11 isExcludeFilter:(bool)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isExcludeFilter;
- (id)outerDeviceName;
- (long long)outerDeviceType;
- (id)room;
- (id)scene;
- (id)service;
- (long long)serviceType;
- (id)zone;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

@end
