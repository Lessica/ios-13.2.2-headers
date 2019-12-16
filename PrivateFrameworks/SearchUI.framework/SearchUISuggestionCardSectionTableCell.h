/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISuggestionCardSectionTableCell : SearchUICardSectionTableCell {
    int  _actualSectionLocation;
    bool  _sectionHasHeader;
}

@property int actualSectionLocation;
@property (nonatomic) bool sectionHasHeader;

- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)_insetsBackground;
- (bool)_isUsingOldStyleMultiselection;
- (void)_setShouldHaveFullLengthBottomSeparator:(bool)arg1;
- (void)_setShouldHaveFullLengthTopSeparator:(bool)arg1;
- (bool)_showSeparatorAtTopOfSection;
- (int)actualSectionLocation;
- (void)didMoveToWindow;
- (bool)isDark;
- (bool)sectionHasHeader;
- (int)sectionLocation;
- (void)setActualSectionLocation:(int)arg1;
- (void)setSectionHasHeader:(bool)arg1;
- (void)setSectionLocation:(int)arg1 animated:(bool)arg2;
- (bool)shouldDrawBackgroundColor;
- (bool)shouldDrawFullLengthSeparatorForSectionLocation:(int)arg1;
- (void)tlk_updateForAppearance:(id)arg1;

@end
