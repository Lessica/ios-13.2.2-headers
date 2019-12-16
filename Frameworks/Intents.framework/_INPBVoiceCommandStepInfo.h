/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBVoiceCommandStepInfo : PBCodable <NSCopying, NSSecureCoding, _INPBVoiceCommandStepInfo> {
    bool  __encodeLegacyGloryData;
    NSString * _applicationIdentifier;
    int  _category;
    struct { 
        unsigned int category : 1; 
    }  _has;
    NSString * _name;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic) int category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasApplicationIdentifier;
@property (nonatomic) bool hasCategory;
@property (nonatomic, readonly) bool hasName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsCategory:(id)arg1;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)applicationIdentifier;
- (int)category;
- (id)categoryAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasApplicationIdentifier;
- (bool)hasCategory;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
