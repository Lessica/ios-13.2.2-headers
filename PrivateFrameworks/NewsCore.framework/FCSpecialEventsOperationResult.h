/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSpecialEventsOperationResult : NSObject {
    NSString * _actionTitle;
    NSString * _actionUrlString;
    FCColorGradient * _backgroundColorGradient;
    FCColorGradient * _darkStyleBackgroundColorGradient;
    NSString * _fontName;
    double  _fontSize;
    double  _fontSizeiPad;
    double  _fontTracking;
    double  _fontTrackingiPad;
    NSString * _fontUrlString;
    NSArray * _groupFonts;
    NSString * _micaAnimationFileUrlString;
    NSString * _micaAnimationFileUrlStringiPad;
    bool  _micaEnabled;
    NSDictionary * _specialEventHeadlinesByArticleID;
    NSArray * _specialEventItems;
    FCColor * _titleColor;
    double  _titleOffsetHeight;
    double  _titleOffsetHeightiPad;
    double  _titleOffsetY;
    double  _titleOffsetYiPad;
    NSString * _titleText;
    long long  _type;
}

@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) NSString *actionUrlString;
@property (nonatomic, copy) FCColorGradient *backgroundColorGradient;
@property (nonatomic, readonly, copy) FCColorGradient *darkStyleBackgroundColorGradient;
@property (nonatomic, copy) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic, readonly) double fontSizeiPad;
@property (nonatomic) double fontTracking;
@property (nonatomic, readonly) double fontTrackingiPad;
@property (nonatomic, copy) NSString *fontUrlString;
@property (nonatomic, retain) NSArray *groupFonts;
@property (nonatomic, copy) NSString *micaAnimationFileUrlString;
@property (nonatomic, readonly, copy) NSString *micaAnimationFileUrlStringiPad;
@property (nonatomic, readonly) bool micaEnabled;
@property (nonatomic, retain) NSDictionary *specialEventHeadlinesByArticleID;
@property (nonatomic, retain) NSArray *specialEventItems;
@property (nonatomic, copy) FCColor *titleColor;
@property (nonatomic, readonly) double titleOffsetHeight;
@property (nonatomic, readonly) double titleOffsetHeightiPad;
@property (nonatomic, readonly) double titleOffsetY;
@property (nonatomic, readonly) double titleOffsetYiPad;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)actionTitle;
- (id)actionUrlString;
- (id)backgroundColorGradient;
- (id)darkStyleBackgroundColorGradient;
- (id)fontName;
- (double)fontSize;
- (double)fontSizeiPad;
- (double)fontTracking;
- (double)fontTrackingiPad;
- (id)fontUrlString;
- (id)groupFonts;
- (id)initWithType:(long long)arg1 specialEventsGroupConfig:(id)arg2 specialEventItems:(id)arg3 specialEventHeadlinesByArticleID:(id)arg4;
- (id)micaAnimationFileUrlString;
- (id)micaAnimationFileUrlStringiPad;
- (bool)micaEnabled;
- (void)setActionTitle:(id)arg1;
- (void)setActionUrlString:(id)arg1;
- (void)setBackgroundColorGradient:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontTracking:(double)arg1;
- (void)setFontUrlString:(id)arg1;
- (void)setGroupFonts:(id)arg1;
- (void)setMicaAnimationFileUrlString:(id)arg1;
- (void)setSpecialEventHeadlinesByArticleID:(id)arg1;
- (void)setSpecialEventItems:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setType:(long long)arg1;
- (id)specialEventHeadlinesByArticleID;
- (id)specialEventItems;
- (id)titleColor;
- (double)titleOffsetHeight;
- (double)titleOffsetHeightiPad;
- (double)titleOffsetY;
- (double)titleOffsetYiPad;
- (id)titleText;
- (long long)type;

@end
