/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration, PVFetchResultProtocol, PXDisplayAssetFetchResult, PXPeopleFetchResult> {
    unsigned long long  _albumsCount;
    unsigned long long  _audiosCount;
    long long  _chunkSizeForFetch;
    NSSet * _fetchPropertySets;
    _PHFetchRequestWrapper * _fetchRequestWrapper;
    NSString * _fetchType;
    PHBatchFetchingArray * _fetchedObjects;
    unsigned long long  _foldersCount;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    unsigned long long  _photosCount;
    NSNumber * _prefetchCount;
    bool  _preventsClearingOIDCache;
    PHQuery * _query;
    bool  _registeredForChangeNotificationDeltas;
    NSArray * _seedOIDs;
    unsigned long long  _sharedAlbumsCount;
    PHBatchFetchingArray * _thumbnailAssets;
    unsigned long long  _videosCount;
}

@property long long chunkSizeForFetch;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHFetchOptions *fetchOptions;
@property (readonly) NSSet *fetchPropertySets;
@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) NSString *fetchType;
@property (readonly) NSArray *fetchedObjectIDs;
@property (readonly) NSSet *fetchedObjectIDsSet;
@property (nonatomic, readonly) NSArray *fetchedObjects;
@property (readonly) NSArray *fetchedObjects;
@property (nonatomic, readonly) <PXDisplayAsset> *firstObject;
@property (nonatomic, readonly) id firstObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id lastObject;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) bool preventsClearingOIDCache;
@property (readonly) PHQuery *query;
@property (readonly) Class superclass;
@property (readonly) NSArray *thumbnailAssets;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2;
+ (id)_typesToCountForAssetCollections;
+ (id)_typesToCountForListCollections;
+ (id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2;
+ (id)fetchObjectCount:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)filteredOIDsFrom:(id)arg1 usingEntityName:(id)arg2 withPhotoLibrary:(id)arg3;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1 photoLibrary:(id)arg2;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1 photoLibrary:(id)arg2 includeTrash:(bool)arg3;
+ (id)pl_fetchResultForAssetContainerList:(id)arg1 photoLibrary:(id)arg2;
+ (id)pl_fetchResultForStandInAssetCollection:(id)arg1;
+ (id)pl_filterPredicateForAssetContainer:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_possibleChangesFromDetectionCriteriaForChange:(id)arg1;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;
- (unsigned long long)cachedCountOfCollectionsWithCollectionTypes:(id)arg1;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (long long)chunkSizeForFetch;
- (long long)collectionFetchType;
- (id)containerIdentifier;
- (bool)containsObject:(id)arg1;
- (id)copyWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countOfAssetCollections;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (unsigned long long)countOfCollectionsLists;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)fetchOptions;
- (id)fetchPropertySets;
- (id)fetchRequest;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchType;
- (id)fetchedObjectIDs;
- (id)fetchedObjectIDsSet;
- (id)fetchedObjects;
- (id)fetchedObjectsUsingManagedObjectContext:(id)arg1;
- (id)firstObject;
- (void)getCountOfCollectionsWithCollectionTypes:(id)arg1;
- (void)getMediaTypeCounts;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithExistingFetchResult:(id)arg1 filteredObjectIDs:(id)arg2;
- (id)initWithQuery:(id)arg1;
- (id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(bool)arg3 usingManagedObjectContext:(id)arg4;
- (bool)isFullyBackedByObjectIDs;
- (bool)isRegisteredForChangeNotificationDeltas;
- (id)lastObject;
- (id)localIdentifiers;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)objectIDs;
- (id)objectsAtIndexes:(id)arg1;
- (id)photoLibrary;
- (id)pl_photoLibraryObject;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)prefetchThumbnailAssetsAtIndexes:(id)arg1;
- (bool)preventsClearingOIDCache;
- (id)query;
- (void)setChunkSizeForFetch:(long long)arg1;
- (void)setPreventsClearingOIDCache:(bool)arg1;
- (void)setRegisteredForChangeNotificationDeltas:(bool)arg1;
- (id)thumbnailAssets;
- (void)updateRegistrationForChangeNotificationDeltas;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (id)allObjects;
- (id)objectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (id)allObjects;
- (id)resultsAsArray;
- (id)resultsAsSet;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
