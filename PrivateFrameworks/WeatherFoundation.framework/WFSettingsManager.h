/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFSettingsManager : NSObject {
    NSObject<OS_dispatch_queue> * _requestSerialQueue;
    <WFSettings> * _settings;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _settingsLock;
    bool  _useFallback;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _useFallbackLock;
}

@property (nonatomic, readonly) NSString *APIVersion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestSerialQueue;
@property (nonatomic, readonly) <WFSettings> *settings;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } settingsLock;
@property (nonatomic, readonly) bool useFallback;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } useFallbackLock;

+ (id)userId;

- (void).cxx_destruct;
- (id)APIVersion;
- (id)_URLSafeBase64EncodedStringWithData:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_containerIDForContainerIdentifier:(id)arg1;
- (void)_fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)_permanentURLForRecordID:(id)arg1 containerIdentifier:(id)arg2;
- (void)clearConfigCache;
- (void)completeOnQueue:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (id)containerIdentifier;
- (void)fetchAppConfigurationIfExpired;
- (void)fetchAppConfigurationIfNeeded;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)requestSerialQueue;
- (void)setRequestSerialQueue:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettingsLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setUseFallback:(bool)arg1;
- (void)setUseFallbackLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (id)settings;
- (struct os_unfair_lock_s { unsigned int x1; })settingsLock;
- (bool)useFallback;
- (struct os_unfair_lock_s { unsigned int x1; })useFallbackLock;

@end
