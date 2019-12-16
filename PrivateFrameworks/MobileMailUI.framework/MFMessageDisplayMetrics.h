/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@interface MFMessageDisplayMetrics : NSObject {
    double  _baselineToBaselineSpacing;
    double  _firstSeparatorToSubjectBaseline;
    double  _footerViewButtonsAnimationOffset;
    ConversationFooterViewDisplayMetrics * _footerViewDisplayMetrics;
    double  _headerBottomPadding;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    double  _recipientBaselineToFirstSeparator;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    double  _statusIndicatorVerticalSpacing;
    double  _topToSenderBaseline;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) double avatarDiameterForCurrentContentSize;
@property (nonatomic, readonly) double baselineToBaselineSpacing;
@property (nonatomic, readonly) double baselineToBaselineSpacingInConversation;
@property (nonatomic, readonly) double baselineToBaselineSpacingInConversationForMailActionHeader;
@property (nonatomic, readonly) double baselineToBaselineSpacingInMailActionCardHorizontalGroup;
@property (nonatomic, readonly) double bottomSpacingInMailActionCardHorizontalGroup;
@property (nonatomic, readonly) double bottomToLastBaselineInMailActionCardVerticalGroup;
@property (nonatomic, readonly) double cellHeightToStartScroll;
@property (nonatomic, readonly) double conversationHeaderViewCollapsedSuperTitleTopToFirstBaseline;
@property (nonatomic, readonly) double conversationHeaderViewCollapsedTitleBottomToLastBaseline;
@property (nonatomic, readonly) double conversationHeaderViewCollapsedTitleTopToFirstBaseline;
@property (nonatomic, readonly) double conversationHeaderViewExpandedSuperTitleTopToFirstBaseline;
@property (nonatomic, readonly) double conversationHeaderViewExpandedTitleBottomToLastBaseline;
@property (nonatomic, readonly) double conversationHeaderViewExpandedTitleTopToFirstBaseline;
@property (nonatomic, readonly) bool conversationHeaderViewShouldHideCollapsedSuperTitle;
@property (nonatomic, readonly) double estimatedFooterViewHeight;
@property (nonatomic, readonly) double firstSeparatorToSubjectBaseline;
@property (nonatomic) double footerViewButtonsAnimationOffset;
@property (nonatomic, retain) ConversationFooterViewDisplayMetrics *footerViewDisplayMetrics;
@property (nonatomic, readonly) double footerViewTopToBaseline;
@property (nonatomic, readonly) bool hasCompactLayout;
@property (nonatomic, readonly) bool hasGenerousMargins;
@property (nonatomic, readonly) double headerBottomPadding;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic, readonly) double messageBottomPaddingInConversation;
@property (nonatomic, readonly) double messageBottomPaddingInConversationForMailActionHeader;
@property (nonatomic, readonly) double messageTopPaddingInConversation;
@property (nonatomic, readonly) double messageTopPaddingInConversationForMailActionHeader;
@property (nonatomic, readonly) double minHorizontalSpacing;
@property (nonatomic, readonly) bool prefersFlushSeparator;
@property (nonatomic, readonly) double recipientBaselineToFirstSeparator;
@property (nonatomic, readonly) double recipientBaselineToFirstSeparatorInConversation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) double statusIndicatorHorizontalSpacing;
@property (nonatomic, readonly) double statusIndicatorVerticalSpacing;
@property (nonatomic, readonly) double topToFirstBaselineSpacingInMailActionCardVerticalGroup;
@property (nonatomic, readonly) double topToGlyphBaselineInMailActionCardHorizontalGroup;
@property (nonatomic, readonly) double topToSenderBaseline;
@property (nonatomic, readonly) double topToSenderBaselineInConversation;
@property (nonatomic, readonly) double topToSenderBaselineInConversationForMailActionHeader;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (nonatomic, readonly) bool usePhoneLandscapeSymbolConfiguration;

+ (double)avatarDiameter;
+ (id)displayMetricsWithTraitCollection:(id)arg1 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 interfaceOrientation:(long long)arg4;

- (void).cxx_destruct;
- (id)_cachedFontForStyle:(id)arg1;
- (double)_calculateFooterViewButtonsAnimationOffset;
- (double)_scaledFloatWithValue:(double)arg1 fontStyle:(id)arg2;
- (double)_scaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 maximumContentSizeCategory:(id)arg3;
- (double)avatarDiameterForCurrentContentSize;
- (double)baselineToBaselineSpacing;
- (double)baselineToBaselineSpacingInConversation;
- (double)baselineToBaselineSpacingInConversationForMailActionHeader;
- (double)baselineToBaselineSpacingInMailActionCardHorizontalGroup;
- (double)bottomSpacingInMailActionCardHorizontalGroup;
- (double)bottomToLastBaselineInMailActionCardVerticalGroup;
- (double)cellHeightToStartScroll;
- (double)conversationHeaderViewCollapsedSuperTitleTopToFirstBaseline;
- (double)conversationHeaderViewCollapsedTitleBottomToLastBaseline;
- (double)conversationHeaderViewCollapsedTitleTopToFirstBaseline;
- (double)conversationHeaderViewExpandedSuperTitleTopToFirstBaseline;
- (double)conversationHeaderViewExpandedTitleBottomToLastBaseline;
- (double)conversationHeaderViewExpandedTitleTopToFirstBaseline;
- (bool)conversationHeaderViewShouldHideCollapsedSuperTitle;
- (id)description;
- (double)estimatedFooterViewHeight;
- (double)firstSeparatorToSubjectBaseline;
- (id)fontCacheKeyPrefix;
- (double)footerViewButtonsAnimationOffset;
- (id)footerViewDisplayMetrics;
- (double)footerViewTopToBaseline;
- (bool)hasCompactLayout;
- (bool)hasGenerousMargins;
- (unsigned long long)hash;
- (double)headerBottomPadding;
- (bool)isEqual:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (double)messageBottomPaddingInConversation;
- (double)messageBottomPaddingInConversationForMailActionHeader;
- (double)messageTopPaddingInConversation;
- (double)messageTopPaddingInConversationForMailActionHeader;
- (double)minHorizontalSpacing;
- (bool)prefersFlushSeparator;
- (double)recipientBaselineToFirstSeparator;
- (double)recipientBaselineToFirstSeparatorInConversation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setFooterViewButtonsAnimationOffset:(double)arg1;
- (void)setFooterViewDisplayMetrics:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTraitCollection:(id)arg1;
- (double)statusIndicatorHorizontalSpacing;
- (double)statusIndicatorVerticalSpacing;
- (double)topToFirstBaselineSpacingInMailActionCardVerticalGroup;
- (double)topToGlyphBaselineInMailActionCardHorizontalGroup;
- (double)topToSenderBaseline;
- (double)topToSenderBaselineInConversation;
- (double)topToSenderBaselineInConversationForMailActionHeader;
- (id)traitCollection;
- (bool)usePhoneLandscapeSymbolConfiguration;

@end
