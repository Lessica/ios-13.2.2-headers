/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIImageContentContextualEffect : NSObject {
    <_UIImageContentEffect> * _effect;
    <_UIImageContentLayoutSource> * _source;
}

@property (nonatomic, readonly) <_UIImageContentEffect> *effect;
@property (nonatomic, readonly) <_UIImageContentLayoutSource> *source;

+ (id)effect:(id)arg1 withSource:(id)arg2;

- (void).cxx_destruct;
- (id)_renditionWithCGImageProvider:(id /* block */)arg1 size:(struct CGSize { double x1; double x2; })arg2 lazy:(bool)arg3;
- (id)effect;
- (id)source;

@end
