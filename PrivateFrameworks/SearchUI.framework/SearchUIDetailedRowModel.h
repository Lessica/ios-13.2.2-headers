/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel {
    SFActionItem * _action;
    NSString * _applicationBundleIdentifier;
    NSArray * _contactIdentifiersNeeded;
    NSArray * _details;
    SFImage * _fallbackImage;
    SFRichText * _footnote;
    NSString * _footnoteButtonText;
    bool  _isLocalApplicationResult;
    SFButton * _leadingButton;
    SFImage * _leadingImage;
    bool  _preventThumbnailImageScaling;
    SFText * _secondaryTitle;
    SFImage * _secondaryTitleImage;
    bool  _secondaryTitleIsDetached;
    SFRichText * _title;
    SFFormattedText * _trailingBottomText;
    SFFormattedText * _trailingMiddleText;
    SFFormattedText * _trailingTopText;
}

@property (retain) SFActionItem *action;
@property (retain) NSString *applicationBundleIdentifier;
@property (retain) NSArray *contactIdentifiersNeeded;
@property (retain) NSArray *details;
@property (retain) SFImage *fallbackImage;
@property (retain) SFRichText *footnote;
@property (retain) NSString *footnoteButtonText;
@property bool isLocalApplicationResult;
@property (retain) SFButton *leadingButton;
@property (retain) SFImage *leadingImage;
@property bool preventThumbnailImageScaling;
@property (retain) SFText *secondaryTitle;
@property (retain) SFImage *secondaryTitleImage;
@property bool secondaryTitleIsDetached;
@property (retain) SFRichText *title;
@property (retain) SFFormattedText *trailingBottomText;
@property (retain) SFFormattedText *trailingMiddleText;
@property (retain) SFFormattedText *trailingTopText;

+ (bool)urlIsDraggable:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (id)applicationBundleIdentifier;
- (id)contactIdentifiers;
- (id)contactIdentifiersNeeded;
- (Class)customCardSectionViewClass;
- (id)descriptionText;
- (id)details;
- (id)dragAppBundleID;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)fallbackImage;
- (void)fillOutPropertiesForCardSection:(id)arg1;
- (id)footnote;
- (id)footnoteButtonText;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(bool)arg3 queryId:(unsigned long long)arg4;
- (bool)isContact;
- (bool)isDraggable;
- (bool)isLocalApplicationResult;
- (bool)isTappable;
- (id)leadingButton;
- (id)leadingImage;
- (bool)preventThumbnailImageScaling;
- (id)punchouts;
- (id)richTextFromText:(id)arg1;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (bool)secondaryTitleIsDetached;
- (int)separatorStyle;
- (void)setAction:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setContactIdentifiersNeeded:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setFallbackImage:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setFootnoteButtonText:(id)arg1;
- (void)setIsLocalApplicationResult:(bool)arg1;
- (void)setLeadingButton:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setSecondaryTitleIsDetached:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrailingBottomText:(id)arg1;
- (void)setTrailingMiddleText:(id)arg1;
- (void)setTrailingTopText:(id)arg1;
- (id)title;
- (id)trailingBottomText;
- (id)trailingMiddleText;
- (id)trailingTopText;

@end
