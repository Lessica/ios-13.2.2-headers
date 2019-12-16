/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFStartCallAction : WFHandleSystemIntentAction

- (id)airplaneModeError;
- (id)appConfigurationRequiredError;
- (id)appIdentifierForIdentifier:(id)arg1;
- (long long)callCapability;
- (id)callingServiceNotAvailableError;
- (id)contactNotSupportedByAppErrorForContacts:(id)arg1;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)errorFromStartCallResponse:(id)arg1 intent:(id)arg2;
- (id)generatedIntentWithInput:(id)arg1 error:(id*)arg2;
- (id)localizedCallServiceName;
- (id)localizedKeyParameterDisplayName;
- (long long)preferredCallProvider;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (bool)shouldOpenAppThroughSiriForIntent:(id)arg1 intentResponse:(id)arg2;
- (bool)skipsProcessingHiddenParameters;

@end
