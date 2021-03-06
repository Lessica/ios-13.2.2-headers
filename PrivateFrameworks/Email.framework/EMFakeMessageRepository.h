/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMFakeMessageRepository : EMMessageRepository {
    EMFakeRepositoryValidityTracker * _validityTracker;
}

- (void).cxx_destruct;
- (void)expectChangeActionWithValidationBlock:(id /* block */)arg1;
- (id)initWithRemoteConnection:(id)arg1 mailboxRepository:(id)arg2 vipManager:(id)arg3 blockedSenderManager:(id)arg4;
- (id)messageListItemsForObjectIDs:(id)arg1;
- (void)performMessageChangeAction:(id)arg1;
- (void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)verifyExpectations;

@end
