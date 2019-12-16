/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionIDS : NSObject <VCConnectionProtocol> {
    int  _connectionMTU;
    VCDatagramChannelIDS * _datagramChannel;
    unsigned int  _datagramChannelToken;
    unsigned int  _downlinkBitrateCap;
    bool  _isLocalConstrained;
    bool  _isRemoteConstrained;
    IDSDataChannelLinkContext * _linkContext;
    int  _localCellTech;
    int  _priority;
    int  _remoteCellTech;
    unsigned int  _type;
    unsigned int  _uplinkBitrateCap;
}

@property (readonly) int connectionId;
@property int connectionMTU;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) VCDatagramChannelIDS *datagramChannel;
@property (readonly) unsigned int datagramChannelToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int downlinkBitrateCap;
@property (readonly) unsigned long long hash;
@property (readonly) bool isIPv6;
@property (readonly) bool isLocalConstrained;
@property (readonly) bool isLocalOnCellular;
@property (readonly) bool isLocalOnWiFi;
@property (readonly) bool isRelay;
@property (readonly) bool isRemoteConstrained;
@property (readonly) bool isRemoteOnCellular;
@property (readonly) bool isRemoteOnWiFi;
@property (readonly) bool isVPN;
@property (readonly) unsigned char linkID;
@property int localCellTech;
@property (readonly) int localConnectionType;
@property (readonly) NSString *localInterfaceTypeString;
@property int priority;
@property (readonly) NSString *relaySessionToken;
@property int remoteCellTech;
@property (readonly) int remoteConnectionType;
@property (readonly) NSString *remoteInterfaceTypeString;
@property (readonly) bool serverIsDegraded;
@property (readonly) NSData *sharedDigestKey;
@property (readonly) Class superclass;
@property (readonly) unsigned int type;
@property unsigned int uplinkBitrateCap;

+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(bool)arg2;

- (int)connectionId;
- (int)connectionMTU;
- (id)connectionQRSessionID;
- (id)connectionUUID;
- (id)datagramChannel;
- (unsigned int)datagramChannelToken;
- (void)dealloc;
- (id)description;
- (unsigned int)downlinkBitrateCap;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)arg1;
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;
- (bool)isIPv6;
- (bool)isLocalConstrained;
- (bool)isLocalOnCellular;
- (bool)isLocalOnWiFi;
- (bool)isOnSameInterfacesAndQRSessionWithConnection:(id)arg1;
- (bool)isOnSameInterfacesWithConnection:(id)arg1;
- (bool)isOnSameQRSessionWithConnection:(id)arg1;
- (bool)isRelay;
- (bool)isRemoteConstrained;
- (bool)isRemoteOnCellular;
- (bool)isRemoteOnWiFi;
- (bool)isSameAsConnection:(id)arg1;
- (bool)isVPN;
- (unsigned char)linkID;
- (int)localCellTech;
- (int)localConnectionType;
- (id)localInterfaceTypeString;
- (bool)matchesChannelTokenWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)arg1;
- (bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)arg1;
- (int)networkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(bool)arg2;
- (int)priority;
- (id)relaySessionToken;
- (int)remoteCellTech;
- (int)remoteConnectionType;
- (id)remoteInterfaceTypeString;
- (bool)serverIsDegraded;
- (void)setCellularMTU:(int)arg1;
- (void)setConnectionMTU:(int)arg1;
- (void)setDownlinkBitrateCap:(unsigned int)arg1;
- (void)setLocalCellTech:(int)arg1;
- (void)setPriority:(int)arg1;
- (void)setRemoteCellTech:(int)arg1;
- (void)setUplinkBitrateCap:(unsigned int)arg1;
- (id)sharedDigestKey;
- (unsigned int)type;
- (unsigned int)uplinkBitrateCap;

@end
