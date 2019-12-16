/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFTriggeredAutomationEvent : WFEvent {
    NSString * _key;
    bool  _requiredRuntimeConfirmation;
    NSString * _triggerType;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic) bool requiredRuntimeConfirmation;
@property (nonatomic, copy) NSString *triggerType;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)key;
- (bool)requiredRuntimeConfirmation;
- (void)setKey:(id)arg1;
- (void)setRequiredRuntimeConfirmation:(bool)arg1;
- (void)setTriggerType:(id)arg1;
- (id)triggerType;

@end
