/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFModuleAppearance : NSObject {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    double  _borderWidth;
    double  _cornerRadius;
    UIColor * _headingButtonColor;
    UIColor * _parametersBackgroundColor;
    UIColor * _parametersHighlightedColor;
    UIColor * _parentBackgroundColor;
    UIColor * _progressBackgroundColor;
    UIColor * _progressShadowColor;
    UIColor * _separatorColor;
    UIColor * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowOpacity;
    double  _shadowRadius;
    UIFont * _summaryFont;
    UIFont * _unpopulatedSummaryFont;
    UIColor * _warningSeparatorColor;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) double borderWidth;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) UIColor *headingButtonColor;
@property (nonatomic, readonly) UIColor *parametersBackgroundColor;
@property (nonatomic, readonly) UIColor *parametersHighlightedColor;
@property (nonatomic, readonly) UIColor *parentBackgroundColor;
@property (nonatomic, readonly) UIColor *progressBackgroundColor;
@property (nonatomic, readonly) UIColor *progressShadowColor;
@property (nonatomic, readonly) UIColor *separatorColor;
@property (nonatomic, readonly) UIColor *shadowColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic, readonly) double shadowOpacity;
@property (nonatomic, readonly) double shadowRadius;
@property (nonatomic, readonly) UIFont *summaryFont;
@property (nonatomic, readonly) UIFont *unpopulatedSummaryFont;
@property (nonatomic, readonly) UIColor *warningSeparatorColor;

+ (id)commentAppearance;
+ (id)defaultAppearance;
+ (id)lightAppearance;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderColor;
- (double)borderWidth;
- (double)cornerRadius;
- (unsigned long long)hash;
- (id)headingButtonColor;
- (bool)isEqual:(id)arg1;
- (id)parametersBackgroundColor;
- (id)parametersHighlightedColor;
- (id)parentBackgroundColor;
- (id)progressBackgroundColor;
- (id)progressShadowColor;
- (id)separatorColor;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (double)shadowRadius;
- (id)summaryFont;
- (id)unpopulatedSummaryFont;
- (id)warningSeparatorColor;

@end