/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKNumericalResultView : TLKView {
    TLKMultilineText * _subtitle;
    TLKLabel * _subtitleLabel;
    TLKMultilineText * _title;
    TLKLabel * _titleLabel;
    bool  _topLabelIsVibrant;
}

@property (nonatomic, retain) TLKMultilineText *subtitle;
@property (nonatomic, retain) TLKLabel *subtitleLabel;
@property (nonatomic, retain) TLKMultilineText *title;
@property (nonatomic, retain) TLKLabel *titleLabel;
@property (nonatomic) bool topLabelIsVibrant;

- (void).cxx_destruct;
- (void)observedPropertiesChanged;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopLabelIsVibrant:(bool)arg1;
- (id)setupContentView;
- (id)subtitle;
- (id)subtitleFont;
- (id)subtitleLabel;
- (id)subtitleLabelText;
- (id)title;
- (id)titleFont;
- (id)titleLabel;
- (id)titleLabelText;
- (bool)topLabelIsVibrant;

@end
