/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutEventEntity : HDHealthEntity

+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1;
+ (bool)enumerateEventsForOwner:(long long)arg1 withStatement:(id)arg2 error:(id*)arg3 eventHandler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (id)insertPersistableWorkoutEvent:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)insertWorkoutEventsFromWorkout:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (long long)protectionClass;
+ (id)statementForEnumeratingEventsForOwnerInDatabase:(id)arg1 error:(id*)arg2;
+ (Class)workoutEventClass;
+ (id)workoutEventsForOwner:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)workoutEventsWithOwnerID:(id)arg1 database:(id)arg2 error:(id*)arg3;

@end