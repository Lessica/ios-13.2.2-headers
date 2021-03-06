/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
 */

@interface PREUMResponseItem : PBCodable <NSCopying> {
    struct { 
        unsigned int modelId : 1; 
        unsigned int replyTextId : 1; 
        unsigned int responseClassId : 1; 
    }  _has;
    unsigned int  _modelId;
    unsigned int  _replyTextId;
    unsigned int  _responseClassId;
}

@property (nonatomic) bool hasModelId;
@property (nonatomic) bool hasReplyTextId;
@property (nonatomic) bool hasResponseClassId;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) unsigned int responseClassId;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModelId;
- (bool)hasReplyTextId;
- (bool)hasResponseClassId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)modelId;
- (bool)readFrom:(id)arg1;
- (unsigned int)replyTextId;
- (unsigned int)responseClassId;
- (void)setHasModelId:(bool)arg1;
- (void)setHasReplyTextId:(bool)arg1;
- (void)setHasResponseClassId:(bool)arg1;
- (void)setModelId:(unsigned int)arg1;
- (void)setReplyTextId:(unsigned int)arg1;
- (void)setResponseClassId:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
