/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _MapEngineRenderQueueSource : NSObject <GGLRenderQueueSource> {
    struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_4_1_1)(); id x_4_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_4_1_3; const void*x_4_1_4; void*x_4_1_5; void*x_4_1_6; int x_4_1_7; in void*x_4_1_8; out unsigned int x_4_1_9/* : ? */; void*x_4_1_10; BOOL x_4_1_11; void*x_4_1_12; } x4; struct _release_objc { } x5; } * _mapEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_4_1_1)(); id x_4_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_4_1_3; const void*x_4_1_4; void*x_4_1_5; void*x_4_1_6; int x_4_1_7; in void*x_4_1_8; out unsigned int x_4_1_9/* : ? */; void*x_4_1_10; BOOL x_4_1_11; void*x_4_1_12; } x4; struct _release_objc { } x5; }*)arg1;
- (bool)isDelayedRenderQueueConsumptionSupported;
- (struct RenderQueue { struct PassDescriptor { struct AttachmentActions { int x_1_2_1; int x_1_2_2; } x_1_1_1[4]; struct AttachmentActions { int x_2_2_1; int x_2_2_2; } x_1_1_2; struct AttachmentActions { int x_3_2_1; int x_3_2_2; } x_1_1_3; } x1; struct vector<ggl::RenderQueue::Pass, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> > { struct Pass {} *x_2_1_1; struct Pass {} *x_2_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> > { struct Pass {} *x_3_2_1; struct StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_2_1_3; } x2; struct vector<ggl::ComputeQueue *, geo::StdAllocator<ggl::ComputeQueue *, ggl::Allocator> > { struct ComputeQueue {} **x_3_1_1; struct ComputeQueue {} **x_3_1_2; struct __compressed_pair<ggl::ComputeQueue **, geo::StdAllocator<ggl::ComputeQueue *, ggl::Allocator> > { struct ComputeQueue {} **x_3_2_1; struct StdAllocator<ggl::ComputeQueue *, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_3_1_3; } x3; }*)renderQueueForTimestamp:(double)arg1;

@end