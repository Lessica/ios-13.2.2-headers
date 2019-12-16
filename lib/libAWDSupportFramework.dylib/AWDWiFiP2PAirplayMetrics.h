/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiP2PAirplayMetrics : PBCodable <NSCopying> {
    NSMutableArray * _avgCCAPeerInfraChannels;
    NSMutableArray * _avgCCASelfInfraChannels;
    NSMutableArray * _avgCCASocialChannels;
    unsigned int  _awdlVersion;
    unsigned int  _clientModeDuration;
    bool  _csaDuringDfspMode;
    bool  _csaToDfsChannel;
    bool  _dfsProxyMode;
    struct { 
        unsigned int rxBytes : 1; 
        unsigned int timestamp : 1; 
        unsigned int txBytes : 1; 
        unsigned int awdlVersion : 1; 
        unsigned int clientModeDuration : 1; 
        unsigned int infraDisconnectedCount : 1; 
        unsigned int missingAWStartEventCount : 1; 
        unsigned int peerInfraChannel : 1; 
        unsigned int psfEnabledCount : 1; 
        unsigned int routablePeerCount : 1; 
        unsigned int selfInfraChannel : 1; 
        unsigned int senderPlatform : 1; 
        unsigned int sequenceNumberNotUpdatedCount : 1; 
        unsigned int serverModeDuration : 1; 
        unsigned int splitModeDuration : 1; 
        unsigned int startingRSSI : 1; 
        unsigned int totalDuration : 1; 
        unsigned int totalPeerCount : 1; 
        unsigned int csaDuringDfspMode : 1; 
        unsigned int csaToDfsChannel : 1; 
        unsigned int dfsProxyMode : 1; 
        unsigned int inRetroMode : 1; 
        unsigned int peerIsSDB : 1; 
        unsigned int selfIsSDB : 1; 
    }  _has;
    bool  _inRetroMode;
    unsigned int  _infraDisconnectedCount;
    unsigned int  _missingAWStartEventCount;
    unsigned int  _peerInfraChannel;
    bool  _peerIsSDB;
    NSMutableArray * _peerRSSIs;
    unsigned int  _psfEnabledCount;
    unsigned int  _routablePeerCount;
    unsigned long long  _rxBytes;
    unsigned int  _selfInfraChannel;
    bool  _selfIsSDB;
    unsigned int  _senderPlatform;
    unsigned int  _sequenceNumberNotUpdatedCount;
    unsigned int  _serverModeDuration;
    unsigned int  _splitModeDuration;
    int  _startingRSSI;
    unsigned long long  _timestamp;
    unsigned int  _totalDuration;
    unsigned int  _totalPeerCount;
    unsigned long long  _txBytes;
}

