/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNHandsDetectorEspresso : VCPCNNHandsDetector {
    float * _inputData;
    int  _maxNumRegions;
    VCPCNNModelEspresso * _modelEspresso;
    NSArray * _outputNames;
    struct vector<float *, std::__1::allocator<float *> > { 
        float **__begin_; 
        float **__end_; 
        struct __compressed_pair<float **, std::__1::allocator<float *> > { 
            float **__value_; 
        } __end_cap_; 
    }  _outputsData;
    NSString * _resConfig;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)generateHandsBoxes:(id)arg1;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (id)initWithMaxNumRegions:(int)arg1;

@end
