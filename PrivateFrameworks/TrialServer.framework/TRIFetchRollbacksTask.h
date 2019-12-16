/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIFetchRollbacksTask : TRIBaseTask {
    NSDate * _earliestDate;
    NSMutableArray * _nextTasks;
    <TRITaskQueuing> * _taskQueue;
}

@property (readonly) NSDate *earliestDate;

+ (id)taskWithQueue:(id)arg1;
+ (id)taskWithQueue:(id)arg1 earliestDate:(id)arg2;

- (void).cxx_destruct;
- (void)addNextTask:(id)arg1;
- (id)earliestDate;
- (id)getNextTaskForExperiment:(id)arg1;
- (id)initWithQueue:(id)arg1 earliestDate:(id)arg2;
- (id)nextTasksForRunStatus:(int)arg1;
- (bool)processRollback:(id)arg1;
- (int)runTask;

@end
