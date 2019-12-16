/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageOverCaptureProcessorControllerConfiguration : BWStillImageProcessorConfiguration {
    NSDictionary * _baseZoomFactorByPortType;
    unsigned int  _figThreadPriority;
    BWVideoFormat * _inputFormat;
    BWVideoFormat * _outputFormat;
    <MTLBuffer> * _overCaptureMetalBuffer;
    float  _overCaptureMultiplier;
    struct { 
        int width; 
        int height; 
    }  _overCaptureOutputDimensions;
    float  _overCapturePercentage;
    FigWiredMemory * _regwarpBuffer;
}

@property (nonatomic, readonly) NSDictionary *baseZoomFactorByPortType;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic, retain) BWVideoFormat *inputFormat;
@property (nonatomic, retain) BWVideoFormat *outputFormat;
@property (nonatomic, retain) <MTLBuffer> *overCaptureMetalBuffer;
@property (nonatomic, readonly) float overCaptureMultiplier;
@property (nonatomic) float overCapturePercentage;
@property (nonatomic, retain) FigWiredMemory *regwarpBuffer;

- (id)baseZoomFactorByPortType;
- (void)dealloc;
- (unsigned int)figThreadPriority;
- (id)inputFormat;
- (id)outputFormat;
- (id)overCaptureMetalBuffer;
- (float)overCaptureMultiplier;
- (float)overCapturePercentage;
- (id)regwarpBuffer;
- (void)setFigThreadPriority:(unsigned int)arg1;
- (void)setInputFormat:(id)arg1;
- (void)setOutputFormat:(id)arg1;
- (void)setOverCaptureMetalBuffer:(id)arg1;
- (void)setOverCapturePercentage:(float)arg1;
- (void)setRegwarpBuffer:(id)arg1;
- (void)setSensorConfigurations:(id)arg1;

@end
