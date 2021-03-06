/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureDevice * _captureDevice;
    BWNodeOutput * _faceTrackingVideoCaptureOutput;
    BWNodeOutput * _offlineVISMotionDataCaptureOutput;
    int  _sourceDeviceType;
    NSString * _sourceID;
    BWPixelTransferNode * _videoDataConverterRotatorNode;
    FigCaptureVISPipeline * _visPipeline;
}

@property (nonatomic, readonly) BWNodeOutput *faceTrackingVideoCaptureOutput;
@property (nonatomic, readonly) BWNodeOutput *offlineVISMotionDataCaptureOutput;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) NSString *sourceID;

+ (void)initialize;

- (int)_buildVideoDataSinkPipelineWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 delegate:(id)arg5;
- (void)dealloc;
- (id)faceTrackingVideoCaptureOutput;
- (id)initWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 name:(id)arg5 delegate:(id)arg6;
- (id)offlineVISMotionDataCaptureOutput;
- (int)sourceDeviceType;
- (id)sourceID;

@end
