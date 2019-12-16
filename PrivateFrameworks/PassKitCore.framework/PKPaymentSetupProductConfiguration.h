/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupProductConfiguration : NSObject <NSCopying> {
    NSString * _dirtyStateIdentifier;
    unsigned long long  _featureIdentifier;
    NSDate * _lastUpdated;
    NSString * _partnerIdentifier;
    NSString * _productIdentifier;
    unsigned long long  _state;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *dirtyStateIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (nonatomic, copy) NSString *partnerIdentifier;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dirtyStateIdentifier;
- (unsigned long long)featureIdentifier;
- (id)initWithProductDictionary:(id)arg1;
- (id)lastUpdated;
- (id)partnerIdentifier;
- (id)productIdentifier;
- (void)setDirtyStateIdentifier:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)state;
- (unsigned long long)type;

@end
