/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntent : NSObject <ACSCardRequesting, CRContent, INFileEnumerable, INGenericIntent, INImageProxyInjecting, INIntentExport, INIntentSlotComposing, INKeyImageProducing, INRuntimeObject, NSCopying, NSSecureCoding, REIntentProperties> {
    long long  __preferredInteractionDirection;
    NSArray * _airPlayRouteIds;
    PBCodable * _backingStore;
    NSDictionary * _configurableParameterCombinations;
    bool  _hasLoadedKeyParameter;
    NSString * _identifier;
    unsigned long long  _indexingHash;
    NSMutableDictionary * _intentInstanceDescriptionMapping;
    INIntentKeyParameter * _keyParameter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _keyParameterLock;
    NSDictionary * _parameterCombinations;
    INParameterContexts * _parameterContexts;
    NSArray * _parameterImages;
    NSString * _recordDeviceIdentifier;
    NSUUID * _recordDeviceUID;
    NSString * _recordRoute;
    bool  _shouldForwardToAppOnSucccess;
}

@property (nonatomic, readonly) NSDictionary *_JSONDictionaryRepresentation;
@property (nonatomic, readonly) NSString *_categoryVerb;
@property (nonatomic, readonly) NSString *_className;
@property (nonatomic, readonly) NSArray *_codableAttributes;
@property (nonatomic, readonly) INIntentCodableDescription *_codableDescription;
@property (getter=_isConfigurable, nonatomic, readonly) bool _configurable;
@property (setter=_setConfigurableParameterCombinations:, nonatomic, retain) NSDictionary *_configurableParameterCombinations;
@property (setter=_setDefaultImage:, nonatomic, retain) INImage *_defaultImage;
@property (nonatomic, readonly) NSOrderedSet *_displayOrderedAttributes;
@property (getter=_isEligibleForSuggestions, nonatomic, readonly) bool _eligibleForSuggestions;
@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (setter=_setExecutionContext:, nonatomic) long long _executionContext;
@property (nonatomic, readonly) bool _hasTitle;
@property (setter=_setIdiom:, nonatomic) long long _idiom;
@property (nonatomic, readonly) unsigned long long _indexingHash;
@property (nonatomic, readonly) long long _intentCategory;
@property (readonly) long long _intents_toggleState;
@property (setter=_setIsOwnedByCurrentUser:, nonatomic, retain) NSNumber *_isOwnedByCurrentUser;
@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly) INIntentKeyParameter *_keyParameter;
@property (nonatomic, readonly, copy) NSString *_localizedVerb;
@property (setter=_setMetadata:, nonatomic, retain) _INPBIntentMetadata *_metadata;
@property (nonatomic, readonly) NSString *_nanoLaunchId;
@property (setter=_setNanoLaunchId:, nonatomic, retain) NSString *_nanoLaunchId;
@property (setter=_setOriginatingDeviceIdsIdentifier:, nonatomic, retain) NSString *_originatingDeviceIDSIdentifier;
@property (setter=_setOriginatingDeviceRapportEffectiveIdentifier:, nonatomic, retain) NSString *_originatingDeviceRapportEffectiveIdentifier;
@property (setter=_setOriginatingDeviceRapportMediaSystemIdentifier:, nonatomic, retain) NSString *_originatingDeviceRapportMediaSystemIdentifier;
@property (setter=_setParameterCombinations:, nonatomic, retain) NSDictionary *_parameterCombinations;
@property (setter=_setParameterContexts:, nonatomic, retain) INParameterContexts *_parameterContexts;
@property (setter=_setParametersForcedToNeedsValue:, nonatomic, copy) NSArray *_parametersForcedToNeedsValue;
@property (nonatomic, readonly) long long _preferredInteractionDirection;
@property (getter=_isPrimaryDisplayDisabled, setter=_setPrimaryDisplayDisabled:, nonatomic) bool _primaryDisplayDisabled;
@property (nonatomic, readonly) NSDictionary *_resolvableParameterCombinations;
@property (setter=_setShouldForwardToAppOnSuccess:, nonatomic) bool _shouldForwardToAppOnSucccess;
@property (nonatomic, readonly, copy) NSString *_subtitle;
@property (nonatomic, readonly) bool _supportsBackgroundExecution;
@property (nonatomic, readonly, copy) NSString *_title;
@property (nonatomic, readonly) long long _type;
@property (setter=_setUiExtensionBundleId:, nonatomic, retain) NSString *_uiExtensionBundleId;
@property (getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:, nonatomic) bool _userConfirmationRequired;
@property (nonatomic, readonly) NSDictionary *_validParameterCombinations;
@property (nonatomic, readonly, copy) NSString *aggregateLabel;
@property (setter=_setAirPlayRouteIds:, nonatomic, retain) NSArray *airPlayRouteIds;
@property (nonatomic, copy) PBCodable *backingStore;
@property (readonly, copy) NSString *cd_derivedIntentIdentifier;
@property (readonly) NSString *cd_groupName;
@property (readonly) long long cd_interactionMechanism;
@property (readonly) NSArray *cd_recipients;
@property (readonly) bool cd_saveToKnowledgeStore;
@property (readonly) bool cd_saveToPeopleStore;
@property (readonly) INPerson *cd_sender;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (setter=_setExtensionBundleId:, nonatomic, retain) NSString *extensionBundleId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *intentDescription;
@property (nonatomic, readonly) NSString *intentId;
@property (nonatomic, readonly) NSString *launchId;
@property (setter=_setLaunchId:, nonatomic, retain) NSString *launchId;
@property (getter=_parameterImages, setter=_setParameterImages:, nonatomic, copy) NSArray *parameterImages;
@property (nonatomic, copy) NSDictionary *parametersByName;
@property (setter=_setRecordDeviceIdentifier:, nonatomic, retain) NSString *recordDeviceIdentifier;
@property (setter=_setRecordDeviceUID:, nonatomic, retain) NSUUID *recordDeviceUID;
@property (setter=_setRecordRoute:, nonatomic, copy) NSString *recordRoute;
@property (nonatomic, readonly, copy) NSString *rootAggregateKey;
@property (getter=_sortedParameterImages, nonatomic, readonly, copy) NSArray *sortedParameterImages;
@property (nonatomic, copy) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long triggerMethod;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) NSString *utteranceString;
@property (nonatomic, copy) NSString *verb;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;
+ (void)_setSharedExtensionContextUUID:(id)arg1 forIntentClassName:(id)arg2;
+ (id)_sharedExtensionContextUUIDForIntentClassName:(id)arg1;
+ (void)initialize;
+ (id)intentDescription;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;
+ (id)typeName;

