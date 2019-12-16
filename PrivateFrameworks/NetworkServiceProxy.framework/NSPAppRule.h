/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPAppRule : NEAppRule {
    NSPNetworkAgent * _agent;
    NWNetworkAgentRegistration * _agentRegistration;
    NSUUID * _configurationIdentifier;
    NSNumber * _connectionIdleTimeout;
    NSNumber * _connectionTimeout;
    NSPAppRule * _defaults;
    NSArray * _directTLSPorts;
    NSNumber * _disableFallback;
    bool  _disabledByRatio;
    NSNumber * _divertDNSOnly;
    NSString * _edgeSetIdentifier;
    NSDate * _enableCheckDate;
    NSNumber * _enableDirectExtendedValidation;
    NSNumber * _enableDirectMultipath;
    NSNumber * _enableDirectRace;
    NSNumber * _enableDirectTFO;
    NSNumber * _enableMultipath;
    NSNumber * _enableNoTFOCookie;
    NSNumber * _enableOptInPerTask;
    NSNumber * _enableRatio;
    NSNumber * _enableTFO;
    NSNumber * _enableUDPRace;
    NSNumber * _enabled;
    NSNumber * _fallbackBufferLimit;
    NSNumber * _fallbackCountBeforeImmediateFallback;
    NSNumber * _fallbackTimeout;
    NSNumber * _initialWindowSize;
    NSString * _label;
    NSString * _locationBundlePath;
    NSArray * _matchEffectiveApplications;
    NSNumber * _noDNSDelegation;
    NSString * _proxyEvaluationPath;
    NSNumber * _reenableInterval;
    NSNumber * _requireTFO;
    NSNumber * _serviceID;
    NSNumber * _shouldComposeInitialData;
    NSNumber * _telemetryRatio;
    NSData * _updateHash;
    NSNumber * _useCustomProtocol;
    NSNumber * _useLocalFlowDivert;
    NSNumber * _useTFOHeuristics;
}

@property (nonatomic, retain) NSPNetworkAgent *agent;
@property (nonatomic, retain) NWNetworkAgentRegistration *agentRegistration;
@property (nonatomic, retain) NSUUID *configurationIdentifier;
@property (nonatomic, copy) NSNumber *connectionIdleTimeout;
@property (nonatomic, copy) NSNumber *connectionTimeout;
@property (nonatomic, retain) NSPAppRule *defaults;
@property (nonatomic, copy) NSArray *directTLSPorts;
@property (nonatomic, copy) NSNumber *disableFallback;
@property (nonatomic) bool disabledByRatio;
@property (nonatomic, copy) NSNumber *divertDNSOnly;
@property (nonatomic, copy) NSString *edgeSetIdentifier;
@property (nonatomic, retain) NSDate *enableCheckDate;
@property (nonatomic, copy) NSNumber *enableDirectExtendedValidation;
@property (nonatomic, copy) NSNumber *enableDirectMultipath;
@property (nonatomic, copy) NSNumber *enableDirectRace;
@property (nonatomic, copy) NSNumber *enableDirectTFO;
@property (nonatomic, copy) NSNumber *enableMultipath;
@property (nonatomic, copy) NSNumber *enableNoTFOCookie;
@property (nonatomic, copy) NSNumber *enableOptInPerTask;
@property (nonatomic, copy) NSNumber *enableRatio;
@property (nonatomic, copy) NSNumber *enableTFO;
@property (nonatomic, copy) NSNumber *enableUDPRace;
@property (nonatomic, copy) NSNumber *enabled;
@property (nonatomic, copy) NSNumber *fallbackBufferLimit;
@property (nonatomic, copy) NSNumber *fallbackCountBeforeImmediateFallback;
@property (nonatomic, copy) NSNumber *fallbackTimeout;
@property (nonatomic, copy) NSNumber *initialWindowSize;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *locationBundlePath;
@property (nonatomic, copy) NSArray *matchEffectiveApplications;
@property (nonatomic, copy) NSNumber *noDNSDelegation;
@property (nonatomic, copy) NSString *proxyEvaluationPath;
@property (nonatomic, copy) NSNumber *reenableInterval;
@property (nonatomic, copy) NSNumber *requireTFO;
@property (nonatomic, copy) NSNumber *serviceID;
@property (nonatomic, copy) NSNumber *shouldComposeInitialData;
@property (nonatomic, copy) NSNumber *telemetryRatio;
@property (nonatomic, retain) NSData *updateHash;
@property (nonatomic, copy) NSNumber *useCustomProtocol;
@property (nonatomic, copy) NSNumber *useLocalFlowDivert;
@property (nonatomic, copy) NSNumber *useTFOHeuristics;

