/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy> {
    unsigned long long  _droppedLogMsgCount;
    geo_isolater * _enqueueLock;
    unsigned long long  _maxOpCount;
    NSOperationQueue * _opQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 completion:(id /* block */)arg4 completionQueue:(id)arg5;
- (void)_reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)flushEvalData;
- (id)getEvalStatus;
- (id)init;
- (void)initiateUploadOfType:(int)arg1;
- (void)reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 completion:(id /* block */)arg4 completionQueue:(id)arg5;
- (void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)setEvalMode:(bool)arg1;
- (void)setShortSessionValues:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)shortSessionValuesWithCompletion:(id /* block */)arg1;
- (void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(id /* block */)arg2 summaryBlock:(id /* block */)arg3;

@end
