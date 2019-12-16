/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NETunnelProviderManager : NEVPNManager

@property (readonly) long long routingMethod;

+ (id)copyDesignatedRequirementForProvider:(id*)arg1 extensionPoint:(id)arg2;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)arg1;

- (void)additionalSetup;
- (id)copyAppRules;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;
- (id)initWithSessionType:(int)arg1 tunnelType:(long long)arg2;
- (bool)isProtocolTypeValid:(long long)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (long long)routingMethod;

@end