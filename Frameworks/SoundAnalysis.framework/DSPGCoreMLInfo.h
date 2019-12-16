/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface DSPGCoreMLInfo : NSObject {
    DSPGMLInputProvider * _inputProvider;
    <DSPGMLModel> * _model;
    MLModelDescription * _modelDescription;
    NSArray * _outputLabels;
    <MLFeatureProvider> * _outputProvider;
    NSArray * _outputs;
}

@property (nonatomic, retain) DSPGMLInputProvider *inputProvider;
@property (nonatomic, retain) <DSPGMLModel> *model;
@property (nonatomic, retain) MLModelDescription *modelDescription;
@property (nonatomic, retain) NSArray *outputLabels;
@property (nonatomic, retain) <MLFeatureProvider> *outputProvider;
@property (nonatomic, retain) NSArray *outputs;

- (void).cxx_destruct;
- (id)inputProvider;
- (id)model;
- (id)modelDescription;
- (id)outputLabels;
- (id)outputProvider;
- (id)outputs;
- (void)setInputProvider:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelDescription:(id)arg1;
- (void)setOutputLabels:(id)arg1;
- (void)setOutputProvider:(id)arg1;
- (void)setOutputs:(id)arg1;

@end
