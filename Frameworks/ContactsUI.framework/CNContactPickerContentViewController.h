/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController> {
    bool  _allowsCancel;
    bool  _allowsDeletion;
    bool  _allowsEditing;
    NSString * _bannerTitle;
    NSString * _bannerValue;
    long long  _cardActions;
    bool  _clientHasContactsAccess;
    bool  _clientWantsMultipleContacts;
    bool  _clientWantsMultipleProperties;
    bool  _clientWantsSingleContact;
    bool  _clientWantsSingleProperty;
    CNContactNavigationController * _contactNavigationController;
    NSMutableArray * _contactProperties;
    CNContactStoreDataSource * _dataSource;
    <CNContactPickerContentDelegate> * _delegate;
    NSArray * _displayedPropertyKeys;
    FAFamilyMember * _familyMember;
    bool  _hidesPromptInLandscape;
    bool  _hidesSearchableSources;
    bool  _ignoresParentalRestrictions;
    CNManagedConfiguration * _managedConfiguration;
    bool  _onlyRealContacts;
    NSPredicate * _predicateForEnablingContact;
    NSPredicate * _predicateForSelectionOfContact;
    NSPredicate * _predicateForSelectionOfProperty;
    NSArray * _prohibitedPropertyKeys;
    NSString * _prompt;
}

@property (nonatomic) bool allowsCancel;
@property (nonatomic) bool allowsDeletion;
@property (nonatomic) bool allowsEditing;
@property (nonatomic, copy) NSString *bannerTitle;
@property (nonatomic, copy) NSString *bannerValue;
@property (nonatomic) long long cardActions;
@property (nonatomic) bool clientHasContactsAccess;
@property (nonatomic) bool clientWantsMultipleContacts;
@property (nonatomic) bool clientWantsMultipleProperties;
@property (nonatomic) bool clientWantsSingleContact;
@property (nonatomic) bool clientWantsSingleProperty;
@property (nonatomic, retain) CNContactNavigationController *contactNavigationController;
@property (nonatomic, retain) NSMutableArray *contactProperties;
@property (nonatomic, retain) CNContactStoreDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactPickerContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayedPropertyKeys;
@property (nonatomic, retain) FAFamilyMember *familyMember;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesPromptInLandscape;
@property (nonatomic) bool hidesSearchableSources;
@property (nonatomic) bool ignoresParentalRestrictions;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic) bool onlyRealContacts;
@property (nonatomic, copy) NSPredicate *predicateForEnablingContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfProperty;
@property (nonatomic, retain) NSArray *prohibitedPropertyKeys;
@property (nonatomic, copy) NSString *prompt;
@property (readonly) Class superclass;

+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;

- (void).cxx_destruct;
- (void)_selectedContact:(id)arg1;
- (void)_selectedContacts:(id)arg1;
- (void)_selectedProperties:(id)arg1;
- (void)_selectedProperty:(id)arg1;
- (void)_updatePromptWithViewSize:(struct CGSize { double x1; double x2; })arg1 transitionCoordinator:(id)arg2;
- (id)_validatePredicatesWithError:(id*)arg1;
- (bool)allowsCancel;
- (bool)allowsDeletion;
- (bool)allowsEditing;
- (id)bannerTitle;
- (id)bannerValue;
- (long long)cardActions;
- (bool)clientHasContactsAccess;
- (bool)clientWantsMultipleContacts;
- (bool)clientWantsMultipleProperties;
- (bool)clientWantsSingleContact;
- (bool)clientWantsSingleProperty;
- (id)contactNavigationController;
- (bool)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
- (bool)contactNavigationController:(id)arg1 presentViewController:(id)arg2 animated:(bool)arg3;
- (bool)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (bool)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (bool)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
- (void)contactNavigationControllerDidCancel:(id)arg1;
- (void)contactNavigationControllerDidComplete:(id)arg1;
- (bool)contactNavigationControllerShouldAddNewContact:(id)arg1;
- (bool)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1;
- (id)contactProperties;
- (id)dataSource;
- (id)delegate;
- (id)descriptorsForKeysRequiredByDelegate;
- (id)displayedPropertyKeys;
- (id)familyMember;
- (bool)hidesPromptInLandscape;
- (bool)hidesSearchableSources;
- (bool)ignoresParentalRestrictions;
- (id)init;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(bool)arg1;
- (id)managedConfiguration;
- (id)navigationController;
- (bool)onlyRealContacts;
- (id)predicateForEnablingContact;
- (id)predicateForSelectionOfContact;
- (id)predicateForSelectionOfProperty;
- (id)prohibitedPropertyKeys;
- (id)prompt;
- (void)setAllowsCancel:(bool)arg1;
- (void)setAllowsDeletion:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setBannerTitle:(id)arg1;
- (void)setBannerValue:(id)arg1;
- (void)setCardActions:(long long)arg1;
- (void)setClientHasContactsAccess:(bool)arg1;
- (void)setClientWantsMultipleContacts:(bool)arg1;
- (void)setClientWantsMultipleProperties:(bool)arg1;
- (void)setClientWantsSingleContact:(bool)arg1;
- (void)setClientWantsSingleProperty:(bool)arg1;
- (void)setContactNavigationController:(id)arg1;
- (void)setContactProperties:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedPropertyKeys:(id)arg1;
- (void)setFamilyMember:(id)arg1;
- (void)setHidesPromptInLandscape:(bool)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (void)setIgnoresParentalRestrictions:(bool)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setOnlyRealContacts:(bool)arg1;
- (void)setPredicateForEnablingContact:(id)arg1;
- (void)setPredicateForSelectionOfContact:(id)arg1;
- (void)setPredicateForSelectionOfProperty:(id)arg1;
- (void)setProhibitedPropertyKeys:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
