/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPOIEventInvalidationData : PBCodable <NSCopying> {
    NSData * _cacheInvalidationData;
}

@property (nonatomic, retain) NSData *cacheInvalidationData;
@property (nonatomic, readonly) bool hasCacheInvalidationData;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)cacheInvalidationData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCacheInvalidationData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCacheInvalidationData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
