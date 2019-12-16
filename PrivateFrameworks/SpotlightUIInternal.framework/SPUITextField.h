/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

@interface SPUITextField : SearchUISearchField {
    long long  _activeInterfaceOrientation;
    SPUIHeaderBlurView * _blurView;
    UIImage * _clearButtonImage;
    bool  _ignoreTokensUpdate;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    SPSearchEntity * _lastSearchEntity;
    NSString * _lastSearchText;
    UIButton * _microphoneButton;
    NSArray * _suggestions;
    UIView * _tintView;
}

@property long long activeInterfaceOrientation;
@property (retain) SPUIHeaderBlurView *blurView;
@property (retain) UIImage *clearButtonImage;
@property (retain) <SearchUITextFieldDelegate> *delegate;
@property bool ignoreTokensUpdate;
@property struct CGSize { double x1; double x2; } imageSize;
@property (retain) SPSearchEntity *lastSearchEntity;
@property (retain) NSString *lastSearchText;
@property (retain) UIButton *microphoneButton;
@property (readonly) SPSearchEntity *searchEntity;
@property (retain) NSArray *suggestions;
@property (retain) UIView *tintView;

+ (Class)_backgroundViewClass;
+ (bool)_isRTL;
+ (id)removeDictationCharacterInString:(id)arg1;

- (void).cxx_destruct;
- (void)_handleKeyUIEvent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_microphoneRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_shiftedBoundsForText:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (long long)activeInterfaceOrientation;
- (id)blurView;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)clearAllTokens;
- (id)clearButtonImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)escapeKeyCommand;
- (bool)ignoreTokensUpdate;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)keyCommands;
- (id)lastSearchEntity;
- (id)lastSearchText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)microphoneButton;
- (bool)needsLandscapeHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)searchEntity;
- (void)setActiveInterfaceOrientation:(long long)arg1;
- (void)setBlurView:(id)arg1;
- (void)setClearButtonImage:(id)arg1;
- (void)setIgnoreTokensUpdate:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastSearchEntity:(id)arg1;
- (void)setLastSearchText:(id)arg1;
- (void)setMicrophoneButton:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setTintView:(id)arg1;
- (id)suggestions;
- (id)textIncludingTokens;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)tintView;
- (void)updateTextRange:(id)arg1;
- (void)updateToken:(id)arg1;
- (void)updateWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 isOnDarkBackground:(bool)arg3;

@end
