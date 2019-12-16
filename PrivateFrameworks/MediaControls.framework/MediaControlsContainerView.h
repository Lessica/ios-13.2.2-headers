/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsContainerView : UIView {
    bool  _empty;
    UIVisualEffectView * _primaryVisualEffectView;
    long long  _style;
    MediaControlsTimeControl * _timeControl;
    MediaControlsTransportStackView * _transportStackView;
}

@property (getter=isEmpty, nonatomic) bool empty;
@property (nonatomic, retain) UIVisualEffectView *primaryVisualEffectView;
@property (nonatomic, retain) MPCPlayerResponse *response;
@property (nonatomic) long long style;
@property (nonatomic, retain) MediaControlsTimeControl *timeControl;
@property (getter=isTimeControlOnScreen, nonatomic) bool timeControlOnScreen;
@property (nonatomic, retain) MediaControlsTransportStackView *transportStackView;

- (void).cxx_destruct;
- (void)_updateStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEmpty;
- (bool)isTimeControlOnScreen;
- (void)layoutSubviews;
- (id)primaryVisualEffectView;
- (id)response;
- (void)setEmpty:(bool)arg1;
- (void)setPrimaryVisualEffectView:(id)arg1;
- (void)setRatingActionSheetDelegate:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTimeControl:(id)arg1;
- (void)setTimeControlOnScreen:(bool)arg1;
- (void)setTransportStackView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)timeControl;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transportStackView;

@end
