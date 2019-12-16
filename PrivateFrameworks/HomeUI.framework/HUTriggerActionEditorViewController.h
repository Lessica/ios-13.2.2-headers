/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTriggerActionEditorViewController : HUInstructionsTableViewController <WFHomeComposeViewControllerDelegate> {
    HUForwardingTriggerActionBuilderDelegate * _forwardingTriggerActionBuilderDelegate;
}

@property (nonatomic, readonly) HUTriggerActionEditorContentViewController *actionEditorContentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;

+ (bool)adoptsDefaultGridLayoutMargins;
+ (id)createTriggerActionEditorViewControllerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 andTriggerActionBuilderEditorDelegate:(id)arg3;

- (void).cxx_destruct;
- (void)_informUserShortcutsAreNotSupportedInThisHome;
- (void)_preloadShortcutHomeManager;
- (void)_showShortcutsEditor;
- (void)_showShortcutsEditorIfPossible;
- (id)actionEditorContentViewController;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (id)forwardingTriggerActionBuilderDelegate;
- (void)homeComposeViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3;
- (id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setForwardingTriggerActionBuilderDelegate:(id)arg1;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)triggerBuilder;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end
