/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelConsistencyReconsolidation : PBCodable <NSCopying> {
    int  _countOfReconsolidatedLOIs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int countOfReconsolidatedLOIs : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int countOfReconsolidatedLOIs;
@property (nonatomic) bool hasCountOfReconsolidatedLOIs;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countOfReconsolidatedLOIs;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountOfReconsolidatedLOIs;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountOfReconsolidatedLOIs:(int)arg1;
- (void)setHasCountOfReconsolidatedLOIs:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
