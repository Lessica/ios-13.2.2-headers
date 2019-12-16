/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceScene : NSObject <BSDescriptionProviding, FBSSceneAgentProxy, FBSSceneHandle, FBSceneClient, FBWorkspaceServerSceneEventHandler> {
    unsigned long long  _agentEventSequenceNumber;
    id /* block */  _agentMessageHandler;
    NSMutableArray * _agentOutstandingEventSequence;
    FBSSerialQueue * _agentQueue;
    NSMutableArray * _agentSessions;
    FBSSceneClientSettings * _clientSettings;
    <FBSceneHost> * _host;
    <FBSSceneHostAgent> * _hostAgent;
    NSString * _identifier;
    FBProcess * _process;
    FBSSceneSettings * _settings;
    FBSSceneSpecification * _specification;
    FBWorkspace * _workspace;
    NSObject<OS_dispatch_queue> * _workspaceQueue;
    unsigned char  _workspaceQueue_creationState;
    NSMutableArray * _workspaceQueue_initializationCompletedBlocks;
    bool  _workspaceQueue_invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_workspaceQueue_handledInitialSettingsDiff, nonatomic, readonly) bool handledInitialSettingsDiff;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FBSceneHost> *host;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FBWorkspace *parentWorkspace;
@property (getter=_workspaceQueue_sceneSettings, setter=_workspaceQueue_setSceneSettings:, nonatomic, copy) FBSSceneSettings *sceneSettings;
@property (nonatomic, readonly, copy) FBSSceneSettings *settings;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchBlockAfterProcessLaunch:(id /* block */)arg1;
- (void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_workspaceQueue;
- (void)_workspaceQueue_addInitializationCompletedBlockToWorkspaceQueue:(id /* block */)arg1;
- (void)_workspaceQueue_dispatchClientBlockIfNecessary:(id /* block */)arg1 success:(bool)arg2;
- (bool)_workspaceQueue_handledInitialSettingsDiff;
- (void)_workspaceQueue_invalidate;
- (void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)_workspaceQueue_process;
- (id)_workspaceQueue_sceneSettings;
- (void)_workspaceQueue_sendDestroyWithTransitionContext:(id)arg1 responseEventHandler:(id /* block */)arg2;
- (void)_workspaceQueue_sendSettingsDiff:(id)arg1 transitionContext:(id)arg2 responseEventHandler:(id /* block */)arg3;
- (void)_workspaceQueue_setSceneSettings:(id)arg1;
- (void)agent:(id)arg1 registerMessageHandler:(id /* block */)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (id)callOutQueue;
- (id)clientProcess;
- (void)closeSession:(id)arg1;
- (id)counterpartAgent;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)host;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (id)hostProcess;
- (id)identifier;
- (id)initWithParentWorkspace:(id)arg1 host:(id)arg2;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)parameters;
- (id)parentWorkspace;
- (void)queue_configureWithInitialParameters:(id)arg1;
- (void)queue_invalidate;
- (void)sceneDidReceiveActions:(id)arg1;
- (void)sceneDidReceiveMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sceneDidUpdateClientSettings:(id)arg1 transitionContext:(id)arg2;
- (id)sessionForIdentifier:(id)arg1;
- (id)settings;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end