/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARConfiguration : NSObject <NSCopying> {
    bool  _allowCameraInMultipleForegroundAppLayout;
    bool  _autoFocusEnabled;
    long long  _cameraPosition;
    NSArray * _customSensors;
    unsigned long long  _frameDebugOptions;
    unsigned long long  _frameSemantics;
    unsigned long long  _lightEstimation;
    bool  _mirroredFrameOutput;
    bool  _providesAudioData;
    ARVideoFormat * _videoFormat;
    long long  _worldAlignment;
}

@property (nonatomic) bool allowCameraInMultipleForegroundAppLayout;
@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) long long cameraPosition;
@property (nonatomic, retain) NSArray *customSensors;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic) unsigned long long frameDebugOptions;
@property (nonatomic) unsigned long long frameSemantics;
@property (nonatomic, readonly) ARImageSensorSettings *imageSensorSettings;
@property (nonatomic) unsigned long long lightEstimation;
@property (getter=isLightEstimationEnabled, nonatomic) bool lightEstimationEnabled;
@property (nonatomic) bool mirroredFrameOutput;
@property (nonatomic, readonly) ARParentImageSensorSettings *parentImageSensorSettings;
@property (nonatomic) bool providesAudioData;
@property (nonatomic, readonly) <ARReplaySensorProtocol> *replaySensor;
@property (nonatomic, retain) ARVideoFormat *videoFormat;
@property (nonatomic) long long worldAlignment;

+ (bool)isSupported;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id*)arg2;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id*)arg2 fileURL:(id)arg3;
+ (id)replayConfigurationWithConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3;
+ (id)supportedVideoFormats;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)allowCameraInMultipleForegroundAppLayout;
- (long long)cameraPosition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)customSensors;
- (id)description;
- (id)descriptionWithoutBrackets;
- (id)deviceModel;
- (unsigned long long)frameDebugOptions;
- (unsigned long long)frameSemantics;
- (unsigned long long)hash;
- (id)imageSensorSettings;
- (id)init;
- (id)initPrivate;
- (bool)isAutoFocusEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfConfiguration:(Class)arg1;
- (bool)isLightEstimationEnabled;
- (unsigned long long)lightEstimation;
- (bool)mirroredFrameOutput;
- (id)parentImageSensorSettings;
- (bool)providesAudioData;
- (id)renderingTechnique;
- (id)replaySensor;
- (id)secondaryTechniques;
- (void)setAllowCameraInMultipleForegroundAppLayout:(bool)arg1;
- (void)setAutoFocusEnabled:(bool)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCustomSensors:(id)arg1;
- (void)setFrameDebugOptions:(unsigned long long)arg1;
- (void)setFrameSemantics:(unsigned long long)arg1;
- (void)setLightEstimation:(unsigned long long)arg1;
- (void)setLightEstimationEnabled:(bool)arg1;
- (void)setMirroredFrameOutput:(bool)arg1;
- (void)setProvidesAudioData:(bool)arg1;
- (void)setVideoFormat:(id)arg1;
- (void)setWorldAlignment:(long long)arg1;
- (id)techniques;
- (id)videoFormat;
- (long long)worldAlignment;

@end