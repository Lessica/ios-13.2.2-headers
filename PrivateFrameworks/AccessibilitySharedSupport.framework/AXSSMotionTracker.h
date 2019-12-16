/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSMotionTracker : NSObject <AXSSMotionTrackingDaemonDelegateProtocol> {
    bool  __hasBeenStarted;
    NSXPCConnection * __motionTrackingDaemonConnection;
    bool  __tracking;
    bool  _debugOverlayEnabled;
    <AXSSMotionTrackerDelegate> * _delegate;
    NSString * _desiredCaptureDeviceUniqueID;
    double  _joystickModeMovementThreshold;
    unsigned long long  _motionTrackingMode;
    double  _sensitivity;
}

@property (nonatomic) bool _hasBeenStarted;
@property (nonatomic, readonly) <AXSSMotionTrackingDaemonProtocol> *_motionTrackingDaemon;
@property (nonatomic, retain) NSXPCConnection *_motionTrackingDaemonConnection;
@property (nonatomic) bool _tracking;
@property (nonatomic) bool debugOverlayEnabled;
@property (nonatomic) <AXSSMotionTrackerDelegate> *delegate;
@property (nonatomic, copy) NSString *desiredCaptureDeviceUniqueID;
@property (nonatomic) double joystickModeMovementThreshold;
@property (nonatomic) unsigned long long motionTrackingMode;
@property (nonatomic) double sensitivity;
@property (getter=isTracking, nonatomic, readonly) bool tracking;

+ (id)supportedExpressions;

- (void).cxx_destruct;
- (bool)_hasBeenStarted;
- (id)_motionTrackingDaemon;
- (id)_motionTrackingDaemonConnection;
- (void)_motionTrackingDaemonWasInterrupted;
- (bool)_tracking;
- (void)dealloc;
- (bool)debugOverlayEnabled;
- (id)delegate;
- (id)desiredCaptureDeviceUniqueID;
- (id)init;
- (void)invalidate;
- (bool)isTracking;
- (double)joystickModeMovementThreshold;
- (void)motionTrackingDaemonExpressionEnded:(id)arg1;
- (void)motionTrackingDaemonExpressionStarted:(id)arg1;
- (void)motionTrackingDaemonFailedToTrackFaceWithError:(id)arg1;
- (void)motionTrackingDaemonFoundFace;
- (void)motionTrackingDaemonLostFace;
- (void)motionTrackingDaemonTrackedPoint:(id)arg1;
- (void)motionTrackingDaemonWasInterrupted;
- (unsigned long long)motionTrackingMode;
- (double)sensitivity;
- (void)setDebugOverlayEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredCaptureDeviceUniqueID:(id)arg1;
- (void)setJoystickModeMovementThreshold:(double)arg1;
- (void)setMotionTrackingMode:(unsigned long long)arg1;
- (void)setSensitivity:(double)arg1;
- (void)set_hasBeenStarted:(bool)arg1;
- (void)set_motionTrackingDaemonConnection:(id)arg1;
- (void)set_tracking:(bool)arg1;
- (void)start;
- (void)stop;

@end