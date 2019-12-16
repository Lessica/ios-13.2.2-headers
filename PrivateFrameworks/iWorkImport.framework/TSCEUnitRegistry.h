/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEUnitRegistry : NSObject

+ (int)binaryUnitPrefixForChars:(unsigned short)arg1 :(unsigned short)arg2;
+ (int)canonicalUnitForDimension:(int)arg1;
+ (struct TSUDecimal { struct { unsigned long long x_1_1_1[2]; } x1; })convert:(const struct TSUDecimal { struct { unsigned long long x_1_1_1[2]; } x1; }*)arg1 fromUnit:(struct { int x1; int x2; })arg2 toUnit:(struct { int x1; int x2; })arg3;
+ (id)currencyCodeForUnit:(int)arg1;
+ (int)dimensionForUnit:(int)arg1;
+ (void)initialize;
+ (double)multiplierForUnitPrefix:(int)arg1;
+ (struct { int x1; int x2; })prefixedUnitForString:(id)arg1;
+ (int)unitForCurrencyCode:(id)arg1;
+ (int)unitForString:(id)arg1;
+ (bool)unitIsMetric:(int)arg1;
+ (int)unitPrefixForCharacter:(unsigned short)arg1;

@end