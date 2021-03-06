/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSSharedWebCredentialsAppLink : LSAppLink {
    /* Warning: unhandled struct encoding: '{LSBinding="bundle"I"bundleData"^{LSBundleData}"claim"I"claimData"^{?}"userInfo"@"reason"@"NSString"}' */ struct LSBinding { 
        unsigned int bundle; 
        struct LSBundleData {} *bundleData; 
        unsigned int claim; 
        struct { /* ? */ } *claimData; 
        id userInfo; 
    }  _binding;
    _SWCServiceDetails * _serviceDetails;
}

@property (readonly) struct LSBinding { unsigned int x1; struct LSBundleData {} *x2; unsigned int x3; struct { /* ? */ } *x4; id x5; } binding;
@property (nonatomic, retain) _SWCServiceDetails *serviceDetails;

+ (void)initialize;
+ (bool)removeAllSettingsReturningError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_SWCSettingsReturningError:(id*)arg1;
- (id)_SWCSpecifierForSettings;
- (bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (struct LSBinding { unsigned int x1; struct LSBundleData {} *x2; unsigned int x3; struct { /* ? */ } *x4; id x5; })binding;
- (id)browserSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)removeSettingsReturningError:(id*)arg1;
- (id)serviceDetails;
- (bool)setBrowserSettings:(id)arg1 error:(id*)arg2;
- (bool)setEnabled:(bool)arg1 error:(id*)arg2;
- (void)setServiceDetails:(id)arg1;

@end
