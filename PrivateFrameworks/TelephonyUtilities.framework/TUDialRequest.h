/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUDialRequest : NSObject <NSCopying, NSSecureCoding, TUCallRequest, TUFilteredRequest, TUVideoRequest> {
    NSString * _audioSourceIdentifier;
    NSString * _contactIdentifier;
    NSDate * _dateDialed;
    bool  _dialAssisted;
    long long  _dialType;
    NSString * _endpointIDSDestinationURI;
    bool  _endpointOnCurrentDevice;
    NSString * _endpointRapportEffectiveIdentifier;
    NSString * _endpointRapportMediaSystemIdentifier;
    NSString * _failureNotification;
    TUHandle * _handle;
    bool  _hostOnCurrentDevice;
    id /* block */  _isEmergencyNumberBlock;
    id /* block */  _isEmergencyNumberOrIsWhitelistedBlock;
    struct CGSize { 
        double width; 
        double height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localPortraitAspectRatio;
    NSUUID * _localSenderIdentityAccountUUID;
    NSUUID * _localSenderIdentityUUID;
    long long  _originatingUIType;
    bool  _performDialAssist;
    bool  _performLocalDialAssist;
    BSProcessHandle * _processHandle;
    TUCallProvider * _provider;
    NSString * _providerCustomIdentifier;
    TUCallProviderManager * _providerManager;
    bool  _redial;
    TUSenderIdentityClient * _senderIdentityClient;
    bool  _shouldSuppressInCallUI;
    bool  _showUIPrompt;
    bool  _sos;
    NSString * _successNotification;
    long long  _ttyType;
    NSString * _uniqueProxyIdentifier;
    bool  _video;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, copy) NSString *audioSourceIdentifier;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, retain) NSDate *dateDialed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *destinationID;
@property (getter=isDialAssisted, nonatomic) bool dialAssisted;
@property (nonatomic) long long dialType;
@property (nonatomic, readonly) IDSDestination *endpointIDSDestination;
@property (nonatomic, copy) NSString *endpointIDSDestinationURI;
@property (nonatomic) bool endpointOnCurrentDevice;
@property (nonatomic, copy) NSString *endpointRapportEffectiveIdentifier;
@property (nonatomic, copy) NSString *endpointRapportMediaSystemIdentifier;
@property (nonatomic, copy) NSString *failureNotification;
@property (nonatomic, retain) TUHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hostOnCurrentDevice;
@property (nonatomic, copy) id /* block */ isEmergencyNumberBlock;
@property (nonatomic, copy) id /* block */ isEmergencyNumberOrIsWhitelistedBlock;
@property (nonatomic) struct CGSize { double x1; double x2; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } localPortraitAspectRatio;
@property (nonatomic, readonly, copy) TUSenderIdentity *localSenderIdentity;
@property (nonatomic, copy) NSUUID *localSenderIdentityAccountUUID;
@property (nonatomic, copy) NSUUID *localSenderIdentityUUID;
@property (nonatomic) long long originatingUIType;
@property (nonatomic) bool performDialAssist;
@property (nonatomic) bool performLocalDialAssist;
@property (nonatomic, retain) BSProcessHandle *processHandle;
@property (nonatomic, retain) TUCallProvider *provider;
@property (nonatomic, copy) NSString *providerCustomIdentifier;
@property (nonatomic, readonly) TUCallProviderManager *providerManager;
@property (getter=isRedial, nonatomic) bool redial;
@property (getter=isRTTAvailable, nonatomic, readonly) bool rttAvailable;
@property (nonatomic, readonly) TUSenderIdentityClient *senderIdentityClient;
@property (nonatomic, readonly) int service;
@property (nonatomic) bool shouldSuppressInCallUI;
@property (nonatomic) bool showUIPrompt;
@property (getter=isSOS, setter=setSOS:, nonatomic) bool sos;
@property (nonatomic, copy) NSString *successNotification;
@property (readonly) Class superclass;
@property (getter=isTTYAvailable, nonatomic, readonly) bool ttyAvailable;
@property (nonatomic) long long ttyType;
@property (nonatomic, copy) NSString *uniqueProxyIdentifier;
@property (nonatomic, readonly) bool useTTY;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly, copy) NSArray *validityErrors;
@property (getter=isVideo, nonatomic) bool video;

