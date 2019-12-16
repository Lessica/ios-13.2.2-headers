/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASAuthorizationOpenIDRequest : ASAuthorizationRequest {
    NSString * _nonce;
    NSString * _requestedOperation;
    NSArray * _requestedScopes;
    NSString * _state;
}

@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, copy) NSString *requestedOperation;
@property (nonatomic, copy) NSArray *requestedScopes;
@property (nonatomic, copy) NSString *state;

- (void).cxx_destruct;
- (id)nonce;
- (id)requestedOperation;
- (id)requestedScopes;
- (void)setNonce:(id)arg1;
- (void)setRequestedOperation:(id)arg1;
- (void)setRequestedScopes:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
