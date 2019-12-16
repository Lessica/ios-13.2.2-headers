/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddressObjectGeocodingParameters : PBCodable <NSCopying> {
    NSData * _addressObject;
    struct { 
        unsigned int has_maxResults : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addressObject : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_addressObject : 1; 
        unsigned int wrote_viewportInfo : 1; 
        unsigned int wrote_maxResults : 1; 
    }  _flags;
    unsigned int  _maxResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, retain) NSData *addressObject;
@property (nonatomic, readonly) bool hasAddressObject;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readAddressObject;
- (void)_readViewportInfo;
- (id)addressObject;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressObject;
- (bool)hasMaxResults;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressObject:(id)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