@property (nonatomic, retain) NSMutableArray *avgCCAPeerInfraChannels;
@property (nonatomic, retain) NSMutableArray *avgCCASelfInfraChannels;
@property (nonatomic, retain) NSMutableArray *avgCCASocialChannels;
@property (nonatomic) unsigned int awdlVersion;
@property (nonatomic) unsigned int clientModeDuration;
@property (nonatomic) bool csaDuringDfspMode;
@property (nonatomic) bool csaToDfsChannel;
@property (nonatomic) bool dfsProxyMode;
@property (nonatomic) bool hasAwdlVersion;
@property (nonatomic) bool hasClientModeDuration;
@property (nonatomic) bool hasCsaDuringDfspMode;
@property (nonatomic) bool hasCsaToDfsChannel;
@property (nonatomic) bool hasDfsProxyMode;
@property (nonatomic) bool hasInRetroMode;
@property (nonatomic) bool hasInfraDisconnectedCount;
@property (nonatomic) bool hasMissingAWStartEventCount;
@property (nonatomic) bool hasPeerInfraChannel;
@property (nonatomic) bool hasPeerIsSDB;
@property (nonatomic) bool hasPsfEnabledCount;
@property (nonatomic) bool hasRoutablePeerCount;
@property (nonatomic) bool hasRxBytes;
@property (nonatomic) bool hasSelfInfraChannel;
@property (nonatomic) bool hasSelfIsSDB;
@property (nonatomic) bool hasSenderPlatform;
@property (nonatomic) bool hasSequenceNumberNotUpdatedCount;
@property (nonatomic) bool hasServerModeDuration;
@property (nonatomic) bool hasSplitModeDuration;
@property (nonatomic) bool hasStartingRSSI;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalDuration;
@property (nonatomic) bool hasTotalPeerCount;
@property (nonatomic) bool hasTxBytes;
@property (nonatomic) bool inRetroMode;
@property (nonatomic) unsigned int infraDisconnectedCount;
@property (nonatomic) unsigned int missingAWStartEventCount;
@property (nonatomic) unsigned int peerInfraChannel;
@property (nonatomic) bool peerIsSDB;
@property (nonatomic, retain) NSMutableArray *peerRSSIs;
@property (nonatomic) unsigned int psfEnabledCount;
@property (nonatomic) unsigned int routablePeerCount;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned int selfInfraChannel;
@property (nonatomic) bool selfIsSDB;
@property (nonatomic) unsigned int senderPlatform;
@property (nonatomic) unsigned int sequenceNumberNotUpdatedCount;
@property (nonatomic) unsigned int serverModeDuration;
@property (nonatomic) unsigned int splitModeDuration;
@property (nonatomic) int startingRSSI;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalDuration;
@property (nonatomic) unsigned int totalPeerCount;
@property (nonatomic) unsigned long long txBytes;

+ (Class)avgCCAPeerInfraChannelType;
+ (Class)avgCCASelfInfraChannelType;
+ (Class)avgCCASocialChannelType;
+ (Class)peerRSSIType;

