/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFSuggestedUserProvider : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _suggestedEmails;
    NSArray * _suggestedNonEmails;
}

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)_allCachedSuggestedUsersWithType:(long long)arg1;
- (id)_cachedSuggestedUsersWithType:(long long)arg1 matchingText:(id)arg2;
- (void)_getSuggestedUsersFromSavedPasswords:(id)arg1 suggestedEmails:(id*)arg2 suggestedNonEmails:(id*)arg3;
- (void)_passwordStoreChangedNotification:(id)arg1;
- (id)init;
- (void)suggestedUsersOfType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)suggestedUsersOfType:(long long)arg1 matchingText:(id)arg2 completionHandler:(id /* block */)arg3;

@end
