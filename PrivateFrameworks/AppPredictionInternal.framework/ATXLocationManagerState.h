/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXLocationManagerState : NSObject <NSSecureCoding> {
    ATXLocationOfInterest * _currentLOI;
    NSDate * _lastUpdateDate;
    NSArray * _predictedExitTimes;
    NSArray * _predictedNextLOIs;
    ATXLocationOfInterest * _previousLOI;
}

@property (nonatomic, retain) ATXLocationOfInterest *currentLOI;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, retain) NSArray *predictedExitTimes;
@property (nonatomic, retain) NSArray *predictedNextLOIs;
@property (nonatomic, retain) ATXLocationOfInterest *previousLOI;

+ (id)merge:(id)arg1 with:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentLOI;
- (void)encodeWithCoder:(id)arg1;
- (void)expirePreviousLOIBefore:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdateDate;
- (id)predictedExitTimes;
- (id)predictedNextLOIs;
- (id)previousLOI;
- (void)setCurrentLOI:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setPredictedExitTimes:(id)arg1;
- (void)setPredictedNextLOIs:(id)arg1;
- (void)setPreviousLOI:(id)arg1;

@end
