/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentMarketsConfiguration : NSObject <NSSecureCoding> {
    NSSet * _markets;
    NSURL * _url;
    NSString * _version;
}

@property (readonly, copy) NSSet *markets;
@property (readonly, copy) NSURL *url;
@property (readonly, copy) NSString *version;

+ (void)paymentMarketsConfigurationWithURL:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3 completion:(id /* block */)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)closestMarketForLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expressCredentialTypesForLocation:(id)arg1;
- (id)expressTransitNetworksForLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 url:(id)arg2 forDeviceClass:(id)arg3 version:(id)arg4;
- (id)markets;
- (id)marketsForLocation:(id)arg1;
- (id)marketsForLocation:(id)arg1 ofType:(long long)arg2;
- (id)marketsForRegions:(id)arg1;
- (id)supportedCredentialTypesForLocation:(id)arg1;
- (id)supportedTransitNetworksForLocation:(id)arg1;
- (id)url;
- (id)version;

@end
