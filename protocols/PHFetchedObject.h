/* Generated by RuntimeBrowser.
 */

@protocol PHFetchedObject <NSCopying, NSObject>

@required

+ (NSString *)entityName;
+ (NSArray *)propertiesToFetch;

- (id)initWithObjectID:(NSManagedObjectID *)arg1 knownKeysDictionary:(NSKnownKeysDictionary *)arg2 firstKeyIndex:(unsigned short)arg3 photoLibrary:(PHPhotoLibrary *)arg4;
- (NSManagedObjectID *)objectID;

@end