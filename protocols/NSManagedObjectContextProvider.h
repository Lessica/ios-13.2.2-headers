/* Generated by RuntimeBrowser.
 */

@protocol NSManagedObjectContextProvider <NSObject>

@required

- (MTManagedObjectContext *)carPlayContext;
- (MTManagedObjectContext *)importContext;
- (MTManagedObjectContext *)mainOrPrivateContext;
- (MTManagedObjectContext *)mainQueueContext;
- (MTManagedObjectContext *)privateQueueContext;
- (MTManagedObjectContext *)resetableImportContext;
- (MTManagedObjectContext *)storeContext;

@end
