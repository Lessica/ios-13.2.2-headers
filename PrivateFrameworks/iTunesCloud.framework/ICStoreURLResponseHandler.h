/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreURLResponseHandler : ICURLResponseHandler

+ (void)_updateDefaultStorefrontIdentifier:(id)arg1 usingIdentityStore:(id)arg2;

- (void)_performAuthenticationForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_processDialogResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_verifyMescalSignatureForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
