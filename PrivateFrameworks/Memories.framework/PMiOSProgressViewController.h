/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMiOSProgressViewController : UIViewController <UIGestureRecognizerDelegate> {
    UIButton * _cancelButton;
    NSLayoutConstraint * _cancelButtonLeadingConstraint;
    NSLayoutConstraint * _cancelButtonTopConstraint;
    unsigned long long  _cancelStyle;
    NSLayoutConstraint * _horizontalCenteredLabel;
    UILabel * _label;
    NSLayoutConstraint * _nonCompactRoundProgressCenterY;
    PMRoundProgressView * _progressView;
    bool  _showCancelButton;
    NSLayoutConstraint * _verticalCenteredLabel;
    NSLayoutConstraint * _verticalProgressLabelSpace;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) NSLayoutConstraint *cancelButtonLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *cancelButtonTopConstraint;
@property (nonatomic) unsigned long long cancelStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *horizontalCenteredLabel;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSLayoutConstraint *nonCompactRoundProgressCenterY;
@property (nonatomic) float progress;
@property (nonatomic, retain) PMRoundProgressView *progressView;
@property (nonatomic) bool showCancelButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *verticalCenteredLabel;
@property (nonatomic, retain) NSLayoutConstraint *verticalProgressLabelSpace;

- (void).cxx_destruct;
- (void)attachCancelButton;
- (id)cancelButton;
- (id)cancelButtonLeadingConstraint;
- (id)cancelButtonTopConstraint;
- (unsigned long long)cancelStyle;
- (id)description;
- (id)horizontalCenteredLabel;
- (id)label;
- (void)loadView;
- (id)nonCompactRoundProgressCenterY;
- (float)progress;
- (id)progressView;
- (void)setCancelButton:(id)arg1;
- (void)setCancelButtonLeadingConstraint:(id)arg1;
- (void)setCancelButtonTopConstraint:(id)arg1;
- (void)setCancelStyle:(unsigned long long)arg1;
- (void)setCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)setDescription:(id)arg1;
- (void)setHorizontalCenteredLabel:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setNonCompactRoundProgressCenterY:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressView:(id)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setVerticalCenteredLabel:(id)arg1;
- (void)setVerticalProgressLabelSpace:(id)arg1;
- (bool)showCancelButton;
- (void)updateLayoutWithTraitCollection:(id)arg1;
- (id)verticalCenteredLabel;
- (id)verticalProgressLabelSpace;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
