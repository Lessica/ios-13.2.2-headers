/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIVideoReframeRenderJob : NURenderJob {
    double  _confidence;
    NSArray * _keyframes;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _stabCropRect;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSArray *keyframes;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } stabCropRect;

- (void).cxx_destruct;
- (bool)_createKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 timedMetadata:(id)arg4 error:(out id*)arg5;
- (bool)_createStabilizedKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 timedMetadata:(id)arg4 error:(out id*)arg5;
- (void)_writeDiagnosticFilesForReframer:(id)arg1 metadata:(id)arg2;
- (double)confidence;
- (id)keyframes;
- (bool)prepare:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })stabCropRect;
- (id)videoReframeRequest;
- (bool)wantsCompleteStage;
- (bool)wantsOutputVideo;
- (bool)wantsRenderStage;

@end
