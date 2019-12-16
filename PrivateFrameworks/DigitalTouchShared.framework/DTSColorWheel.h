/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface DTSColorWheel : UIView {
    double  _colorWheelRadius;
    <DTSColorWheelDelegate> * _delegate;
    UIButton * _doneButton;
    double  _gradientWidth;
    double  _hueRotation;
    UIView * _pickerCircle;
    double  _pickerDiameter;
    double  _pickerRotation;
}

@property (nonatomic) double colorWheelRadius;
@property (nonatomic) <DTSColorWheelDelegate> *delegate;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic) double gradientWidth;
@property (nonatomic) double hueRotation;
@property (nonatomic, retain) UIView *pickerCircle;
@property (nonatomic) double pickerDiameter;
@property (nonatomic) double pickerRotation;

- (void).cxx_destruct;
- (void)beganTouches:(id)arg1;
- (double)colorWheelRadius;
- (void)createDoneButtonWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)delegate;
- (id)doneButton;
- (void)doneButtonTapped:(id)arg1;
- (void)finishedTouches;
- (double)gradientWidth;
- (double)hueRotation;
- (id)pickerCircle;
- (double)pickerDiameter;
- (double)pickerRotation;
- (id)pickerViewHighlightedColor;
- (void)setColorWheelRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setGradientWidth:(double)arg1;
- (void)setHueRotation:(double)arg1;
- (void)setPickerCircle:(id)arg1;
- (void)setPickerDiameter:(double)arg1;
- (void)setPickerRotation:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updatePickerPositionForPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
