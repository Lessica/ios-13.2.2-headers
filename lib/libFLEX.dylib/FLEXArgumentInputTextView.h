/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXArgumentInputTextView : FLEXArgumentInputView <UITextViewDelegate> {
    UITextView * _inputTextView;
    UILabel * _placeholderLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *inputPlaceholderText;
@property (nonatomic, retain) UITextView *inputTextView;
@property (nonatomic, readonly) unsigned long long numberOfInputLines;
@property (nonatomic, retain) UILabel *placeholderLabel;
@property (readonly) Class superclass;

+ (id)inputFont;

- (void).cxx_destruct;
- (id)createToolBar;
- (id)initWithArgumentTypeEncoding:(const char *)arg1;
- (id)inputPlaceholderText;
- (id)inputTextView;
- (double)inputTextViewHeight;
- (bool)inputViewIsFirstResponder;
- (void)layoutSubviews;
- (unsigned long long)numberOfInputLines;
- (id)placeholderLabel;
- (void)setInputPlaceholderText:(id)arg1;
- (void)setInputTextView:(id)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDone;
- (void)traitCollectionDidChange:(id)arg1;

@end