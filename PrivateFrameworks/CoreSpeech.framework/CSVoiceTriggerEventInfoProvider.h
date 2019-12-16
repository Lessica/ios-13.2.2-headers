/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerEventInfoProvider : NSObject {
    NSDictionary * _rtsTriggerInfo;
    NSDictionary * _voiceTriggerInfo;
}

@property (nonatomic, copy) NSDictionary *rtsTriggerInfo;
@property (nonatomic, copy) NSDictionary *voiceTriggerInfo;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)rtsTriggerInfo;
- (void)setRtsTriggerInfo:(id)arg1;
- (void)setVoiceTriggerInfo:(id)arg1;
- (id)voiceTriggerInfo;

@end
