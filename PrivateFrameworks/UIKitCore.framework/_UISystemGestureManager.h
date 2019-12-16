/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISystemGestureManager : NSObject <FBSDisplayObserving, UIGestureRecognizerDelegate> {
    NSMutableDictionary * _displayIdentityToManagerMap;
    FBSDisplayMonitor * _displayMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 toDisplayWithIdentity:(id)arg3;
- (void)addGestureRecognizer:(id)arg1 toDisplayWithIdentity:(id)arg2;
- (void)clearTransformFromDisplayWithIdentity:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)init;
- (void)removeGestureRecognizer:(id)arg1 fromDisplayWithIdentity:(id)arg2;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 onDisplayWithIdentity:(id)arg2;
- (id)windowForSystemGesturesForDisplayWithIdentity:(id)arg1;

@end
