/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver> {
    struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKRouteContext *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _routeContext;
    struct LabelTransitSupport { int (**x1)(); int (**x2)(); struct LabelManager {} *x3; struct shared_ptr<md::DataOverrideManager> { struct DataOverrideManager {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_5_1_1)(); id x_5_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_5_1_3; const void*x_5_1_4; void*x_5_1_5; void*x_5_1_6; int x_5_1_7; in void*x_5_1_8; out unsigned int x_5_1_9/* : ? */; void*x_5_1_10; BOOL x_5_1_11; void*x_5_1_12; } x5; struct _release_objc { } x6; } * _transitSupport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRouteContext:(id)arg1 transitSupport:(struct LabelTransitSupport { int (**x1)(); int (**x2)(); struct LabelManager {} *x3; struct shared_ptr<md::DataOverrideManager> { struct DataOverrideManager {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_5_1_1)(); id x_5_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_5_1_3; const void*x_5_1_4; void*x_5_1_5; void*x_5_1_6; int x_5_1_7; in void*x_5_1_8; out unsigned int x_5_1_9/* : ? */; void*x_5_1_10; BOOL x_5_1_11; void*x_5_1_12; } x5; struct _release_objc { } x6; }*)arg2;
- (void)routeContextStateDidChange:(id)arg1;

@end
