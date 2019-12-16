/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWiFiESS : PBCodable <NSCopying, NSSecureCoding, TBNetwork> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _authTraits;
    NSMutableArray * _bss;
    struct { 
        unsigned int has_uniqueIdentifier : 1; 
        unsigned int read_attributes : 1; 
        unsigned int read_authTraits : 1; 
        unsigned int read_bss : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_name : 1; 
        unsigned int read_qualities : 1; 
        unsigned int wrote_attributes : 1; 
        unsigned int wrote_authTraits : 1; 
        unsigned int wrote_bss : 1; 
        unsigned int wrote_identifier : 1; 
        unsigned int wrote_name : 1; 
        unsigned int wrote_qualities : 1; 
        unsigned int wrote_uniqueIdentifier : 1; 
    }  _flags;
    NSString * _identifier;
    NSString * _name;
    NSMutableArray * _qualities;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    long long  _uniqueIdentifier;
}

@property (nonatomic, readonly) NSString *SSID;
@property (nonatomic, readonly) NSSet *accessPoints;
@property (nonatomic, readonly) int*attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (nonatomic, readonly) NSString *attributesDescription;
@property (nonatomic, readonly) NSString *authDescription;
@property (nonatomic, readonly) unsigned long long authMask;
@property (nonatomic, readonly) int*authTraits;
@property (nonatomic, readonly) unsigned long long authTraitsCount;
@property (nonatomic, retain) NSMutableArray *bss;
@property (getter=isCaptive, nonatomic, readonly) bool captive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (getter=isMoving, nonatomic, readonly) bool moving;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) <TBScore> *popularityScore;
@property (getter=isPublic, nonatomic, readonly) bool public;
@property (nonatomic, retain) NSMutableArray *qualities;
@property (nonatomic, readonly) <TBScore> *qualityScore;
@property (nonatomic, readonly) NSString *remoteIdentifier;
@property (readonly) Class superclass;
@property (getter=isSuspicious, nonatomic, readonly) bool suspicious;
@property (nonatomic, readonly) unsigned long long tileKey;
@property (nonatomic) long long uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)bssType;
+ (bool)isValid:(id)arg1;
+ (Class)qualitiesType;

- (void).cxx_destruct;
- (int)StringAsAttributes:(id)arg1;
- (int)StringAsAuthTraits:(id)arg1;
- (void)_addNoFlagsAttributes:(int)arg1;
- (void)_addNoFlagsAuthTraits:(int)arg1;
- (void)_addNoFlagsBss:(id)arg1;
- (void)_addNoFlagsQualities:(id)arg1;
- (void)_readAttributes;
- (void)_readAuthTraits;
- (void)_readBss;
- (void)_readIdentifier;
- (void)_readName;
- (void)_readQualities;
- (void)addAttributes:(int)arg1;
- (void)addAuthTraits:(int)arg1;
- (void)addBss:(id)arg1;
- (void)addQualities:(id)arg1;
- (int*)attributes;
- (id)attributesAsString:(int)arg1;
- (int)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (int*)authTraits;
- (id)authTraitsAsString:(int)arg1;
- (int)authTraitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)authTraitsCount;
- (id)bss;
- (id)bssAtIndex:(unsigned long long)arg1;
- (unsigned long long)bssCount;
- (void)clearAttributes;
- (void)clearAuthTraits;
- (void)clearBss;
- (void)clearQualities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasName;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)qualities;
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qualitiesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAuthTraits:(int*)arg1 count:(unsigned long long)arg2;
- (void)setBss:(id)arg1;
- (void)setHasUniqueIdentifier:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQualities:(id)arg1;
- (void)setUniqueIdentifier:(long long)arg1;
- (long long)uniqueIdentifier;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

+ (bool)supportsSecureCoding;

- (id)SSID;
- (bool)_hasAttribute:(int)arg1;
- (id)accessPoints;
- (id)attributesDescription;
- (id)authDescription;
- (unsigned long long)authMask;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)isCaptive;
- (bool)isMoving;
- (bool)isPublic;
- (bool)isSuspicious;
- (id)popularityScore;
- (id)qualityScore;
- (id)remoteIdentifier;

@end
