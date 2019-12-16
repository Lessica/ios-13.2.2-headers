/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMultiQueue : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _queueMap;
}

- (bool)_addBlock:(id /* block */)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4;
- (void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2;
- (bool)addBlock:(id /* block */)arg1 forKey:(id)arg2 description:(id)arg3;
- (bool)addBlock:(id /* block */)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)loggableOverview;
- (id)loggableOverviewForKey:(id)arg1;

@end
