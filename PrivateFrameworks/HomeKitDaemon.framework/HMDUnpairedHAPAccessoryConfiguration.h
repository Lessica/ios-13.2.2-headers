/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnpairedHAPAccessoryConfiguration : NSObject {
    NSString * _homeName;
    NSString * _isoCountryCode;
    HMDAccessoryNetworkCredential * _networkCredential;
    bool  _requiresUserConsent;
    NSString * _setupCode;
    id /* block */  _setupCodeProvider;
}

@property (readonly) NSString *homeName;
@property (readonly) NSString *isoCountryCode;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;
@property (readonly) bool requiresUserConsent;
@property (readonly) NSString *setupCode;
@property (readonly) id /* block */ setupCodeProvider;

- (void).cxx_destruct;
- (id)homeName;
- (id)initWithHomeName:(id)arg1 setupCode:(id)arg2 setupCodeProvider:(id /* block */)arg3 requiresUserConsent:(bool)arg4 networkCredential:(id)arg5 country:(id)arg6;
- (id)isoCountryCode;
- (id)networkCredential;
- (bool)requiresUserConsent;
- (id)setupCode;
- (id /* block */)setupCodeProvider;

@end
