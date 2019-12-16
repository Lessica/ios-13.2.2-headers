/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionManager : NSObject <VCConnectionHealthMonitorDelegate, VCWifiAssistManagerDelegate> {
    bool  _allowRequestForWRMNotification;
    unsigned int  _budgetConsumingCellularRxBytes;
    unsigned int  _budgetConsumingCellularTxBytes;
    unsigned int  _callID;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _cellPrimaryInterfaceChangeEnabled;
    NSMutableArray * _connectionArray;
    <VCConnectionProtocol> * _connectionForDuplication;
    VCConnectionHealthMonitor * _connectionHealthMonitor;
    int  _connectionSelectionVersion;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _disableRemoteInterfaceInference;
    bool  _duplicateImportantPktsEnabled;
    int (* _duplicationCallback;
    void * _duplicationContext;
    bool  _duplicationEnhancementEnabled;
    bool  _duplicationPending;
    int  _duplicationType;
    bool  _enableDuplication;
    bool  _fastMediaDuplicationEnabled;
    bool  _forceHandoverToCell;
    bool  _hasAssertedCell;
    double  _iRATNotificationRequestTime;
    bool  _isAudioOnly;
    bool  _isInitialConnectionEstablished;
    bool  _isPreWarmStateEnabled;
    bool  _isPrimaryLocalUsingCell;
    bool  _isRemoteDuplicating;
    bool  _isStarted;
    double  _lastConnectionUnstableTime;
    <VCConnectionProtocol> * _lastPrimaryConnectionInUse;
    double  _lastiRATCheckTime;
    struct { 
        double lastReceivedPacketTime; 
        double lastReceivedPacketOnPrimaryTime; 
        double lastReportTime; 
        double maxPrimaryNoPacketInterval; 
        double noPacketInterval; 
        bool isConnectionPaused; 
        int type; 
    }  _localConnectionStats;
    double  _localLinkTypeSuggestionChangeTime;
    int  _localWRMLinkTypeFromDefaults;
    int  _localiRATLinkTypeSuggestion;
    bool  _lowNetworkModeEnabled;
    unsigned long long  _mediaCellularRxBytes;
    unsigned long long  _mediaCellularTxBytes;
    unsigned int  _mediaExcessiveCellularRxBytes;
    unsigned int  _mediaExcessiveCellularTxBytes;
    unsigned long long  _mediaWifiRxBytes;
    unsigned long long  _mediaWifiTxBytes;
    double  _noRemoteDuplicationThresholdFast;
    bool  _preferRelayOverP2PEnabled;
    int  _preferredLocalInterfaceForDuplication;
    int  _preferredRemoteInterfaceForDuplication;
    <VCConnectionProtocol> * _primaryConnection;
    int  _relayServerProvider;
    struct { 
        double lastReceivedPacketTime; 
        double lastReceivedPacketOnPrimaryTime; 
        double lastReportTime; 
        double maxPrimaryNoPacketInterval; 
        double noPacketInterval; 
        bool isConnectionPaused; 
        int type; 
    }  _remoteConnectionStats;
    double  _remoteNoRemotePacketInterval;
    int  _remoteiRATLinkTypeSuggestion;
    struct opaqueRTCReporting { } * _reportingAgent;
    <VCConnectionProtocol> * _secondaryConnection;
    unsigned int  _signalingExcessiveCellularRxBytes;
    unsigned int  _signalingExcessiveCellularTxBytes;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _stateRWlock;
    VCStatsRecorder * _statsRecorder;
    bool  _supportDuplication;
    VCWifiAssistManager * _vcWifiAssist;
    void * _wrmCallbacksContext;
    int (* _wrmRequestNotificationCallback;
    int (* _wrmStatusUpdateCallback;
}

@property (readonly) unsigned int budgetConsumingCellularRxBytes;
@property (readonly) unsigned int budgetConsumingCellularTxBytes;
@property unsigned int callID;
@property bool cellPrimaryInterfaceChangeEnabled;
@property (readonly) int connectionCount;
@property (nonatomic, retain) <VCConnectionProtocol> *connectionForDuplication;
@property (readonly, copy) NSString *debugDescription;
@property <VCConnectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool duplicateImportantPktsEnabled;
@property bool duplicationEnhancementEnabled;
@property bool fastMediaDuplicationEnabled;
@property (readonly) unsigned long long hash;
@property bool isAudioOnly;
@property (setter=setDuplicationEnabled:, nonatomic) bool isDuplicationEnabled;
@property (readonly) bool isLocalCellularInterfaceUsed;
@property (readonly) bool isPreWarmStateEnabled;
@property (nonatomic, retain) <VCConnectionProtocol> *lastPrimaryConnectionInUse;
@property bool lowNetworkModeEnabled;
@property (readonly) unsigned long long mediaCellularRxBytes;
@property (readonly) unsigned long long mediaCellularTxBytes;
@property (readonly) unsigned int mediaExcessiveCellularRxBytes;
@property (readonly) unsigned int mediaExcessiveCellularTxBytes;
@property (readonly) unsigned long long mediaWifiRxBytes;
@property (readonly) unsigned long long mediaWifiTxBytes;
@property double noRemoteDuplicationThresholdFast;
@property bool preferRelayOverP2PEnabled;
@property int preferredLocalInterfaceForDuplication;
@property int preferredRemoteInterfaceForDuplication;
@property (nonatomic, retain) <VCConnectionProtocol> *primaryConnection;
@property int relayServerProvider;
@property (readonly) double remoteNoRemotePacketInterval;
@property (nonatomic, retain) <VCConnectionProtocol> *secondaryConnection;
@property (readonly) unsigned int signalingExcessiveCellularRxBytes;
@property (readonly) unsigned int signalingExcessiveCellularTxBytes;
@property (nonatomic, readonly) VCStatsRecorder *statsRecorder;
@property (readonly) Class superclass;
@property bool supportDuplication;

- (id)activeConnectionRegistry;
- (int)addConnection:(id)arg1;
- (unsigned int)budgetConsumingCellularRxBytes;
- (unsigned int)budgetConsumingCellularTxBytes;
- (unsigned int)callID;
- (bool)cellPrimaryInterfaceChangeEnabled;
- (void)checkiRATSuggestion;
- (void)checkiRATSuggestionDefaultValue;
- (void)checkpointPrimaryConnection:(id)arg1;
- (int)connectionCount;
- (id)connectionForDuplication;
- (id)connectionForQuality:(int)arg1;
- (id)connectionForQualityInternal:(int)arg1;
- (void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(bool)arg2;
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)arg1 isPrimary:(bool*)arg2;
- (struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)createSourceDestinationInfoListWithForceDuplication:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeWifiAssistAvailable:(bool)arg1 reason:(unsigned char)arg2;
- (void)disableRemotePreferredInterfaceInference:(bool)arg1;
- (bool)duplicateImportantPktsEnabled;
- (bool)duplicationEnhancementEnabled;
- (bool)fastMediaDuplicationEnabled;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(bool)arg2;
- (int)getCellularMTUForActiveConnectionWithQuality:(int)arg1;
- (int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(bool)arg2;
- (int)getConnectionSelectionVersionFromFrameworkVersion:(id)arg1;
- (int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(bool)arg2;
- (int)getNumberOfConnectionsInternal;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(bool)arg2;
- (id)init;
- (bool)isAudioOnly;
- (bool)isBetterConnection:(id)arg1 asPrimary:(bool)arg2;
- (bool)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1;
- (bool)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1;
- (bool)isConnection:(id)arg1 betterPrimaryThanConnection:(id)arg2;
- (bool)isConnection:(id)arg1 betterSecondaryThanConnection:(id)arg2;
- (bool)isDuplicationEnabled;
- (bool)isInterfaceConstrainedForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(bool)arg2;
- (bool)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(bool)arg2;
- (bool)isLocalCellularInterfaceUsed;
- (bool)isOptimalConnection:(id)arg1 asPrimary:(bool)arg2 interfaceMask:(int)arg3;
- (bool)isPreWarmStateEnabled;
- (id)lastPrimaryConnectionInUse;
- (bool)lowNetworkModeEnabled;
- (unsigned long long)mediaCellularRxBytes;
- (unsigned long long)mediaCellularTxBytes;
- (unsigned int)mediaExcessiveCellularRxBytes;
- (unsigned int)mediaExcessiveCellularTxBytes;
- (unsigned long long)mediaWifiRxBytes;
- (unsigned long long)mediaWifiTxBytes;
- (double)noRemoteDuplicationThresholdFast;
- (bool)preferRelayOverP2PEnabled;
- (int)preferredLocalInterfaceForDuplication;
- (int)preferredRemoteInterfaceForDuplication;
- (id)primaryConnection;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (int)processConnectionHealthFromControlInfo:(void*)arg1;
- (int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(bool)arg2;
- (int)processWRMNotification:(struct { int x1; int x2; unsigned long long x3; char *x4; unsigned long long x5; unsigned long long x6; }*)arg1;
- (void)promoteSecondaryConnectionToPrimary:(id)arg1;
- (const char *)reasonStringWithDuplicationType:(int)arg1;
- (int)relayServerProvider;
- (double)remoteNoRemotePacketInterval;
- (int)removeConnection:(id)arg1;
- (void)reportConnection:(id)arg1 isInitialConnection:(bool)arg2;
- (void)requestWRMNotificationAtTime:(double)arg1;
- (id)secondaryConnection;
- (void)setCallID:(unsigned int)arg1;
- (void)setCellPrimaryInterfaceChangeEnabled:(bool)arg1;
- (void)setConnectionForDuplication:(id)arg1;
- (int)setConnectionHealthOnControlInfo:(void*)arg1;
- (void)setConnectionPause:(bool)arg1 isLocalConnection:(bool)arg2;
- (void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDuplicateImportantPktsEnabled:(bool)arg1;
- (void)setDuplicationCallback:(int (*)arg1 withContext:(void*)arg2;
- (void)setDuplicationEnabled:(bool)arg1;
- (void)setDuplicationEnabledInternal:(bool)arg1;
- (void)setDuplicationEnhancementEnabled:(bool)arg1;
- (void)setDuplicationFlag:(bool)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2;
- (void)setFastMediaDuplicationEnabled:(bool)arg1;
- (void)setIsAudioOnly:(bool)arg1;
- (void)setLastPrimaryConnectionInUse:(id)arg1;
- (void)setLowNetworkModeEnabled:(bool)arg1;
- (void)setNoRemoteDuplicationThresholdFast:(double)arg1;
- (void)setPreWarmState:(bool)arg1;
- (void)setPreferRelayOverP2PEnabled:(bool)arg1;
- (void)setPreferredLocalInterfaceForDuplication:(int)arg1;
- (void)setPreferredRemoteInterfaceForDuplication:(int)arg1;
- (void)setPrimaryConnection:(id)arg1;
- (void)setRelayServerProvider:(int)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)setSecondaryConnection:(id)arg1;
- (void)setSupportDuplication:(bool)arg1;
- (int)setWRMUpdateCallback:(int (*)arg1 requestNotificationCallback:(int (*)arg2 withContext:(void*)arg3;
- (void)setupConnectionHealthMonitor;
- (bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)arg1;
- (bool)shouldDuplicatePacket:(bool)arg1;
- (unsigned int)signalingExcessiveCellularRxBytes;
- (unsigned int)signalingExcessiveCellularTxBytes;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)arg1 isSourceOnCellular:(bool*)arg2 isSourceIPv6:(bool*)arg3;
- (void)start;
- (id)statsRecorder;
- (void)stop;
- (id)suggestedLinkTypeCombo;
- (bool)supportDuplication;
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;
- (void)updateCellularExcessiveBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)arg1 bytes:(int)arg2 isMediaData:(bool)arg3 isOutgoing:(bool)arg4;
- (void)updateCellularMTU:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(bool)arg2;
- (void)updateConnectionForDuplication;
- (void)updateConnectionHealthWithIndicator:(bool)arg1;
- (void)updateConnectionStatsWithIndicatorNoPacket:(struct { double x1; double x2; double x3; double x4; double x5; bool x6; int x7; }*)arg1;
- (void)updateConnectionStatsWithIndicatorNone:(struct { double x1; double x2; double x3; double x4; double x5; bool x6; int x7; }*)arg1;
- (void)updateConnectionStatsWithIndicatorOnlyPrimaryNoPacket:(struct { double x1; double x2; double x3; double x4; double x5; bool x6; int x7; }*)arg1;
- (void)updateConnectionStatsWithIndicatorPrimaryImproved:(struct { double x1; double x2; double x3; double x4; double x5; bool x6; int x7; }*)arg1;
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(bool)arg4 isOutgoing:(bool)arg5;
- (void)updateReceivedBytes:(int)arg1 isOnCell:(bool)arg2 isIPv6:(bool)arg3;
- (void)updateReceivedExcessiveBytes:(int)arg1 isMediaData:(bool)arg2 isIPv6:(bool)arg3;
- (void)updateReceivedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)arg1 bytesReceived:(int)arg2 isMediaData:(bool)arg3 shouldCountPacket:(bool)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(bool)arg6;
- (void)updateSessionStats:(unsigned short)arg1;
- (void)updateTransmittedBytes:(int)arg1 isOnCell:(bool)arg2 isIPv6:(bool)arg3;
- (void)updateTransmittedExcessiveBytes:(int)arg1 isMediaData:(bool)arg2 isIPv6:(bool)arg3;
- (void)updateTransmittedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_2; struct tagVCSourceDestinationInfo {} *x_4_2_3; void *x_4_2_4; } x_2_1_4; } x2; }*)arg1 bytesSent:(int)arg2 isMediaData:(bool)arg3 shouldCountPacket:(bool)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(bool)arg6;
- (void)updateWRMDuplicationForHandover;
- (bool)updateWRMDuplicationForLocaliRATSuggestion;
- (void)updateWRMDuplicationForRemoteiRATSuggestion;
- (void)useCellPrimayInterface:(bool)arg1;
- (void)useConnectionAsPrimary:(id)arg1;

@end
