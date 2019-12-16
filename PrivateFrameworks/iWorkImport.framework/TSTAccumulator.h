/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTAccumulator : NSObject <NSCopying> {
    unsigned int  _boolCount;
    unsigned int  _boolTrueCount;
    unsigned int  _dateCount;
    unsigned int  _durationCount;
    unsigned int  _errorCount;
    struct TSCEDateValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        NSDate *mDate; 
        struct TSCEFormat { 
            struct TSCEFormatStruct { 
                int mFormatType; 
                union { 
                    struct { 
                        unsigned int mCurrencyCodeIndex : 16; 
                        unsigned int mDecimalPlaces : 8; 
                        unsigned int mNegativeStyle : 3; 
                        unsigned int mShowThousandsSeparator : 1; 
                        unsigned int mUseAccountingStyle : 1; 
                    } mNumberStruct; 
                    struct { 
                        unsigned int mFractionAccuracy : 8; 
                    } mFractionFormatStruct; 
                    struct { 
                        unsigned int mBase : 8; 
                        unsigned int mBasePlaces : 8; 
                        unsigned int mBaseUseMinusSign : 1; 
                    } mBaseFormatStruct; 
                    struct { 
                        unsigned int mUseAutomaticUnits : 1; 
                        int mDurationUnitSmallest; 
                        int mDurationUnitLargest; 
                        int mDurationStyle; 
                    } mDurationFormatStruct; 
                } ; 
                TSKDateTimeFormat *_dateTimeFormat; 
                TSKCustomFormatWrapper *_customFormatWrapper; 
                TSKBooleanFormat *_booleanFormat; 
            } _formatStruct; 
            unsigned char _formatState; 
        } mFormat; 
    }  _firstDateSeen;
    bool  _isCircularReference;
    TSULocale * _locale;
    struct TSCEValue { 
        struct TSCENumberValue { 
            int (**_vptr$TSCEAbstractValue)(); 
            struct TSUDecimal { 
                struct { 
                    unsigned long long w[2]; 
                } _decimal; 
            } _decimal; 
            int _baseUnits[1]; 
            struct TSCEFormat { 
                struct TSCEFormatStruct { 
                    int mFormatType; 
                    union { 
                        struct { 
                            unsigned int mCurrencyCodeIndex : 16; 
                            unsigned int mDecimalPlaces : 8; 
                            unsigned int mNegativeStyle : 3; 
                            unsigned int mShowThousandsSeparator : 1; 
                            unsigned int mUseAccountingStyle : 1; 
                        } mNumberStruct; 
                        struct { 
                            unsigned int mFractionAccuracy : 8; 
                        } mFractionFormatStruct; 
                        struct { 
                            unsigned int mBase : 8; 
                            unsigned int mBasePlaces : 8; 
                            unsigned int mBaseUseMinusSign : 1; 
                        } mBaseFormatStruct; 
                        struct { 
                            unsigned int mUseAutomaticUnits : 1; 
                            int mDurationUnitSmallest; 
                            int mDurationUnitLargest; 
                            int mDurationStyle; 
                        } mDurationFormatStruct; 
                    } ; 
                    TSKDateTimeFormat *_dateTimeFormat; 
                    TSKCustomFormatWrapper *_customFormatWrapper; 
                    TSKBooleanFormat *_booleanFormat; 
                } _formatStruct; 
                unsigned char _formatState; 
            } _format; 
            bool _isUnitlessZero; 
        } _numberValue; 
        unsigned long long _buff[19]; 
        int _type; 
    }  _maxValue;
    struct TSCEValue { 
        struct TSCENumberValue { 
            int (**_vptr$TSCEAbstractValue)(); 
            struct TSUDecimal { 
                struct { 
                    unsigned long long w[2]; 
                } _decimal; 
            } _decimal; 
            int _baseUnits[1]; 
            struct TSCEFormat { 
                struct TSCEFormatStruct { 
                    int mFormatType; 
                    union { 
                        struct { 
                            unsigned int mCurrencyCodeIndex : 16; 
                            unsigned int mDecimalPlaces : 8; 
                            unsigned int mNegativeStyle : 3; 
                            unsigned int mShowThousandsSeparator : 1; 
                            unsigned int mUseAccountingStyle : 1; 
                        } mNumberStruct; 
                        struct { 
                            unsigned int mFractionAccuracy : 8; 
                        } mFractionFormatStruct; 
                        struct { 
                            unsigned int mBase : 8; 
                            unsigned int mBasePlaces : 8; 
                            unsigned int mBaseUseMinusSign : 1; 
                        } mBaseFormatStruct; 
                        struct { 
                            unsigned int mUseAutomaticUnits : 1; 
                            int mDurationUnitSmallest; 
                            int mDurationUnitLargest; 
                            int mDurationStyle; 
                        } mDurationFormatStruct; 
                    } ; 
                    TSKDateTimeFormat *_dateTimeFormat; 
                    TSKCustomFormatWrapper *_customFormatWrapper; 
                    TSKBooleanFormat *_booleanFormat; 
                } _formatStruct; 
                unsigned char _formatState; 
            } _format; 
            bool _isUnitlessZero; 
        } _numberValue; 
        unsigned long long _buff[19]; 
        int _type; 
    }  _minValue;
    unsigned int  _numberCount;
    struct TSCENumberValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        struct TSUDecimal { 
            struct { 
                unsigned long long w[2]; 
            } _decimal; 
        } _decimal; 
        int _baseUnits[1]; 
        struct TSCEFormat { 
            struct TSCEFormatStruct { 
                int mFormatType; 
                union { 
                    struct { 
                        unsigned int mCurrencyCodeIndex : 16; 
                        unsigned int mDecimalPlaces : 8; 
                        unsigned int mNegativeStyle : 3; 
                        unsigned int mShowThousandsSeparator : 1; 
                        unsigned int mUseAccountingStyle : 1; 
                    } mNumberStruct; 
                    struct { 
                        unsigned int mFractionAccuracy : 8; 
                    } mFractionFormatStruct; 
                    struct { 
                        unsigned int mBase : 8; 
                        unsigned int mBasePlaces : 8; 
                        unsigned int mBaseUseMinusSign : 1; 
                    } mBaseFormatStruct; 
                    struct { 
                        unsigned int mUseAutomaticUnits : 1; 
                        int mDurationUnitSmallest; 
                        int mDurationUnitLargest; 
                        int mDurationStyle; 
                    } mDurationFormatStruct; 
                } ; 
                TSKDateTimeFormat *_dateTimeFormat; 
                TSKCustomFormatWrapper *_customFormatWrapper; 
                TSKBooleanFormat *_booleanFormat; 
            } _formatStruct; 
            unsigned char _formatState; 
        } _format; 
        bool _isUnitlessZero; 
    }  _numberTotalValue;
    double  _secondsToAdd;
    unsigned int  _stringCount;
    double  _totalSecsSinceReferenceDate;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; } avgValue;
