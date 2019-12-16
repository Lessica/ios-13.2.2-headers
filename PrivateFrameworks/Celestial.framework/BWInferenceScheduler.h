/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceScheduler : NSObject {
    NSMapTable * _connectionsByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionsLock;
    NSObject<OS_dispatch_workloop> * _inferenceWorkloop;
    NSObject<OS_dispatch_workloop> * _scalingWorkloop;
    NSObject<OS_dispatch_workloop> * _submissionWorkloop;
}

+ (void)initialize;

- (void)_processJobsFromFramebuffer:(id)arg1 usingInputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 inferencePropagationHandler:(id /* block */)arg3 atExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 forConnection:(id)arg5;
- (id)_queueForJob:(struct { id x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; }*)arg1 fromConnection:(id)arg2;
- (void)dealloc;
- (id)init;
- (int)performInferencesForConnection:(unsigned long long)arg1 usingInputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)prepareForInferenceRequirements:(id)arg1 dependencyProviderSource:(id)arg2 formatProvider:(id)arg3 pixelBufferPoolProvider:(id)arg4 connection:(unsigned long long)arg5;
- (unsigned long long)registerInferenceConnection;
- (void)unregisterInferenceConnection:(unsigned long long)arg1;

@end
