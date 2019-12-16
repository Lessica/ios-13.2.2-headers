/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDModule : PBCodable <NSCopying> {
    NSString * _debugDescription;
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_debugDescription : 1; 
        unsigned int read_options : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_debugDescription : 1; 
        unsigned int wrote_options : 1; 
        unsigned int wrote_type : 1; 
    }  _flags;
    GEOPDModuleOptions * _options;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *debugDescription;
@property (nonatomic, readonly) bool hasDebugDescription;
@property (nonatomic, readonly) bool hasOptions;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) GEOPDModuleOptions *options;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)_readDebugDescription;
- (void)_readOptions;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDebugDescription;
- (bool)hasOptions;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDebugDescription:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
