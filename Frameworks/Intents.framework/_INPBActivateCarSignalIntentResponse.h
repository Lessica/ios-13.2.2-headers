/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBActivateCarSignalIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBActivateCarSignalIntentResponse> {
    bool  __encodeLegacyGloryData;
    struct { }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _signals;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int*signals;
@property (nonatomic, readonly) unsigned long long signalsCount;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (int)StringAsSignals:(id)arg1;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addSignals:(int)arg1;
- (void)clearSignals;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSignals:(int*)arg1 count:(unsigned long long)arg2;
- (int*)signals;
- (id)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)signalsCount;
- (void)writeTo:(id)arg1;

@end
