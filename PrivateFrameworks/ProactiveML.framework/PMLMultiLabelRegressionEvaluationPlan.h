/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLMultiLabelRegressionEvaluationPlan : NSObject <PMLPlanProtocol> {
    unsigned long long  _evaluationLevel;
    NSArray * _evaluationPoints;
    bool  _intercept;
    unsigned long long  _maxSessionsLimit;
    <PMLMultiLabelRegressionModelProtocol> * _multiLabelRegressionModel;
    struct NSString { Class x1; } * _planId;
    NSArray * _positiveLabels;
    PMLSessionDescriptor * _sessionDescriptor;
    unsigned long long  _sessionsInBatch;
    PMLTrainingStore * _store;
    unsigned long long  _supportPerLabel;
    <PMLMultiLabelEvaluationTrackerProtocol> * _tracker;
    NSArray * _weightsArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long evaluationLevel;
@property (nonatomic, readonly) NSArray *evaluationPoints;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool intercept;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) <PMLMultiLabelRegressionModelProtocol> *multiLabelRegressionModel;
@property (nonatomic, readonly) NSString *planId;
@property (nonatomic, readonly) NSArray *positiveLabels;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) unsigned long long sessionsInBatch;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportPerLabel;
@property (nonatomic, readonly) <PMLMultiLabelEvaluationTrackerProtocol> *tracker;
@property (nonatomic, readonly) NSArray *weightsArray;

- (void).cxx_destruct;
- (id)_precisionAtEvaluationPointsForSessions:(id)arg1;
- (id)_rankedLabelsForSession:(id)arg1;
- (unsigned long long)evaluationLevel;
- (id)evaluationPoints;
- (id)init;
- (id)initWithPlanId:(struct NSString { Class x1; }*)arg1 store:(id)arg2 sessionDescriptor:(id)arg3 maxSessionsLimit:(unsigned long long)arg4 sessionsInBatch:(unsigned long long)arg5 supportPerLabel:(unsigned long long)arg6 labelAndWeights:(id)arg7 modelClassName:(id)arg8 intercept:(bool)arg9 evaluationPoints:(id)arg10 tracker:(id)arg11 evaluationLevel:(unsigned long long)arg12;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)intercept;
- (unsigned long long)maxSessionsLimit;
- (id)multiLabelRegressionModel;
- (struct NSString { Class x1; }*)planId;
- (id)positiveLabels;
- (id)run;
- (id)runWhile:(id /* block */)arg1 didFinish:(bool*)arg2;
- (id)sessionDescriptor;
- (unsigned long long)sessionsInBatch;
- (id)store;
- (unsigned long long)supportPerLabel;
- (id)toPlistWithChunks:(id)arg1;
- (id)tracker;
- (id)weightsArray;

@end
