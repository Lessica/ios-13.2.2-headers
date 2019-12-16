/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphUserBehaviorEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {
    NSObject<OS_os_log> * _loggingConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) Class superclass;

+ (id)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (bool)supportsBackgroundJob;

- (void).cxx_destruct;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)loggingConnection;

@end
