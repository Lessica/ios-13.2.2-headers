/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXIvarEditorViewController : FLEXMutableFieldEditorViewController <FLEXArgumentInputViewDelegate> {
    struct objc_ivar { } * _ivar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct objc_ivar { }*ivar;
@property (readonly) Class superclass;

+ (bool)canEditIvar:(struct objc_ivar { }*)arg1 currentValue:(id)arg2;

- (void)actionButtonPressed:(id)arg1;
- (void)argumentInputViewValueDidChange:(id)arg1;
- (void)getterButtonPressed:(id)arg1;
- (id)initWithTarget:(id)arg1 ivar:(struct objc_ivar { }*)arg2;
- (struct objc_ivar { }*)ivar;
- (void)setIvar:(struct objc_ivar { }*)arg1;
- (void)viewDidLoad;

@end