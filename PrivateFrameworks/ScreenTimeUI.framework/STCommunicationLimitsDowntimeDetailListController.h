/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STCommunicationLimitsDowntimeDetailListController : PSListController <CNUIFamilyMemberContactsPresentation> {
    PSSpecifier * _addContactsSpecifier;
    PSSpecifier * _allowContactsOnlySpecifier;
    PSSpecifier * _allowContactsWithIntroductionsSpecifier;
    PSSpecifier * _allowEveryoneSpecifier;
    PSSpecifier * _allowSpecificContactsSpecifier;
    PSSpecifier * _allowedCommunicationGroupSpecifier;
    PSSpecifier * _allowedContactsGroupSpecifier;
    STCommunicationLimits * _communicationLimits;
    CNUIFamilyMemberWhitelistedContactsController * _whitelistedContactsController;
}

@property (retain) PSSpecifier *addContactsSpecifier;
@property (retain) PSSpecifier *allowContactsOnlySpecifier;
@property (retain) PSSpecifier *allowContactsWithIntroductionsSpecifier;
@property (retain) PSSpecifier *allowEveryoneSpecifier;
@property (retain) PSSpecifier *allowSpecificContactsSpecifier;
@property (retain) PSSpecifier *allowedCommunicationGroupSpecifier;
@property (retain) PSSpecifier *allowedContactsGroupSpecifier;
@property (retain) STCommunicationLimits *communicationLimits;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) CNUIFamilyMemberWhitelistedContactsController *whitelistedContactsController;

- (void).cxx_destruct;
- (id)_allowedContactsSpecifiers;
- (void)_didFinishEditingCommunicationLimit;
- (long long)_downtimeCommunicationLimitForSpecifier:(id)arg1;
- (id)addContactsSpecifier;
- (id)allowContactsOnlySpecifier;
- (id)allowContactsWithIntroductionsSpecifier;
- (id)allowEveryoneSpecifier;
- (id)allowSpecificContactsSpecifier;
- (id)allowedCommunicationGroupSpecifier;
- (id)allowedContactsGroupSpecifier;
- (id)communicationLimits;
- (void)dismissPresentedViewController:(id)arg1;
- (void)familyMemberContactsDidChange;
- (void)presentViewController:(id)arg1;
- (void)setAddContactsSpecifier:(id)arg1;
- (void)setAllowContactsOnlySpecifier:(id)arg1;
- (void)setAllowContactsWithIntroductionsSpecifier:(id)arg1;
- (void)setAllowEveryoneSpecifier:(id)arg1;
- (void)setAllowSpecificContactsSpecifier:(id)arg1;
- (void)setAllowedCommunicationGroupSpecifier:(id)arg1;
- (void)setAllowedContactsGroupSpecifier:(id)arg1;
- (void)setCommunicationLimits:(id)arg1;
- (void)setWhitelistedContactsController:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (id)whitelistedContactsController;
- (void)willResignActive;

@end
