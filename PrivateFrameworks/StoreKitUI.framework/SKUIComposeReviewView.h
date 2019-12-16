/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate> {
    long long  _currentBodyLength;
    <SKUIComposeReviewViewDelegate> * _delegate;
    SKUIComposeReviewHeaderView * _headerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    unsigned int  _loading;
    SULoadingView * _loadingView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _remoteKeyboardFrame;
    SKUIReviewMetadata * _review;
    UIScrollView * _scrollView;
    long long  _style;
    SUTextContentView * _textContentView;
}

@property (nonatomic, readonly) long long composeReviewStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIComposeReviewViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic) float rating;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)_body;
- (void)_delayedUpdateReviewLength;
- (bool)_isReviewTextOptional;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (void)_layoutComposeView;
- (void)_layoutLoadingView;
- (void)_remoteKeyboardVisibilityDidChangeNotification:(id)arg1;
- (id)_reviewPlaceholder;
- (void)_showComposeView;
- (void)_showLoadingView;
- (void)_updateContentSize;
- (void)composeHeaderViewValidityDidChange:(id)arg1;
- (void)composeHeaderViewValuesDidChange:(id)arg1;
- (long long)composeReviewStyle;
- (id)copyReview;
- (void)dealloc;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (bool)isLoading;
- (bool)isValid;
- (void)layoutSubviews;
- (float)rating;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLoading:(bool)arg1;
- (void)setRating:(float)arg1;
- (void)setReview:(id)arg1;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)textContentViewDidChange:(id)arg1;

@end
