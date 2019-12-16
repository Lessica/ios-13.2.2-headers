/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARObjectDetectionTechnique : ARImageBasedTechnique {
    ARWorldTrackingPoseData * _currentWorldTrackingPose;
    NSObject<OS_dispatch_semaphore> * _dataSemaphore;
    NSArray * _detectionObjects;
    NSObject<OS_dispatch_semaphore> * _detectionSemaphore;
    bool  _finishedLoadingObjects;
    ARObjectDetectionResultData * _latestResultData;
    NSObject<OS_dispatch_queue> * _loadObjectsQueue;
    ARODTHandleManager * _odtHandleManager;
    NSObject<OS_dispatch_queue> * _processDataQueue;
    NSDictionary * _referenceObjecteMap;
}

@property (retain) ARWorldTrackingPoseData *currentWorldTrackingPose;
@property (nonatomic, readonly) NSArray *detectionObjects;
@property bool finishedLoadingObjects;
@property (readonly) NSDictionary *referenceObjecteMap;

- (void).cxx_destruct;
- (void)_enqueueObjectForDetectionNonBlocking:(id)arg1;
- (void)_loadReferenceObjects;
- (id)currentWorldTrackingPose;
- (id)detectionObjects;
- (bool)finishedLoadingObjects;
- (id)initWithDetectionObjects:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)prepare;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (id)referenceObjecteMap;
- (double)requiredTimeInterval;
- (void)setCurrentWorldTrackingPose:(id)arg1;
- (void)setFinishedLoadingObjects:(bool)arg1;
- (void)updateDevicePerformanceLevel:(id)arg1;
- (void)updatePresentationMode:(long long)arg1;

@end