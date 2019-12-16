/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWHASettingEvent : HMDLogEvent <HMDAWDLogEvent> {
    NSString * _keyPath;
    AWDHomeKitValue * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keyPath;
@property (readonly) Class superclass;
@property (nonatomic, copy) AWDHomeKitValue *value;

+ (id)eventWithKeyPath:(id)arg1 value:(id)arg2;
+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)keyPath;
- (id)metricForAWD;
- (void)setKeyPath:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
