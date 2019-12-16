/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSource : NSObject {
    _CFXPreferences * _containingPreferences;
    struct __CFDictionary { } * _dict;
    long long  _generationCount;
    bool  _isSearchList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    __CFPrefsWeakObservers * _observers;
    unsigned int  lastKnownShmemState;
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* shmemEntry;
}

- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (int)alreadylocked_addPreferencesObserver:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2;
- (long long)alreadylocked_generationCount;
- (int)alreadylocked_removePreferencesObserver:(id)arg1;
- (bool)alreadylocked_requestNewData;
- (void)alreadylocked_setPrecopiedValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (int)alreadylocked_updateObservingRemoteChanges;
- (struct __CFString { }*)container;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (struct __CFString { }*)copyOSLogDescription;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)dealloc;
- (id)description;
- (struct __CFString { }*)domainIdentifier;
- (bool)enabled;
- (void)forEachObserver:(id /* block */)arg1;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)arg1;
- (long long)generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)initWithContainingPreferences:(id)arg1;
- (bool)isByHost;
- (bool)isDirectModeEnabled;
- (bool)isVolatile;
- (void)lock;
- (bool)managed;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1 sourceDictionary:(struct __CFDictionary { }*)arg2 cloudKeyEvaluator:(id /* block */)arg3;
- (void)removeAllValues_from:(id)arg1;
- (void)replaceAllValuesWithValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (void)setAccessRestricted:(bool)arg1;
- (void)setBackupDisabled:(bool)arg1;
- (void)setConfigurationPath:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFileProtectionClass:(int)arg1;
- (void)setStoreName:(struct __CFString { }*)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2 from:(id)arg3;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 copyValues:(bool)arg4 from:(id)arg5;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 copyValues:(bool)arg4 removeValuesForKeys:(const struct __CFString {}**)arg5 count:(long long)arg6 from:(id)arg7;
- (bool)synchronize;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)arg1;
- (void)unlock;
- (struct __CFString { }*)userIdentifier;

@end