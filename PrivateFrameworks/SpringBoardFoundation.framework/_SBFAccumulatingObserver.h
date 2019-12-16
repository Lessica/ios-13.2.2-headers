/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFAccumulatingObserver : NSObject <SBFObserver> {
    bool  _didComplete;
    NSError * _error;
    NSMutableArray * _results;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)waitForResults:(id*)arg1;

@end
