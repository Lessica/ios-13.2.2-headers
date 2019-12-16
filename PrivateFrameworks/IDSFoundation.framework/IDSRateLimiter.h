/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRateLimiter : NSObject {
    NSMutableDictionary * _cacheMap;
    long long  _limit;
    NSMultiReadUniWriteLock * _readWriteLock;
    double  _timeLimit;
}

@property (nonatomic, retain) NSMutableDictionary *cacheMap;
@property (nonatomic) long long limit;
@property (nonatomic, retain) NSMultiReadUniWriteLock *readWriteLock;
@property (nonatomic) double timeLimit;

- (void).cxx_destruct;
- (id)_unlockedDescription;
- (id)cacheMap;
- (void)cleanupExpiredItems;
- (void)clearItem:(id)arg1;
- (id)description;
- (id)initWithLimit:(long long)arg1 timeLimit:(double)arg2;
- (long long)limit;
- (void)noteItem:(id)arg1;
- (id)readWriteLock;
- (void)setCacheMap:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setReadWriteLock:(id)arg1;
- (void)setTimeLimit:(double)arg1;
- (double)timeLimit;
- (double)timeToUnderLimit:(id)arg1;
- (bool)underLimitForItem:(id)arg1;

@end
