/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryOpener : NSObject {
    PLLibraryServicesManager * _libraryServicesManager;
    bool  _reportInProgressUpgrades;
}

@property (readonly) PLLibraryServicesManager *libraryServicesManager;

+ (bool)canAutomaticallyCreateLibrary;

- (void).cxx_destruct;
- (bool)createPhotoLibraryDatabase:(id*)arg1;
- (id)initWithLibraryServicesManager:(id)arg1 reportInProgressUpgrades:(bool)arg2;
- (id)libraryServicesManager;
- (bool)lightweightPermissionCheckWithError:(id*)arg1;
- (bool)lightweightPermissionCheckWithPath:(id)arg1 isDir:(bool)arg2 error:(id*)arg3;
- (bool)openPhotoLibraryDatabase:(id*)arg1;

@end
