/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioStreamConfig : VCMediaStreamConfig {
    long long  _audioStreamMode;
    NSMutableDictionary * _codecConfigurations;
    bool  _enableMaxBitrateOnNoChangeCMR;
    bool  _forceEVSWideBand;
    bool  _latencySensitiveMode;
    unsigned long long  _maxPtime;
    unsigned char  _numRedundantPayloads;
    unsigned long long  _ptime;
    bool  _redEnabled;
    NSMutableSet * _supportedNumRedundantPayload;
    float  _volume;
}

@property (nonatomic) long long audioStreamMode;
@property (nonatomic, readonly) NSDictionary *codecConfigurations;
@property (nonatomic) bool enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) bool forceEVSWideBand;
@property (getter=isLatencySensitiveMode, nonatomic) bool latencySensitiveMode;
@property (nonatomic) unsigned long long maxPtime;
@property (nonatomic) unsigned char numRedundantPayloads;
@property (nonatomic) unsigned long long ptime;
@property (getter=isRedEnabled, nonatomic, readonly) bool redEnabled;
@property (nonatomic, readonly) NSArray *supportedNumRedundantPayload;
@property (nonatomic) float volume;

- (void)addCodecConfiguration:(id)arg1;
- (void)addSupportedNumRedundantPayload:(unsigned int)arg1;
- (long long)audioStreamMode;
- (id)codecConfigurations;
- (void)dealloc;
- (bool)enableMaxBitrateOnNoChangeCMR;
- (bool)forceEVSWideBand;
- (id)init;
- (id)initWithClientDictionary:(id)arg1;
- (bool)isLatencySensitiveMode;
- (bool)isRedEnabled;
- (unsigned long long)maxPtime;
- (unsigned char)numRedundantPayloads;
- (unsigned long long)ptime;
- (void)setAudioStreamMode:(long long)arg1;
- (void)setEnableMaxBitrateOnNoChangeCMR:(bool)arg1;
- (void)setForceEVSWideBand:(bool)arg1;
- (void)setLatencySensitiveMode:(bool)arg1;
- (void)setMaxPtime:(unsigned long long)arg1;
- (void)setNumRedundantPayloads:(unsigned char)arg1;
- (void)setPtime:(unsigned long long)arg1;
- (void)setVolume:(float)arg1;
- (bool)setupCNCodecWithClientDictionary:(id)arg1;
- (bool)setupCodecWithClientDictionary:(id)arg1;
- (bool)setupDTMFCodecWithClientDictionary:(id)arg1;
- (void)setupRedWithRxPayload:(unsigned int)arg1 txPayload:(unsigned int)arg2;
- (id)supportedNumRedundantPayload;
- (float)volume;

@end
