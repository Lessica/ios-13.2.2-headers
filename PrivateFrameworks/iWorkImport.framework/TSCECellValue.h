/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellValue : NSObject <NSCopying> {
    TSULocale * _locale;
    int  _valueType;
}

@property (nonatomic, retain) TSULocale *locale;
@property (nonatomic) int valueType;

+ (id)cellValueWithArchive:(const struct CellValueArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct BooleanCellValueArchive {} *x5; struct DateCellValueArchive {} *x6; struct NumberCellValueArchive {} *x7; struct StringCellValueArchive {} *x8; struct ErrorCellValueArchive {} *x9; int x10; }*)arg1 locale:(id)arg2;
+ (id)newCellValueFromTSCEValue:(const /* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; }*)arg1 withLocale:(id)arg2;

- (void).cxx_destruct;
- (id)canonicalKeyString;
- (long long)compare:(id)arg1;
- (long long)compareToCellValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayString;
- (void)encodeCellValueToArchive:(struct CellValueArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct BooleanCellValueArchive {} *x5; struct DateCellValueArchive {} *x6; struct NumberCellValueArchive {} *x7; struct StringCellValueArchive {} *x8; struct ErrorCellValueArchive {} *x9; int x10; }*)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCellValue:(id)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)setPopulatedCustomFormat:(id)arg1;
- (void)setValueType:(int)arg1;
- (/* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; })tsceValue;
- (void)updateWithCustomFormatList:(id)arg1;
- (int)valueType;

@end