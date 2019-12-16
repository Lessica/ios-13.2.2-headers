/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBulletinWindowController : NSObject {
    bool  _aboveAssistant;
    SBBulletinWindow * _bulletinWindow;
    NSMutableSet * _busyClients;
    NSMutableSet * _busyReasons;
    NSMutableSet * _keyClients;
    SBBulletinRootViewController * _rootVC;
    bool  _rotatingKeyboard;
    bool  _wantsKeyWindow;
    NSMutableSet * _windowClients;
}

@property (nonatomic, readonly) UIViewController *rootViewController;
@property (getter=_wantsKeyWindow, setter=_setWantsKeyWindow:, nonatomic) bool wantsKeyWindow;
@property (nonatomic, readonly) UIWindow *window;
@property (getter=isWindowAboveAssistant, nonatomic) bool windowAboveAssistant;

+ (bool)_isSecure;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_becomeKeyWindow;
- (void)_didBecomeKeyWindow:(id)arg1;
- (void)_didResignKeyWindow:(id)arg1;
- (bool)_hasKeyWindowClients;
- (bool)_isBusyForReason:(id)arg1;
- (void)_resignAsKeyWindow;
- (void)_setWantsKeyWindow:(bool)arg1;
- (bool)_wantsKeyWindow;
- (void)addBusyClient:(id)arg1;
- (void)addWindowClient:(id)arg1;
- (void)addWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)isBusy;
- (bool)isWindowAboveAssistant;
- (void)removeBusyClient:(id)arg1;
- (void)removeWindowClient:(id)arg1;
- (void)removeWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (id)rootViewController;
- (void)setBusy:(bool)arg1 forReason:(id)arg2;
- (void)setWindowAboveAssistant:(bool)arg1;
- (void)updateKeyWindowStatusIfNecessary;
- (id)window;

@end
