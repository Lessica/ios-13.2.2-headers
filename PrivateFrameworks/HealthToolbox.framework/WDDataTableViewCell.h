/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDDataTableViewCell : UITableViewCell {
    UIFont * _bodyFont;
    NSString * _dateString;
    NSString * _displayValue;
    bool  _displayValueAdjustsFontSizeToFitWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    HKSource * _source;
}

@property (nonatomic, retain) UIFont *bodyFont;
@property (nonatomic, retain) NSString *dateString;
@property (nonatomic, retain) NSString *displayValue;
@property (nonatomic) bool displayValueAdjustsFontSizeToFitWidth;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, retain) HKSource *source;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setupUI;
- (void)_updateMarginInsets;
- (id)bodyFont;
- (id)dateString;
- (void)dealloc;
- (id)displayValue;
- (bool)displayValueAdjustsFontSizeToFitWidth;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)setBodyFont:(id)arg1;
- (void)setDateString:(id)arg1;
- (void)setDisplayValue:(id)arg1;
- (void)setDisplayValueAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
