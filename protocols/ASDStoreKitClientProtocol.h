/* Generated by RuntimeBrowser.
 */

@protocol ASDStoreKitClientProtocol <NSObject>

@required

- (void)downloadAdded:(NSDictionary *)arg1;
- (void)downloadRemoved:(NSDictionary *)arg1;
- (void)downloadStatusChanged:(NSDictionary *)arg1;
- (void)removedTransactions:(NSArray *)arg1;
- (void)shouldContinueTransaction:(void *)arg1 withNewStorefront:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)storefrontChanged:(NSDictionary *)arg1;
- (void)updatedTransactions:(NSArray *)arg1;

@end
