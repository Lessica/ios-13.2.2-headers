/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutRouteQueryServer : HDQueryServer {
    unsigned long long  _batchThreshold;
    HKWorkoutRoute * _locationSeries;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)unitTest_setBatchThreshold:(unsigned long long)arg1;

@end
