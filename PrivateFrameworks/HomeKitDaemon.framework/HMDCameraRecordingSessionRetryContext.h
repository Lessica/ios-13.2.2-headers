/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingSessionRetryContext : NSObject {
    double  _maxRetryInterval;
    double  _retryInterval;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) double maxRetryInterval;
@property double retryInterval;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)computeNextRetryInterval;
- (id)initWithWorkQueue:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 preferences:(id)arg2;
- (double)maxRetryInterval;
- (double)retryInterval;
- (void)setRetryInterval:(double)arg1;
- (id)workQueue;

@end
