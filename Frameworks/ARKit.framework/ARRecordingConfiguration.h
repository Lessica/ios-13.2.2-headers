/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARRecordingConfiguration : ARCustomTechniquesConfiguration <ARRecordingTechniqueDelegate> {
    NSURL * _fileURL;
    id /* block */  _finishBlock;
    ARRecordingTechniquePublic * _recordingTechnique;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (copy) id /* block */ finishBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ARRecordingTechniquePublic *recordingTechnique;
@property unsigned long long state;
@property (readonly) Class superclass;

+ (bool)isSupported;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)abortRecording;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (id)fileURL;
- (id /* block */)finishBlock;
- (void)finishRecordingWithHandler:(id /* block */)arg1;
- (id)imageSensorSettings;
- (id)initPrivate;
- (id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2;
- (id)initWithBaseConfiguration:(id)arg1 recordingTechnique:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parentImageSensorSettings;
- (id)recordingTechnique;
- (id)secondaryTechniques;
- (void)setFinishBlock:(id /* block */)arg1;
- (void)setRecordingTechnique:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setVideoFormat:(id)arg1;
- (void)startRecording;
- (unsigned long long)state;
- (void)technique:(id)arg1 didFinishWithResult:(id)arg2;
- (id)videoFormat;
- (long long)worldAlignment;

@end
