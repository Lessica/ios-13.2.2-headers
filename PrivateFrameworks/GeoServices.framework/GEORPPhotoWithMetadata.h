/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying> {
    double  _creationDate;
    NSData * _data;
    struct { 
        unsigned int has_creationDate : 1; 
        unsigned int has_geotagHorizontalAccuracy : 1; 
        unsigned int has_geotagTimestamp : 1; 
        unsigned int read_data : 1; 
        unsigned int read_geotagCoordinate : 1; 
        unsigned int wrote_creationDate : 1; 
        unsigned int wrote_data : 1; 
        unsigned int wrote_geotagCoordinate : 1; 
        unsigned int wrote_geotagHorizontalAccuracy : 1; 
        unsigned int wrote_geotagTimestamp : 1; 
    }  _flags;
    GEOLatLng * _geotagCoordinate;
    double  _geotagHorizontalAccuracy;
    double  _geotagTimestamp;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) GEOLatLng *geotagCoordinate;
@property (nonatomic) double geotagHorizontalAccuracy;
@property (nonatomic) double geotagTimestamp;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasGeotagCoordinate;
@property (nonatomic) bool hasGeotagHorizontalAccuracy;
@property (nonatomic) bool hasGeotagTimestamp;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readData;
- (void)_readGeotagCoordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geotagCoordinate;
- (double)geotagHorizontalAccuracy;
- (double)geotagTimestamp;
- (bool)hasCreationDate;
- (bool)hasData;
- (bool)hasGeotagCoordinate;
- (bool)hasGeotagHorizontalAccuracy;
- (bool)hasGeotagTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setData:(id)arg1;
- (void)setGeotagCoordinate:(id)arg1;
- (void)setGeotagHorizontalAccuracy:(double)arg1;
- (void)setGeotagTimestamp:(double)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasGeotagHorizontalAccuracy:(bool)arg1;
- (void)setHasGeotagTimestamp:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