+ (id /* block */)callProviderManagerGeneratorBlock;
+ (id)contactStore;
+ (long long)dialRequestTTYTypeForCHRecentCallTTYType:(long long)arg1;
+ (long long)dialRequestTypeForIntentDestinationType:(long long)arg1;
+ (long long)handleTypeForQueryItem:(id)arg1;
+ (long long)intentTTYTypeForTTYType:(long long)arg1;
+ (id /* block */)legacyAddressBookIdentifierToContactIdentifierTransformBlock;
+ (long long)originatingUITypeForString:(id)arg1;
+ (id)providerForIntentPreferredCallProvider:(long long)arg1 callCapability:(long long)arg2 providerManager:(id)arg3;
+ (void)setCallProviderManagerGeneratorBlock:(id /* block */)arg1;
+ (void)setLegacyAddressBookIdentifierToContactIdentifierTransformBlock:(id /* block */)arg1;
+ (id)stringForDialType:(long long)arg1;
+ (id)stringForOriginatingUIType:(long long)arg1;
+ (id)stringForTTYType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (long long)ttyTypeForIntentTTYType:(long long)arg1;
+ (long long)ttyTypeForString:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)URLHost;
- (id)URLQueryItems;
- (id)URLScheme;
- (id)_contactFromINPerson:(id)arg1 contactsDataSource:(id)arg2 bestGuessHandle:(id*)arg3;
- (id)audioSourceIdentifier;
- (id)audioSourceIdentifierURLQueryItem;
- (bool)boolValueForQueryItemWithName:(id)arg1 inURLComponents:(id)arg2;
- (id)bundleIdentifier;
- (id)callProviderFromURLComponents:(id)arg1 video:(bool*)arg2;
- (id)contactIdentifier;
- (id)contactIdentifierFromURLComponents:(id)arg1;
- (id)contactIdentifierURLQueryItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateDialed;
- (id)description;
- (id)destinationID;
- (id)destinationIDFromURL:(id)arg1;
- (id)dialAssistedURLQueryItem;
- (id)dialRequestByReplacingProvider:(id)arg1;
- (long long)dialType;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointIDSDestination;
- (id)endpointIDSDestinationURI;
- (id)endpointIDSDestinationURIQueryItem;
- (bool)endpointOnCurrentDevice;
- (id)endpointRapportEffectiveIdentifier;
- (id)endpointRapportEffectiveIdentifierQueryItem;
- (id)endpointRapportMediaSystemIdentifier;
- (id)endpointRapportMediaSystemIdentifierQueryItem;
- (id)failureNotification;
- (id)failureNotificationQueryItem;
- (id)forceAssistURLQueryItem;
- (id)handle;
- (id)handleFromURL:(id)arg1;
- (id)handleTypeURLQueryItem;
- (id)handles;
- (unsigned long long)hash;
- (bool)hostOnCurrentDevice;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDialIntent:(id)arg1 providerManager:(id)arg2 contactsDataSource:(id)arg3 senderIdentityClient:(id)arg4;
- (id)initWithProvider:(id)arg1;
- (id)initWithService:(int)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUserActivity:(id)arg1 providerManager:(id)arg2;
- (id)initWithUserActivity:(id)arg1 providerManager:(id)arg2 contactsDataSource:(id)arg3 senderIdentityClient:(id)arg4;
- (bool)isDialAssisted;
- (id /* block */)isEmergencyNumberBlock;
- (id /* block */)isEmergencyNumberOrIsWhitelistedBlock;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDialRequest:(id)arg1;
- (bool)isRTTAvailable;
- (bool)isRedial;
- (bool)isSOS;
- (bool)isTTYAvailable;
- (bool)isValid;
- (bool)isVideo;
- (id)isVoicemailURLQueryItem;
- (int)legacyAddressBookIdentifierFromURLComponents:(id)arg1;
- (id)legacyAddressBookIdentifierQueryItemName;
- (struct CGSize { double x1; double x2; })localLandscapeAspectRatio;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (id)localSenderIdentity;
- (id)localSenderIdentityAccountUUID;
- (id)localSenderIdentityAccountUUIDURLQueryItem;
- (id)localSenderIdentityUUID;
- (id)localSenderIdentityUUIDURLQueryItem;
- (id)noPromptURLQueryItem;
- (long long)originatingUIType;
- (id)originatingUIURLQueryItem;
- (bool)performDialAssist;
- (bool)performLocalDialAssist;
- (id)processHandle;
- (id)provider;
- (id)providerCustomIdentifier;
- (id)providerCustomIdentifierURLQueryItem;
- (id)providerManager;
- (id)redialURLQueryItem;
- (id)senderIdentityClient;
- (int)service;
- (void)setAudioSourceIdentifier:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDateDialed:(id)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setDialAssisted:(bool)arg1;
- (void)setDialType:(long long)arg1;
- (void)setEndpointIDSDestinationURI:(id)arg1;
- (void)setEndpointOnCurrentDevice:(bool)arg1;
- (void)setEndpointRapportEffectiveIdentifier:(id)arg1;
- (void)setEndpointRapportMediaSystemIdentifier:(id)arg1;
- (void)setFailureNotification:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHostOnCurrentDevice:(bool)arg1;
- (void)setIsEmergencyNumberBlock:(id /* block */)arg1;
- (void)setIsEmergencyNumberOrIsWhitelistedBlock:(id /* block */)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalSenderIdentityAccountUUID:(id)arg1;
- (void)setLocalSenderIdentityUUID:(id)arg1;
- (void)setOriginatingUIType:(long long)arg1;
- (void)setPerformDialAssist:(bool)arg1;
- (void)setPerformLocalDialAssist:(bool)arg1;
- (void)setProcessHandle:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setProviderCustomIdentifier:(id)arg1;
- (void)setRedial:(bool)arg1;
- (void)setSOS:(bool)arg1;
- (void)setShouldSuppressInCallUI:(bool)arg1;
- (void)setShowUIPrompt:(bool)arg1;
- (void)setSuccessNotification:(id)arg1;
- (void)setTtyType:(long long)arg1;
- (void)setUniqueProxyIdentifier:(id)arg1;
- (void)setVideo:(bool)arg1;
- (bool)shouldSuppressInCallUI;
- (id)shouldSuppressInCallUIQueryItem;
- (bool)showUIPrompt;
- (id)sosURLQueryItem;
- (id)successNotification;
- (id)successNotificationQueryItem;
- (id)suppressAssistURLQueryItem;
- (long long)ttyType;
- (id)ttyTypeURLQueryItem;
- (id)uniqueProxyIdentifier;
- (bool)useTTY;
- (id)userActivity;
- (id)userActivityUsingDeprecatedCallingIntents:(bool)arg1;
- (id)validityErrorForDestinationIDWithVoicemail;
- (id)validityErrorForEmergencyCall;
- (id)validityErrorForEndpointNotOnCurrentDeviceForNonRelayableService;
- (id)validityErrorForNonNormalDialTypeWithoutTelephony;
- (id)validityErrorForNormalDialTypeWithUnknownDestination;
- (id)validityErrorForSOS;
- (id)validityErrorForUnspecifiedProvider;
- (id)validityErrorForUnsupportedHandleType;
- (id)validityErrorForVideoUnsupported;
- (id)validityErrors;

@end
