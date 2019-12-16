/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
 */

@interface LiveFSServiceConnection : NSObject <NSFileProviderLiveItemConnectionMaker, NSFileProviderLiveItemCore> {
    unsigned long long  _ourID;
    LiveFSServiceMountPoint<NSFileProviderLiveItemImplementation> * mount;
    NSXPCConnection * ourConnection;
    NSObject<OS_dispatch_queue> * setUpdateInterestQueue;
}

@property (readonly) unsigned long long ourID;

+ (id)newConnectionForMount:(id)arg1 connection:(id)arg2 error:(id*)arg3;
+ (id)newExportObjectForObject:(id)arg1 connection:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)LIAccessCheck:(id)arg1 requestedAccess:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)LIClose:(id)arg1 withMode:(int)arg2 forPID:(int)arg3 reply:(id /* block */)arg4;
- (void)LICreate:(id)arg1 named:(id)arg2 withAttrs:(id)arg3 forPID:(int)arg4 reply:(id /* block */)arg5;
- (void)LIGetAttr:(id)arg1 reply:(id /* block */)arg2;
- (void)LIGetDomainAttributes:(id /* block */)arg1;
- (void)LIGetFsAttr:(id)arg1 name:(id)arg2 reply:(id /* block */)arg3;
- (void)LIGetParentsAndAttributesForFileIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)LIGetPathsAndAttributesForFileIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)LIGetRootFileHandle:(id /* block */)arg1;
- (void)LIGetXattr:(id)arg1 name:(id)arg2 forPID:(int)arg3 reply:(id /* block */)arg4;
- (void)LIListXattrs:(id)arg1 forPID:(int)arg2 reply:(id /* block */)arg3;
- (void)LILookup:(id)arg1 name:(id)arg2 reply:(id /* block */)arg3;
- (void)LIMakeClone:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 withAttrs:(id)arg4 andFlags:(unsigned int)arg5 forPID:(int)arg6 reply:(id /* block */)arg7;
- (void)LIMakeDir:(id)arg1 named:(id)arg2 withAttrs:(id)arg3 forPID:(int)arg4 reply:(id /* block */)arg5;
- (void)LIMakeLink:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 forPID:(int)arg4 reply:(id /* block */)arg5;
- (void)LIMakeSymLink:(id)arg1 named:(id)arg2 withContents:(id)arg3 andAttrs:(id)arg4 forPID:(int)arg5 reply:(id /* block */)arg6;
- (void)LIOpen:(id)arg1 withMode:(int)arg2 forPID:(int)arg3 reply:(id /* block */)arg4;
- (void)LIPathConf:(id)arg1 reply:(id /* block */)arg2;
- (void)LIRead:(id)arg1 atOffset:(unsigned long long)arg2 withBuffer:(id)arg3 forPID:(int)arg4 reply:(id /* block */)arg5;
- (void)LIRead:(id)arg1 length:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 forPID:(int)arg4 reply:(id /* block */)arg5;
- (void)LIReadDir:(id)arg1 amount:(unsigned long long)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)LIReadDir:(id)arg1 intoBuffer:(id)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)LIReadDirAndAttrs:(id)arg1 amount:(unsigned long long)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)LIReadDirAndAttrs:(id)arg1 intoBuffer:(id)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)LIReadLink:(id)arg1 reply:(id /* block */)arg2;
- (void)LIReclaim:(id)arg1 reply:(id /* block */)arg2;
- (void)LIRemove:(id)arg1 name:(id)arg2 forPID:(int)arg3 reply:(id /* block */)arg4;
- (void)LIRemoveDir:(id)arg1 name:(id)arg2 forPID:(int)arg3 reply:(id /* block */)arg4;
- (void)LIRename:(id)arg1 name:(id)arg2 toDir:(id)arg3 andName:(id)arg4 withFlags:(unsigned int)arg5 forPID:(int)arg6 reply:(id /* block */)arg7;
- (void)LISearch:(id)arg1 token:(id)arg2 criteria:(id)arg3 resumeAt:(id)arg4 maxData:(unsigned int)arg5 maxDelay:(double)arg6 initialCredits:(unsigned int)arg7 reply:(id /* block */)arg8;
- (void)LISearchAbort:(id)arg1 reply:(id /* block */)arg2;
- (void)LISearchReplenishCredits:(id)arg1 credits:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)LISetAttr:(id)arg1 setAttrs:(id)arg2 forPID:(int)arg3 reply:(id /* block */)arg4;
- (void)LISetFsAttr:(id)arg1 name:(id)arg2 value:(id)arg3 reply:(id /* block */)arg4;
- (void)LISetUpdateInterest:(id)arg1 interest:(bool)arg2 reply:(id /* block */)arg3;
- (void)LISetXattr:(id)arg1 name:(id)arg2 value:(id)arg3 how:(int)arg4 forPID:(int)arg5 reply:(id /* block */)arg6;
- (void)LIStatFS:(id)arg1 reply:(id /* block */)arg2;
- (void)LIVerifyExistenceWithFileIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)LIWrite:(id)arg1 atOffset:(unsigned long long)arg2 withBuffer:(id)arg3 forPID:(int)arg4 reply:(id /* block */)arg5;
- (void)connectionWasInterrupted;
- (void)connectionWasInvalidated;
- (void)dealloc;
- (id)initForMount:(id)arg1 connection:(id)arg2 error:(id*)arg3;
- (unsigned long long)ourID;
- (id)sanitizedAttrsForNewObjectAttrs:(id)arg1 forType:(unsigned int)arg2;
- (void)scrubOurClientId;

@end
