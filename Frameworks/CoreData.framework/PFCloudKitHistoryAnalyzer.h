/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer {
    NSManagedObjectContext * _managedObjectContext;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

+ (bool)isPrivateContextName:(id)arg1;
+ (bool)isPrivateTransaction:(id)arg1;
+ (bool)isPrivateTransactionAuthor:(id)arg1;

- (id)cloudKitAnalyzerOptions;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2;
- (id)instantiateNewAnalyzerContext;
- (id)managedObjectContext;
- (bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3;

@end
