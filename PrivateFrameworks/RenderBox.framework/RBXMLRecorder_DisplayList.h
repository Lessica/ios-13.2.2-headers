/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

@interface RBXMLRecorder_DisplayList : RBDisplayList {
    struct Tree { 
        struct refcounted_ptr<RB::XMLRecorder::Element> { 
            struct Element {} *_p; 
        } _root; 
        struct stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > > { 
            struct deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > { 
                struct __split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> > { 
                    struct Element {} ***__first_; 
                    struct Element {} ***__begin_; 
                    struct Element {} ***__end_; 
                    struct __compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> > { 
                        struct Element {} ***__value_; 
                    } __end_cap_; 
                } __map_; 
                unsigned long long __start_; 
                struct __compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> > { 
                    unsigned long long __value_; 
                } __size_; 
            } c; 
        } _stack; 
    }  _tree;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBlurFilterWithRadius:(double)arg1 opaque:(bool)arg2;
- (void)addBrightnessFilterWithAmount:(float)arg1;
- (void)addColorInvertFilter;
- (void)addColorMatrixFilterWithArray:(float)arg1;
- (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(struct { float x1; float x2; float x3; float x4; })arg2 bias:(float)arg3;
- (void)addColorMultiplyFilterWithColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)addContrastFilterWithAmount:(float)arg1;
- (void)addGrayscaleFilterWithAmount:(float)arg1;
- (void)addHueRotationFilterWithAngle:(double)arg1;
- (void)addLuminanceToAlphaFilter;
- (void)addProjectionStyleWithArray:(float)arg1;
- (void)addSaturationFilterWithAmount:(float)arg1;
- (void)addShadowStyleWithRadius:(double)arg1 offset:(struct CGSize { double x1; double x2; })arg2 color:(struct { float x1; float x2; float x3; float x4; })arg3 mode:(int)arg4;
- (void)beginLayerWithFlags:(unsigned int)arg1;
- (void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2;
- (void)clipShape:(id)arg1 mode:(int)arg2;
- (void)concat:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)drawDisplayList:(id)arg1;
- (void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2;
- (void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4;
- (void)restore;
- (void)rotateBy:(double)arg1;
- (void)save;
- (void)scaleByX:(double)arg1 Y:(double)arg2;
- (void)setCTM:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)translateByX:(double)arg1 Y:(double)arg2;

@end
