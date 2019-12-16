/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUser : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_image : 1; 
        unsigned int read_name : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_image : 1; 
        unsigned int wrote_name : 1; 
    }  _flags;
    GEOPhoto * _image;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) GEOPhoto *image;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readImage;
- (void)_readName;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImage;
- (bool)hasName;
- (unsigned long long)hash;
- (id)image;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