+ (id)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2;
+ (void)loadAppRules:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (id)validateRuleDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)agent;
- (id)agentRegistration;
- (id)configurationIdentifier;
- (id)connectionIdleTimeout;
- (id)connectionTimeout;
- (id)copyAccountIdentifierConditions;
- (id)copyExecutableConditions;
- (id)copyMatchDomainConditions;
- (id)copyMatchEffectiveApplicationConditions;
- (id)copyTLVData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaults;
- (id)directTLSPorts;
- (id)disableFallback;
- (bool)disabledByRatio;
- (id)divertDNSOnly;
- (id)edgeSetIdentifier;
- (id)enableCheckDate;
- (id)enableDirectExtendedValidation;
- (id)enableDirectMultipath;
- (id)enableDirectRace;
- (id)enableDirectTFO;
- (id)enableMultipath;
- (id)enableNoTFOCookie;
- (id)enableOptInPerTask;
- (id)enableRatio;
- (id)enableTFO;
- (id)enableUDPRace;
- (id)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackBufferLimit;
- (id)fallbackCountBeforeImmediateFallback;
- (id)fallbackTimeout;
- (id)initFromDictionary:(id)arg1;
- (id)initFromTLVs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initialWindowSize;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)locationBundlePath;
- (id)matchEffectiveApplications;
- (void)merge:(id)arg1;
- (id)noDNSDelegation;
- (id)proxyEvaluationPath;
- (id)reenableInterval;
- (id)requireTFO;
- (void)saveWithCompletionHandler:(id /* block */)arg1;
- (id)serviceID;
- (void)setAgent:(id)arg1;
- (void)setAgentRegistration:(id)arg1;
- (void)setConfigurationIdentifier:(id)arg1;
- (void)setConnectionIdleTimeout:(id)arg1;
- (void)setConnectionTimeout:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setDirectTLSPorts:(id)arg1;
- (void)setDisableFallback:(id)arg1;
- (void)setDisabledByRatio:(bool)arg1;
- (void)setDivertDNSOnly:(id)arg1;
- (void)setEdgeSetIdentifier:(id)arg1;
- (void)setEnableCheckDate:(id)arg1;
- (void)setEnableDirectExtendedValidation:(id)arg1;
- (void)setEnableDirectMultipath:(id)arg1;
- (void)setEnableDirectRace:(id)arg1;
- (void)setEnableDirectTFO:(id)arg1;
- (void)setEnableMultipath:(id)arg1;
- (void)setEnableNoTFOCookie:(id)arg1;
- (void)setEnableOptInPerTask:(id)arg1;
- (void)setEnableRatio:(id)arg1;
- (void)setEnableTFO:(id)arg1;
- (void)setEnableUDPRace:(id)arg1;
- (void)setEnabled:(id)arg1;
- (void)setFallbackBufferLimit:(id)arg1;
- (void)setFallbackCountBeforeImmediateFallback:(id)arg1;
- (void)setFallbackTimeout:(id)arg1;
- (void)setInitialWindowSize:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocationBundlePath:(id)arg1;
- (void)setMatchEffectiveApplications:(id)arg1;
- (void)setNoDNSDelegation:(id)arg1;
- (void)setProxyEvaluationPath:(id)arg1;
- (void)setReenableInterval:(id)arg1;
- (void)setRequireTFO:(id)arg1;
- (void)setServiceID:(id)arg1;
- (void)setShouldComposeInitialData:(id)arg1;
- (void)setTelemetryRatio:(id)arg1;
- (void)setUpdateHash:(id)arg1;
- (void)setUseCustomProtocol:(id)arg1;
- (void)setUseLocalFlowDivert:(id)arg1;
- (void)setUseTFOHeuristics:(id)arg1;
- (id)shouldComposeInitialData;
- (void)teardownNetworkAgent;
- (id)telemetryRatio;
- (id)updateHash;
- (bool)updateNetworkAgent;
- (id)useCustomProtocol;
- (id)useLocalFlowDivert;
- (id)useTFOHeuristics;

@end
