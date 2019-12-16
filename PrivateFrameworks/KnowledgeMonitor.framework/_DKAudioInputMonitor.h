/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKAudioInputMonitor : _DKMonitor {
    AVAudioSession * _inputMonitor;
}

+ (id)_eventWithState:(id)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5;
+ (id)entitlement;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (void)onAudioRouteChangeNotification:(id)arg1;
- (void)start;
- (void)stop;

@end
