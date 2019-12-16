/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKDatabaseMetadata : NSManagedObject

@property (nonatomic, retain) CKServerChangeToken *currentChangeToken;
@property (nonatomic, retain) NSString *databaseName;
@property (nonatomic) long long databaseScope;
@property (nonatomic, retain) NSNumber *databaseScopeNum;
@property (nonatomic) bool hasChanges;
@property (nonatomic) bool hasSubscription;
@property (nonatomic, retain) NSNumber *hasSubscriptionNum;
@property (nonatomic, retain) NSDate *lastFetchDate;
@property (nonatomic, retain) NSSet *recordZones;

+ (id)databaseMetadataForScope:(long long)arg1 forStore:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
+ (id)entityPath;
+ (id)stringForScope:(long long)arg1;

- (long long)databaseScope;
- (bool)hasSubscription;
- (void)setDatabaseScope:(long long)arg1;
- (void)setHasSubscription:(bool)arg1;

@end
