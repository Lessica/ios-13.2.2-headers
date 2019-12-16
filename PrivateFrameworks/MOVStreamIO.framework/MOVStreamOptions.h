/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MOVStreamOptions : NSObject {
    bool  _debugMode;
}

@property (readonly) double bitrateMultiplier;
@property (readonly) unsigned long long bitrateOverride;
@property (readonly) bool disableFrameReordering;
@property (readonly) bool force10bitMonoByVT;
@property (readonly) bool forceColorLossless;
@property (readonly) bool forceLossless8bitMonoByVT;
@property (readonly) bool logAppendTimeStamps;
@property (readonly) bool logPrepareRecording;
@property (readonly) bool skipSourceHint;

+ (id)sharedOptions;

- (double)bitrateMultiplier;
- (unsigned long long)bitrateOverride;
- (void)checkHasValue:(id)arg1 changedForKey:(id)arg2;
- (id)currentOptions;
- (bool)disableFrameReordering;
- (bool)force10bitMonoByVT;
- (bool)forceColorLossless;
- (bool)forceLossless8bitMonoByVT;
- (id)init;
- (id)localDefaults;
- (bool)logAppendTimeStamps;
- (bool)logPrepareRecording;
- (void)registerStandardDefaults;
- (bool)skipSourceHint;
- (id)standardDefaultValues;

@end
