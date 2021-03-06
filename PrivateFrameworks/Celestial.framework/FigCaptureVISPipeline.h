/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVISPipeline : FigCapturePipeline {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _irisVISCleanOutputRect;
    BWVISNode * _sdofVISNode;
    BWVISNode * _visNode;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } irisVISCleanOutputRect;
@property (nonatomic, readonly) BWVISNode *sdofVISNode;
@property (nonatomic, readonly) BWVISNode *visNode;

+ (void)initialize;
+ (bool)visPipelineIsRequiredForFigCaptureVideoStabilizationType:(int)arg1;

- (id)_buildMotionAttachmentsNodeWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 horizontalSensorBinningFactor:(int)arg4 verticalSensorBinningFactor:(int)arg5 maxSupportedFrameRate:(float)arg6 pipelineStage:(id)arg7 motionAttachmentsSource:(int)arg8 captureDevice:(id)arg9 isPanorama:(bool)arg10 optimizesImagesForOfflineVideoStabilization:(bool)arg11 provideSourceVideoWithMotionAttachmentsOutput:(bool)arg12 provideOfflineVISMotionDataOutput:(bool)arg13 attachedMediaKeyToProcess:(id)arg14;
- (void)_buildVISPipelineWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 videoCaptureConnectionConfiguration:(id)arg4 pipelineStage:(id)arg5 sdofPipelineStage:(id)arg6 videoStabilizationType:(int)arg7 motionAttachmentsSource:(int)arg8 fillExtendedRowsOfOutputBuffer:(bool)arg9 overCaptureEnabled:(bool)arg10 overCaptureVideoStitchingEnabled:(bool)arg11 videoStabilizationOverscanOverride:(float)arg12 motionMetadataPreloadingEnabled:(bool)arg13 visExecutionMode:(int)arg14 pipelineTraceID:(int)arg15 captureDevice:(id)arg16;
- (id)_newVISNodeWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 videoCaptureConnectionConfiguration:(id)arg4 videoStabilizationType:(int)arg5 motionAttachmentsSource:(int)arg6 fillExtendedRowsOfOutputBuffer:(bool)arg7 overCaptureEnabled:(bool)arg8 overCaptureVideoStitchingEnabled:(bool)arg9 videoStabilizationOverscanOverride:(float)arg10 motionMetadataPreloadingEnabled:(bool)arg11 visExecutionMode:(int)arg12 pipelineTraceID:(int)arg13 pipelineStage:(id)arg14 captureDevice:(id)arg15 irisVISCleanOutputRectOut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg16;
- (void)dealloc;
- (id)initWithUpstreamOutput:(id)arg1 graph:(id)arg2 name:(id)arg3 parentPipeline:(id)arg4 videoCaptureConnectionConfiguration:(id)arg5 pipelineStage:(id)arg6 sdofPipelineStage:(id)arg7 videoStabilizationType:(int)arg8 motionAttachmentsSource:(int)arg9 fillExtendedRowsOfOutputBuffer:(bool)arg10 overCaptureEnabled:(bool)arg11 overCaptureVideoStitchingEnabled:(bool)arg12 videoStabilizationOverscanOverride:(float)arg13 motionMetadataPreloadingEnabled:(bool)arg14 visExecutionMode:(int)arg15 pipelineTraceID:(int)arg16 captureDevice:(id)arg17;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })irisVISCleanOutputRect;
- (id)sdofVISNode;
- (id)visNode;

@end
