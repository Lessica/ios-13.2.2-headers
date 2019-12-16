/* Generated by RuntimeBrowser.
 */

@protocol ARReplaySensorProtocol <ARSensor>

@required

- (void)advanceFrame;
- (float)advanceFramesPerSecondMultiplier;
- (void)advanceToFrameIndex:(long long)arg1;
- (NSString *)arkitVersion;
- (NSSet *)customDataClasses;
- (id)customDataForTimestamp:(double)arg1;
- (<ARSensorDelegate> *)delegate;
- (NSString *)deviceModel;
- (void)endInterruption;
- (bool)finishedReplaying;
- (unsigned long long)forcePlaybackFramesPerSecond;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithDataFromFile:(NSString *)arg1;
- (id)initWithSequenceURL:(NSURL *)arg1 manualReplay:(bool)arg2;
- (id)initWithSequenceURL:(NSURL *)arg1 manualReplay:(bool)arg2 synchronousMode:(bool)arg3;
- (void)interrupt;
- (bool)interrupted;
- (bool)isReplayingManually;
- (bool)isSynchronousMode;
- (long long)nextFrameIndex;
- (double)nominalFrameRate;
- (NSString *)osVersion;
- (NSArray *)recordedResultClassList;
- (NSSet *)recordedResultClasses;
- (unsigned long long)recordedSensorTypes;
- (<ARReplaySensorDelegate> *)replaySensorDelegate;
- (ARTechnique *)replayTechniqueForResultDataClasses:(NSSet *)arg1;
- (NSURL *)sequenceURL;
- (void)setAdvanceFramesPerSecondMultiplier:(float)arg1;
- (void)setCustomDataClasses:(NSSet *)arg1;
- (void)setDelegate:(id <ARSensorDelegate>)arg1;
- (void)setForcePlaybackFramesPerSecond:(unsigned long long)arg1;
- (void)setReplaySensorDelegate:(id <ARReplaySensorDelegate>)arg1;
- (void)start;
- (void)stop;

@end
