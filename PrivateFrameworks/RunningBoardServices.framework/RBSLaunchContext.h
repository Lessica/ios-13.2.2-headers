/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSLaunchContext : NSObject <BSXPCSecureCoding, NSCopying> {
    NSDictionary * __additionalEnvironment;
    NSArray * __additionalMachServices;
    NSString * __overrideExecutablePath;
    NSArray * _arguments;
    NSArray * _attributes;
    unsigned long long  _executionOptions;
    NSString * _explanation;
    RBSProcessIdentity * _identity;
    NSString * _managedPersona;
    NSUUID * _requiredCacheUUID;
    NSNumber * _requiredSequenceNumber;
    unsigned char  _spawnType;
    NSString * _standardErrorPath;
    NSString * _standardOutputPath;
}

@property (setter=_setAdditionalEnvironment:, nonatomic, copy) NSDictionary *_additionalEnvironment;
@property (setter=_setAdditionalMachServices:, nonatomic, copy) NSArray *_additionalMachServices;
@property (setter=_setOverrideExecutablePath:, nonatomic, copy) NSString *_overrideExecutablePath;
@property (nonatomic, copy) NSArray *arguments;
@property (nonatomic, copy) NSArray *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *environment;
@property (nonatomic, copy) NSString *executablePath;
@property (nonatomic) unsigned long long executionOptions;
@property (nonatomic, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) RBSProcessIdentity *identity;
@property (nonatomic, copy) NSArray *machServices;
@property (nonatomic, copy) NSString *managedPersona;
@property (nonatomic, copy) NSUUID *requiredCacheUUID;
@property (nonatomic, copy) NSNumber *requiredSequenceNumber;
@property (nonatomic) unsigned char spawnType;
@property (nonatomic, copy) NSString *standardErrorPath;
@property (nonatomic, copy) NSString *standardOutputPath;
@property (readonly) Class superclass;

+ (id)context;
+ (id)contextWithIdentity:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_additionalEnvironment;
- (id)_additionalMachServices;
- (id)_overrideExecutablePath;
- (void)_setAdditionalEnvironment:(id)arg1;
- (void)_setAdditionalMachServices:(id)arg1;
- (void)_setOverrideExecutablePath:(id)arg1;
- (id)arguments;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)environment;
- (id)executablePath;
- (unsigned long long)executionOptions;
- (id)explanation;
- (id)identity;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)machServices;
- (id)managedPersona;
- (id)requiredCacheUUID;
- (id)requiredSequenceNumber;
- (void)setArguments:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setExecutablePath:(id)arg1;
- (void)setExecutionOptions:(unsigned long long)arg1;
- (void)setExplanation:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setMachServices:(id)arg1;
- (void)setManagedPersona:(id)arg1;
- (void)setRequiredCacheUUID:(id)arg1;
- (void)setRequiredSequenceNumber:(id)arg1;
- (void)setSpawnType:(unsigned char)arg1;
- (void)setStandardErrorPath:(id)arg1;
- (void)setStandardOutputPath:(id)arg1;
- (unsigned char)spawnType;
- (id)standardErrorPath;
- (id)standardOutputPath;

@end
