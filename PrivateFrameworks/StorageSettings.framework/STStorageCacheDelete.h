/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

@interface STStorageCacheDelete : NSObject {
    NSDictionary * _cdDict;
    int  _cdNotifyToken;
}

@property (retain) NSDictionary *cdDict;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)cacheDeleteDict;
- (id)cdDict;
- (void)dealloc;
- (id)init;
- (void)refreshPurgeableSpace;
- (void)setCdDict:(id)arg1;
- (void)startMonitor;
- (void)stopMonitor;

@end
