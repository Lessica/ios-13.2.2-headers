/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLBookmarksMigrator : NSObject <WLDataclassMigrating> {
    WebBookmarkCollection * _collection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_bookmarkFolderAtTitlePath:(id)arg1 withinBookmarkFolder:(id)arg2;
+ (id)_bookmarkFolderAtTitlePath:(id)arg1 withinRootFolder:(id)arg2;
+ (id)_createBookmarkFolderWithTitle:(id)arg1 UUID:(id)arg2;
+ (id)_createRootBookmarkFolder;
+ (id)contentType;

- (void).cxx_destruct;
- (bool)accountBased;
- (id)contentType;
- (id)dataType;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)importDataFromProvider:(id /* block */)arg1 forSummaries:(id)arg2 summaryStart:(id /* block */)arg3 summaryCompletion:(id /* block */)arg4;
- (void)importDidEnd;
- (id)importWillBegin;
- (bool)storeRecordDataInDatabase;

@end
