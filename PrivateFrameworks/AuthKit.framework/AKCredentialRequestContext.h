/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKCredentialRequestContext : NSObject <NSSecureCoding> {
    AKAuthorizationRequest * _authorizationRequest;
    NSString * _callerBundleID;
    NSData * _iconData;
    NSString * _iconName;
    NSNumber * _iconScale;
    NSValue * _iconSize;
    NSString * _informativeText;
    bool  _isFirstPartyLogin;
    bool  _isRapportLogin;
    bool  _isWebLogin;
    bool  _passcodeProtected;
    AKPasswordRequest * _passwordRequest;
    NSArray * _proxiedAssociatedDomains;
    NSString * _proxiedClientAppID;
    NSString * _proxiedClientAppName;
    NSString * _proxiedClientBundleID;
    NSString * _proxiedClientServiceID;
    NSString * _proxiedClientTeamID;
    NSString * _proxiedDeviceClass;
    NSString * _proxiedDeviceName;
    NSUUID * _requestIdentifier;
    bool  _requirePassword;
    bool  _shouldForcePrivateEmail;
    bool  _shouldForceUI;
    bool  _shouldSkipAuthorizationUI;
    bool  _shouldSkipBiometrics;
}

@property (nonatomic, retain) NSString *_callerBundleID;
@property (nonatomic, copy) NSData *_iconData;
@property (nonatomic, copy) NSString *_iconName;
@property (nonatomic, copy) NSNumber *_iconScale;
@property (nonatomic, copy) NSValue *_iconSize;
@property (nonatomic, copy) NSString *_informativeText;
@property (nonatomic) bool _isFirstPartyLogin;
@property (nonatomic) bool _isRapportLogin;
@property (nonatomic) bool _isWebLogin;
@property (nonatomic, retain) NSArray *_proxiedAssociatedDomains;
@property (nonatomic, retain) NSString *_proxiedClientAppID;
@property (nonatomic, retain) NSString *_proxiedClientAppName;
@property (nonatomic, retain) NSString *_proxiedClientBundleID;
@property (nonatomic, retain) NSString *_proxiedClientServiceID;
@property (nonatomic, retain) NSString *_proxiedClientTeamID;
@property (nonatomic, retain) NSString *_proxiedDeviceClass;
@property (nonatomic, retain) NSString *_proxiedDeviceName;
@property (nonatomic) bool _requirePassword;
@property (nonatomic) bool _shouldForcePrivateEmail;
@property (nonatomic) bool _shouldForceUI;
@property (nonatomic) bool _shouldSkipAuthorizationUI;
@property (nonatomic) bool _shouldSkipBiometrics;
@property (nonatomic, retain) AKAuthorizationRequest *authorizationRequest;
@property (nonatomic, retain) NSArray *credentialRequests;
@property (nonatomic, retain) AKPasswordRequest *passwordRequest;
@property (nonatomic, readonly, copy) NSUUID *requestIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_callerBundleID;
- (id)_iconData;
- (id)_iconName;
- (id)_iconScale;
- (id)_iconSize;
- (id)_informativeText;
- (bool)_isFirstPartyLogin;
- (bool)_isRapportLogin;
- (bool)_isWebLogin;
- (id)_proxiedAssociatedDomains;
- (id)_proxiedClientAppID;
- (id)_proxiedClientAppName;
- (id)_proxiedClientBundleID;
- (id)_proxiedClientServiceID;
- (id)_proxiedClientTeamID;
- (id)_proxiedDeviceClass;
- (id)_proxiedDeviceName;
- (bool)_requirePassword;
- (bool)_shouldForcePrivateEmail;
- (bool)_shouldForceUI;
- (bool)_shouldSkipAuthorizationUI;
- (bool)_shouldSkipBiometrics;
- (id)authorizationRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialRequests;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)passwordRequest;
- (id)requestIdentifier;
- (void)setAuthorizationRequest:(id)arg1;
- (void)setCredentialRequests:(id)arg1;
- (void)setPasswordRequest:(id)arg1;
- (void)set_callerBundleID:(id)arg1;
- (void)set_iconData:(id)arg1;
- (void)set_iconName:(id)arg1;
- (void)set_iconScale:(id)arg1;
- (void)set_iconSize:(id)arg1;
- (void)set_informativeText:(id)arg1;
- (void)set_isFirstPartyLogin:(bool)arg1;
- (void)set_isRapportLogin:(bool)arg1;
- (void)set_isWebLogin:(bool)arg1;
- (void)set_proxiedAssociatedDomains:(id)arg1;
- (void)set_proxiedClientAppID:(id)arg1;
- (void)set_proxiedClientAppName:(id)arg1;
- (void)set_proxiedClientBundleID:(id)arg1;
- (void)set_proxiedClientServiceID:(id)arg1;
- (void)set_proxiedClientTeamID:(id)arg1;
- (void)set_proxiedDeviceClass:(id)arg1;
- (void)set_proxiedDeviceName:(id)arg1;
- (void)set_requirePassword:(bool)arg1;
- (void)set_shouldForcePrivateEmail:(bool)arg1;
- (void)set_shouldForceUI:(bool)arg1;
- (void)set_shouldSkipAuthorizationUI:(bool)arg1;
- (void)set_shouldSkipBiometrics:(bool)arg1;

@end
