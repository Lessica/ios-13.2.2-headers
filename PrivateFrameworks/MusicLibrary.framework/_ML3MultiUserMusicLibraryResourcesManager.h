/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3MultiUserMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <MLMediaLibraryAccountChangeObserver> {
    NSString * _cachedLibraryContainerPath;
    <MLMediaLibraryResourcesServiceProtocol> * _libraryResourcesServices;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) NSString *cachedLibraryContainerPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MLMediaLibraryResourcesServiceProtocol> *libraryResourcesServices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedLibraryContainerPath;
- (void)emergencyDisconnectWithCompletion:(id /* block */)arg1;
- (id)initWithLibraryResourcesService:(id)arg1;
- (id)libraryContainerPath;
- (id)libraryResourcesServices;
- (void)performDatabasePathChange:(id)arg1 completion:(id /* block */)arg2;
- (id)serialQueue;
- (void)setCachedLibraryContainerPath:(id)arg1;
- (void)setLibraryResourcesServices:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)terminateForFailureToPerformDatabasePathChange;

@end
