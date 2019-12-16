/* Generated by RuntimeBrowser.
 */

@protocol UITextFieldDelegate <NSObject>

@optional

- (bool)textField:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(NSString *)arg3;
- (void)textFieldDidBeginEditing:(UITextField *)arg1;
- (void)textFieldDidChangeSelection:(UITextField *)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg1 reason:(long long)arg2;
- (bool)textFieldShouldBeginEditing:(UITextField *)arg1;
- (bool)textFieldShouldClear:(UITextField *)arg1;
- (bool)textFieldShouldEndEditing:(UITextField *)arg1;
- (bool)textFieldShouldReturn:(UITextField *)arg1;

@end
