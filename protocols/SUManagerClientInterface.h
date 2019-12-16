/* Generated by RuntimeBrowser.
 */

@protocol SUManagerClientInterface

@required

- (void)autoInstallOperationDidConsent:(NSUUID *)arg1;
- (void)autoInstallOperationDidExpire:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)autoInstallOperationIsReadyToInstall:(void *)arg1 withResult:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)autoInstallOperationPasscodePolicyChanged:(NSUUID *)arg1 passcodePolicyType:(unsigned long long)arg2;
- (void)autoInstallOperationWasCancelled:(NSUUID *)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)downloadDidFail:(SUDownload *)arg1 withError:(NSError *)arg2;
- (void)downloadDidFinish:(SUDownload *)arg1;
- (void)downloadDidFinish:(SUDownload *)arg1 withInstallPolicy:(SUInstallPolicy *)arg2;
- (void)downloadDidStart:(SUDownload *)arg1;
- (void)downloadProgressDidChange:(SUDownload *)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(SUDescriptor *)arg1;
- (void)installDidFail:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)installDidFinish:(SUDescriptor *)arg1;
- (void)installDidStart:(SUDescriptor *)arg1;
- (void)installPolicyDidChange:(SUInstallPolicy *)arg1;
- (void)managedInstallationRequested:(SUInstallPolicy *)arg1;
- (void)scanDidCompleteWithNewUpdateAvailable:(SUDescriptor *)arg1 error:(NSError *)arg2;
- (void)scanRequestDidFinishForOptions:(SUScanOptions *)arg1 update:(SUDescriptor *)arg2 error:(NSError *)arg3;
- (void)scanRequestDidStartForOptions:(SUScanOptions *)arg1;

@end
