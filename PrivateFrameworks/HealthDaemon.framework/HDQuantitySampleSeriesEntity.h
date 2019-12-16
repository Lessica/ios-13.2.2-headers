/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleSeriesEntity : HDQuantitySampleEntity <HDSeriesEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_deleteHFDSeriesIfFoundForPersistentID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_insertDataObject:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(id*)arg4;
+ (long long)_insertionEra;
+ (bool)_moveHFDKey:(long long)arg1 fromEntity:(id)arg2 toEntity:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (long long)_notFinalInserationEra;
+ (id)_propertiesToLeftJoin;
+ (id)_quantitySampleWithID:(id)arg1 canBeUnfrozen:(bool)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_removeValues:(id)arg1 fromQuantitySeriesSample:(id)arg2 transaction:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)_replaceEntity:(id)arg1 UUIDToDelete:(id)arg2 newEntity:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (void)_setStatistics:(id)arg1 cumulativeQuantitySeriesSample:(id)arg2;
+ (void)_setStatistics:(id)arg1 discreteQuantitySeriesSample:(id)arg2;
+ (bool)_setStatisticsForQuantitySample:(id)arg1 HFDKey:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)_statisticsProperties;
+ (id)_statisticsWithHFDKey:(long long)arg1 statisticsCalculator:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (void)_triggerABCForNotFinalSeriesSampleInsert:(id)arg1 reason:(id)arg2;
+ (bool)_updateFrozenEntityToMatchReplacedUnfrozenEntity:(id)arg1 unfrozenSeriesUUID:(id)arg2 unfrozenSeriesHFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)_updatedSampleForSeries:(id)arg1 originalEntity:(id)arg2 HFDKey:(long long)arg3 newCount:(long long)arg4 transaction:(id)arg5 profile:(id)arg6 error:(id*)arg7;
+ (id)_updatedSampleUUIDForSeries:(id)arg1 originalEntity:(id)arg2 HFDKey:(long long)arg3 transaction:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (id)additionalPredicateForEnumeration;
+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteSeriesFromHFDWithKey:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)deleteSeriesWithID:(id)arg1 deleteHFDData:(bool)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (Class)entityClassForEnumeration;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateDataWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateDataWithIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateRawDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)hasSeriesDataForHFDKey:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)indices;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)insertValues:(id)arg1 series:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)isConcreteEntity;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)performSeriesWriteTransactionWithProfile:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (bool)primitiveInsertValues:(id)arg1 seriesVersion:(long long)arg2 HFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)primitiveRemoveDatums:(id)arg1 HFDKey:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)privateSubEntities;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)arg1 error:(id*)arg2;
+ (id)removeValues:(id)arg1 fromQuantitySeriesSample:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)replaceExistingObject:(id)arg1 existingObjectID:(id)arg2 replacementObject:(id)arg3 replacementObjectID:(id)arg4 profile:(id)arg5 database:(id)arg6 error:(id*)arg7;
+ (bool)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 deleteOriginalHFDData:(bool)arg3 profile:(id)arg4 database:(id)arg5 error:(id*)arg6;
+ (bool)supportsObjectMerging;
+ (bool)unitTesting_insertValues:(id)arg1 quantitySample:(id)arg2 seriesVersion:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (long long)unitTesting_insertionEra;
+ (void)unitTesting_updateInsertionEra;

- (id)HFDKeyWithDatabase:(id)arg1 error:(id*)arg2;
- (long long)_canAddDatumInDatabase:(id)arg1 error:(id*)arg2;
- (id)_dataOriginProvenanceWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)_frozenUUIDForUnfrozenQuantitySample:(id)arg1 HFDKey:(long long)arg2 endDate:(id)arg3 transaction:(id)arg4 profile:(id)arg5 error:(id*)arg6;
- (bool)_getFirstTimeEndTimeCountWithTransaction:(id)arg1 HFDKey:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (long long)_hasV1SeriesDataWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)_insertValues:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_isSeriesInDatabase:(id)arg1;
- (id)_mergeCodableSeriesDataFromQuantitySampleSeries:(id)arg1 profile:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (bool)_setHFDKey:(long long)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_setInsertionEra:(long long)arg1 database:(id)arg2 error:(id*)arg3;
- (id)_updatedSampleForQuantitySeriesSample:(id)arg1 HFDKey:(long long)arg2 endDate:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (id)countForSeriesWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)deleteFromDatabase:(id)arg1 error:(id*)arg2;
- (bool)enumerateDataInInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)enumerateDataWithTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)freezeWithEndDate:(id)arg1 transaction:(id)arg2 profile:(id)arg3 error:(id*)arg4;
- (id)hasSeriesDataWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)insertValues:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)startTimeEndTimeCountForSeriesWithTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (bool)unitTesting_setInsertionEra:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
- (void)willDeleteFromDatabase:(id)arg1;

@end
