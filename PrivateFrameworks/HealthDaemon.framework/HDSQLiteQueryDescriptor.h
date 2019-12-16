/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying> {
    Class  _entityClass;
    NSString * _groupBy;
    long long  _limitCount;
    NSArray * _orderingTerms;
    HDSQLitePredicate * _predicate;
    NSArray * _preferredEntityJoinOrder;
    bool  _returnsDistinctEntities;
}

@property (nonatomic) Class entityClass;
@property (nonatomic, copy) NSString *groupBy;
@property (nonatomic) long long limitCount;
@property (nonatomic, copy) NSArray *orderingTerms;
@property (nonatomic, copy) HDSQLitePredicate *predicate;
@property (nonatomic, copy) NSArray *preferredEntityJoinOrder;
@property (nonatomic) bool returnsDistinctEntities;

- (void).cxx_destruct;
- (id)_SQLForDeleteWithError:(id*)arg1;
- (id)_SQLForSelectWithProperties:(id)arg1;
- (id)_SQLForSelectWithProperties:(id)arg1 columns:(id)arg2;
- (id /* block */)_joinClauseComparatorWithPreferredEntityOrder:(id)arg1;
- (id)_joinClauseForProperties:(id)arg1;
- (id)_sortedJoinClauses:(id)arg1 preferredOrder:(id)arg2 baseTables:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)entityClass;
- (id)groupBy;
- (long long)limitCount;
- (id)orderingTerms;
- (id)predicate;
- (id)preferredEntityJoinOrder;
- (bool)returnsDistinctEntities;
- (void)setEntityClass:(Class)arg1;
- (void)setGroupBy:(id)arg1;
- (void)setLimitCount:(long long)arg1;
- (void)setOrderingTerms:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPreferredEntityJoinOrder:(id)arg1;
- (void)setReturnsDistinctEntities:(bool)arg1;

@end