/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _bravoConstituentPhotoDeliveryEnabled;
    bool  _deferredProcessingEnabled;
    bool  _depthDataDeliveryEnabled;
    bool  _digitalFlashCaptureEnabled;
    NSArray * _enabledSemanticSegmentationMatteURNs;
    bool  _filterRenderingEnabled;
    bool  _irisFrameHarvestingEnabled;
    int  _maxQualityPrioritization;
    bool  _momentCaptureMovieRecordingEnabled;
    int  _movieAutoTrimMethod;
    bool  _movieCaptureEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieVideoFrameDuration;
    bool  _optimizesImagesForOfflineVideoStabilization;
    bool  _portraitEffectsMatteDeliveryEnabled;
    FigCaptureIrisPreparedSettings * _preparedSettings;
    bool  _quadraHighResCaptureEnabled;
}

@property (nonatomic) bool bravoConstituentPhotoDeliveryEnabled;
@property (nonatomic) bool deferredProcessingEnabled;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) bool digitalFlashCaptureEnabled;
@property (nonatomic, retain) NSArray *enabledSemanticSegmentationMatteURNs;
@property (nonatomic) bool filterRenderingEnabled;
@property (nonatomic) bool irisFrameHarvestingEnabled;
@property (nonatomic) int irisMovieAutoTrimMethod;
@property (nonatomic) bool irisMovieCaptureEnabled;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } irisMovieDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } irisMovieVideoFrameDuration;
@property (nonatomic, retain) FigCaptureIrisPreparedSettings *irisPreparedSettings;
@property (nonatomic) int maxQualityPrioritization;
@property (nonatomic) bool momentCaptureMovieRecordingEnabled;
@property (nonatomic) bool optimizesImagesForOfflineVideoStabilization;
@property (nonatomic) bool portraitEffectsMatteDeliveryEnabled;
@property (nonatomic) bool quadraHighResCaptureEnabled;

- (bool)bravoConstituentPhotoDeliveryEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)deferredProcessingEnabled;
- (bool)depthDataDeliveryEnabled;
- (id)description;
- (bool)digitalFlashCaptureEnabled;
- (id)enabledSemanticSegmentationMatteURNs;
- (bool)filterRenderingEnabled;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)irisFrameHarvestingEnabled;
- (int)irisMovieAutoTrimMethod;
- (bool)irisMovieCaptureEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisMovieDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisMovieVideoFrameDuration;
- (id)irisPreparedSettings;
- (bool)isEqual:(id)arg1;
- (int)maxQualityPrioritization;
- (bool)momentCaptureMovieRecordingEnabled;
- (bool)optimizesImagesForOfflineVideoStabilization;
- (bool)portraitEffectsMatteDeliveryEnabled;
- (bool)quadraHighResCaptureEnabled;
- (void)setBravoConstituentPhotoDeliveryEnabled:(bool)arg1;
- (void)setDeferredProcessingEnabled:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDigitalFlashCaptureEnabled:(bool)arg1;
- (void)setEnabledSemanticSegmentationMatteURNs:(id)arg1;
- (void)setFilterRenderingEnabled:(bool)arg1;
- (void)setIrisFrameHarvestingEnabled:(bool)arg1;
- (void)setIrisMovieAutoTrimMethod:(int)arg1;
- (void)setIrisMovieCaptureEnabled:(bool)arg1;
- (void)setIrisMovieDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIrisMovieVideoFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIrisPreparedSettings:(id)arg1;
- (void)setMaxQualityPrioritization:(int)arg1;
- (void)setMomentCaptureMovieRecordingEnabled:(bool)arg1;
- (void)setOptimizesImagesForOfflineVideoStabilization:(bool)arg1;
- (void)setPortraitEffectsMatteDeliveryEnabled:(bool)arg1;
- (void)setQuadraHighResCaptureEnabled:(bool)arg1;
- (int)sinkType;

@end
