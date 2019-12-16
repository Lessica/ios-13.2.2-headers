/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARReplaySensorPublic : NSObject <ARReplaySensorProtocol> {
    float  _advanceFramesPerSecondMultiplier;
    NSString * _arkitVersion;
    NSSet * _availableMetadataStreams;
    NSSet * _availableVideoStreams;
    ARImageCroppingTechnique * _croppingTechnique;
    NSSet * _customDataClasses;
    <ARSensorDelegate> * _delegate;
    NSString * _deviceModel;
    bool  _displaySynchronizationMarker;
    long long  _displaySynchronizationMarkerFrames;
    bool  _finishedReplaying;
    unsigned long long  _forcePlaybackFramesPerSecond;
    double  _frameRateScale;
    int  _imageIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    NSMutableDictionary * _imageTimestampOfStreamWhenFramerateChanged;
    bool  _interrupted;
    bool  _isReplayingManually;
    NSString * _mainVideoStreamIdentifier;
    bool  _manualCommandLineMode;
    NSMutableDictionary * _metadataCache;
    long long  _nextFrameIndex;
    NSMutableDictionary * _nextWrappedImageDataForStreamIdentifierMap;
    double  _nominalFrameRate;
    NSString * _osVersion;
    ARParentImageSensorSettings * _parentImageSensorSettings;
    MOVReaderInterface * _reader;
    double  _recordTimestampToMovieTimestampDifference;
    NSSet * _recordedResultClasses;
    unsigned long long  _recordedSensorTypes;
    double  _recordingTimeToReplayTimeOffset;
    bool  _recordingTimeToReplayTimeOffsetReset;
    NSObject<OS_dispatch_queue> * _replayQueue;
    <ARReplaySensorDelegate> * _replaySensorDelegate;
    bool  _replayStarted;
    bool  _running;
    NSURL * _sequenceURL;
    double  _startTime;
    struct __CVBuffer { } * _synchronizationMarker;
    struct __CVPixelBufferPool { } * _synchronizationMarkerPool;
    struct OpaqueVTPixelTransferSession { } * _synchronizationTransferSession;
    bool  _synchronousMode;
    long long  _targetFrameIndex;
    long long  _tick;
    NSObject<OS_dispatch_source> * _timer;
    double  _timestampWhenFramerateChanged;
    NSSet * _videoStreamsToReplay;
}

@property float advanceFramesPerSecondMultiplier;
@property (nonatomic, readonly) NSString *arkitVersion;
@property (nonatomic, copy) NSSet *customDataClasses;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) bool finishedReplaying;
@property (nonatomic) unsigned long long forcePlaybackFramesPerSecond;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageIndex;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, readonly) bool interrupted;
@property (nonatomic, readonly) bool isReplayingManually;
@property (nonatomic, retain) NSString *mainVideoStreamIdentifier;
@property long long nextFrameIndex;
@property (nonatomic, readonly) double nominalFrameRate;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, retain) ARParentImageSensorSettings *parentImageSensorSettings;
@property (nonatomic) unsigned long long powerUsage;
@property (nonatomic, readonly) NSArray *recordedResultClassList;
@property (nonatomic, readonly) NSSet *recordedResultClasses;
@property (nonatomic, readonly) unsigned long long recordedSensorTypes;
@property (nonatomic) double recordingTimeToReplayTimeOffset;
@property (nonatomic) bool recordingTimeToReplayTimeOffsetReset;
@property <ARReplaySensorDelegate> *replaySensorDelegate;
@property (nonatomic, readonly) NSURL *sequenceURL;
@property (readonly) Class superclass;
@property (getter=isSynchronousMode, nonatomic, readonly) bool synchronousMode;
@property long long targetFrameIndex;

- (void).cxx_destruct;
- (void)_didOutputSensorData:(id)arg1;
- (void)_replaySensorFinishedReplayingData;
- (void)advance;
- (void)advanceFrame;
- (float)advanceFramesPerSecondMultiplier;
- (void)advanceToFrameIndex:(long long)arg1;
- (id)arkitVersion;
- (id)availableVideoFormatForDeviceType:(id)arg1 position:(long long)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentCMTime;
- (double)currentTime;
- (id)customDataClasses;
- (id)customDataForTimestamp:(double)arg1;
- (void)dealloc;
- (id)delegate;
- (id)deviceModel;
- (void)endInterruption;
- (void)endReplay;
- (void)failWithError:(id)arg1;
- (bool)finishedReplaying;
- (unsigned long long)forcePlaybackFramesPerSecond;
- (id)getItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(id /* block */)arg3;
- (id)getNextWrappedImageDataForReplay;
- (id)getNextWrappedItemsFromStream:(id)arg1 converter:(id /* block */)arg2;
- (id)getResultDataForClasses:(id)arg1 upToRecordTime:(double)arg2;
- (id)getWrappedItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(id /* block */)arg3;
- (id)imageDataToReplayForTimestamp:(double)arg1;
- (int)imageIndex;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithDataFromFile:(id)arg1;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(bool)arg2;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(bool)arg2 synchronousMode:(bool)arg3;
- (void)interrupt;
- (bool)interrupted;
- (bool)isEqual:(id)arg1;
- (bool)isReplayingManually;
- (bool)isSynchronousMode;
- (id /* block */)keyedArchiveConverter:(Class)arg1;
- (id /* block */)keyedArchiveConverterForClasses:(id)arg1;
- (id)mainVideoStreamIdentifier;
- (id /* block */)metadataWrapperConverter:(Class)arg1;
- (long long)nextFrameIndex;
- (double)nominalFrameRate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)osVersion;
- (id)parentImageSensorSettings;
- (id)peekNextWrappedImageDataForAllRequiredStreams;
- (id)peekNextWrappedImageDataForStreamIdentifier:(id)arg1;
- (void)prepareForReplay;
- (unsigned long long)providedDataTypes;
- (void)readFileMetadata;
- (id)recordedResultClassList;
- (id)recordedResultClasses;
- (unsigned long long)recordedSensorTypes;
- (double)recordingTimeToReplayTimeOffset;
- (bool)recordingTimeToReplayTimeOffsetReset;
- (id)replaySensorDelegate;
- (id)replayTechniqueForResultDataClasses:(id)arg1;
- (id)sequenceURL;
- (void)setAdvanceFramesPerSecondMultiplier:(float)arg1;
- (void)setCustomDataClasses:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForcePlaybackFramesPerSecond:(unsigned long long)arg1;
- (void)setImageIndex:(int)arg1;
- (void)setMainVideoStreamIdentifier:(id)arg1;
- (void)setNextFrameIndex:(long long)arg1;
- (void)setParentImageSensorSettings:(id)arg1;
- (void)setRecordingTimeToReplayTimeOffset:(double)arg1;
- (void)setRecordingTimeToReplayTimeOffsetReset:(bool)arg1;
- (void)setReplaySensorDelegate:(id)arg1;
- (void)setTargetFrameIndex:(long long)arg1;
- (id /* block */)starDataConverter;
- (void)start;
- (void)startReplayIfNeeded;
- (void)stop;
- (long long)targetFrameIndex;
- (void)tick;
- (id)wrappedImageDataOrderedByTime:(id)arg1;

@end