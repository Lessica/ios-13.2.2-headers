/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncServer : HDSubserver <HDCloudSyncServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)remote_accountConfigurationDidChangeWithCompletion:(id /* block */)arg1;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)arg1;
- (void)remote_disableCloudSyncWithCompletion:(id /* block */)arg1;
- (void)remote_enableCloudSyncWithCompletion:(id /* block */)arg1;
- (id)remote_fetchCloudDescriptionWithCompletion:(id /* block */)arg1;
- (id)remote_fetchCloudSyncProgressWithCompletion:(id /* block */)arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(id /* block */)arg1;
- (id)remote_forceCloudResetWithCompletion:(id /* block */)arg1;
- (id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)arg1;
- (id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* block */)arg1;

@end
