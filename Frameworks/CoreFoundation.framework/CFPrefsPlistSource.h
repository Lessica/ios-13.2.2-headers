/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsPlistSource : CFPrefsSource {
    bool  _avoidsDaemonCache;
    bool  _byteCountLimitExceeded;
    bool  _checkedInvalidHome;
    bool  _directMode;
    bool  _disableBackup;
    int  _fileProtectionClass;
    bool  _isByHost;
    bool  _lastWriteFailed;
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* _locallySetDict;
    bool  _observing;
    bool  _readonly;
    bool  _restrictedAccess;
    bool  _volatile;
    char * accessPath;
    struct __CFString { } * container;
    struct __CFString { } * domainIdentifier;
    struct __CFString { } * userIdentifier;
}

- (void)_sharedCleanup;
- (bool)_shouldEnableDirectMode;
- (void)addPIDImpersonationIfNecessary:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2;
- (long long)alreadylocked_generationCount;
- (bool)alreadylocked_requestNewData;
- (void)alreadylocked_setPrecopiedValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (int)alreadylocked_updateObservingRemoteChanges;
- (bool)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2;
- (struct __CFString { }*)container;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (id)createSynchronizeMessage;
- (void)dealloc;
- (struct __CFString { }*)domainIdentifier;
- (long long)generationCount;
- (void)goReadOnlyAfterTryingToWriteKeys:(const struct __CFString {}**)arg1 values:(const void**)arg2 count:(long long)arg3;
- (void)goVolatileAfterTryingToWriteKeys:(const struct __CFString {}**)arg1 values:(const void**)arg2 count:(long long)arg3;
- (bool)handleErrorReply:(id)arg1 fromMessageSettingKeys:(const struct __CFString {}**)arg2 toValues:(const void**)arg3 count:(long long)arg4 retryCount:(int)arg5 retryContinuation:(id /* block */)arg6;
- (bool)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(id /* block */)arg3;
- (void)handlePossibleOversizedMessage:(int)arg1;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)initWithDomain:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 containerPath:(struct __CFString { }*)arg4 containingPreferences:(id)arg5;
- (bool)isByHost;
- (bool)isDirectModeEnabled;
- (bool)isVolatile;
- (void)requestPlistValidation;
- (void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValues:(const void**)arg3 forKeys:(const struct __CFString {}**)arg4 count:(long long)arg5 retryCount:(int)arg6;
- (long long)sendMessageSettingValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3;
- (void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(bool*)arg4;
- (void)setAccessRestricted:(bool)arg1;
- (void)setBackupDisabled:(bool)arg1;
- (void)setContainer:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1;
- (void)setDomainIdentifier:(struct __CFString { }*)arg1;
- (void)setFileProtectionClass:(int)arg1;
- (void)setUserIdentifier:(struct __CFString { }*)arg1;
- (bool)synchronize;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)arg1;
- (struct __CFString { }*)userIdentifier;
- (bool)volatilizeIfInvalidHomeDir;
- (void)writeFailedForKeys:(const struct __CFString {}**)arg1 values:(const void**)arg2 count:(long long)arg3;

@end
