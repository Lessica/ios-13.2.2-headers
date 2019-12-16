/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAttachmentBrickTextViewV2 : UIView {
    bool  _detail1Dark;
    NSString * _detail1String;
    ICAttachmentBrickLabelV2 * _detail1View;
    NSString * _detail2String;
    ICAttachmentBrickLabelV2 * _detail2View;
    bool  _disableVibrancy;
    NSLayoutConstraint * _textBoxBottomConstraint;
    UILayoutGuide * _textBoxLayoutGuide;
    NSLayoutConstraint * _textBoxLeadingConstraint;
    NSLayoutConstraint * _textBoxTopConstraint;
    NSLayoutConstraint * _textBoxTrailingConstraint;
    bool  _titleLight;
    NSString * _titleString;
    ICAttachmentBrickLabelV2 * _titleView;
    bool  _vibrant;
}

@property (nonatomic) bool detail1Dark;
@property (nonatomic, copy) NSString *detail1String;
@property (nonatomic, retain) ICAttachmentBrickLabelV2 *detail1View;
@property (nonatomic, copy) NSString *detail2String;
@property (nonatomic, retain) ICAttachmentBrickLabelV2 *detail2View;
@property (nonatomic) bool disableVibrancy;
@property (nonatomic, retain) NSLayoutConstraint *textBoxBottomConstraint;
@property (nonatomic, retain) UILayoutGuide *textBoxLayoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *textBoxLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *textBoxTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *textBoxTrailingConstraint;
@property (nonatomic) bool titleLight;
@property (nonatomic, copy) NSString *titleString;
@property (nonatomic, retain) ICAttachmentBrickLabelV2 *titleView;
@property (nonatomic) bool vibrant;

- (void).cxx_destruct;
- (bool)allowsVibrancy;
- (void)contentSizeCategoryDidChange;
- (bool)detail1Dark;
- (id)detail1String;
- (id)detail1View;
- (id)detail2String;
- (id)detail2View;
- (void)didMoveToWindow;
- (bool)disableVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDetail1Dark:(bool)arg1;
- (void)setDetail1String:(id)arg1;
- (void)setDetail1View:(id)arg1;
- (void)setDetail2String:(id)arg1;
- (void)setDetail2View:(id)arg1;
- (void)setDisableVibrancy:(bool)arg1;
- (void)setTextBoxBottomConstraint:(id)arg1;
- (void)setTextBoxLayoutGuide:(id)arg1;
- (void)setTextBoxLeadingConstraint:(id)arg1;
- (void)setTextBoxTopConstraint:(id)arg1;
- (void)setTextBoxTrailingConstraint:(id)arg1;
- (void)setTitleLight:(bool)arg1;
- (void)setTitleString:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setVibrant:(bool)arg1;
- (id)textBoxBottomConstraint;
- (id)textBoxLayoutGuide;
- (id)textBoxLeadingConstraint;
- (id)textBoxTopConstraint;
- (id)textBoxTrailingConstraint;
- (bool)titleLight;
- (id)titleString;
- (id)titleView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMargins;
- (void)updateTextColors;
- (void)updateTextFonts;
- (void)updateTextLayout;
- (bool)vibrant;

@end
