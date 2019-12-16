/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOServiceVersion : PBCodable <NSCopying> {
    struct { 
        unsigned int has_minimumVersion : 1; 
    }  _flags;
    unsigned int  _minimumVersion;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _versionDomains;
}

@property (nonatomic) bool hasMinimumVersion;
@property (nonatomic) unsigned int minimumVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *versionDomains;

+ (bool)isValid:(id)arg1;
+ (Class)versionDomainType;

- (void).cxx_destruct;
- (void)addVersionDomain:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearVersionDomains;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinimumVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minimumVersion;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMinimumVersion:(bool)arg1;
- (void)setMinimumVersion:(unsigned int)arg1;
- (void)setVersionDomains:(id)arg1;
- (id)unknownFields;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (id)versionDomains;
- (unsigned long long)versionDomainsCount;
- (void)writeTo:(id)arg1;

@end
