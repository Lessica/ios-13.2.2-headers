/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEDateCellValue : TSCECellValue {
    struct TSCEDateValue { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; unsigned short x4; unsigned char x5; void*x6; void*x7; out const void*x8; void*x9; void*x10; void*x11; struct TSCEFormatStruct { int x_12_1_1; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; } x_2_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_2_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_2_2_4; } x_12_1_2; id x_12_1_3; id x_12_1_4; unsigned char x_12_1_5; } x12; } * _dateValue;
}

- (id)canonicalKeyString;
- (long long)compareToCellValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct TSCEDateValue { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; unsigned short x4; unsigned char x5; void*x6; void*x7; out const void*x8; void*x9; void*x10; void*x11; struct TSCEFormatStruct { int x_12_1_1; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; } x_2_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_2_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_2_2_4; } x_12_1_2; id x_12_1_3; id x_12_1_4; unsigned char x_12_1_5; } x12; }*)dateValue;
- (void)dealloc;
- (id)displayString;
- (void)encodeToArchive:(struct DateCellValueArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct FormatStructArchive {} *x5; double x6; bool x7; bool x8; }*)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct DateCellValueArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct FormatStructArchive {} *x5; double x6; bool x7; bool x8; }*)arg1 locale:(id)arg2;
- (id)initWithDate:(id)arg1 locale:(id)arg2;
- (id)initWithDateValue:(struct TSCEDateValue { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; unsigned short x4; unsigned char x5; void*x6; void*x7; out const void*x8; void*x9; void*x10; void*x11; struct TSCEFormatStruct { int x_12_1_1; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; } x_2_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_2_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_2_2_4; } x_12_1_2; id x_12_1_3; id x_12_1_4; unsigned char x_12_1_5; } x12; }*)arg1 locale:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCellValue:(id)arg1;
- (void)setPopulatedCustomFormat:(id)arg1;
- (/* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; })tsceValue;

@end
