/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeEntityResponse : PBCodable <NSCopying, NSSecureCoding, _INPBHomeEntityResponse> {
    bool  __encodeLegacyGloryData;
    _INPBHomeEntity * _entity;
    struct { }  _has;
    NSArray * _taskResponses;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBHomeEntity *entity;
@property (nonatomic, readonly) bool hasEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *taskResponses;
@property (nonatomic, readonly) unsigned long long taskResponsesCount;

+ (bool)supportsSecureCoding;
+ (Class)taskResponsesType;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addTaskResponses:(id)arg1;
- (void)clearTaskResponses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (bool)hasEntity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setTaskResponses:(id)arg1;
- (id)taskResponses;
- (id)taskResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskResponsesCount;
- (void)writeTo:(id)arg1;

@end
