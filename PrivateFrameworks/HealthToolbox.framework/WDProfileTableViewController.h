/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDProfileTableViewController : HKTableViewController <UINavigationControllerDelegate, UIPickerViewDataSource, UIPickerViewDelegate> {
    CNAvatarViewController * _avatarViewController;
    WDProfileTableViewCell * _biologicalSexCell;
    long long  _biologicalSexDisplayValue;
    HKBiologicalSexObject * _biologicalSexObject;
    UIPickerView * _biologicalSexPicker;
    NSDateComponents * _birthdate;
    WDProfileTableViewCell * _birthdateCell;
    NSDateComponents * _birthdateDisplayValue;
    UIDatePicker * _birthdatePicker;
    WDProfileTableViewCell * _bloodTypeCell;
    long long  _bloodTypeDisplayValue;
    HKBloodTypeObject * _bloodTypeObject;
    UIPickerView * _bloodTypePicker;
    UIBarButtonItem * _cancelButtonItem;
    NSString * _firstName;
    WDProfileEditableTableViewCell * _firstNameCell;
    WDProfileTableViewCell * _fitzpatrickSkinTypeCell;
    long long  _fitzpatrickSkinTypeDisplayValue;
    UIPickerView * _fitzpatrickSkinTypePicker;
    WDDisplayTypeDescriptionTableFooterView * _footerView;
    NSCalendar * _gregorianCalendar;
    WDProfileHeaderView * _headerView;
    HKHealthStore * _healthStore;
    bool  _isCancelling;
    NSString * _lastName;
    WDProfileEditableTableViewCell * _lastNameCell;
    WDProfile * _profile;
    WDProfileTableViewCell * _selectedCell;
    WDProfileTableViewCell * _wheelchairUseCell;
    long long  _wheelchairUseDisplayValue;
    UIPickerView * _wheelchairUsePicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WDProfileEditableTableViewCell *firstNameCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WDProfileEditableTableViewCell *lastNameCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustHeaderFrame;
- (id)_birthdayCalendar;
- (void)_createBarButtonItems;
- (void)_createCells;
- (void)_createHeader;
- (void)_createPickers;
- (id)_dateAsAge:(id)arg1;
- (id)_displayStringForBiologicalSex:(long long)arg1;
- (id)_displayStringForBirthDate:(id)arg1;
- (id)_displayStringForBloodType:(long long)arg1;
- (id)_displayStringForFitzpatrickSkinType:(long long)arg1;
- (id)_displayStringForWheelchairUse:(long long)arg1;
- (void)_fetchDataFromHealthStore;
- (id)_initialBirthdayValue;
- (void)_localeDidChange:(id)arg1;
- (long long)_profileRowIdentifierForIndex:(long long)arg1;
- (void)_resetSelectedCell;
- (void)_setFirstAndLastNameOnHeaderAndCells;
- (void)_timeZoneDidChange:(id)arg1;
- (void)_updateCellsWithDisplayValues;
- (void)_updatePickersWithDisplayValues;
- (void)birthdateChanged:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)dealloc;
- (void)didClearBirthdate;
- (void)dismissButtonTapped:(id)arg1;
- (id)firstNameCell;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)lastNameCell;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFirstNameCell:(id)arg1;
- (void)setLastNameCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end