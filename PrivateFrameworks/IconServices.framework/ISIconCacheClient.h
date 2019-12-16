/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISIconCacheClient : ISIconCacheIOS {
    unsigned long long  _sandboxExtensionHandle;
}

@property unsigned long long sandboxExtensionHandle;

+ (id)serviceName;
+ (id)sharedInstance;

- (void)_fetchCacheURLAndSalt;
- (id)connection;
- (id)iconBitmapDataWithResourceLocator:(id)arg1 variant:(int)arg2 options:(int)arg3;
- (id)init;
- (void)invalidateCacheEntriesForBundleIdentifier:(id)arg1;
- (unsigned long long)sandboxExtensionHandle;
- (void)setSandboxExtensionHandle:(unsigned long long)arg1;

@end
