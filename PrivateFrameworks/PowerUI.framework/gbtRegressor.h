/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface gbtRegressor : NSObject {
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

+ (id)urlOfModelInThisBundle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionFromPlugin_hour:(double)arg1 plugin_battery_level:(double)arg2 hour:(double)arg3 time_from_plugin:(double)arg4 cnt_dur_1:(double)arg5 avg_dur_1:(double)arg6 error:(id*)arg7;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
