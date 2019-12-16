/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSiderealCache : NSObject {
    NSCache * _dataCache;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (void)_purgeEverything;
- (id)gradientData:(id /* block */)arg1;
- (id)imageDataForKey:(id)arg1 generationBlock:(id /* block */)arg2;
- (void)purgeCachedKey:(id)arg1;

@end
