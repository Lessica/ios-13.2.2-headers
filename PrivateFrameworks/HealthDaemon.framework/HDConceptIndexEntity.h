/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDConceptIndexEntity : HDHealthEntity

+ (id)_conceptIndexEntriesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)_enumerateConceptIndexEntriesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)_insertConceptIndexEntry:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_keyValueDomainWithProfile:(id)arg1;
+ (id)_propertiesForEntity;
+ (id)allConceptIndexEntriesWithProfile:(id)arg1 error:(id*)arg2;
+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)conceptIndexEntriesForSampleUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)conceptIndexEntriesForSampleUUID:(id)arg1 type:(unsigned long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (id)indices;
+ (bool)insertConceptIndexEntries:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)removeAllConceptIndexEntriesWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)removeConceptIndexEntriesForSampleUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)sampleUUIDsForConceptIdentifier:(long long)arg1 keyPaths:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)stateWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)storeState:(id)arg1 profile:(id)arg2 error:(id*)arg3;

@end