/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapLaunch : PBCodable <NSCopying> {
    struct { 
        unsigned int read_launchUri : 1; 
        unsigned int read_sourceAppId : 1; 
        unsigned int wrote_launchUri : 1; 
        unsigned int wrote_sourceAppId : 1; 
    }  _flags;
    NSString * _launchUri;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _sourceAppId;
}

@property (nonatomic, readonly) bool hasLaunchUri;
@property (nonatomic, readonly) bool hasSourceAppId;
@property (nonatomic, retain) NSString *launchUri;
@property (nonatomic, retain) NSString *sourceAppId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readLaunchUri;
- (void)_readSourceAppId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLaunchUri;
- (bool)hasSourceAppId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)launchUri;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLaunchUri:(id)arg1;
- (void)setSourceAppId:(id)arg1;
- (id)sourceAppId;
- (void)writeTo:(id)arg1;

@end
