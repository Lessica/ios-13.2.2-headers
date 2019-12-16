/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRouteUpdate : NSObject <MNJSONOutput, NSCopying, NSSecureCoding> {
    double  _aggressiveTravelTime;
    double  _conservativeTravelTime;
    NSString * _longRouteSummary;
    NSArray * _nonRecommendedRoutes;
    CLLocation * _origin;
    NSDate * _requestTime;
    NSString * _requestingClientID;
    NSString * _routeSummary;
    NSArray * _routes;
    long long  _travelMode;
    double  _travelTime;
}

@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic) double conservativeTravelTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *longRouteSummary;
@property (nonatomic, copy) NSArray *nonRecommendedRoutes;
@property (nonatomic, retain) CLLocation *origin;
@property (nonatomic, retain) NSDate *requestTime;
@property (nonatomic, copy) NSString *requestingClientID;
@property (nonatomic, copy) NSString *routeSummary;
@property (nonatomic, copy) NSArray *routes;
@property (readonly) Class superclass;
@property (nonatomic) long long travelMode;
@property (nonatomic) double travelTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)aggressiveTravelTime;
- (double)conservativeTravelTime;
- (id)copyWithOptions:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)longRouteSummary;
- (id)nonRecommendedRoutes;
- (id)origin;
- (id)requestTime;
- (id)requestingClientID;
- (id)routeSummary;
- (id)routes;
- (bool)satisfiesFreshness:(id)arg1 fromLocation:(id)arg2;
- (bool)satisfiesOptions:(long long)arg1;
- (void)setAggressiveTravelTime:(double)arg1;
- (void)setConservativeTravelTime:(double)arg1;
- (void)setLongRouteSummary:(id)arg1;
- (void)setNonRecommendedRoutes:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setRequestTime:(id)arg1;
- (void)setRequestingClientID:(id)arg1;
- (void)setRouteSummary:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setTravelMode:(long long)arg1;
- (void)setTravelTime:(double)arg1;
- (long long)travelMode;
- (double)travelTime;

@end
