/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreNetworkdStatsReport : PBCodable <NSCopying> {
    unsigned long long  _fallbackConnectionCount;
    struct { 
        unsigned int fallbackConnectionCount : 1; 
        unsigned int totalConnectionCount : 1; 
        unsigned int totalSuccessfulConnectionCount : 1; 
    }  _has;
    unsigned long long  _totalConnectionCount;
    unsigned long long  _totalSuccessfulConnectionCount;
}

@property (nonatomic) unsigned long long fallbackConnectionCount;
@property (nonatomic) bool hasFallbackConnectionCount;
@property (nonatomic) bool hasTotalConnectionCount;
@property (nonatomic) bool hasTotalSuccessfulConnectionCount;
@property (nonatomic) unsigned long long totalConnectionCount;
@property (nonatomic) unsigned long long totalSuccessfulConnectionCount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)fallbackConnectionCount;
- (bool)hasFallbackConnectionCount;
- (bool)hasTotalConnectionCount;
- (bool)hasTotalSuccessfulConnectionCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFallbackConnectionCount:(unsigned long long)arg1;
- (void)setHasFallbackConnectionCount:(bool)arg1;
- (void)setHasTotalConnectionCount:(bool)arg1;
- (void)setHasTotalSuccessfulConnectionCount:(bool)arg1;
- (void)setTotalConnectionCount:(unsigned long long)arg1;
- (void)setTotalSuccessfulConnectionCount:(unsigned long long)arg1;
- (unsigned long long)totalConnectionCount;
- (unsigned long long)totalSuccessfulConnectionCount;
- (void)writeTo:(id)arg1;

@end
