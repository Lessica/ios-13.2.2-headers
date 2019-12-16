/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCompressFileIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBCompressFileIntentResponse> {
    bool  __encodeLegacyGloryData;
    _INPBString * _entityName;
    struct { 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (bool)hasEntityName;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end