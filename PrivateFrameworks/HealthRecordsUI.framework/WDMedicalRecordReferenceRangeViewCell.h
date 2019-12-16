/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDMedicalRecordReferenceRangeViewCell : WDMedicalRecordGroupableCell {
    HKReferenceRangeView * _referenceRangeView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    HKInspectableValueInRange * _valueInRange;
}

@property (nonatomic, retain) HKReferenceRangeView *referenceRangeView;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) HKInspectableValueInRange *valueInRange;

- (void).cxx_destruct;
- (id)referenceRangeView;
- (void)setReferenceRangeView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setValueInRange:(id)arg1;
- (void)setupSubviews;
- (id)subtitle;
- (id)subtitleLabel;
- (id)valueInRange;

@end
