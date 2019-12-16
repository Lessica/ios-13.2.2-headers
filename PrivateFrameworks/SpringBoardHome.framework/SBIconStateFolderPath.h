/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBIconStateFolderPath : NSObject {
    NSMutableArray * _folderDefaultNames;
    NSMutableArray * _folderNames;
    NSMutableArray * _folderPaths;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addFolderWithName:(id)arg1 defaultName:(id)arg2 indexPath:(id)arg3;
- (unsigned long long)count;
- (void)enumerateFoldersUsingBlock:(id /* block */)arg1;
- (id)folderDefaultNameAtIndex:(unsigned long long)arg1;
- (id)folderIndexPathAtIndex:(unsigned long long)arg1;
- (id)folderNameAtIndex:(unsigned long long)arg1;
- (id)init;

@end