- (void).cxx_destruct;
- (id)_JSONDictionaryRepresentation;
- (id)_categoryVerb;
- (id)_className;
- (id)_codableAttributes;
- (id)_codableDescription;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_configurableParameterCombinations;
- (id)_defaultImage;
- (id)_defaultImageName;
- (id)_dictionaryRepresentation;
- (id)_displayOrderedAttributes;
- (id)_displayOrderedNonNilParameters;
- (id)_emptyCopy;
- (bool)_encodeLegacyGloryData;
- (void)_enumerateWithValueProcessingBlock:(id /* block */)arg1 mutate:(bool)arg2;
- (long long)_executionContext;
- (bool)_hasTitle;
- (long long)_idiom;
- (id)_imageForParameter:(id)arg1;
- (id)_inCodable;
- (unsigned long long)_indexingHash;
- (id)_init;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForParameterImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxyForDefaultImage:(id /* block */)arg1 completion:(id /* block */)arg2;
- (long long)_intentCategory;
- (id)_intentInstanceDescription;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_bundleIdForDisplay;
- (id)_intents_bundleIdForLaunching;
- (void)_intents_enumerateFileURLsWithBlock:(id /* block */)arg1 mutate:(bool)arg2;
- (void)_intents_enumerateFilesWithBlock:(id /* block */)arg1 mutate:(bool)arg2;
- (id)_intents_launchIdForCurrentPlatform;
- (long long)_intents_toggleState;
- (bool)_isConfigurable;
- (bool)_isEligibleForSuggestions;
- (id)_isOwnedByCurrentUser;
- (bool)_isPrimaryDisplayDisabled;
- (bool)_isUserConfirmationRequired;
- (bool)_isValidKey:(id)arg1;
- (bool)_isValueValidForKey:(id)arg1 unsupportedReason:(id*)arg2;
- (id)_keyCodableAttributes;
- (id)_keyImage;
- (id)_keyImageWithIntentDescriptionStrategy;
- (id)_keyParameter;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 localizationTable:(id)arg3 bundleURL:(id)arg4 language:(id)arg5;
- (id)_localizedVerb;
- (id)_metadata;
- (id)_nanoLaunchId;
- (id)_nonNilParameters;
- (id)_originatingDeviceIDSIdentifier;
- (id)_originatingDeviceRapportEffectiveIdentifier;
- (id)_originatingDeviceRapportMediaSystemIdentifier;
- (id)_parameterCombinations;
- (id)_parameterContexts;
- (id)_parameterImages;
- (id)_parametersForcedToNeedsValue;
- (long long)_preferredInteractionDirection;
- (id)_querySchemaWithBlock:(id /* block */)arg1 contentOptions:(unsigned long long)arg2;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (id)_resolvableParameterCombinations;
- (void)_setAirPlayRouteIds:(id)arg1;
- (void)_setCategoryVerb:(id)arg1;
- (void)_setConfigurableParameterCombinations:(id)arg1;
- (void)_setDefaultImage:(id)arg1;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)_setExecutionContext:(long long)arg1;
- (void)_setExtensionBundleId:(id)arg1;
- (void)_setIdiom:(long long)arg1;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (void)_setIntentCategory:(long long)arg1;
- (void)_setIsOwnedByCurrentUser:(id)arg1;
- (void)_setLaunchId:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setNanoLaunchId:(id)arg1;
- (void)_setOriginatingDeviceIdsIdentifier:(id)arg1;
- (void)_setOriginatingDeviceRapportEffectiveIdentifier:(id)arg1;
- (void)_setOriginatingDeviceRapportMediaSystemIdentifier:(id)arg1;
- (void)_setParameterCombinations:(id)arg1;
- (void)_setParameterContexts:(id)arg1;
- (void)_setParameterImages:(id)arg1;
- (void)_setParametersForcedToNeedsValue:(id)arg1;
- (void)_setPrimaryDisplayDisabled:(bool)arg1;
- (void)_setRecordDeviceIdentifier:(id)arg1;
- (void)_setRecordDeviceUID:(id)arg1;
- (void)_setRecordRoute:(id)arg1;
- (void)_setShouldForwardToAppOnSuccess:(bool)arg1;
- (void)_setUiExtensionBundleId:(id)arg1;
- (void)_setUserConfirmationRequired:(bool)arg1;
- (bool)_shouldForwardToAppOnSucccess;
- (id)_sortedParameterImages;
- (id)_spotlightContentType;
- (id)_subtitle;
- (id)_subtitleForLanguage:(id)arg1;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (bool)_supportsBackgroundExecution;
- (bool)_supportsBackgroundExecutionWithOptions:(unsigned long long)arg1;
- (id)_title;
- (id)_titleForLanguage:(id)arg1;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (long long)_type;
- (id)_typedBackingStore;
- (id)_uiExtensionBundleId;
- (void)_updateWithJSONDictionary:(id)arg1;
- (id)_validParameterCombinations;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)airPlayRouteIds;
- (id)backingStore;
- (bool)configureAttributeSet:(id)arg1 includingData:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleId;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageForParameterNamed:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)intentDescription;
- (id)intentId;
- (id)intentSlotDescriptions;
- (bool)isEqual:(id)arg1;
- (bool)isGenericIntent;
- (id)keyImage;
- (id)launchId;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)parametersByName;
- (id)recordDeviceIdentifier;
- (id)recordDeviceUID;
- (id)recordRoute;
- (void)setBackingStore:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
- (void)setParametersByName:(id)arg1;
- (void)setSuggestedInvocationPhrase:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)suggestedInvocationPhrase;
- (long long)triggerMethod;
- (void)trimDataAgainstTCCForAuditToken:(struct { unsigned int x1[8]; })arg1 bundle:(id)arg2;
- (id)typeName;
- (id)utteranceString;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)verb;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (id)_intentsui_backgroundHandlingAssertionForAppBundleIdentifier:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (id)atx_hashApproximately;
- (id)atx_nonNilParametersByName;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)apr_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;
- (id)apui_keyPeople;
- (bool)apui_requiresAuthentication;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (bool)acs_needsTitleCardSection;
- (id)acs_utteranceForCardService;
- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)underlyingInteraction;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)cd_derivedIntentIdentifier;
- (id)cd_groupName;
- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToKnowledgeStore;
- (bool)cd_saveToPeopleStore;
- (id)cd_sender;

// Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext

- (id)contextMetadata;

// Image: /System/Library/PrivateFrameworks/FMIPSiriActions.framework/FMIPSiriActions

+ (void)undonateForDeviceId:(id)arg1 withCompletion:(id /* block */)arg2;

- (id)aggregateLabel;
- (void)donateWithCompletion:(id /* block */)arg1;
- (id)groupIdentifierForIdentifiableIntent:(id)arg1;
- (id)identifierForIdentifiableIntent:(id)arg1;
- (id)rootAggregateKey;
- (id)stringForExecutionContext:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (void)ins_recordPreInteractionSignals;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (void)mt_deleteDonationsForAlarm:(id)arg1 completion:(id /* block */)arg2;
+ (id)mt_intentForAlarmCreate:(id)arg1;
+ (id)mt_intentForAlarmDisable:(id)arg1;
+ (id)mt_intentForAlarmEnable:(id)arg1;
+ (id)mt_intentForAlarmUpdate:(id)arg1;
+ (id)mt_nanoAlarmBundleIDForAlarm:(id)arg1;

- (id)mt_initWithAlarm:(id)arg1 verb:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)vcui_displayImage;
- (bool)vcui_isIntentFromSystemApp;
- (id)vcui_keyPeople;

@end
