/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionParsedDepthDataSinkConfiguration : NSObject {
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
}

@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;

- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)initWithDepthDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 metadataObjectConnectionConfiguration:(id)arg3;
- (id)metadataObjectConnectionConfiguration;
- (id)videoDataConnectionConfiguration;

@end
