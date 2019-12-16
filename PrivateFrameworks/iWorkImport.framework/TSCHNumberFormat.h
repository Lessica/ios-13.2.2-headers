/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHCustomFormatSupport, TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport> {
    struct { 
        int mFormatType; 
        union { 
            struct { 
                unsigned int mCurrencyCodeIndex : 16; 
                unsigned int mDecimalPlaces : 8; 
                unsigned int mNegativeStyle : 3; 
                unsigned int mShowThousandsSeparator : 1; 
                unsigned int mUseAccountingStyle : 1; 
            } mNumberFormatStruct; 
            struct { 
                unsigned int mFractionAccuracy : 8; 
            } mFractionFormatStruct; 
            struct { 
                unsigned int mBase : 8; 
                unsigned int mBasePlaces : 8; 
                unsigned int mBaseUseMinusSign : 1; 
            } mBaseFormatStruct; 
            struct { 
                unsigned int mSuppressDateFormat : 1; 
                unsigned int mSuppressTimeFormat : 1; 
                NSString *mDateTimeFormat; 
            } mDateFormatStruct; 
            struct { 
                unsigned int mUseAutomaticUnits : 1; 
                int mDurationUnitSmallest; 
                int mDurationUnitLargest; 
                int mDurationStyle; 
            } mDurationFormatStruct; 
            struct { 
                NSUUID *mCustomFormatKey; 
                TSUCustomFormat *mCustomFormat; 
                unsigned int mLegacyID; 
                unsigned char mAppliedConditionKey; 
            } mCustomFormatStruct; 
        } ; 
    }  mFormatStruct;
    NSString * mPrefixString;
    NSString * mSuffixString;
}

@property (nonatomic, readonly) unsigned int base;
@property (nonatomic, readonly) unsigned int basePlaces;
@property (nonatomic, readonly) bool baseUseMinusSign;
@property (nonatomic, readonly, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int decimalPlaces;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int formatType;
@property (nonatomic, readonly) int fractionAccuracy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBase;
@property (nonatomic, readonly) bool isCurrency;
@property (nonatomic, readonly) bool isFraction;
@property (nonatomic, readonly) bool isPercentage;
@property (nonatomic, readonly) int negativeStyle;
@property (nonatomic, readonly, copy) NSString *prefixString;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) bool showThousandsSeparator;
@property (nonatomic, readonly, copy) NSString *suffixString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useAccountingStyle;
@property (nonatomic, readonly) bool usesNumberFormatStruct;

+ (id)automaticDecimalPlaces;
+ (id)customFormatForKey:(id)arg1 documentRoot:(id)arg2 fromPasteboardCustomFormatList:(id)arg3;
+ (unsigned int)defaultBase;
+ (unsigned int)defaultBasePlaces;
+ (bool)defaultBaseUseMinusSign;
+ (id)defaultCurrencyCode;
+ (id)defaultDecimalNumberFormat;
+ (int)defaultFractionAccuracy;
+ (int)defaultNegativeNumberStyle;
+ (id)instanceWithArchive:(const struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<2> { unsigned int x_4_1_1[2]; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1 unarchiver:(id)arg2;
+ (int)labelFormatTypeFromTSUFormatType:(int)arg1;
+ (id)numberFormatWithFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })arg1 prefixString:(id)arg2 suffixString:(id)arg3;
+ (id)numberFormatWithFormatType:(int)arg1 decimalPlaces:(unsigned int)arg2 showThousandsSeparator:(bool)arg3;
+ (bool)supportsFormatType:(int)arg1;

- (unsigned int)base;
- (unsigned int)basePlaces;
- (bool)baseUseMinusSign;
- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)convertToPersistableStyleObject;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)customFormatKey;
- (id)customFormatListKey;
- (id)dataFormatterForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (void)dealloc;
- (unsigned int)decimalPlaces;
- (struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })formatStruct;
- (int)formatType;
- (int)fractionAccuracy;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<2> { unsigned int x_4_1_1[2]; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1 unarchiver:(id)arg2;
- (id)initWithFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (bool)isBase;
- (bool)isCompatibleWithDataFormatter:(id)arg1;
- (bool)isCurrency;
- (bool)isCustom;
- (bool)isEqual:(id)arg1;
- (bool)isFraction;
- (bool)isPercentage;
- (bool)isScientific;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)negativeStyle;
- (int)negativeStyleForNumberFormatter;
- (id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
- (long long)numberOfDecimalPlaces;
- (unsigned int)p_base;
- (unsigned int)p_baseIfAvailable;
- (unsigned int)p_basePlaces;
- (unsigned int)p_basePlacesIfAvailable;
- (bool)p_baseUseMinusSign;
- (bool)p_baseUseMinusSignIfAvailable;
- (id)p_currencyCode;
- (id)p_currencyCodeIfAvailable;
- (unsigned int)p_decimalPlaces;
- (unsigned int)p_decimalPlacesIfAvailable;
- (id)p_formatTypeDescription;
- (id)p_formattedBodyStringForDouble:(double)arg1 locale:(id)arg2;
- (int)p_fractionAccuracy;
- (int)p_fractionAccuracyIfAvailable;
- (bool)p_hasValidDecimalPlaces;
- (id)p_initWithFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (int)p_negativeStyle;
- (int)p_negativeStyleIfAvailable;
- (bool)p_showThousandsSeparator;
- (bool)p_showThousandsSeparatorIfAvailable;
- (bool)p_useAccountingStyle;
- (bool)p_useAccountingStyleIfAvailable;
- (id)prefixString;
- (void)saveToArchive:(struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<2> { unsigned int x_4_1_1[2]; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1 archiver:(id)arg2;
- (double)scaleFactor;
- (bool)showThousandsSeparator;
- (id)suffixString;
- (bool)supportsAutoMinMax;
- (id)upgradedNumberFormatFromPreUFFOrUnity1_0;
- (bool)useAccountingStyle;
- (bool)usesNumberFormatStruct;
- (int)valueType;

@end