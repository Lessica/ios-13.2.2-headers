/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDEditorHeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSNumber * _centimeterValue;
    UIPickerView * _picker;
    bool  _usesImperialUnits;
}

@property (nonatomic, retain) NSNumber *centimeterValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)defaultCentimeterValue;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_hidePicker;
- (void)_localeDidChange:(id)arg1;
- (void)_showPicker;
- (void)beginEditing;
- (id)centimeterValue;
- (void)commitEditing;
- (void)dealloc;
- (id)formattedValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)setCentimeterValue:(id)arg1;

@end
