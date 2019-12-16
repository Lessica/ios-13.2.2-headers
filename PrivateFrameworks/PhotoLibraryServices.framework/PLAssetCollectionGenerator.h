/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetCollectionGenerator : NSObject <PLLibraryClustererDelegate> {
    NSDateFormatter * _debugDateFormatter;
    PLFrequentLocationManager * _frequentLocationManager;
    NSMutableSet * _insertedOrUpdatedMoments;
    PLLocalCreationDateCreator * _localCreationDateCreator;
    <PLMomentGenerationDataManagement> * _manager;
    NSMutableArray * _momentsFromAssetClusters;
    NSMutableSet * _usedMomentObjectIDs;
}

@property (nonatomic, retain) NSDateFormatter *debugDateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PLFrequentLocationManager *frequentLocationManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *insertedOrUpdatedMoments;
@property (nonatomic, retain) PLLocalCreationDateCreator *localCreationDateCreator;
@property (nonatomic) <PLMomentGenerationDataManagement> *manager;
@property (nonatomic, retain) NSMutableArray *momentsFromAssetClusters;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *usedMomentObjectIDs;

- (void).cxx_destruct;
- (void)_cleanUpMoment:(id)arg1;
- (id)_createMomentOrUpdateForAssetCluster:(id)arg1 existingMomentDataForAssets:(id)arg2;
- (id)_createMonthListOrAppendMomentsForMonth:(long long)arg1 year:(long long)arg2 moments:(id)arg3;
- (id)_createYearListOrAppendMomentsForYear:(long long)arg1 moments:(id)arg2;
- (id)_processMomentsCollectionsYearsWithAssets:(id)arg1 affectedMoments:(id)arg2 processMonthsAndYears:(bool)arg3;
- (void)_refreshMonthList:(id)arg1;
- (void)_refreshYearListWithMoments:(id)arg1;
- (id)debugDateFormatter;
- (id)frequentLocationManager;
- (id)initWithDataManager:(id)arg1 frequentLocationManager:(id)arg2 localCreationDateCreator:(id)arg3;
- (id)insertedOrUpdatedMoments;
- (id)libraryClusterer:(id)arg1 createMomentClustersForAssetClusters:(id)arg2 existingMomentDataForAssets:(id)arg3;
- (id)libraryClusterer:(id)arg1 createMonthListForMoments:(id)arg2 month:(long long)arg3 year:(long long)arg4;
- (id)libraryClusterer:(id)arg1 createYearListForMoments:(id)arg2 year:(long long)arg3;
- (id)localCreationDateCreator;
- (void)logRoutineInformation;
- (id)manager;
- (id)momentsFromAssetClusters;
- (id)processMomentsWithAssets:(id)arg1 affectedMoments:(id)arg2 processMonthsAndYears:(bool)arg3;
- (void)setDebugDateFormatter:(id)arg1;
- (void)setFrequentLocationManager:(id)arg1;
- (void)setInsertedOrUpdatedMoments:(id)arg1;
- (void)setLocalCreationDateCreator:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setMomentsFromAssetClusters:(id)arg1;
- (void)setUsedMomentObjectIDs:(id)arg1;
- (id)usedMomentObjectIDs;

@end
