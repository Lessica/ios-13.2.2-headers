/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSURL * _changeTokenURL;
    bool  _forceNilChangeDictionaryResponse;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _storeIdentifier;
    long long  _storeType;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSURL *changeTokenURL;
@property (nonatomic) bool forceNilChangeDictionaryResponse;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic) long long storeType;
@property (nonatomic, readonly) <SYDDaemonProtocol> *synchronousDaemon;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)changeTokenURLForStoreIdentifier:(id)arg1;
+ (void)processAccountChangesWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)asyncDaemonWithErrorHandler:(id /* block */)arg1;
- (id)callbackQueue;
- (id)changeToken;
- (id)changeTokenURL;
- (struct __CFDictionary { }*)copyDictionary;
- (id)copyExternalChangesWithChangeCount:(long long*)arg1;
- (void)dealloc;
- (void)deleteDataFromDisk;
- (id)description;
- (id)dictionaryRepresentation;
- (void)discardExternalChangesForChangeCount:(long long)arg1;
- (bool)forceNilChangeDictionaryResponse;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (unsigned char)hasExternalChanges;
- (id)initWithStoreIdentifier:(id)arg1 type:(long long)arg2;
- (void)logIfNecessaryForError:(id)arg1;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyCount;
- (long long)maximumKeyLength;
- (long long)maximumTotalDataLength;
- (id)objectForKey:(id)arg1;
- (void)ping;
- (void)processChangeDictionary:(id)arg1;
- (id)queue;
- (void)registerForSynchronizedDefaults;
- (void)removeObjectForKey:(id)arg1;
- (void)scheduleRemoteSynchronization;
- (void)setCallbackQueue:(id)arg1;
- (void)setChangeToken:(id)arg1;
- (void)setChangeTokenURL:(id)arg1;
- (void)setForceNilChangeDictionaryResponse:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setStoreType:(long long)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)storeDidChangeWithIdentifier:(id)arg1 type:(long long)arg2 changeDictionary:(id)arg3 reply:(id /* block */)arg4;
- (id)storeIdentifier;
- (long long)storeType;
- (void)synchronizationWithCompletionHandler:(id /* block */)arg1;
- (unsigned char)synchronize;
- (unsigned char)synchronizeForced:(unsigned char)arg1;
- (id)synchronousDaemon;
- (void)unregisterForSynchronizedDefaults;
- (void)updateConfiguration;
- (id)xpcConnection;

@end
