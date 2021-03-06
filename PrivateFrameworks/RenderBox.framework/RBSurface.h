/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

@interface RBSurface : NSObject {
    struct { 
        float red; 
        float green; 
        float blue; 
        float alpha; 
    }  _clearColor;
    bool  _clearsBackground;
    int  _colorMode;
    struct objc_ptr<id<MTLDevice> > { 
        <MTLDevice> *_p; 
    }  _device;
    struct Bounds { 
        int x; 
        int y; 
        int w; 
        int h; 
    }  _dirty;
    struct objc_ptr<RBDisplayList *> { 
        RBDisplayList *_p; 
    }  _displayList;
    struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> > { 
        struct __compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> > { 
            struct Drawable {} *__value_; 
        } __ptr_; 
    }  _drawable;
    void * _lastItem;
    bool  _opaque;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct refcounted_ptr<RB::Texture> { 
        struct Texture {} *_p; 
    }  _texture;
}

@property (nonatomic) struct { float x1; float x2; float x3; float x4; } clearColor;
@property (nonatomic) bool clearsBackground;
@property (nonatomic) int colorMode;
@property (nonatomic, retain) RBDisplayList *displayList;
@property (getter=isOpaque, nonatomic) bool opaque;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_updateWithDevice:(struct Device { int (**x1)(); unsigned int x2; struct objc_ptr<id<MTLDevice> > { id x_3_1_1; struct objc_ptr<id<MTLLibrary> > { id x_2_2_1; struct objc_ptr<id<MTLCommandQueue> > { id x_2_3_1; struct objc_ptr<id<MTLCaptureScope> > { id x_2_4_1; struct BufferRegion { struct Buffer {} *x_2_5_1; unsigned long long x_2_5_2; unsigned long long x_2_5_3; } x_2_4_2; struct BufferRegion { struct Buffer {} *x_3_5_1; unsigned long long x_3_5_2; unsigned long long x_3_5_3; } x_2_4_3; struct BufferRegion { struct Buffer {} *x_4_5_1; unsigned long long x_4_5_2; unsigned long long x_4_5_3; } x_2_4_4; struct objc_ptr<id<MTLTexture> > { id x_5_5_1; unsigned int x_5_5_2; unsigned int x_5_5_3; unsigned int x_5_5_4; unsigned long long x_5_5_5; unsigned long long x_5_5_6; struct Heap { unsigned long long x_7_6_1; struct Page {} *x_7_6_2; char *x_7_6_3; unsigned long long x_7_6_4; } x_5_5_7; struct list<RB::refcounted_ptr<RB::Buffer>, std::__1::allocator<RB::refcounted_ptr<RB::Buffer> > > { struct __list_node_base<RB::refcounted_ptr<RB::Buffer>, void *> { struct __list_node_base<RB::refcounted_ptr<RB::Buffer>, void *> {} *x_1_7_1; struct __list_node_base<RB::refcounted_ptr<RB::Buffer>, void *> {} *x_1_7_2; } x_8_6_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<RB::refcounted_ptr<RB::Buffer>, void *> > > { unsigned long long x_2_7_1; } x_8_6_2; } x_5_5_8; struct list<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture> > > { struct __list_node_base<RB::refcounted_ptr<RB::Texture>, void *> { struct __list_node_base<RB::refcounted_ptr<RB::Texture>, void *> {} *x_1_7_1; struct __list_node_base<RB::refcounted_ptr<RB::Texture>, void *> {} *x_1_7_2; } x_9_6_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<RB::refcounted_ptr<RB::Texture>, void *> > > { unsigned long long x_2_7_1; } x_9_6_2; } x_5_5_9; } x_2_4_5; } x_2_3_2; } x_2_2_2; } x_3_1_2; } x3; }*)arg1 frame:(/* Warning: unhandled struct encoding: '{RenderFrame=^{Device}^{Drawable}{objc_ptr<id<MTLCommandBuffer> >=@}{unique_ptr<RB::RenderQueue, std::__1::default_delete<RB::RenderQueue> >={__compressed_pair<RB::RenderQueue *, std::__1::default_delete<RB::RenderQueue> >=^{RenderQueue}}}III{vector<RB::refcounted_ptr<RB::Buffer>, std::__1::allocator<RB::refcounted_ptr<RB::Buffer> > >=^{refcounted_ptr<RB::Buffer>}^{refcounted_ptr<RB::Buffer>}{__compressed_pair<RB::refcounted_ptr<RB::Buffer> *, std::__1::allocator<RB::refcounted_ptr<RB::Buffer> > >=^{refcounted_ptr<RB::Buffer>}}}{vector<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture> > >=^{refcounted_ptr<RB::Texture>}^{refcounted_ptr<RB::Texture>}{__compressed_pair<RB::refcounted_ptr<RB::Texture> *, std::__1::allocator<RB::refcounted_ptr<RB::Texture> > >=^{refcounted_ptr<RB::Texture>}}}{forward_list<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture> > >={__compressed_pair<std::__1::__forward_begin_node<std::__1::__forward_list_node<RB::refcounted_ptr<RB::Texture>, void *> *>, std::__1::allocator<std::__1::__forward_list_node<RB::refcounted_ptr<RB::Texture>, void *> > >={__forward_begin_node<std::__1::__forward_list_node<RB::refcounted_ptr<RB::Texture>, void *> *>=^{__forward_list_node<RB::refcounted_ptr<RB::Texture>, void *>}}}}^{Buffer}QB{Table<const RB::RenderFrame::RegionKey *, const RB::RenderFrame::RegionEntry *>=^?^?^?^?^{Heap}{Pool<RB::UntypedTable::Node>=^{Item}}^^{Node}QQIBB}}' */ struct RenderFrame { struct Device {} *x1; struct Drawable {} *x2; struct objc_ptr<id<MTLCommandBuffer> > { id x_3_1_1; struct unique_ptr<RB::RenderQueue, std::__1::default_delete<RB::RenderQueue> > { struct __compressed_pair<RB::RenderQueue *, std::__1::default_delete<RB::RenderQueue> > { struct RenderQueue {} *x_1_3_1; } x_2_2_1; } x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct vector<RB::refcounted_ptr<RB::Buffer>, std::__1::allocator<RB::refcounted_ptr<RB::Buffer> > > { struct refcounted_ptr<RB::Buffer> {} *x_6_2_1; struct refcounted_ptr<RB::Buffer> {} *x_6_2_2; struct __compressed_pair<RB::refcounted_ptr<RB::Buffer> *, std::__1::allocator<RB::refcounted_ptr<RB::Buffer> > > { struct refcounted_ptr<RB::Buffer> {} *x_3_3_1; } x_6_2_3; } x_3_1_6; struct vector<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture> > > { struct refcounted_ptr<RB::Texture> {} *x_7_2_1; struct refcounted_ptr<RB::Texture> {} *x_7_2_2; struct __compressed_pair<RB::refcounted_ptr<RB::Texture> *, std::__1::allocator<RB::refcounted_ptr<RB::Texture> > > { struct refcounted_ptr<RB::Texture> {} *x_3_3_1; } x_7_2_3; } x_3_1_7; } x3; }*)arg2 synchronized:(bool)arg3;
- (struct { float x1; float x2; float x3; float x4; })clearColor;
- (bool)clearsBackground;
- (int)colorMode;
- (struct CGImage { }*)copyCGImageUsingDevice:(id)arg1;
- (id)displayList;
- (id)init;
- (void)invalidate;
- (void)invalidateInRect:(struct Rect { float x1; float x2; float x3; float x4; })arg1;
- (bool)isOpaque;
- (void)setClearColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setClearsBackground:(bool)arg1;
- (void)setColorMode:(int)arg1;
- (void)setDisplayList:(id)arg1;
- (void)setDisplayList:(id)arg1 dirtyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setOpaque:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)updateUsingDevice:(id)arg1;

@end
