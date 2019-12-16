/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSearchForMediaIntent : INIntent <INSearchForMediaIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *mediaItems;
@property (nonatomic, readonly, copy) INMediaSearch *mediaSearch;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2;
- (id)mediaItems;
- (id)mediaSearch;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setMediaSearch:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
