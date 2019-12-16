/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _PARResult_Template : PBCodable <NSSecureCoding, _PARResult_Template> {
    NSData * _cardData;
    NSString * _completion;
    NSString * _title;
}

@property (nonatomic, copy) NSData *cardData;
@property (nonatomic, copy) NSString *completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)cardData;
- (id)completion;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCardData:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
