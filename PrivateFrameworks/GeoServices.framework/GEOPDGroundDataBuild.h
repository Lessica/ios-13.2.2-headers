/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDGroundDataBuild : PBCodable <NSCopying> {
    unsigned int  _bucketId;
    unsigned int  _buildId;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _capabilitys;
    unsigned int  _dataFormatVersion;
    struct { 
        unsigned int has_bucketId : 1; 
        unsigned int has_buildId : 1; 
        unsigned int has_dataFormatVersion : 1; 
        unsigned int has_heightAboveGroundM : 1; 
        unsigned int has_index : 1; 
        unsigned int has_metricsVersion : 1; 
        unsigned int has_type : 1; 
        unsigned int has_urlFormat : 1; 
        unsigned int read_capabilitys : 1; 
        unsigned int read_lodWithTextures : 1; 
        unsigned int wrote_capabilitys : 1; 
        unsigned int wrote_lodWithTextures : 1; 
        unsigned int wrote_bucketId : 1; 
        unsigned int wrote_buildId : 1; 
        unsigned int wrote_dataFormatVersion : 1; 
        unsigned int wrote_heightAboveGroundM : 1; 
        unsigned int wrote_index : 1; 
        unsigned int wrote_metricsVersion : 1; 
        unsigned int wrote_type : 1; 
        unsigned int wrote_urlFormat : 1; 
    }  _flags;
    float  _heightAboveGroundM;
    unsigned int  _index;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _lodWithTextures;
    unsigned int  _metricsVersion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    int  _urlFormat;
}

@property (nonatomic) unsigned int bucketId;
@property (nonatomic) unsigned int buildId;
@property (nonatomic, readonly) int*capabilitys;
@property (nonatomic, readonly) unsigned long long capabilitysCount;
@property (nonatomic) unsigned int dataFormatVersion;
@property (nonatomic) bool hasBucketId;
@property (nonatomic) bool hasBuildId;
@property (nonatomic) bool hasDataFormatVersion;
@property (nonatomic) bool hasHeightAboveGroundM;
@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasMetricsVersion;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUrlFormat;
@property (nonatomic) float heightAboveGroundM;
@property (nonatomic) unsigned int index;
@property (nonatomic, readonly) unsigned int*lodWithTextures;
@property (nonatomic, readonly) unsigned long long lodWithTexturesCount;
@property (nonatomic) unsigned int metricsVersion;
@property (nonatomic) int type;
@property (nonatomic) int urlFormat;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCapabilitys:(id)arg1;
- (int)StringAsType:(id)arg1;
- (int)StringAsUrlFormat:(id)arg1;
- (void)_addNoFlagsCapability:(int)arg1;
- (void)_addNoFlagsLodWithTextures:(unsigned int)arg1;
- (void)_readCapabilitys;
- (void)_readLodWithTextures;
- (void)addCapability:(int)arg1;
- (void)addLodWithTextures:(unsigned int)arg1;
- (unsigned int)bucketId;
- (unsigned int)buildId;
- (int)capabilityAtIndex:(unsigned long long)arg1;
- (int*)capabilitys;
- (id)capabilitysAsString:(int)arg1;
- (unsigned long long)capabilitysCount;
- (void)clearCapabilitys;
- (void)clearLodWithTextures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataFormatVersion;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucketId;
- (bool)hasBuildId;
- (bool)hasDataFormatVersion;
- (bool)hasHeightAboveGroundM;
- (bool)hasIndex;
- (bool)hasMetricsVersion;
- (bool)hasType;
- (bool)hasUrlFormat;
- (unsigned long long)hash;
- (float)heightAboveGroundM;
- (unsigned int)index;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int*)lodWithTextures;
- (unsigned int)lodWithTexturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)lodWithTexturesCount;
- (void)mergeFrom:(id)arg1;
- (unsigned int)metricsVersion;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBucketId:(unsigned int)arg1;
- (void)setBuildId:(unsigned int)arg1;
- (void)setCapabilitys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDataFormatVersion:(unsigned int)arg1;
- (void)setHasBucketId:(bool)arg1;
- (void)setHasBuildId:(bool)arg1;
- (void)setHasDataFormatVersion:(bool)arg1;
- (void)setHasHeightAboveGroundM:(bool)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasMetricsVersion:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUrlFormat:(bool)arg1;
- (void)setHeightAboveGroundM:(float)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setLodWithTextures:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setMetricsVersion:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (void)setUrlFormat:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (int)urlFormat;
- (id)urlFormatAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
