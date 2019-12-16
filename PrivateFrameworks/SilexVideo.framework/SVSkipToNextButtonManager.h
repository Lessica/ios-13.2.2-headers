/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVSkipToNextButtonManager : NSObject <SVSkipToNextButtonManager, SVVideoTransitionObserver> {
    NSMutableSet * _controls;
    <SVVideoQueueObserving> * _queueObserver;
    <SVVideoQueueProviding> * _queueProvider;
    <SVVideoSkipLockObserving> * _skipLockObserver;
    <SVVideoSkipLockObserverFactory> * _skipLockObserverFactory;
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (nonatomic, readonly) NSMutableSet *controls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoQueueObserving> *queueObserver;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (nonatomic, retain) <SVVideoSkipLockObserving> *skipLockObserver;
@property (nonatomic, readonly) <SVVideoSkipLockObserverFactory> *skipLockObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (void)addControl:(id)arg1;
- (void)conditionsChanged;
- (id)controls;
- (id)initWithSkipLockObserverFactory:(id)arg1 videoViewControllerProvider:(id)arg2 queueProvider:(id)arg3 queueObserver:(id)arg4;
- (id)queueObserver;
- (id)queueProvider;
- (void)setSkipLockObserver:(id)arg1;
- (id)skipLockObserver;
- (id)skipLockObserverFactory;
- (id)videoViewControllerProvider;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
