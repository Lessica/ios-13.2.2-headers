/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDGroundViewLabelInfo : PBCodable <NSCopying> {
    double  _endHeading;
    struct { 
        unsigned int has_endHeading : 1; 
        unsigned int has_startHeading : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_localityName : 1; 
        unsigned int read_locationName : 1; 
        unsigned int read_secondaryLocationName : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_endHeading : 1; 
        unsigned int wrote_localityName : 1; 
        unsigned int wrote_locationName : 1; 
        unsigned int wrote_secondaryLocationName : 1; 
        unsigned int wrote_startHeading : 1; 
    }  _flags;
    NSString * _localityName;
    NSString * _locationName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _secondaryLocationName;
    double  _startHeading;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double endHeading;
@property (nonatomic) bool hasEndHeading;
@property (nonatomic, readonly) bool hasLocalityName;
@property (nonatomic, readonly) bool hasLocationName;
@property (nonatomic, readonly) bool hasSecondaryLocationName;
@property (nonatomic) bool hasStartHeading;
@property (nonatomic, retain) NSString *localityName;
@property (nonatomic, retain) NSString *locationName;
@property (nonatomic, retain) NSString *secondaryLocationName;
@property (nonatomic) double startHeading;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readLocalityName;
- (void)_readLocationName;
- (void)_readSecondaryLocationName;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endHeading;
- (bool)hasEndHeading;
- (bool)hasLocalityName;
- (bool)hasLocationName;
- (bool)hasSecondaryLocationName;
- (bool)hasStartHeading;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localityName;
- (id)locationName;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)secondaryLocationName;
- (void)setEndHeading:(double)arg1;
- (void)setHasEndHeading:(bool)arg1;
- (void)setHasStartHeading:(bool)arg1;
- (void)setLocalityName:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setSecondaryLocationName:(id)arg1;
- (void)setStartHeading:(double)arg1;
- (double)startHeading;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
