/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerFirstPassJarvis : NSObject <CSActivationEventNotifierDelegate, CSAudioStreamProvidingDelegate, CSKeywordAnalyzerNDEAPIScoreDelegate, CSSPGEndpointAnalyzerDelegate, CSSiriClientBehaviorMonitorDelegate> {
    unsigned long long  _activeChannel;
    CSPlainAudioFileWriter * _audioFileWriter;
    CSAudioProvider * _audioProvider;
    CSAudioStream * _audioStream;
    CSAudioStreamHolding * _audioStreamHolding;
    CSAsset * _currentAsset;
    <CSVoiceTriggerDelegate> * _delegate;
    NSString * _deviceId;
    unsigned long long  _earlyDetectFiredMachTime;
    CSSPGEndpointAnalyzer * _endpointAnalyzer;
    bool  _hasReceivedNDEAPIResult;
    bool  _hasTriggerCandidate;
    bool  _isSecondPassRunning;
    bool  _isSiriClientListening;
    NSDictionary * _jarvisTriggerResult;
    unsigned long long  _jarvisVoiceTriggerTimeout;
    CSKeywordAnalyzerNDEAPI * _keywordAnalyzerNDEAPI;
    unsigned long long  _numProcessedSamples;
    NSObject<OS_dispatch_queue> * _queue;
    CSVoiceTriggerRTModel * _rtModel;
    unsigned long long  _secondChanceHotTillMachTime;
    CSVoiceTriggerSecondPass * _voiceTriggerSecondPass;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, retain) CSPlainAudioFileWriter *audioFileWriter;
@property (nonatomic, retain) CSAudioProvider *audioProvider;
@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic, retain) CSAudioStreamHolding *audioStreamHolding;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) unsigned long long earlyDetectFiredMachTime;
@property (nonatomic, retain) CSSPGEndpointAnalyzer *endpointAnalyzer;
@property (nonatomic) bool hasReceivedNDEAPIResult;
@property (nonatomic) bool hasTriggerCandidate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSecondPassRunning;
@property (nonatomic) bool isSiriClientListening;
@property (nonatomic, retain) NSDictionary *jarvisTriggerResult;
@property (nonatomic) unsigned long long jarvisVoiceTriggerTimeout;
@property (nonatomic, retain) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI;
@property (nonatomic) unsigned long long numProcessedSamples;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSVoiceTriggerRTModel *rtModel;
@property (nonatomic) unsigned long long secondChanceHotTillMachTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;

+ (id)jarvisAudioLogDirectory;
+ (id)jarvisAudioLoggingFilePath;
+ (id)timeStampString;

- (void).cxx_destruct;
- (void)_cancelAudioStreamHold;
- (void)_clearTriggerCandidate;
- (void)_createSecondPassIfNeeded;
- (void)_didDetectKeywordFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_didStartAudioStream;
- (void)_didStopAudioStream;
- (void)_handleJarvisVoiceTriggerFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_handleSecondPassResult:(unsigned long long)arg1 deviceId:(id)arg2 voiceTriggerInfo:(id)arg3 secondChanceCandidate:(bool)arg4 error:(id)arg5;
- (void)_holdAudioStreamWithTimeout:(double)arg1;
- (void)_notifyJarvisVoiceTriggerReject;
- (void)_reportJarvisVoiceTriggerFire;
- (void)_requestStartAudioStreamWitContext:(id)arg1 startStreamOption:(id)arg2 completion:(id /* block */)arg3;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)_teardownSecondPass;
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)activeChannel;
- (id)audioFileWriter;
- (id)audioProvider;
- (id)audioStream;
- (id)audioStreamHolding;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (id)currentAsset;
- (id)delegate;
- (id)deviceId;
- (unsigned long long)earlyDetectFiredMachTime;
- (id)endpointAnalyzer;
- (bool)hasReceivedNDEAPIResult;
- (bool)hasTriggerCandidate;
- (id)init;
- (bool)isSecondPassRunning;
- (bool)isSiriClientListening;
- (id)jarvisTriggerResult;
- (unsigned long long)jarvisVoiceTriggerTimeout;
- (id)keywordAnalyzerNDEAPI;
- (void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (unsigned long long)numProcessedSamples;
- (id)queue;
- (void)reset;
- (id)rtModel;
- (unsigned long long)secondChanceHotTillMachTime;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setAsset:(id)arg1;
- (void)setAudioFileWriter:(id)arg1;
- (void)setAudioProvider:(id)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setAudioStreamHolding:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setEarlyDetectFiredMachTime:(unsigned long long)arg1;
- (void)setEndpointAnalyzer:(id)arg1;
- (void)setHasReceivedNDEAPIResult:(bool)arg1;
- (void)setHasTriggerCandidate:(bool)arg1;
- (void)setIsSecondPassRunning:(bool)arg1;
- (void)setIsSiriClientListening:(bool)arg1;
- (void)setJarvisTriggerResult:(id)arg1;
- (void)setJarvisVoiceTriggerTimeout:(unsigned long long)arg1;
- (void)setKeywordAnalyzerNDEAPI:(id)arg1;
- (void)setNumProcessedSamples:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRtModel:(id)arg1;
- (void)setSecondChanceHotTillMachTime:(unsigned long long)arg1;
- (void)setVoiceTriggerSecondPass:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)spgEndpointAnalyzerDidDetectEndpoint:(id)arg1;
- (void)start;
- (id)voiceTriggerSecondPass;

@end
