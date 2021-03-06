/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPresentation_Eye : NSObject {
    <MTLBuffer> * _distortionIndexBuffer;
    unsigned long long  _distortionIndexCount;
    unsigned long long  _distortionIndexType;
    <MTLBuffer> * _distortionVertexBuffer;
    unsigned long long  _primitiveType;
    struct { 
        double originX; 
        double originY; 
        double width; 
        double height; 
        double znear; 
        double zfar; 
    }  _viewport;
}

@property (nonatomic, retain) <MTLBuffer> *distortionIndexBuffer;
@property (nonatomic) unsigned long long distortionIndexCount;
@property (nonatomic) unsigned long long distortionIndexType;
@property (nonatomic, retain) <MTLBuffer> *distortionVertexBuffer;
@property (nonatomic) unsigned long long primitiveType;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; double x6; } viewport;

- (void).cxx_destruct;
- (id)distortionIndexBuffer;
- (unsigned long long)distortionIndexCount;
- (unsigned long long)distortionIndexType;
- (id)distortionVertexBuffer;
- (unsigned long long)primitiveType;
- (void)setDistortionIndexBuffer:(id)arg1;
- (void)setDistortionIndexCount:(unsigned long long)arg1;
- (void)setDistortionIndexType:(unsigned long long)arg1;
- (void)setDistortionVertexBuffer:(id)arg1;
- (void)setPrimitiveType:(unsigned long long)arg1;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; })viewport;

@end