- (void)addAvgCCAPeerInfraChannel:(id)arg1;
- (void)addAvgCCASelfInfraChannel:(id)arg1;
- (void)addAvgCCASocialChannel:(id)arg1;
- (void)addPeerRSSI:(id)arg1;
- (id)avgCCAPeerInfraChannelAtIndex:(unsigned long long)arg1;
- (id)avgCCAPeerInfraChannels;
- (unsigned long long)avgCCAPeerInfraChannelsCount;
- (id)avgCCASelfInfraChannelAtIndex:(unsigned long long)arg1;
- (id)avgCCASelfInfraChannels;
- (unsigned long long)avgCCASelfInfraChannelsCount;
- (id)avgCCASocialChannelAtIndex:(unsigned long long)arg1;
- (id)avgCCASocialChannels;
- (unsigned long long)avgCCASocialChannelsCount;
- (unsigned int)awdlVersion;
- (void)clearAvgCCAPeerInfraChannels;
- (void)clearAvgCCASelfInfraChannels;
- (void)clearAvgCCASocialChannels;
- (void)clearPeerRSSIs;
- (unsigned int)clientModeDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)csaDuringDfspMode;
- (bool)csaToDfsChannel;
- (void)dealloc;
- (id)description;
- (bool)dfsProxyMode;
- (id)dictionaryRepresentation;
- (bool)hasAwdlVersion;
- (bool)hasClientModeDuration;
- (bool)hasCsaDuringDfspMode;
- (bool)hasCsaToDfsChannel;
- (bool)hasDfsProxyMode;
- (bool)hasInRetroMode;
- (bool)hasInfraDisconnectedCount;
- (bool)hasMissingAWStartEventCount;
- (bool)hasPeerInfraChannel;
- (bool)hasPeerIsSDB;
- (bool)hasPsfEnabledCount;
- (bool)hasRoutablePeerCount;
- (bool)hasRxBytes;
- (bool)hasSelfInfraChannel;
- (bool)hasSelfIsSDB;
- (bool)hasSenderPlatform;
- (bool)hasSequenceNumberNotUpdatedCount;
- (bool)hasServerModeDuration;
- (bool)hasSplitModeDuration;
- (bool)hasStartingRSSI;
- (bool)hasTimestamp;
- (bool)hasTotalDuration;
- (bool)hasTotalPeerCount;
- (bool)hasTxBytes;
- (unsigned long long)hash;
- (bool)inRetroMode;
- (unsigned int)infraDisconnectedCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)missingAWStartEventCount;
- (unsigned int)peerInfraChannel;
- (bool)peerIsSDB;
- (id)peerRSSIAtIndex:(unsigned long long)arg1;
- (id)peerRSSIs;
- (unsigned long long)peerRSSIsCount;
- (unsigned int)psfEnabledCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)routablePeerCount;
- (unsigned long long)rxBytes;
- (unsigned int)selfInfraChannel;
- (bool)selfIsSDB;
- (unsigned int)senderPlatform;
- (unsigned int)sequenceNumberNotUpdatedCount;
- (unsigned int)serverModeDuration;
- (void)setAvgCCAPeerInfraChannels:(id)arg1;
- (void)setAvgCCASelfInfraChannels:(id)arg1;
- (void)setAvgCCASocialChannels:(id)arg1;
- (void)setAwdlVersion:(unsigned int)arg1;
- (void)setClientModeDuration:(unsigned int)arg1;
- (void)setCsaDuringDfspMode:(bool)arg1;
- (void)setCsaToDfsChannel:(bool)arg1;
- (void)setDfsProxyMode:(bool)arg1;
- (void)setHasAwdlVersion:(bool)arg1;
- (void)setHasClientModeDuration:(bool)arg1;
- (void)setHasCsaDuringDfspMode:(bool)arg1;
- (void)setHasCsaToDfsChannel:(bool)arg1;
- (void)setHasDfsProxyMode:(bool)arg1;
- (void)setHasInRetroMode:(bool)arg1;
- (void)setHasInfraDisconnectedCount:(bool)arg1;
- (void)setHasMissingAWStartEventCount:(bool)arg1;
- (void)setHasPeerInfraChannel:(bool)arg1;
- (void)setHasPeerIsSDB:(bool)arg1;
- (void)setHasPsfEnabledCount:(bool)arg1;
- (void)setHasRoutablePeerCount:(bool)arg1;
- (void)setHasRxBytes:(bool)arg1;
- (void)setHasSelfInfraChannel:(bool)arg1;
- (void)setHasSelfIsSDB:(bool)arg1;
- (void)setHasSenderPlatform:(bool)arg1;
- (void)setHasSequenceNumberNotUpdatedCount:(bool)arg1;
- (void)setHasServerModeDuration:(bool)arg1;
- (void)setHasSplitModeDuration:(bool)arg1;
- (void)setHasStartingRSSI:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalDuration:(bool)arg1;
- (void)setHasTotalPeerCount:(bool)arg1;
- (void)setHasTxBytes:(bool)arg1;
- (void)setInRetroMode:(bool)arg1;
- (void)setInfraDisconnectedCount:(unsigned int)arg1;
- (void)setMissingAWStartEventCount:(unsigned int)arg1;
- (void)setPeerInfraChannel:(unsigned int)arg1;
- (void)setPeerIsSDB:(bool)arg1;
- (void)setPeerRSSIs:(id)arg1;
- (void)setPsfEnabledCount:(unsigned int)arg1;
- (void)setRoutablePeerCount:(unsigned int)arg1;
- (void)setRxBytes:(unsigned long long)arg1;
- (void)setSelfInfraChannel:(unsigned int)arg1;
- (void)setSelfIsSDB:(bool)arg1;
- (void)setSenderPlatform:(unsigned int)arg1;
- (void)setSequenceNumberNotUpdatedCount:(unsigned int)arg1;
- (void)setServerModeDuration:(unsigned int)arg1;
- (void)setSplitModeDuration:(unsigned int)arg1;
- (void)setStartingRSSI:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalDuration:(unsigned int)arg1;
- (void)setTotalPeerCount:(unsigned int)arg1;
- (void)setTxBytes:(unsigned long long)arg1;
- (unsigned int)splitModeDuration;
- (int)startingRSSI;
- (unsigned long long)timestamp;
- (unsigned int)totalDuration;
- (unsigned int)totalPeerCount;
- (unsigned long long)txBytes;
- (void)writeTo:(id)arg1;

@end
