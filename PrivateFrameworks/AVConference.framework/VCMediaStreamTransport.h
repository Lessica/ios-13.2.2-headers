/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaStreamTransport : NSObject {
    AVCBasebandCongestionDetector * _basebandCongestionDetector;
    id  _delegate;
    bool  _isSRTPInitialized;
    unsigned int  _localSSRC;
    struct tagHANDLE { int x1; } * _rtpHandle;
    VCMediaStreamConfig * _streamConfig;
}

@property (nonatomic, retain) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (getter=isDecryptionTimeoutEnabled, nonatomic) bool decryptionTimeoutEnabled;
@property (nonatomic) double decryptionTimeoutInterval;
@property (nonatomic, readonly) <VCMediaStreamTransportDelegate> *delegate;
@property (nonatomic, readonly) unsigned short idsStreamId;
@property (nonatomic, readonly) double lastReceivedRTCPPacketTime;
@property (getter=isRTCPEnabled, nonatomic) bool rtcpEnabled;
@property (getter=isRTCPSendEnabled, nonatomic, readonly) bool rtcpSendEnabled;
@property (nonatomic) double rtcpSendInterval;
@property (getter=isRTCPTimeoutEnabled, nonatomic) bool rtcpTimeoutEnabled;
@property (nonatomic) double rtcpTimeoutInterval;
@property (nonatomic, readonly) struct tagHANDLE { int x1; }*rtpHandle;
@property (getter=isRTPTimeoutEnabled, nonatomic) bool rtpTimeoutEnabled;
@property (nonatomic) double rtpTimeoutInterval;
@property (nonatomic, readonly) VCMediaStreamConfig *streamConfig;
@property (nonatomic) long long streamDirection;

+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)arg1;
+ (int)getSRTPMasterKeyLength:(long long)arg1;
+ (bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;

- (id)basebandCongestionDetector;
- (void)configureForMultiway;
- (bool)configureWithStreamConfig:(id)arg1 setupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x1; union { struct { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { id x_3_2_1; struct tagVCNWConnectionMonitor {} x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; unsigned int x3; unsigned int x4; bool x5; }*)arg2 customRTCPPackets:(bool)arg3 error:(id*)arg4;
- (void)dealloc;
- (double)decryptionTimeoutInterval;
- (id)delegate;
- (bool)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; }*)arg1 reportCount:(char *)arg2;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo { BOOL x1[65]; BOOL x2[29]; void *x3; }*)arg1 withMasterKey:(id)arg2;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (int)getKeyDerivationCryptoSet:(struct { BOOL x1[65]; int x2; BOOL x3[65]; int x4; void *x5; }*)arg1 withKeyMaterial:(id)arg2;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
- (void)handleEncryptionInfoChange:(id)arg1;
- (unsigned short)idsStreamId;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE { int x1; }*)arg2 localSSRC:(unsigned int)arg3;
- (bool)isDecryptionTimeoutEnabled;
- (bool)isRTCPEnabled;
- (bool)isRTCPSendEnabled;
- (bool)isRTCPTimeoutEnabled;
- (bool)isRTPTimeoutEnabled;
- (bool)isSameSRTPConfig:(id)arg1;
- (double)lastReceivedRTCPPacketTime;
- (void)onRTCPPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)onStart;
- (void)onStop;
- (void)registerRTCPCallback;
- (void)registerRTPPayloadMappings;
- (void)reportRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; unsigned char x2; struct tagRTCPPACKET {} *x3[10]; struct OpaqueCMBlockBuffer {} *x4; char *x5; unsigned long long x6; unsigned int x7; unsigned char x8[1472]; }*)arg1;
- (void)reset;
- (void)resetPayloadMapping;
- (double)rtcpSendInterval;
- (double)rtcpTimeoutInterval;
- (struct tagHANDLE { int x1; }*)rtpHandle;
- (double)rtpTimeoutInterval;
- (id)rxNetworkPayloads;
- (void)sendControlPacket:(struct _RTCP_SEND_CONTROL_PARAMETERS { unsigned int x1; int x2; char *x3; unsigned long long x4; unsigned char x5; unsigned short *x6; int x7; unsigned short x8; unsigned short x9; unsigned int x10; struct _RTCP_RECEPTION_REPORT {} *x11; unsigned char x12; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO {} *x13; }*)arg1;
- (bool)sendIntervalDidElapse:(int*)arg1 remainingTime:(double*)arg2;
- (void)setBasebandCongestionDetector:(id)arg1;
- (void)setDecryptionTimeoutEnabled:(bool)arg1;
- (void)setDecryptionTimeoutInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeoutEnabled:(bool)arg1;
- (void)setRtcpTimeoutInterval:(double)arg1;
- (void)setRtpTimeoutEnabled:(bool)arg1;
- (void)setRtpTimeoutInterval:(double)arg1;
- (void)setStreamDirection:(long long)arg1;
- (bool)setThrottlingInterval:(double)arg1;
- (bool)setupRTPForIDS:(id*)arg1;
- (bool)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x1; union { struct { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { id x_3_2_1; struct tagVCNWConnectionMonitor {} x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; unsigned int x3; unsigned int x4; bool x5; }*)arg1 error:(id*)arg2;
- (bool)setupRTPWithNWConnection:(struct _VCMediaStreamTransportSetupInfo { unsigned char x1; union { struct { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { id x_3_2_1; struct tagVCNWConnectionMonitor {} x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; unsigned int x3; unsigned int x4; bool x5; }*)arg1 error:(id*)arg2;
- (bool)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo { unsigned char x1; union { struct { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { id x_3_2_1; struct tagVCNWConnectionMonitor {} x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; unsigned int x3; unsigned int x4; bool x5; }*)arg1 error:(id*)arg2;
- (bool)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x1; union { struct { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { id x_3_2_1; struct tagVCNWConnectionMonitor {} x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; unsigned int x3; unsigned int x4; bool x5; }*)arg1 error:(id*)arg2;
- (int)setupSRTP;
- (id)streamConfig;
- (long long)streamDirection;
- (void)unregisterRTCPCallback;

@end
