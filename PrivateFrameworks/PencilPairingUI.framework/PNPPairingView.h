/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

@interface PNPPairingView : UIView <PNPChargingStatusViewHosting, PNPDeviceStateConfigurable, PNPWizardViewDelegate> {
    PNPChargingStatusView * _chargingStatusView;
    <PNPPairingViewDelegate> * _delegate;
    PNPDeviceState * _deviceState;
    bool  _finishedWizardTransition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pencilSpinningRect;
    PNPPencilView * _pencilView;
    bool  _showWizardContents;
    bool  _showsChargingStatusView;
    unsigned long long  _state;
    PNPWizardView * _wizardView;
}

@property (nonatomic, retain) PNPChargingStatusView *chargingStatusView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PNPPairingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PNPPencilView *pencilView;
@property (nonatomic) bool showWizardContents;
@property (nonatomic) bool showsChargingStatusView;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_intrinsicContentSizeForState:(unsigned long long)arg1 deviceState:(id)arg2;
- (struct CGSize { double x1; double x2; })_pencilSizeForState:(unsigned long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_pencilTransformForState:(unsigned long long)arg1 deviceState:(id)arg2;
- (id)chargingStatusView;
- (id)delegate;
- (id)deviceState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)pencilView;
- (void)setChargingStatusView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)setShowWizardContents:(bool)arg1;
- (void)setShowsChargingStatusView:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)showWizardContents;
- (bool)showsChargingStatusView;
- (unsigned long long)state;
- (void)transitionToWizard;
- (void)wizardTransitionFinished;
- (void)wizardViewRequestsDismiss:(id)arg1;

@end
