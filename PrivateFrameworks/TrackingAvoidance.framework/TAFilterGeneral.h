/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TAFilterGeneral : NSObject

+ (double)distOfTravelAlong:(id)arg1;
+ (id)filterSuspiciousDeviceWithStore:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
+ (id)filterSuspiciousDeviceWithStore:(id)arg1 settings:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3;
+ (id)filteredInterVisitMetadata:(id)arg1 inInterval:(id)arg2 withLocRelevanceThreshold:(double)arg3;
+ (id)filteredPeopleDensityResults:(id)arg1 within:(id)arg2;
+ (bool)inHighConfidencePedestrianState:(struct { unsigned long long x1; double x2; })arg1 interval:(double)arg2 distOfTravel:(double)arg3 withFilterSettings:(id)arg4;
+ (bool)shouldIssuePeopleDensityScan:(unsigned long long)arg1 distTravel:(double)arg2 durationOfTravel:(double)arg3 settings:(id)arg4 resultsInBuffer:(id)arg5;

@end