@property (nonatomic, readonly) unsigned int boolCount;
@property (nonatomic, readonly) unsigned int boolTrueCount;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; } countValue;
@property (nonatomic, readonly) unsigned int dateCount;
@property (nonatomic, readonly) unsigned int durationCount;
@property (nonatomic, readonly) unsigned int errorCount;
@property (nonatomic) bool isCircularReference;
@property (nonatomic, retain) TSULocale *locale;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; } maxValue;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; } minValue;
@property (nonatomic, readonly) unsigned int numberCount;
@property (nonatomic, readonly) unsigned int stringCount;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; } totalValue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accumulate:(id)arg1;
- (void)accumulateValue:(const /* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; }*)arg1;
- (/* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; })avgValue;
- (unsigned int)boolCount;
- (unsigned int)boolTrueCount;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (/* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; })countValue;
- (unsigned int)dateCount;
- (unsigned int)durationCount;
- (unsigned int)errorCount;
- (id)initWithArchive:(const struct AccumulatorArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct CellValueArchive {} *x5; struct CellValueArchive {} *x6; struct CellValueArchive {} *x7; struct CellValueArchive {} *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; double x15; double x16; unsigned int x17; bool x18; }*)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)isCircularReference;
- (id)locale;
- (/* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; })maxValue;
- (/* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; })minValue;
- (unsigned int)numberCount;
- (void)saveToArchive:(struct AccumulatorArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct CellValueArchive {} *x5; struct CellValueArchive {} *x6; struct CellValueArchive {} *x7; struct CellValueArchive {} *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; double x15; double x16; unsigned int x17; bool x18; }*)arg1;
- (void)setIsCircularReference:(bool)arg1;
- (void)setLocale:(id)arg1;
- (unsigned int)stringCount;
- (/* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; })totalValue;
- (/* Warning: unhandled struct encoding: '{TSCEValue={TSCENumberValue=^^?{TSUDecimal={?=[2Q]}}[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}[19Q]i}' */ struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; unsigned char x_1_3_5; } x_4_2_1; bool x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5[19]; int x_1_1_6; } x1; })valueForType:(unsigned char)arg1;

@end
