/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXAlertAction : NSObject {
    UIAlertAction * __action;
    UIAlertController * __controller;
    bool  __disable;
    id /* block */  __handler;
    long long  __style;
    NSString * __title;
}

@property (nonatomic, retain) UIAlertAction *_action;
@property (nonatomic, retain) UIAlertController *_controller;
@property (nonatomic) bool _disable;
@property (nonatomic, copy) id /* block */ _handler;
@property (nonatomic) long long _style;
@property (nonatomic, retain) NSString *_title;
@property (nonatomic, readonly) UIAlertAction *action;
@property (nonatomic, readonly) id /* block */ cancelStyle;
@property (nonatomic, readonly) id /* block */ destructiveStyle;
@property (nonatomic, readonly) id /* block */ enabled;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) id /* block */ title;

- (void).cxx_destruct;
- (id)_action;
- (id)_controller;
- (bool)_disable;
- (id /* block */)_handler;
- (long long)_style;
- (id)_title;
- (id)action;
- (id /* block */)cancelStyle;
- (id /* block */)destructiveStyle;
- (id /* block */)enabled;
- (id /* block */)handler;
- (void)set_action:(id)arg1;
- (void)set_controller:(id)arg1;
- (void)set_disable:(bool)arg1;
- (void)set_handler:(id /* block */)arg1;
- (void)set_style:(long long)arg1;
- (void)set_title:(id)arg1;
- (id /* block */)title;

@end
