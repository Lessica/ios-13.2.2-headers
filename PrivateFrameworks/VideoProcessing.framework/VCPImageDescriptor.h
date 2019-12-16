/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageDescriptor : NSObject <VCPDistanceDescriptorProtocol> {
    VNImageprint * _imagePrint;
}

+ (id)descriptorWithData:(id)arg1;
+ (id)descriptorWithImage:(struct __CVBuffer { }*)arg1;
+ (int)preferredPixelFormat;
+ (bool)usePHAssetData;

- (void).cxx_destruct;
- (int)computeDistance:(float*)arg1 toDescriptor:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithImage:(struct __CVBuffer { }*)arg1;
- (id)serialize;

@end
