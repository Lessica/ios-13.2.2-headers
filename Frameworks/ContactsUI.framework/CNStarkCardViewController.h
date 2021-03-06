/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNStarkCardViewController : UIViewController <CNContactContentViewControllerDelegate> {
    CNStarkActionsController * _actionsController;
    CNAvatarViewController * _avatarViewController;
    CNContact * _contact;
    NSArray * _displayedContactProperties;
    NSArray * _layoutConstraints;
    CNStarkNameViewController * _nameViewController;
}

@property (nonatomic, readonly) CNStarkActionsController *actionsController;
@property (nonatomic, readonly) CNAvatarViewController *avatarViewController;
@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedContactProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, readonly) CNStarkNameViewController *nameViewController;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;
+ (id)starkCardControllerForCalendarEventWithContact:(id)arg1;

- (void).cxx_destruct;
- (id)actionsController;
- (id)avatarViewController;
- (id)contact;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (id)displayedContactProperties;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 displayedContactProperties:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)layoutConstraints;
- (id)nameViewController;
- (void)resetLayoutConstraints;
- (void)setLayoutConstraints:(id)arg1;
- (void)setupLayoutConstraints;
- (void)setupViewControllers;
- (void)showMore:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateNavigationItems;
- (void)updateViewConstraints;
- (void)updateViewControllers;
- (void)viewDidLoad;

@end
