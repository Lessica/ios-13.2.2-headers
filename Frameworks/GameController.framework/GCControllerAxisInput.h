/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerAxisInput : GCControllerElement {
    bool  _flipped;
    GCControllerButtonInput * _negative;
    GCControllerButtonInput * _positive;
    float  _value;
    id /* block */  _valueChangedHandler;
}

@property (getter=isFlipped, nonatomic) bool flipped;
@property (nonatomic, retain) GCControllerButtonInput *negative;
@property (nonatomic, retain) GCControllerButtonInput *positive;
@property (nonatomic) float value;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

- (void).cxx_destruct;
- (bool)_setValue:(float)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)description;
- (int)getAndResetTimesPressed;
- (id)initWithCollection:(id)arg1 flipped:(bool)arg2;
- (bool)isAnalog;
- (bool)isFlipped;
- (id)negative;
- (id)positive;
- (void)setFlipped:(bool)arg1;
- (void)setNegative:(id)arg1;
- (void)setPositive:(id)arg1;
- (void)setValue:(float)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (float)value;
- (id /* block */)valueChangedHandler;

@end