/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

@interface CLRunLoopSilo : CLSilo {
    double  _currentLatchedAbsoluteTimestamp;
    CLRunLoopSiloThread * _siloThread;
}

- (void).cxx_destruct;
- (void)afterInterval:(double)arg1 async:(id /* block */)arg2;
- (void)assertInside;
- (void)assertOutside;
- (void)async:(id /* block */)arg1;
- (double)currentLatchedAbsoluteTimestamp;
- (id)debugDescription;
- (id)getTimeCoercibleVariantInstance;
- (id)initWithCurrentRunLoopAndIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { }*)arg1;
- (id)newTimer;
- (void)resume;
- (id)runloop;
- (void)suspend;
- (void)sync:(id /* block */)arg1;
- (void)updateLatchedAbsoluteTimestamp;

@end