/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestinationETAScore : MNCommuteDestinationScore <MNCommuteDestinationComparisonScore, MNCommuteDestinationObserver> {
    bool  _destinationInvalid;
    <GEODirectionServiceTicket> * _directionsRequestTicket;
    NSDate * _lastRouteUpdate;
    MNCommuteDestination * _otherDestination;
    double  _otherDestinationTravelTime;
    int  _score;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <GEODirectionServiceTicket> *directionsRequestTicket;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastRouteUpdate;
@property (nonatomic) MNCommuteDestination *otherDestination;
@property (nonatomic) double otherDestinationTravelTime;
@property (readonly) Class superclass;

+ (double)weight;

- (void).cxx_destruct;
- (id)_directionsRequestFeedback;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (bool)_readyForRoute;
- (void)_requestRoute;
- (id)_routeAttributes;
- (void)_updateScoreAndDestinationInvalid;
- (void)commuteDestination:(id)arg1 didChangeRemainingTime:(double)arg2;
- (id)descriptionExtras;
- (bool)destinationInvalid;
- (id)directionsRequestTicket;
- (id)initWithDestination:(id)arg1;
- (id)lastRouteUpdate;
- (id)otherDestination;
- (double)otherDestinationTravelTime;
- (int)score;
- (void)setDirectionsRequestTicket:(id)arg1;
- (void)setLastRouteUpdate:(id)arg1;
- (void)setOtherDestination:(id)arg1;
- (void)setOtherDestinationTravelTime:(double)arg1;
- (bool)supportsComparisonType:(unsigned long long)arg1;
- (void)updateComparisonDestination:(id)arg1 ofType:(unsigned long long)arg2;
- (void)updateScoreIfPossible;

@end
