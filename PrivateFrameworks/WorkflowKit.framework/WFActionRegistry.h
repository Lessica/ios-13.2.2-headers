/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFActionRegistry : NSObject <WFActionProviderDelegate> {
    NSArray * _actionProvidersForFilling;
    NSArray * _actionProvidersForLoading;
    NSMapTable * _actionsByActionProvider;
    NSDictionary * _actionsByCategory;
    NSDictionary * _actionsByIdentifier;
    NSObject<OS_dispatch_queue> * _cacheUpdateAndFillQueue;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _stateAccessQueue;
}

@property (nonatomic, readonly) NSArray *actionProvidersForFilling;
@property (nonatomic, readonly) NSArray *actionProvidersForLoading;
@property (nonatomic, readonly) NSSet *actions;
@property (nonatomic, readonly) NSMapTable *actionsByActionProvider;
@property (nonatomic, readonly) NSDictionary *actionsByCategory;
@property (nonatomic, readonly) NSDictionary *actionsByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheUpdateAndFillQueue;
@property (nonatomic, readonly) NSSet *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly) Class superclass;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (void)actionProviderDidChange:(id)arg1 updatedActions:(id)arg2 removedActions:(id)arg3 addedActions:(id)arg4;
- (id)actionProvidersForFilling;
- (id)actionProvidersForLoading;
- (id)actions;
- (id)actionsByActionProvider;
- (id)actionsByCategory;
- (id)actionsByIdentifier;
- (id)actionsForAppWithIdentifier:(id)arg1;
- (id)actionsForCategory:(id)arg1;
- (void)addActions:(id)arg1 fromActionProvider:(id)arg2;
- (id)cacheUpdateAndFillQueue;
- (id)categories;
- (id)createActionWithDonation:(id)arg1;
- (id)createActionWithIdentifier:(id)arg1 serializedParameters:(id)arg2;
- (id)createActionWithShortcut:(id)arg1 error:(id*)arg2;
- (id)createActionsWithIdentifiers:(id)arg1 serializedParameterArray:(id)arg2;
- (id)description;
- (void)fill;
- (void)fillActionProviders:(id)arg1;
- (id)handleIntentActionForDonatedIntent:(id)arg1;
- (id)init;
- (void)removeActionsWithIdentifiers:(id)arg1 fromActionProvider:(id)arg2;
- (id)residentBasedActionsForHome:(id)arg1 residentCompatible:(bool)arg2;
- (id)residentCompatibleActionsForCategory:(id)arg1 home:(id)arg2;
- (id)residentCompatibleActionsForHome:(id)arg1;
- (id)residentCompatibleActionsFromActions:(id)arg1 inHome:(id)arg2;
- (void)setActions:(id)arg1 forProvider:(id)arg2;
- (unsigned long long)state;
- (id)stateAccessQueue;
- (id)suggestionsForHome:(id)arg1 includingRelatedActions:(bool)arg2;
- (void)updateCacheWithCompletion:(id /* block */)arg1;
- (void)updateCachesAndFill;
- (id)updatedActionForResidentCompatibility:(id)arg1 inHome:(id)arg2;

@end
