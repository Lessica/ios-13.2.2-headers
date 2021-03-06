/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPickerViewController : UIViewController <CNContactPickerContentDelegate, _UIRemoteViewControllerContaining> {
    bool  _allowsCancel;
    bool  _allowsDeletion;
    bool  _allowsEditing;
    bool  _autocloses;
    NSString * _bannerTitle;
    NSString * _bannerValue;
    long long  _behavior;
    long long  _cardActions;
    bool  _defaultViewControllerVisible;
    <CNContactPickerDelegate> * _delegate;
    NSArray * _displayedPropertyKeys;
    FAFamilyMember * _familyMember;
    bool  _hidesPromptInLandscape;
    bool  _hidesSearchableSources;
    bool  _ignoreViewWillBePresented;
    bool  _ignoresParentalRestrictions;
    long long  _mode;
    bool  _onlyRealContacts;
    NSPredicate * _predicateForEnablingContact;
    NSPredicate * _predicateForSelectionOfContact;
    NSPredicate * _predicateForSelectionOfProperty;
    NSArray * _prohibitedPropertyKeys;
    NSString * _prompt;
    CNContact * _scrollContact;
    UIViewController<CNContactPickerContentViewController> * _viewController;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic) bool allowsCancel;
@property (nonatomic) bool allowsDeletion;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool autocloses;
@property (nonatomic, copy) NSString *bannerTitle;
@property (nonatomic, copy) NSString *bannerValue;
@property (nonatomic) long long behavior;
@property (nonatomic) long long cardActions;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultViewControllerVisible, readonly) bool defaultViewControllerVisible;
@property (nonatomic) <CNContactPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayedPropertyKeys;
@property (nonatomic, retain) FAFamilyMember *familyMember;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesPromptInLandscape;
@property (nonatomic) bool hidesSearchableSources;
@property (nonatomic) bool ignoresParentalRestrictions;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic) bool onlyRealContacts;
@property (nonatomic, copy) NSPredicate *predicateForEnablingContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfProperty;
@property (nonatomic, retain) NSArray *prohibitedPropertyKeys;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, retain) CNContact *scrollContact;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController<CNContactPickerContentViewController> *viewController;

- (void).cxx_destruct;
- (void)_checkConsistencyFromOptions:(id)arg1;
- (id)_containedRemoteViewController;
- (void)_endDelayingPresentation;
- (bool)_isDelayingPresentation;
- (id)_pickerPresentedViewController;
- (void)_prepareViewController;
- (void)_setViewController:(id)arg1;
- (void)_setupViewController;
- (bool)_shouldBeOutOfProcess;
- (void)_viewWillBePresented;
- (bool)allowsCancel;
- (bool)allowsDeletion;
- (bool)allowsEditing;
- (bool)autocloses;
- (id)bannerTitle;
- (id)bannerValue;
- (long long)behavior;
- (long long)cardActions;
- (void)closePickerIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)displayedPropertyKeys;
- (id)familyMember;
- (bool)hidesPromptInLandscape;
- (bool)hidesSearchableSources;
- (bool)ignoresParentalRestrictions;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidateSelectionAnimated:(bool)arg1;
- (bool)isDefaultViewControllerVisible;
- (long long)mode;
- (id)navigationController;
- (bool)onlyRealContacts;
- (void)pickerDidCancel;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)popToDefaultViewController:(bool)arg1;
- (id)predicateForEnablingContact;
- (id)predicateForSelectionOfContact;
- (id)predicateForSelectionOfProperty;
- (id)prohibitedPropertyKeys;
- (id)prompt;
- (id)scrollContact;
- (void)scrollToClosestContactMatching:(id)arg1;
- (void)setAllowsCancel:(bool)arg1;
- (void)setAllowsDeletion:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAutocloses:(bool)arg1;
- (void)setBannerTitle:(id)arg1;
- (void)setBannerValue:(id)arg1;
- (void)setBehavior:(long long)arg1;
- (void)setCardActions:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedPropertyKeys:(id)arg1;
- (void)setFamilyMember:(id)arg1;
- (void)setHidesPromptInLandscape:(bool)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (void)setIgnoresParentalRestrictions:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setOnlyRealContacts:(bool)arg1;
- (void)setPredicateForEnablingContact:(id)arg1;
- (void)setPredicateForSelectionOfContact:(id)arg1;
- (void)setPredicateForSelectionOfProperty:(id)arg1;
- (void)setProhibitedPropertyKeys:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setScrollContact:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
