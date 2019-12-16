/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGetVolumeResultMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int volume : 1; 
    }  _has;
    float  _volume;
}

@property (nonatomic) bool hasVolume;
@property (nonatomic) float volume;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVolume;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)writeTo:(id)arg1;

@end
