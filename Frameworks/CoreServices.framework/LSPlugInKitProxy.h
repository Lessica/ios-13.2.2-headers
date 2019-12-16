/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSPlugInKitProxy : LSBundleProxy <NSSecureCoding> {
    LSBundleProxy * _containingBundle;
    bool  _onSystemPartition;
    NSString * _originalIdentifier;
    unsigned int  _platform;
    NSString * _pluginIdentifier;
    NSUUID * _pluginUUID;
    NSString * _protocol;
    NSDate * _registrationDate;
    NSString * _signerOrganization;
}

@property (readonly) bool __IS_canProvideIcon;
@property (readonly) bool __IS_isMessagesApp;
@property (readonly) bool __IS_isWatchApp;
@property (nonatomic, readonly) LSBundleProxy *containingBundle;
@property (nonatomic, readonly) LSExtensionPoint *extensionPoint;
@property (nonatomic, readonly) NSDictionary *infoPlist;
@property (getter=isOnSystemPartition, nonatomic, readonly) bool onSystemPartition;
@property (nonatomic, readonly) NSString *originalIdentifier;
@property (nonatomic, readonly) NSNumber *platform;
@property (nonatomic, readonly) bool pluginCanProvideIcon;
@property (nonatomic, readonly) NSString *pluginIdentifier;
@property (nonatomic, readonly) NSDictionary *pluginKitDictionary;
@property (nonatomic, readonly) NSUUID *pluginUUID;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSDate *registrationDate;
@property (nonatomic, readonly) NSString *teamID;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)arg1 error:(id*)arg2;
+ (id)plugInKitProxyForPlugin:(unsigned int)arg1 withContext:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg2;
+ (id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
+ (id)pluginKitProxyForIdentifier:(id)arg1;
+ (id)pluginKitProxyForURL:(id)arg1;
+ (id)pluginKitProxyForUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)UPPValidated;
- (id)_initWithPlugin:(unsigned int)arg1 andContext:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg2;
- (id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
- (id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(bool)arg2;
- (id)_managedPersonas;
- (bool)_usesSystemPersona;
- (id)_valueForEqualityTesting;
- (id)boundIconsDictionary;
- (id)containingBundle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionPoint;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (bool)isOnSystemPartition;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 inScope:(unsigned long long)arg3;
- (id)originalIdentifier;
- (id)platform;
- (bool)pluginCanProvideIcon;
- (id)pluginIdentifier;
- (id)pluginKitDictionary;
- (id)pluginUUID;
- (bool)profileValidated;
- (id)protocol;
- (id)registrationDate;
- (id)signerOrganization;
- (id)teamID;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_applicationBundleIdentifier;
- (id)un_applicationBundleURL;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)iconDataForInterfaceStyle:(long long)arg1;
- (id)iconForInterfaceStyle:(long long)arg1;
- (void)prefetchIconData;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (bool)__IS_canProvideIcon;
- (id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (bool)__IS_isMessagesApp;
- (bool)__IS_isWatchApp;

@end
