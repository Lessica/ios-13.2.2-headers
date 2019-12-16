/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPersonOcclusionTechnique : ARTechnique {
    struct __CVPixelBufferPool { } * _bgraPixelBufferPool;
    struct __CVPixelBufferPool { } * _depthPixelBufferPool;
    long long  _lastDeviceOrientation;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_semaphore> * _processingSemaphore;
    struct shared_ptr<arkit::RobustExpFilter<float> > { 
        struct RobustExpFilter<float> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _varExpFilter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (int)postProcessSegmentation:(struct __CVBuffer { }*)arg1 depthBuffer:(struct __CVBuffer { }*)arg2 detectionData:(id)arg3 pResultingDepthBuffer:(struct __CVBuffer {}**)arg4;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
