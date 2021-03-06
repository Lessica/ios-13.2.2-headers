/* Generated by RuntimeBrowser.
 */

@protocol TRITaskPersisting

@required

- (struct NSNumber { Class x1; }*)addTask:(id <TRITask>)arg1 startTime:(NSDate *)arg2 tags:(NSArray *)arg3 dependencies:(NSArray *)arg4 error:(id*)arg5;
- (bool)clearStartTimeForTaskId:(struct NSNumber { Class x1; }*)arg1;
- (bool)removeTask:(struct NSNumber { Class x1; }*)arg1;
- (NSArray *)taskIdsWithTag:(NSString *)arg1;
- (NSDictionary *)tasks;
- (NSArray *)tasksDependentOnTask:(struct NSNumber { Class x1; }*)arg1;

@end
