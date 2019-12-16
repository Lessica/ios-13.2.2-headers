/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBAssertionManager : NSObject <RBAssertionManagerQueueDelegate, RBAssertionManaging, RBStateCapturing> {
    NSMutableSet * _acquiringAssertionIdentifiers;
    NSMutableSet * _assertionTargets;
    RBAssertionCollection * _assertions;
    <RBBundlePropertiesManaging> * _bundlePropertiesManager;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    double  _creationTime;
    <RBAssertionManagerDelegate> * _delegate;
    <RBAssertionDescriptorValidating> * _descriptorValidator;
    <RBDomainAttributeManaging> * _domainAttributeManager;
    <RBEntitlementManaging> * _entitlementManager;
    RBAssertionManagerEventQueue * _eventQueue;
    NSCountedSet * _inFlightAssertionTargets;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inFlightOperationsLock;
    NSMutableSet * _invalidAssertions;
    <RBJetsamBandProviding> * _jetsamBandProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maxAssertionsPerOriginator;
    unsigned long long  _maxOperationsInFlight;
    <RBAssertionOriginatorPidPersisting> * _originatorPidStore;
    NSMutableDictionary * _originatorToInFlightOperationsCountMap;
    RBProcessIndex * _processIndex;
    NSMutableDictionary * _relativeStartTimesByTargetIdentity;
    <RBStateCaptureManaging> * _stateCaptureManager;
    RBProcessMap * _stateMap;
    RBAssertionStateResolver * _stateResolver;
    RBSystemState * _systemState;
    NSObject<OS_dispatch_queue> * _workloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

+ (id)sharedWorkloop;

- (void).cxx_destruct;
- (void)_acquireUnderlyingAssertionForProcess:(id)arg1;
- (id)_concreteTargetForTarget:(id)arg1 withContext:(id)arg2;
- (bool)_decreaseInFlightOperationsForOriginator:(id)arg1;
- (void)_decreaseInFlightOperationsForTargetIdentity:(id)arg1;
- (void)_dumpAssertions;
- (bool)_increaseInFlightOperationsForOriginator:(id)arg1;
- (void)_increaseInFlightOperationsForTargetIdentity:(id)arg1;
- (id)_lock_activateDelayedAssertionsForTargets:(id)arg1;
- (void)_lock_addAssertion:(id)arg1;
- (void)_lock_clearStartTimesForUnbusyTargets:(id)arg1;
- (id)_lock_deactivateDelayedAssertionsForTargets:(id)arg1;
- (void)_lock_deactivateDelayedAssertionsForTargetsAndUpdateStates:(id)arg1;
- (double)_lock_delayedStartTimeForAssertion:(id)arg1;
- (void)_lock_dumpAssertionsForTarget:(id)arg1;
- (void)_lock_enqueueAssertionsForRemoval:(id)arg1;
- (bool)_lock_hasStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1;
- (double)_lock_invalidationTimeForAssertion:(id)arg1;
- (void)_lock_notifyDelegateOfProcessStateChangeSet:(id)arg1;
- (unsigned long long)_lock_numberofStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1;
- (double)_lock_relativeStartTimeForAssertion:(id)arg1;
- (void)_lock_removeAssertion:(id)arg1;
- (void)_lock_removeAssertions:(id)arg1;
- (void)_lock_removeInvalidAssertions;
- (void)_lock_removeStateForProcessIdentityIfNecessary:(id)arg1;
- (void)_lock_setState:(id)arg1 forProcessIdentity:(id)arg2;
- (void)_lock_setSystemState:(id)arg1;
- (id)_lock_sortedAssertionsForTarget:(id)arg1;
- (double)_lock_startTimeForAssertion:(id)arg1;
- (id)_lock_updateStatesDueToChangingAssertions:(id)arg1;
- (double)_remainingRuntimeForProcessIdentity:(id)arg1;
- (void)_removeInvalidAssertions;
- (void)acquireAssertionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)allEntitlements;
- (bool)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;
- (id)assertionDescriptorsWithFlattenedAttributes:(bool)arg1;
- (id)assertionsForOriginator:(id)arg1;
- (id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4;
- (id)captureState;
- (bool)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
- (id)debugDescription;
- (struct NSString { Class x1; }*)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
- (void)eventQueue:(id)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg2 expirationTime:(double)arg3;
- (void)eventQueue:(id)arg1 handleInvalidationEventForAssertion:(id)arg2;
- (void)eventQueue:(id)arg1 handleWarningEventForAssertion:(id)arg2;
- (double)eventQueue:(id)arg1 remainingRuntimeForProcessIdentity:(id)arg2;
- (double)eventQueue:(id)arg1 startTimeForAssertion:(id)arg2;
- (bool)hasAssertionWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 domainAttributeManager:(id)arg2 bundlePropertiesManager:(id)arg3 originatorPidStore:(id)arg4 assertionDescriptorValidator:(id)arg5 entitlementManager:(id)arg6 jetsamBandProvider:(id)arg7 stateCaptureManager:(id)arg8 maxOperationsInFlight:(unsigned long long)arg9 maxAssertionsPerOriginator:(unsigned long long)arg10;
- (bool)invalidateAssertion:(id)arg1;
- (bool)invalidateAssertionFromOriginator:(id)arg1 withIdentifier:(id)arg2;
- (bool)invalidateAssertionWithIdentifier:(id)arg1;
- (bool)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg1;
- (id)limitationsForInstance:(id)arg1;
- (id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
- (void)processDidLaunch:(id)arg1;
- (void)processDidTerminate:(id)arg1;
- (id)processForIdentity:(id)arg1;
- (void)revalidateAssertionsForProcessIdentities:(id)arg1;
- (id)stateCaptureTitle;
- (id)stateForIdentity:(id)arg1;

@end
