/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneManagerObserver : NSObject <BSDescriptionProviding, FBSceneManagerDelegate_Private, FBSceneManagerInternalObserver> {
    bool  _createDefaultTransitionContext;
    bool  _didCommitDEPRECATED;
    bool  _didCommitDEPRECATED2;
    bool  _didCreate;
    bool  _didCreateSceneDEPRECATED;
    bool  _didDestroy;
    bool  _didReceiveActionsDEPRECATED;
    bool  _didSynchronize;
    bool  _didUpdateClientSettings;
    bool  _hostingPolicyForDisplay;
    bool  _hostingPolicyForScene;
    bool  _interceptSceneUpdates;
    bool  _interceptSceneUpdatesForDeactivationManager;
    bool  _internalObserver;
    bool  _isDelegate;
    <FBSceneManagerObserver> * _observer;
    unsigned long long  _observerAddress;
    Class  _observerClass;
    bool  _privateDelegate;
    bool  _updateAppliedDEPRECATED;
    bool  _updateCompletedDEPRECATED;
    bool  _updatePreparedDEPRECATED;
    bool  _willCommitDEPRECATED;
    bool  _willDestroy;
    bool  _willSynchronize;
    bool  _willUpdateSceneDEPRECATED;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <FBSceneManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FBSceneManagerObserver> *observer;
@property (readonly) Class superclass;

+ (id)observerWithObserver:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithObserver:(id)arg1;
- (id)_internalObserver;
- (id)_privateDelegate;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDelegate:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (bool)isDelegate;
- (bool)isEqual:(id)arg1;
- (bool)isInternalObserver;
- (id)observer;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForDisplay:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
- (void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3;
- (void)sceneManager:(id)arg1 interceptUpdateForSceneDeactivationManager:(id)arg2 withNewSettings:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 completedWithContext:(id)arg3 error:(id)arg4;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 preparedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
