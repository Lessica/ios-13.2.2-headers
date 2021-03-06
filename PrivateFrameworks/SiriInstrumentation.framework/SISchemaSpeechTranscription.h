/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaSpeechTranscription : PBCodable <NSSecureCoding, SISchemaSpeechTranscription> {
    NSString * _aceID;
    int  _speechTranscriptionType;
}

@property (nonatomic, copy) NSString *aceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int speechTranscriptionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aceID;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceID:(id)arg1;
- (void)setSpeechTranscriptionType:(int)arg1;
- (int)speechTranscriptionType;
- (void)writeTo:(id)arg1;

@end
