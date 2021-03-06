/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2CreateChildPacket : NEIKEv2Packet {
    NEIKEv2ChildSAPayload * _childSA;
    NEIKEv2ConfigPayload * _config;
    NEIKEv2IKESAPayload * _ikeSA;
    NEIKEv2KeyExchangePayload * _ke;
    NEIKEv2NoncePayload * _nonce;
    NEIKEv2InitiatorTrafficSelectorPayload * _tsi;
    NEIKEv2ResponderTrafficSelectorPayload * _tsr;
    NSArray * _vendorIDs;
}

@property (retain) NEIKEv2ChildSAPayload *childSA;
@property (retain) NEIKEv2ConfigPayload *config;
@property (retain) NEIKEv2IKESAPayload *ikeSA;
@property (readonly) bool isRekeyChild;
@property (readonly) bool isRekeyIKE;
@property (retain) NEIKEv2KeyExchangePayload *ke;
@property (retain) NEIKEv2NoncePayload *nonce;
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload *tsi;
@property (retain) NEIKEv2ResponderTrafficSelectorPayload *tsr;
@property (retain) NSArray *vendorIDs;

+ (id)copyTypeDescription;
+ (id)createChildSAForInitiatorChildSA:(id)arg1;
+ (id)createChildSAResponse:(id)arg1 childSA:(id)arg2;
+ (id)createChildSAResponse:(id)arg1 errorCode:(unsigned long long)arg2 errorData:(id)arg3;
+ (id)createRekeyChildSAForInitiator:(id)arg1;
+ (id)createRekeyIKESAForInitiator:(id)arg1;
+ (id)createRekeyResponse:(id)arg1 childSA:(id)arg2;
+ (id)createRekeyResponse:(id)arg1 ikeSA:(id)arg2;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (id)childSA;
- (id)config;
- (void)filloutPayloads;
- (void)gatherPayloads;
- (id)ikeSA;
- (bool)isRekeyChild;
- (bool)isRekeyIKE;
- (id)ke;
- (id)nonce;
- (void)setChildSA:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setIkeSA:(id)arg1;
- (void)setKe:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setTsi:(id)arg1;
- (void)setTsr:(id)arg1;
- (void)setVendorIDs:(id)arg1;
- (id)tsi;
- (id)tsr;
- (bool)validateCreateChildAsInitiator:(id)arg1;
- (bool)validateCreateChildAsResponder:(id)arg1;
- (bool)validateRekeyChildSA:(id)arg1;
- (bool)validateRekeyIKESA:(id)arg1;
- (bool)validateResponderRekeyChildSA:(id)arg1 sendInvalidKE:(bool*)arg2;
- (bool)validateResponderRekeyIKESA:(id)arg1 sendInvalidKE:(bool*)arg2;
- (id)vendorIDs;

@end
