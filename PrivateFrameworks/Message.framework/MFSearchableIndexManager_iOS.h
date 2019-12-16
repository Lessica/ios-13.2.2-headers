/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSearchableIndexManager_iOS : EDSearchableIndexManager <EDSearchableIndexReasonProvider> {
    EDSearchableIndex * _index;
    EDSearchableIndexPersistence * _persistence;
    EDSearchableIndexScheduler * _scheduler;
}

@property (nonatomic, readonly, copy) NSSet *currentReasons;
@property (nonatomic, readonly, copy) NSSet *dataSourceRefreshReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *exclusionReasons;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EDSearchableIndex *index;
@property (nonatomic, retain) EDSearchableIndexPersistence *persistence;
@property (nonatomic, readonly, copy) NSSet *purgeReasons;
@property (nonatomic, retain) EDSearchableIndexScheduler *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentReasons;
- (id)dataSourceRefreshReasons;
- (void)enableIndexingAndBeginScheduling:(bool)arg1;
- (id)exclusionReasons;
- (id)index;
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;
- (id)persistence;
- (id)purgeReasons;
- (id)scheduler;
- (void)setIndex:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setScheduler:(id)arg1;

@end
