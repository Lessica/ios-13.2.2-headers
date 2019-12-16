/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkObserver : NSObject {
    NSObject<OS_nw_path> * _currentPath;
    bool  _initialized;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSObject<OS_nw_path_monitor> * _monitor;
    bool  _networkConstrained;
    bool  _networkReachable;
}

@property (getter=isCellConnection, nonatomic, readonly) bool cellConnection;
@property (getter=isNetworkConstrained, nonatomic, readonly) bool networkConstrained;
@property (getter=isNetworkReachable, nonatomic, readonly) bool networkReachable;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (void)_initializeNetworkMonitor;
- (void)_networkPathUpdated:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;
- (void)initializeIfNecessary;
- (bool)isCellConnection;
- (bool)isNetworkConstrained;
- (bool)isNetworkReachable;
- (void)removeNetworkReachableObserver:(id)arg1;

@end
