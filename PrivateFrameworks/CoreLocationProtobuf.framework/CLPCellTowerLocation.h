/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPCellTowerLocation : PBCodable <NSCopying> {
    NSString * _appBundleId;
    int  _arfcn;
    int  _ci;
    int  _ecn0;
    struct { 
        unsigned int arfcn : 1; 
        unsigned int ecn0 : 1; 
        unsigned int psc : 1; 
        unsigned int rat : 1; 
        unsigned int rscp : 1; 
        unsigned int serverHash : 1; 
        unsigned int transmit : 1; 
        unsigned int isLimitedService : 1; 
    }  _has;
    bool  _isLimitedService;
    int  _lac;
    CLPLocation * _location;
    int  _mcc;
    int  _mnc;
    CLPCellNeighborsGroup * _neighborGroup;
    NSMutableArray * _neighbors;
    NSString * _operatorName;
    int  _psc;
    int  _rat;
    int  _rscp;
    int  _rssi;
    int  _serverHash;
    NSString * _serviceProviderName;
    int  _transmit;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic) int arfcn;
@property (nonatomic) int ci;
@property (nonatomic) int ecn0;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic) bool hasArfcn;
@property (nonatomic) bool hasEcn0;
@property (nonatomic) bool hasIsLimitedService;
@property (nonatomic, readonly) bool hasNeighborGroup;
@property (nonatomic, readonly) bool hasOperatorName;
@property (nonatomic) bool hasPsc;
@property (nonatomic) bool hasRat;
@property (nonatomic) bool hasRscp;
@property (nonatomic) bool hasServerHash;
@property (nonatomic, readonly) bool hasServiceProviderName;
@property (nonatomic) bool hasTransmit;
@property (nonatomic) bool isLimitedService;
@property (nonatomic) int lac;
@property (nonatomic, retain) CLPLocation *location;
@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic, retain) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic, retain) NSMutableArray *neighbors;
@property (nonatomic, retain) NSString *operatorName;
@property (nonatomic) int psc;
@property (nonatomic) int rat;
@property (nonatomic) int rscp;
@property (nonatomic) int rssi;
@property (nonatomic) int serverHash;
@property (nonatomic, retain) NSString *serviceProviderName;
@property (nonatomic) int transmit;

+ (Class)neighborType;

- (void).cxx_destruct;
- (void)addNeighbor:(id)arg1;
- (id)appBundleId;
- (int)arfcn;
- (int)ci;
- (void)clearNeighbors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)ecn0;
- (bool)hasAppBundleId;
- (bool)hasArfcn;
- (bool)hasEcn0;
- (bool)hasIsLimitedService;
- (bool)hasNeighborGroup;
- (bool)hasOperatorName;
- (bool)hasPsc;
- (bool)hasRat;
- (bool)hasRscp;
- (bool)hasServerHash;
- (bool)hasServiceProviderName;
- (bool)hasTransmit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isLimitedService;
- (int)lac;
- (id)location;
- (int)mcc;
- (void)mergeFrom:(id)arg1;
- (int)mnc;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (id)neighborGroup;
- (id)neighbors;
- (unsigned long long)neighborsCount;
- (id)operatorName;
- (int)psc;
- (int)rat;
- (bool)readFrom:(id)arg1;
- (int)rscp;
- (int)rssi;
- (int)serverHash;
- (id)serviceProviderName;
- (void)setAppBundleId:(id)arg1;
- (void)setArfcn:(int)arg1;
- (void)setCi:(int)arg1;
- (void)setEcn0:(int)arg1;
- (void)setHasArfcn:(bool)arg1;
- (void)setHasEcn0:(bool)arg1;
- (void)setHasIsLimitedService:(bool)arg1;
- (void)setHasPsc:(bool)arg1;
- (void)setHasRat:(bool)arg1;
- (void)setHasRscp:(bool)arg1;
- (void)setHasServerHash:(bool)arg1;
- (void)setHasTransmit:(bool)arg1;
- (void)setIsLimitedService:(bool)arg1;
- (void)setLac:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMcc:(int)arg1;
- (void)setMnc:(int)arg1;
- (void)setNeighborGroup:(id)arg1;
- (void)setNeighbors:(id)arg1;
- (void)setOperatorName:(id)arg1;
- (void)setPsc:(int)arg1;
- (void)setRat:(int)arg1;
- (void)setRscp:(int)arg1;
- (void)setRssi:(int)arg1;
- (void)setServerHash:(int)arg1;
- (void)setServiceProviderName:(id)arg1;
- (void)setTransmit:(int)arg1;
- (int)transmit;
- (void)writeTo:(id)arg1;

@end
