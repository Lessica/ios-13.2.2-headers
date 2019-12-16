/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoReceiverBase : NSObject <VCConnectionChangedHandler, VCMediaStreamSyncDestination> {
    <VCVideoReceiverDelegate> * _delegate;
    double  _lastReceivedVideoRTCPPacketTime;
    double  _lastReceivedVideoRTPPacketTime;
    int  _remoteVideoOrientation;
    double  _roundTripTime;
    <VCMediaStreamSyncSource> * _syncSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCVideoReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) double lastReceivedVideoRTCPPacketTime;
@property (readonly) double lastReceivedVideoRTPPacketTime;
@property int remoteVideoOrientation;
@property double roundTripTime;
@property (readonly) Class superclass;
@property (nonatomic) <VCMediaStreamSyncSource> *syncSource;

- (void)collectChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1 interval:(float)arg2;
- (id)delegate;
- (void)handleActiveConnectionChange:(id)arg1;
- (unsigned int)lastDisplayedFrameRTPTimestamp;
- (double)lastReceivedVideoRTCPPacketTime;
- (double)lastReceivedVideoRTPPacketTime;
- (void)pauseVideo;
- (int)remoteVideoOrientation;
- (double)roundTripTime;
- (void)rtcpSendIntervalElapsed;
- (void)setDelegate:(id)arg1;
- (void)setEnableCVO:(bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)setEnableRateAdaptation:(bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setRemoteVideoOrientation:(int)arg1;
- (void)setRoundTripTime:(double)arg1;
- (void)setSyncSource:(id)arg1;
- (void)setTargetStreamID:(unsigned short)arg1;
- (bool)startSynchronization:(id)arg1;
- (void)startVideo;
- (void)stopSynchronization;
- (void)stopVideo;
- (id)syncSource;
- (void)updateSourcePlayoutTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;

@end
