/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaRedactableString : PBCodable <NSSecureCoding, SISchemaRedactableString> {
    int  _redactionState;
    NSString * _value;
    unsigned long long  _which_String;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int redactionState;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, readonly) unsigned long long which_String;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)redactionState;
- (void)setRedactionState:(int)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (unsigned long long)which_String;
- (void)writeTo:(id)arg1;

@end
