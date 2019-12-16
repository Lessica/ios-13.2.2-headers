/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

@interface QuickTypePFLTrainer : NSObject {
    unsigned long long  _batchSize;
    NSNumber * _learningRate;
    unsigned long long  _maxSequenceLength;
    NSString * _updatedModelPath;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, copy) NSNumber *learningRate;
@property (nonatomic, readonly) unsigned long long maxSequenceLength;
@property (nonatomic, readonly, copy) NSString *updatedModelPath;

- (unsigned long long)batchSize;
- (float*)copyWeightUpdates:(unsigned long long*)arg1;
- (id)evaluateOn:(id)arg1;
- (id)initWithSeedModelPath:(id)arg1;
- (id)learningRate;
- (unsigned long long)maxSequenceLength;
- (void)reset;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setLearningRate:(id)arg1;
- (void)trainAndKeepInMemory:(id)arg1 forNEpochs:(unsigned long long)arg2;
- (void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2;
- (void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 andKeepInMemory:(bool)arg3;
- (id)updatedModelPath;

@end
