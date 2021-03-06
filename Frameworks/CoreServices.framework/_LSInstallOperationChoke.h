/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSInstallOperationChoke : NSObject {
    unsigned long long  _activeInstallers;
    unsigned long long  _activeUninstallers;
    NSObject<OS_dispatch_semaphore> * _backpressureSemaphore;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _numConcurrentOperations;
    NSMutableDictionary * _queuedWork;
}

+ (long long)_bufferedRequestSlop;

- (void).cxx_destruct;
- (id)availableOperationOfType:(long long)arg1;
- (bool)becomeInstaller;
- (bool)becomeUninstaller;
- (id)claimOperationOfType:(long long)arg1;
- (void)enqueueInstallationOperation:(id)arg1;
- (id)initWithWidth:(long long)arg1;
- (void)performOperationForBundleIdentifier:(id)arg1 installType:(long long)arg2 block:(id /* block */)arg3;
- (void)retireFromInstaller;
- (void)retireFromUninstaller;
- (void)retireOperation:(id)arg1;

@end
