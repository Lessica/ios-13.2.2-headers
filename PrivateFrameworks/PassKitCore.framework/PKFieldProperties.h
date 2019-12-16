/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFieldProperties : NSObject <NSSecureCoding> {
    NSArray * _TCIs;
    bool  _authenticationRequired;
    NSError * _error;
    NSArray * _merchantIdentifiers;
    bool  _shouldIgnore;
    unsigned long long  _technology;
    long long  _terminalType;
    long long  _valueAddedServiceMode;
}

@property (nonatomic, copy) NSArray *TCIs;
@property (nonatomic) bool authenticationRequired;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSArray *merchantIdentifiers;
@property (nonatomic) bool shouldIgnore;
@property (nonatomic, readonly) unsigned long long technology;
@property (nonatomic, readonly) long long terminalType;
@property (nonatomic, readonly) long long valueAddedServiceMode;

+ (id)fieldPropertiesForFieldNotification:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)TCIs;
- (bool)authenticationRequired;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 valueAddedServiceMode:(long long)arg3;
- (id)merchantIdentifiers;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setMerchantIdentifiers:(id)arg1;
- (void)setShouldIgnore:(bool)arg1;
- (void)setTCIs:(id)arg1;
- (bool)shouldIgnore;
- (unsigned long long)technology;
- (long long)terminalType;
- (long long)valueAddedServiceMode;

@end
