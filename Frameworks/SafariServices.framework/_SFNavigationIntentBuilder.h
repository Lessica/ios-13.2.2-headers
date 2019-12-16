/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFNavigationIntentBuilder : NSObject {
    long long  _modifierFlags;
    long long  _navigationType;
    long long  _preferredTabOrder;
    bool  _prefersOpenInNewTab;
    bool  _prefersOpenInNewWindow;
    bool  _prefersRelationToSourceTab;
}

@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic) long long navigationType;
@property (nonatomic) long long preferredTabOrder;
@property (nonatomic) bool prefersOpenInNewTab;
@property (nonatomic) bool prefersOpenInNewWindow;
@property (nonatomic) bool prefersRelationToSourceTab;

+ (id)builder;
+ (id)builderWithModifierFlags:(long long)arg1;
+ (bool)canCreateNavigationIntentForDropSession:(id)arg1;
+ (void)registerBookmarkCollectionFactory:(id /* block */)arg1;

- (bool)_hasModifierFlag:(long long)arg1;
- (id)_initWithModifierFlags:(long long)arg1;
- (id)_initializeNavigationIntentWithType:(unsigned long long)arg1 value:(id)arg2;
- (bool)_modifiersEqualToModifierIgnoringCapsLock:(long long)arg1;
- (id)_navigationIntentForMKMapItem:(id)arg1;
- (id)_navigationIntentWithItems:(id)arg1;
- (long long)_navigationPolicy;
- (long long)_navigationPolicyForCreatingNewTabOrWindow;
- (long long)_navigationPolicyForNavigationEvent;
- (long long)_navigationPolicyForStandardEvent;
- (bool)_shouldOrderToForeground;
- (void)buildNavigationIntentForDropSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)buildNavigationIntentForItemProviders:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)modifierFlags;
- (id)navigationIntentWithBookmark:(id)arg1;
- (id)navigationIntentWithCloudTab:(id)arg1;
- (id)navigationIntentWithHistoryURL:(id)arg1;
- (id)navigationIntentWithMultipleIntents:(id)arg1;
- (id)navigationIntentWithOpenURLContexts:(id)arg1;
- (id)navigationIntentWithRecentlyClosedTabStateData:(id)arg1;
- (id)navigationIntentWithText:(id)arg1;
- (id)navigationIntentWithURL:(id)arg1;
- (long long)navigationType;
- (long long)preferredTabOrder;
- (bool)prefersOpenInNewTab;
- (bool)prefersOpenInNewWindow;
- (bool)prefersRelationToSourceTab;
- (void)setNavigationType:(long long)arg1;
- (void)setPreferredTabOrder:(long long)arg1;
- (void)setPrefersOpenInNewTab:(bool)arg1;
- (void)setPrefersOpenInNewWindow:(bool)arg1;
- (void)setPrefersRelationToSourceTab:(bool)arg1;

@end
