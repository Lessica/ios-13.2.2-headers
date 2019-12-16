/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVMicaPackage : NSObject <CAMLParserDelegate, CAStateControllerDelegate> {
    long long  _layoutDirection;
    NSString * _packageName;
    CALayer * _rootLayer;
    NSString * _state;
    CAStateController * _stateController;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _unscaledSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, readonly) NSString *packageName;
@property (nonatomic, retain) CALayer *rootLayer;
@property (nonatomic, readonly, copy) NSString *state;
@property (nonatomic, readonly) CAStateController *stateController;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic) struct CGSize { double x1; double x2; } unscaledSize;

+ (void)asynchronouslyPrepareMicaPackageWithName:(id)arg1 layoutDirection:(long long)arg2 completion:(id /* block */)arg3;
+ (id)classSubstitions;

- (void).cxx_destruct;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)_loadRootLayerIfNeeded;
- (id)_recursivelyFindSublayerWithName:(id)arg1 rootLayer:(id)arg2;
- (void)_recursivelyRemoveCompositingFiltersWithName:(id)arg1 rootLayer:(id)arg2;
- (void)_recursivelySetFillColor:(struct CGColor { }*)arg1 rootLayer:(id)arg2;
- (void)_setState:(id)arg1;
- (id)availableStates;
- (id)availableStatesOnLayer:(id)arg1;
- (id)initWithPackageName:(id)arg1 layoutDirection:(long long)arg2;
- (long long)layoutDirection;
- (id)packageName;
- (void)removeCompositingFiltersWithName:(id)arg1;
- (id)rootLayer;
- (void)setLayoutDirection:(long long)arg1;
- (void)setRootLayer:(id)arg1;
- (void)setState:(id)arg1 color:(struct CGColor { }*)arg2;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUnscaledSize:(struct CGSize { double x1; double x2; })arg1;
- (id)state;
- (id)stateController;
- (id)sublayerWithName:(id)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (void)transitionToStateWithName:(id)arg1;
- (void)transitionToStateWithName:(id)arg1 onLayer:(id)arg2;
- (struct CGSize { double x1; double x2; })unscaledSize;

@end
