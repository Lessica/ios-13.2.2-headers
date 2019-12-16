/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXAlert : NSObject {
    NSMutableArray * __actions;
    UIAlertController * __controller;
}

@property (nonatomic, readonly) NSMutableArray *_actions;
@property (nonatomic, readonly) UIAlertController *_controller;
@property (nonatomic, readonly) id /* block */ button;
@property (nonatomic, readonly) id /* block */ configuredTextField;
@property (nonatomic, readonly) id /* block */ message;
@property (nonatomic, readonly) id /* block */ textField;
@property (nonatomic, readonly) id /* block */ title;

+ (id)make:(id /* block */)arg1 withStyle:(long long)arg2;
+ (void)make:(id /* block */)arg1 withStyle:(long long)arg2 showFrom:(id)arg3;
+ (id)makeAlert:(id /* block */)arg1;
+ (void)makeAlert:(id /* block */)arg1 showFrom:(id)arg2;
+ (id)makeSheet:(id /* block */)arg1;
+ (void)makeSheet:(id /* block */)arg1 showFrom:(id)arg2;
+ (void)showAlert:(id)arg1 message:(id)arg2 from:(id)arg3;

- (void).cxx_destruct;
- (id)_actions;
- (id)_controller;
- (id /* block */)button;
- (id /* block */)configuredTextField;
- (id)initWithController:(id)arg1;
- (id /* block */)message;
- (id /* block */)textField;
- (id /* block */)title;

@end