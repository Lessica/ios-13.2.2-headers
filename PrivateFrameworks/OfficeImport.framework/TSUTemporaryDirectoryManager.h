/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL * _baseDirectoryURL;
}

+ (id)baseDirectoryURL;
+ (id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2;
+ (Class)managedTemporaryDirectoryClass;
+ (id)sharedManager;
+ (bool)shouldExcludeFromBackup;

- (void).cxx_destruct;
- (void)_clearDirectories:(id)arg1;
- (void)_clearDirectoriesAsynchronously:(id)arg1;
- (void)_excludeFromBackupAsynchronously;
- (id)_readDirectories;
- (id)init;
- (id)newDirectoryWithFilename:(id)arg1;

@end
