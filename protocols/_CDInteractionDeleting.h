/* Generated by RuntimeBrowser.
 */

@protocol _CDInteractionDeleting

@required

- (void)deleteInteractionsMatchingPredicate:(void *)arg1 sortDescriptors:(void *)arg2 limit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSPredicate *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (void)deleteInteractionsWithBundleId:(void *)arg1 account:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 error:(id*)arg3;
- (void)deleteInteractionsWithBundleId:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)deleteInteractionsWithBundleId:(void *)arg1 domainIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 error:(id*)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 error:(id*)arg2;

@end
