/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

@interface NWMTemperatureFormatter : NSObject <NWMDataFormatter> {
    NSMeasurementFormatter * _degreeSymbolOnlyFormatter;
    NSString * _formattedStaleTemperatureWithDegreeSymbol;
    NSString * _formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
    NSString * _formattedStaleTemperatureWithUnit;
    NSString * _formattedStaleTemperatureWithUnitRoundedVariant;
    NSString * _formattedStaleTemperatureWithoutUnit;
    NSString * _formattedStaleTemperatureWithoutUnitRoundedVariant;
    bool  _isCelsiusPreferred;
    NSMeasurement * _noMeasurement;
    NSNumberFormatter * _noUnitFormatter;
    NSObject<OS_dispatch_queue> * _queue;
    NSLocale * _referenceLocale;
    bool  _shouldAvoidDegreeSymbolOnly;
    NSMeasurementFormatter * _unitFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMeasurementFormatter *degreeSymbolOnlyFormatter;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithDegreeSymbol;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithUnit;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithUnitRoundedVariant;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithoutUnit;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithoutUnitRoundedVariant;
@property (readonly) unsigned long long hash;
@property (readonly) bool isCelsiusPreferred;
@property (nonatomic, retain) NSMeasurement *noMeasurement;
@property (nonatomic, retain) NSNumberFormatter *noUnitFormatter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSLocale *referenceLocale;
@property (readonly) bool shouldAvoidDegreeSymbolOnly;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMeasurementFormatter *unitFormatter;

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)_formattedStaleTemperatureWithDegreeSymbol:(unsigned long long)arg1;
- (id)_formattedStaleTemperatureWithUnit:(unsigned long long)arg1;
- (id)_formattedStaleTemperatureWithoutUnit:(unsigned long long)arg1;
- (id)_localizedMeasurementForTemperature:(id)arg1;
- (id)_locked_degreeSymbolOnlyFormatter;
- (id)_locked_noUnitFormatter;
- (id)_locked_unitFormatter;
- (void)_locked_updateStaleTemperatureWithUnit;
- (id)degreeSymbolOnlyFormatter;
- (id)formattedStaleTemperatureWithDegreeSymbol;
- (id)formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
- (id)formattedStaleTemperatureWithUnit;
- (id)formattedStaleTemperatureWithUnitRoundedVariant;
- (id)formattedStaleTemperatureWithoutUnit;
- (id)formattedStaleTemperatureWithoutUnitRoundedVariant;
- (id)formattedWithDegreeSymbol:(id)arg1 fallbackStyle:(unsigned long long)arg2;
- (id)formattedWithDegreeSymbol:(id)arg1 style:(unsigned long long)arg2 fallbackStyle:(unsigned long long)arg3;
- (id)formattedWithUnit:(id)arg1;
- (id)formattedWithUnit:(id)arg1 style:(unsigned long long)arg2;
- (id)formattedWithoutUnit:(id)arg1;
- (id)formattedWithoutUnit:(id)arg1 style:(unsigned long long)arg2;
- (id)init;
- (bool)isCelsiusPreferred;
- (id)noMeasurement;
- (id)noUnitFormatter;
- (id)queue;
- (id)referenceLocale;
- (void)setDegreeSymbolOnlyFormatter:(id)arg1;
- (void)setFormattedStaleTemperatureWithDegreeSymbol:(id)arg1;
- (void)setFormattedStaleTemperatureWithDegreeSymbolRoundedVariant:(id)arg1;
- (void)setFormattedStaleTemperatureWithUnit:(id)arg1;
- (void)setFormattedStaleTemperatureWithUnitRoundedVariant:(id)arg1;
- (void)setFormattedStaleTemperatureWithoutUnit:(id)arg1;
- (void)setFormattedStaleTemperatureWithoutUnitRoundedVariant:(id)arg1;
- (void)setNoMeasurement:(id)arg1;
- (void)setNoUnitFormatter:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReferenceLocale:(id)arg1;
- (void)setUnitFormatter:(id)arg1;
- (bool)shouldAvoidDegreeSymbolOnly;
- (id)unitFormatter;
- (double)value:(id)arg1;

@end
