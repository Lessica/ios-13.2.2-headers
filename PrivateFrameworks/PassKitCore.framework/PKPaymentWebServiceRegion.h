/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding> {
    NSString * _accountServicePushTopic;
    NSURL * _accountServiceURL;
    NSString * _applyServicePushTopic;
    NSURL * _applyServiceURL;
    NSURL * _brokerURL;
    NSArray * _certificates;
    long long  _consistencyCheckBackoffLevel;
    NSString * _deviceCheckInPushTopic;
    bool  _hasAccounts;
    bool  _hasApplications;
    bool  _hasPeerPaymentAccount;
    NSURL * _inAppPaymentServicesURL;
    NSString * _lastDeviceCheckInBuildVersion;
    NSString * _lastUpdatedTag;
    long long  _outstandingCheckInAction;
    NSURL * _partnerServiceURL;
    NSURL * _paymentServicesMerchantURL;
    NSURL * _paymentServicesURL;
    NSURL * _peerPaymentServiceURL;
    NSString * _productsPushTopic;
    NSString * _regionCode;
    NSString * _transactionZonePushTopic;
    NSString * _trustedServiceManagerPushTopic;
    NSURL * _trustedServiceManagerURL;
    NSString * _userNotificationPushTopic;
}

@property (nonatomic, retain) NSString *accountServicePushTopic;
@property (nonatomic, retain) NSURL *accountServiceURL;
@property (nonatomic, retain) NSString *applyServicePushTopic;
@property (nonatomic, retain) NSURL *applyServiceURL;
@property (nonatomic, retain) NSURL *brokerURL;
@property (nonatomic, retain) NSArray *certificates;
@property (nonatomic) long long consistencyCheckBackoffLevel;
@property (nonatomic, copy) NSString *deviceCheckInPushTopic;
@property (nonatomic) bool hasAccounts;
@property (nonatomic) bool hasApplications;
@property (nonatomic) bool hasPeerPaymentAccount;
@property (nonatomic, retain) NSURL *inAppPaymentServicesURL;
@property (nonatomic, copy) NSString *lastDeviceCheckInBuildVersion;
@property (nonatomic, retain) NSString *lastUpdatedTag;
@property (nonatomic) long long outstandingCheckInAction;
@property (nonatomic, retain) NSURL *partnerServiceURL;
@property (nonatomic, retain) NSURL *paymentServicesMerchantURL;
@property (nonatomic, retain) NSURL *paymentServicesURL;
@property (nonatomic, retain) NSURL *peerPaymentServiceURL;
@property (nonatomic, copy) NSString *productsPushTopic;
@property (nonatomic, retain) NSString *regionCode;
@property (nonatomic, copy) NSString *transactionZonePushTopic;
@property (nonatomic, retain) NSString *trustedServiceManagerPushTopic;
@property (nonatomic, retain) NSURL *trustedServiceManagerURL;
@property (nonatomic, retain) NSString *userNotificationPushTopic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountServicePushTopic;
- (id)accountServiceURL;
- (id)applyServicePushTopic;
- (id)applyServiceURL;
- (id)brokerURL;
- (id)certificates;
- (long long)consistencyCheckBackoffLevel;
- (id)description;
- (id)deviceCheckInPushTopic;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAccounts;
- (bool)hasApplications;
- (bool)hasPeerPaymentAccount;
- (id)inAppPaymentServicesURL;
- (id)initWithCoder:(id)arg1;
- (id)lastDeviceCheckInBuildVersion;
- (id)lastUpdatedTag;
- (long long)outstandingCheckInAction;
- (id)partnerServiceURL;
- (id)paymentServicesMerchantURL;
- (id)paymentServicesURL;
- (id)peerPaymentServiceURL;
- (id)productsPushTopic;
- (id)regionCode;
- (void)setAccountServicePushTopic:(id)arg1;
- (void)setAccountServiceURL:(id)arg1;
- (void)setApplyServicePushTopic:(id)arg1;
- (void)setApplyServiceURL:(id)arg1;
- (void)setBrokerURL:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setConsistencyCheckBackoffLevel:(long long)arg1;
- (void)setDeviceCheckInPushTopic:(id)arg1;
- (void)setHasAccounts:(bool)arg1;
- (void)setHasApplications:(bool)arg1;
- (void)setHasPeerPaymentAccount:(bool)arg1;
- (void)setInAppPaymentServicesURL:(id)arg1;
- (void)setLastDeviceCheckInBuildVersion:(id)arg1;
- (void)setLastUpdatedTag:(id)arg1;
- (void)setOutstandingCheckInAction:(long long)arg1;
- (void)setPartnerServiceURL:(id)arg1;
- (void)setPaymentServicesMerchantURL:(id)arg1;
- (void)setPaymentServicesURL:(id)arg1;
- (void)setPeerPaymentServiceURL:(id)arg1;
- (void)setProductsPushTopic:(id)arg1;
- (void)setRegionCode:(id)arg1;
- (void)setTransactionZonePushTopic:(id)arg1;
- (void)setTrustedServiceManagerPushTopic:(id)arg1;
- (void)setTrustedServiceManagerURL:(id)arg1;
- (void)setUserNotificationPushTopic:(id)arg1;
- (id)transactionZonePushTopic;
- (id)trustedServiceManagerPushTopic;
- (id)trustedServiceManagerURL;
- (id)userNotificationPushTopic;

@end
