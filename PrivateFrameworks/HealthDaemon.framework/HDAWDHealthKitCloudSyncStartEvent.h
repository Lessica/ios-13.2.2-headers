/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitCloudSyncStartEvent : PBCodable <NSCopying> {
    unsigned long long  _countSinceLastSuccess;
    HDAWDHealthKitCloudSyncEvent * _event;
    struct { 
        unsigned int countSinceLastSuccess : 1; 
        unsigned int timeSinceLastSuccess : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timeSinceLastSuccess;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long countSinceLastSuccess;
@property (nonatomic, retain) HDAWDHealthKitCloudSyncEvent *event;
@property (nonatomic) bool hasCountSinceLastSuccess;
@property (nonatomic, readonly) bool hasEvent;
@property (nonatomic) bool hasTimeSinceLastSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timeSinceLastSuccess;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countSinceLastSuccess;
- (id)description;
- (id)dictionaryRepresentation;
- (id)event;
- (bool)hasCountSinceLastSuccess;
- (bool)hasEvent;
- (bool)hasTimeSinceLastSuccess;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountSinceLastSuccess:(unsigned long long)arg1;
- (void)setEvent:(id)arg1;
- (void)setHasCountSinceLastSuccess:(bool)arg1;
- (void)setHasTimeSinceLastSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimeSinceLastSuccess:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timeSinceLastSuccess;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
