/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXMediaActionPrediction : NSObject

+ (id)findTopRankedINPlayMediaIntentFromArray:(id)arg1;
+ (id)getAllUpcomingMedia;
+ (id)getUpcomingMediaForBundle:(id)arg1 isInternalApplication:(bool)arg2;
+ (struct _PASTuple2 { Class x1; }*)resolveBucketLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2;
+ (struct _PASTuple2 { Class x1; }*)resolveContainerLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2;
+ (struct _PASTuple2 { Class x1; }*)resolveItemLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2;
+ (struct _PASTuple2 { Class x1; }*)resolvePlayMediaIntent:(id)arg1 withUpcomingMedia:(id)arg2;
+ (bool)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1;
+ (bool)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 withINUpcomingMediaManagerReturnValueForTests:(id)arg2;
+ (id)updatePlayMediaActionPredictions:(id)arg1 withUpcomingMedia:(id)arg2 forActionKey:(id)arg3 appActionPredictionItem:(const struct ATXPredictionItem { id x1; float x2[389]; float x3; }*)arg4 appActionLogProbability:(double)arg5 statistics:(id)arg6;

@end
