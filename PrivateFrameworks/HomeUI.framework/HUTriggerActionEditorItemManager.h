/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTriggerActionEditorItemManager : HFSimpleItemManager {
    HFStaticItem * _addShortcutHeader;
    HFStaticItem * _addShortcutItem;
    HFStaticItem * _gridItem;
    HUInstructionsItem * _instructionsItem;
}

@property (nonatomic, retain) HFStaticItem *addShortcutHeader;
@property (nonatomic, retain) HFStaticItem *addShortcutItem;
@property (nonatomic, retain) HFStaticItem *gridItem;
@property (nonatomic, retain) HUInstructionsItem *instructionsItem;

- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)addShortcutHeader;
- (id)addShortcutItem;
- (id)gridItem;
- (id)initWithInstructionsItem:(id)arg1 andDelegate:(id)arg2 showShortcutItem:(bool)arg3;
- (id)instructionsItem;
- (void)setAddShortcutHeader:(id)arg1;
- (void)setAddShortcutItem:(id)arg1;
- (void)setGridItem:(id)arg1;
- (void)setInstructionsItem:(id)arg1;

@end
