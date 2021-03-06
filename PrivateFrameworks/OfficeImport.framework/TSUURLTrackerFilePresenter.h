/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSData * _bookmarkDataIfAvailable;
    <TSUURLTrackerDelegate> * _delegate;
    bool  _deleted;
    bool  _forceEncodingBookmarkData;
    bool  _hasStarted;
    bool  _isValid;
    NSError * _latestBookmarkError;
    <TSULogContext> * _logContext;
    NSOperationQueue * _presentedItemOperationQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _propertiesLock;
    TSUSandboxedURL * _sandboxedURLIfAvailable;
    TSUURLTracker * _urlTracker;
}

@property (readonly) NSData *bookmarkDataIfAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) TSUSandboxedURL *sandboxedURLIfAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (id)bookmarkDataAndReturnError:(id*)arg1;
- (id)bookmarkDataIfAvailable;
- (bool)deleted;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 urlTracker:(id)arg3 logContext:(id)arg4 delegate:(id)arg5;
- (bool)isValid;
- (id)p_bookmarkDataForcingRecalculation:(bool)arg1 error:(id*)arg2;
- (id)p_lastKnownURLFromBookmark:(id)arg1;
- (void)p_notifyURLTrackerPresentedItemContentsDidChange;
- (void)p_notifyURLTrackerPresentedItemDidMoveToURL:(id)arg1;
- (void)p_notifyURLTrackerPresentedItemWasDeleted;
- (id)p_sandboxedURLForcingRecalculation:(bool)arg1 error:(id*)arg2;
- (id)p_sandboxedURLIfAvailableLoadingLastKnownURLFromBookmark:(bool)arg1;
- (void)p_setBookmarkDataIfAvailable:(id)arg1;
- (void)p_setDeleted:(bool)arg1;
- (void)p_setSandboxedURLIfAvailable:(id)arg1;
- (void)pauseForEnteringBackground:(bool)arg1;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (id)recalculateBookmarkDataAndReturnError:(id*)arg1;
- (id)recalculateSandboxedURLAndReturnError:(id*)arg1;
- (void)relinquishPresentedItemToWriter:(id /* block */)arg1;
- (id)sandboxedURLAndReturnError:(id*)arg1;
- (id)sandboxedURLIfAvailable;
- (void)startOrResumeForEnteringForeground:(bool)arg1;
- (void)stop;

@end
