/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
 */

@interface AIDAAccountManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accountManagerLock;
    ACAccountStore * _accountStore;
    struct NSDictionary { Class x1; } * _accounts;
    <AIDAAccountManagerDelegate> * _delegate;
    NSMutableDictionary * _handlerByObserver;
    <AIDAServiceOwnerProtocol> * _serviceOwnersManager;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, copy) NSDictionary *accounts;
@property (nonatomic) <AIDAAccountManagerDelegate> *delegate;

+ (id)_accountStoreChangeQueue;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (struct NSDictionary { Class x1; }*)_delegate_accountsForAccountManager;
- (id)accountStore;
- (struct NSDictionary { Class x1; }*)accounts;
- (void)addAccountChangeObserver:(id)arg1 handler:(id /* block */)arg2;
- (id)aidaAccountForService:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)grandSlamAccountForService:(id)arg1;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (void)removeAccountChangeObserver:(id)arg1;
- (void)setAccounts:(struct NSDictionary { Class x1; }*)arg1;
- (void)setDelegate:(id)arg1;

@end