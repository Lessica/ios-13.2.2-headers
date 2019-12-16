/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource> {
    INIntentDescription * _intentDescription;
    NSArray * _supportedAppIdentifiers;
    NSArray * _supportedIdentifiers;
    int  _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedIdentifiers;
@property (nonatomic, readonly) int token;

- (void).cxx_destruct;
- (id)actionForAppIdentifier:(id)arg1;
- (id)appIdentifier;
- (id)appIdentifierForIdentifier:(id)arg1;
- (id)appSection;
- (id)copyWithSerializedParameters:(id)arg1;
- (void)dealloc;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)generatedIntentWithInput:(id)arg1 error:(id*)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (long long)intentCategory;
- (id)intentDescription;
- (id)possibleStatesForEnumeration:(id)arg1;
- (void)selectedAppDidChange;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)slots;
- (id)supportedAppIdentifiers;
- (id)supportedIdentifiers;
- (int)token;

@end
