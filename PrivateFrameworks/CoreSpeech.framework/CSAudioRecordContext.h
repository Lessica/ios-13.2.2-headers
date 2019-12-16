/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioRecordContext : NSObject <NSCopying> {
    bool  _alwaysUseRemoteBuiltInMic;
    NSString * _deviceId;
    long long  _type;
}

@property (nonatomic) bool alwaysUseRemoteBuiltInMic;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) long long type;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

+ (id)contextForBTLE;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)arg1;
+ (id)contextForJarvisWithDeviceId:(id)arg1;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForServerInvoke;
+ (id)contextForVoiceTriggerTraining;
+ (id)defaultContext;
+ (id)recordTypeString:(long long)arg1;

- (void).cxx_destruct;
- (id)_createAVVCContextWithType:(long long)arg1 deviceId:(id)arg2;
- (bool)alwaysUseRemoteBuiltInMic;
- (long long)avvcActivationMode:(long long)arg1;
- (id)avvcContext;
- (id)avvcContextSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceId;
- (id)initWithAVVCContext:(id)arg1;
- (id)initWithRecordType:(long long)arg1 deviceId:(id)arg2;
- (id)initWithXPCObject:(id)arg1;
- (bool)isBuiltInVoiceTriggered;
- (bool)isEqual:(id)arg1;
- (bool)isHearstDoubleTapTriggered;
- (bool)isHearstVoiceTriggered;
- (bool)isJarvisVoiceTriggered;
- (bool)isRTSTriggered;
- (bool)isServerInvoked;
- (bool)isStarkTriggered;
- (bool)isTriggeredFromHearst;
- (bool)isVoiceTriggered;
- (long long)recordTypeFromAVVCActivationMode:(long long)arg1;
- (void)setAlwaysUseRemoteBuiltInMic:(bool)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)xpcObject;

@end
