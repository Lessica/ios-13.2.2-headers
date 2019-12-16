/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSUDPLink : NSObject <IDSLink> {
    int  _addressFamily;
    bool  _allowsLinkLocal;
    <IDSLinkDelegate> * _alternateDelegate;
    NSString * _cbuuid;
    NSIndexSet * _cellularInterfaceIndices;
    unsigned short  _cellularPort;
    int  _cellularSocket;
    <IDSLinkDelegate> * _delegate;
    IDSSockAddrWrapper * _destinationAddress;
    NSDictionary * _destinationAddressToDeviceIDMap;
    NSString * _deviceUniqueID;
    bool  _hasFixedDestination;
    bool  _hasTemporaryError;
    bool  _isInvalidated;
    double  _lastDestinationReceived;
    double  _lastDestinationSent;
    IDSSockAddrWrapper * _localAddress;
    bool  _needToConnect;
    unsigned short  _port;
    unsigned long long  _previousBytesReceived;
    unsigned long long  _previousBytesSent;
    unsigned long long  _previousPacketsReceived;
    unsigned long long  _previousPacketsSent;
    double  _previousReportTime;
    bool  _skipTransportThread;
    int  _socket;
    unsigned long long  _state;
    unsigned long long  _totalBytesReceived;
    unsigned long long  _totalBytesSent;
    unsigned long long  _totalPacketsReceived;
    unsigned long long  _totalPacketsSent;
    bool  _useDefaultInterfaceOnly;
    bool  _wantsAWDL;
    bool  _wantsCellular;
    bool  _wantsWiFi;
    bool  _wifiAssistEnabled;
}

@property (nonatomic) bool allowsLinkLocal;
@property <IDSLinkDelegate> *alternateDelegate;
@property (retain) NSString *cbuuid;
@property (nonatomic, retain) NSIndexSet *cellularInterfaceIndices;
@property (nonatomic) unsigned short cellularPort;
@property (nonatomic, readonly) int cellularSocket;
@property (readonly, copy) NSString *debugDescription;
@property <IDSLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long headerOverhead;
@property (nonatomic, readonly) bool isInvalidated;
@property (nonatomic, readonly) double lastDestinationReceived;
@property (nonatomic) double lastDestinationSent;
@property (getter=linkTypeString, readonly) NSString *linkTypeString;
@property (nonatomic) unsigned short port;
@property (nonatomic) bool skipTransportThread;
@property (nonatomic, readonly) int socket;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool useDefaultInterfaceOnly;
@property (nonatomic) bool wifiAssistEnabled;

- (void).cxx_destruct;
- (id)_createNetworkInterfaceArrayWithIPVersion:(unsigned long long)arg1 wantsAWDL:(bool)arg2 wantsWiFi:(bool)arg3 wantsCellular:(bool)arg4 allowsLinkLocal:(bool)arg5 useDefaultInterfaceOnly:(bool)arg6 defaultPairedDevice:(bool)arg7;
- (int)_createNewUDPSocketWithIPVersion:(unsigned long long)arg1 localPort:(unsigned short*)arg2 wantsAWDL:(bool)arg3 clientUUID:(unsigned char)arg4;
- (int)_findSocketForInterfaceIndex:(int)arg1;
- (bool)_isInterfaceIndexCellular:(int)arg1;
- (void)_processIncomingCellularPacket;
- (void)_processIncomingPacket;
- (void)_processIncomingPacketOnSocket:(int)arg1;
- (unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 destinationAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3;
- (unsigned long long)_sendBytesArray:(const void**)arg1 lengthArray:(unsigned long long*)arg2 arraySize:(int)arg3 localInterfaceIndex:(int)arg4 localAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 destinationAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg6 trafficClass:(unsigned short)arg7;
- (bool)_setTrafficClassOnSocket:(int)arg1 trafficClassValue:(int)arg2;
- (bool)allowsLinkLocal;
- (id)alternateDelegate;
- (id)cbuuid;
- (id)cellularInterfaceIndices;
- (unsigned short)cellularPort;
- (int)cellularSocket;
- (id)copyCurrentNetworkInterfaces;
- (id)copyLinkStatsDict;
- (id)delegate;
- (id)deviceUniqueID;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(bool)arg2;
- (unsigned long long)headerOverhead;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (double)lastDestinationReceived;
- (double)lastDestinationSent;
- (id)linkTypeString;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(bool)arg2 wantsWiFi:(bool)arg3 wantsCellular:(bool)arg4;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(bool)arg2 wantsWiFi:(bool)arg3 wantsCellular:(bool)arg4 clientUUID:(unsigned char)arg5;
- (unsigned short)port;
- (void)reconnectWithLocalAddress:(id)arg1;
- (void)removeSocket;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg1 destination:(id)arg2 toDeviceID:(id)arg3;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg1 sourceInterface:(id)arg2 destination:(id)arg3 toDeviceID:(id)arg4;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (unsigned long long)sendPacketBufferArray:(struct { /* ? */ }**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (void)setAllowsLinkLocal:(bool)arg1;
- (void)setAlternateDelegate:(id)arg1;
- (void)setCbuuid:(id)arg1;
- (void)setCellularInterfaceIndices:(id)arg1;
- (void)setCellularPort:(unsigned short)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setDestinationAddress:(id)arg1 isFixedDestination:(bool)arg2 fromAddress:(id)arg3;
- (bool)setDestinationAddressToDeviceIDMap:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setLastDestinationSent:(double)arg1;
- (void)setPort:(unsigned short)arg1;
- (void)setSkipTransportThread:(bool)arg1;
- (bool)setTrafficClass:(int)arg1;
- (void)setUseDefaultInterfaceOnly:(bool)arg1;
- (void)setWiFiAssistState:(bool)arg1;
- (void)setWifiAssistEnabled:(bool)arg1;
- (bool)skipTransportThread;
- (int)socket;
- (unsigned long long)state;
- (bool)useDefaultInterfaceOnly;
- (bool)wifiAssistEnabled;

@end
