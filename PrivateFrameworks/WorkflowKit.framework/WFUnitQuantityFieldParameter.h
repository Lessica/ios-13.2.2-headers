/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter {
    NSUnit * _defaultUnit;
    bool  _fallbackToAllSupportedUnits;
    NSArray * _possibleUnits;
    NSDictionary * _unitSymbolMap;
    NSString * _unitType;
}

@property (nonatomic, retain) NSUnit *defaultUnit;
@property (nonatomic) bool fallbackToAllSupportedUnits;
@property (nonatomic, retain) NSDictionary *unitSymbolMap;
@property (nonatomic, copy) NSString *unitType;

- (void).cxx_destruct;
- (id)availableUnitForStringValue:(id)arg1;
- (id)defaultSerializedRepresentation;
- (id)defaultUnit;
- (bool)fallbackToAllSupportedUnits;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (bool)parameterStateIsValid:(id)arg1;
- (id)possibleUnits;
- (void)setDefaultUnit:(id)arg1;
- (void)setFallbackToAllSupportedUnits:(bool)arg1;
- (void)setPossibleUnits:(id)arg1;
- (void)setUnitSymbolMap:(id)arg1;
- (void)setUnitType:(id)arg1;
- (id)unitSymbolMap;
- (id)unitType;
- (void)updatePossibleUnits;

@end
