/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestinationScore : NSObject {
    NSString * _descriptionExtras;
    MNCommuteDestination * _destination;
    bool  _destinationInvalid;
    NSDate * _lastUpdate;
    NSHashTable * _observers;
    int  _score;
}

@property (nonatomic, readonly) NSString *descriptionExtras;
@property (nonatomic) MNCommuteDestination *destination;
@property (nonatomic, readonly) bool destinationInvalid;
@property (readonly) MNCommuteDestinationSuggestion *destinationSuggestion;
@property (nonatomic, retain) NSDate *lastUpdate;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) int score;
@property (readonly) double weightedScore;

+ (id)sessionStartDate;
+ (id)sessionStartDateOrNow;
+ (void)setSessionStartDate:(id)arg1;
+ (double)weight;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)descriptionExtras;
- (id)destination;
- (bool)destinationInvalid;
- (id)destinationSuggestion;
- (id)init;
- (id)initWithDestination:(id)arg1;
- (id)lastUpdate;
- (void)lastUpdateIsNow;
- (void)notifyObservers;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (int)score;
- (void)setDestination:(id)arg1;
- (void)setLastUpdate:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)updateScoreIfPossible;
- (double)weightedScore;

@end
