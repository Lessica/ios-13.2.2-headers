/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKLowPowerModeMonitor : _DKMonitor

+ (id)_eventWithLowPowerModeState:(bool)arg1;
+ (id)eventStream;
+ (void)setLowPowerMode:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void)lowPowerModeStateChanged:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)updateLowPowerMode;

@end
