/* Generated by RuntimeBrowser.
 */

@protocol ARRecordingTechniqueProtocol <NSObject>

@required

+ (NSString *)metadataIdentifierForARRecordableResultsClass:(Class)arg1;

- (void)abortRecording;
- (bool)expectAudioData;
- (bool)expectCustomData;
- (bool)expectDepthData;
- (void)finishRecording;
- (id)initWithFileURL:(NSURL *)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(NSSet *)arg3;
- (id)initWithFileURL:(NSURL *)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(NSSet *)arg3 startImmediately:(bool)arg4;
- (id)initWithFileURL:(NSURL *)arg1 sensorDataTypes:(unsigned long long)arg2;
- (NSURL *)outputFileURL;
- (void)recordCustomData:(id <NSSecureCoding>)arg1 forTimestamp:(double)arg2;
- (NSSet *)recordingResultDataClasses;
- (unsigned long long)recordingSensorDataTypes;
- (<ARRecordingTechniqueDelegate> *)recordingTechniqueDelegate;
- (void)setExpectAudioData:(bool)arg1;
- (void)setExpectCustomData:(bool)arg1;
- (void)setExpectDepthData:(bool)arg1;
- (void)setRecordingTechniqueDelegate:(id <ARRecordingTechniqueDelegate>)arg1;
- (void)setShouldSaveVideoInPhotosLibrary:(bool)arg1;
- (bool)shouldSaveVideoInPhotosLibrary;
- (void)startRecording;

@end
