/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEnrouteNotice : PBCodable <NSCopying> {
    struct { 
        unsigned int has_highlightDistance : 1; 
        unsigned int has_objectGroupId : 1; 
        unsigned int has_priority : 1; 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_guidances : 1; 
        unsigned int read_objectIdentifier : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_guidances : 1; 
        unsigned int wrote_objectIdentifier : 1; 
        unsigned int wrote_highlightDistance : 1; 
        unsigned int wrote_objectGroupId : 1; 
        unsigned int wrote_priority : 1; 
        unsigned int wrote_type : 1; 
    }  _flags;
    NSMutableArray * _guidances;
    unsigned int  _highlightDistance;
    unsigned int  _objectGroupId;
    NSString * _objectIdentifier;
    unsigned int  _priority;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *guidances;
@property (nonatomic) bool hasHighlightDistance;
@property (nonatomic) bool hasObjectGroupId;
@property (nonatomic, readonly) bool hasObjectIdentifier;
@property (nonatomic) bool hasPriority;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int highlightDistance;
@property (nonatomic) unsigned int objectGroupId;
@property (nonatomic, retain) NSString *objectIdentifier;
@property (nonatomic) unsigned int priority;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)guidanceType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)_addNoFlagsGuidance:(id)arg1;
- (void)_readGuidances;
- (void)_readObjectIdentifier;
- (void)addGuidance:(id)arg1;
- (void)clearGuidances;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guidanceAtIndex:(unsigned long long)arg1;
- (id)guidances;
- (unsigned long long)guidancesCount;
- (bool)hasHighlightDistance;
- (bool)hasObjectGroupId;
- (bool)hasObjectIdentifier;
- (bool)hasPriority;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)highlightDistance;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)objectGroupId;
- (id)objectIdentifier;
- (unsigned int)priority;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGuidances:(id)arg1;
- (void)setHasHighlightDistance:(bool)arg1;
- (void)setHasObjectGroupId:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHighlightDistance:(unsigned int)arg1;
- (void)setObjectGroupId:(unsigned int)arg1;
- (void)setObjectIdentifier:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
