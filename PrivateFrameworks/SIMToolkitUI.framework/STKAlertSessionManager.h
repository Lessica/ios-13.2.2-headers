/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

@interface STKAlertSessionManager : NSObject {
    STKAlertSessionEventQueue * _eventQueue;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, readonly) STKAlertSessionEventQueue *eventQueue;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (void)_willPresentAlertHandle:(id)arg1;
- (void)enqueuePresentationForSession:(id)arg1 completion:(id /* block */)arg2;
- (id)eventQueue;
- (id)initWithEventQueue:(id)arg1 logger:(id)arg2;
- (id)log;
- (id)remoteAlertDescriptorForSession:(id)arg1;

@end
