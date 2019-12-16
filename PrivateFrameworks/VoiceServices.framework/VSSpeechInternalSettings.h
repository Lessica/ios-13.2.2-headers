/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechInternalSettings : NSObject {
    bool  _internalBuild;
    NSUserDefaults * _internalDefaults;
    bool  _isInternalBuild;
}

@property (nonatomic) float defaultVolume;
@property (nonatomic) bool disableAssetCleaning;
@property (nonatomic) bool disableCache;
@property (nonatomic) bool disableDeviceRacing;
@property (nonatomic) bool disableOsprey;
@property (nonatomic) bool disableOspreyStreaming;
@property (nonatomic) bool disableServerTTS;
@property (nonatomic) bool enableAudioDump;
@property (nonatomic) bool enableLocalVoices;
@property (nonatomic) bool forceOsprey;
@property (nonatomic) bool forceServerTTS;
@property (nonatomic, readonly) bool internalBuild;
@property (nonatomic, retain) NSUserDefaults *internalDefaults;
@property (nonatomic) bool isInternalBuild;
@property (nonatomic, retain) NSString *ospreyEndpointURL;
@property (nonatomic) float serverTTSTimeout;
@property (nonatomic) float streamBufferDuration;
@property (nonatomic) bool useBetaVoice;
@property (nonatomic) bool whisper;

+ (id)standardInstance;

- (void).cxx_destruct;
- (float)defaultVolume;
- (bool)disableAssetCleaning;
- (bool)disableCache;
- (bool)disableDeviceRacing;
- (bool)disableOsprey;
- (bool)disableOspreyStreaming;
- (bool)disableServerTTS;
- (bool)enableAudioDump;
- (bool)enableLocalVoices;
- (bool)forceOsprey;
- (bool)forceServerTTS;
- (id)init;
- (bool)internalBuild;
- (id)internalDefaults;
- (bool)isInternalBuild;
- (id)ospreyEndpointURL;
- (float)serverTTSTimeout;
- (void)setDefaultVolume:(float)arg1;
- (void)setDisableAssetCleaning:(bool)arg1;
- (void)setDisableCache:(bool)arg1;
- (void)setDisableDeviceRacing:(bool)arg1;
- (void)setDisableOsprey:(bool)arg1;
- (void)setDisableOspreyStreaming:(bool)arg1;
- (void)setDisableServerTTS:(bool)arg1;
- (void)setEnableAudioDump:(bool)arg1;
- (void)setEnableLocalVoices:(bool)arg1;
- (void)setForceOsprey:(bool)arg1;
- (void)setForceServerTTS:(bool)arg1;
- (void)setInternalDefaults:(id)arg1;
- (void)setIsInternalBuild:(bool)arg1;
- (void)setOspreyEndpointURL:(id)arg1;
- (void)setServerTTSTimeout:(float)arg1;
- (void)setStreamBufferDuration:(float)arg1;
- (void)setUseBetaVoice:(bool)arg1;
- (void)setWhisper:(bool)arg1;
- (float)streamBufferDuration;
- (bool)useBetaVoice;
- (bool)whisper;

@end
