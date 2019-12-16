/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTGroupingColumn : TSKSosBase <NSCopying> {
    struct UUIDData<TSP::UUIDData> { 
        union { 
            unsigned char _uuid[16]; 
            struct { 
                unsigned char byte0; 
                unsigned char byte1; 
                unsigned char byte2; 
                unsigned char byte3; 
                unsigned char byte4; 
                unsigned char byte5; 
                unsigned char byte6; 
                unsigned char byte7; 
                unsigned char byte8; 
                unsigned char byte9; 
                unsigned char byte10; 
                unsigned char byte11; 
                unsigned char byte12; 
                unsigned char byte13; 
                unsigned char byte14; 
                unsigned char byte15; 
            } _cfuuid; 
            struct { 
                unsigned long long _lower; 
                unsigned long long _upper; 
            } ; 
        } ; 
    }  _columnUid;
    TSULocale * _docLocale;
    struct UUIDData<TSP::UUIDData> { 
        union { 
            unsigned char _uuid[16]; 
            struct { 
                unsigned char byte0; 
                unsigned char byte1; 
                unsigned char byte2; 
                unsigned char byte3; 
                unsigned char byte4; 
                unsigned char byte5; 
                unsigned char byte6; 
                unsigned char byte7; 
                unsigned char byte8; 
                unsigned char byte9; 
                unsigned char byte10; 
                unsigned char byte11; 
                unsigned char byte12; 
                unsigned char byte13; 
                unsigned char byte14; 
                unsigned char byte15; 
            } _cfuuid; 
            struct { 
                unsigned long long _lower; 
                unsigned long long _upper; 
            } ; 
        } ; 
    }  _groupingColumnUid;
    TSKFormat * _groupingFormat;
    bool  _groupingFormatComputed;
    struct TSCEFunctor { 
        struct TSCEFormula { 
            struct TSCEASTNodeArray {} *_astNodeArray; 
            struct TSCEFormulaTranslationFlags { 
                unsigned char _flags; 
            } _translationFlags; 
            struct UUIDData<TSP::UUIDData> { 
                union { 
                    unsigned char _uuid[16]; 
                    struct { 
                        unsigned char byte0; 
                        unsigned char byte1; 
                        unsigned char byte2; 
                        unsigned char byte3; 
                        unsigned char byte4; 
                        unsigned char byte5; 
                        unsigned char byte6; 
                        unsigned char byte7; 
                        unsigned char byte8; 
                        unsigned char byte9; 
                        unsigned char byte10; 
                        unsigned char byte11; 
                        unsigned char byte12; 
                        unsigned char byte13; 
                        unsigned char byte14; 
                        unsigned char byte15; 
                    } _cfuuid; 
                    struct { 
                        unsigned long long _lower; 
                        unsigned long long _upper; 
                    } ; 
                } ; 
            } _hostTableUID; 
            struct UUIDData<TSP::UUIDData> { 
                union { 
                    unsigned char _uuid[16]; 
                    struct { 
                        unsigned char byte0; 
                        unsigned char byte1; 
                        unsigned char byte2; 
                        unsigned char byte3; 
                        unsigned char byte4; 
                        unsigned char byte5; 
                        unsigned char byte6; 
                        unsigned char byte7; 
                        unsigned char byte8; 
                        unsigned char byte9; 
                        unsigned char byte10; 
                        unsigned char byte11; 
                        unsigned char byte12; 
                        unsigned char byte13; 
                        unsigned char byte14; 
                        unsigned char byte15; 
                    } _cfuuid; 
                    struct { 
                        unsigned long long _lower; 
                        unsigned long long _upper; 
                    } ; 
                } ; 
            } _hostColumnUID; 
            struct UUIDData<TSP::UUIDData> { 
                union { 
                    unsigned char _uuid[16]; 
                    struct { 
                        unsigned char byte0; 
                        unsigned char byte1; 
                        unsigned char byte2; 
                        unsigned char byte3; 
                        unsigned char byte4; 
                        unsigned char byte5; 
                        unsigned char byte6; 
                        unsigned char byte7; 
                        unsigned char byte8; 
                        unsigned char byte9; 
                        unsigned char byte10; 
                        unsigned char byte11; 
                        unsigned char byte12; 
                        unsigned char byte13; 
                        unsigned char byte14; 
                        unsigned char byte15; 
                    } _cfuuid; 
                    struct { 
                        unsigned long long _lower; 
                        unsigned long long _upper; 
                    } ; 
                } ; 
            } _hostRowUID; 
        } _formula; 
        unsigned char _numArgs; 
    }  _groupingFunctor;
    int  _groupingType;
}

@property (nonatomic, readonly) const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*columnUid;
@property (nonatomic, readonly) const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*groupingColumnUid;
@property (nonatomic, readonly) const struct TSCEFunctor { struct TSCEFormula { struct TSCEASTNodeArray {} *x_1_1_1; struct TSCEFormulaTranslationFlags { unsigned char x_2_2_1; } x_1_1_2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_3_2_1; } x_1_1_3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_4_2_1; } x_1_1_4; } x1; }*groupingFunctor;
@property (nonatomic, readonly) int groupingType;

+ (bool)groupingTypeIsAnyDateType:(int)arg1;
+ (id)stringForDayOfWeekType;
+ (id)stringForDayType;
+ (id)stringForGroupingType:(int)arg1;
+ (id)stringForMonthType;
+ (id)stringForUniqueType;
+ (id)stringForYearQuarterType;
+ (id)stringForYearType;
+ (id)stringForYearWeekType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)columnUid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeToArchive:(struct GroupColumnArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct UUID {} *x5; struct FunctorArchive {} *x6; struct UUID {} *x7; int x8; }*)arg1 archiver:(id)arg2;
- (id)groupValueForValue:(id)arg1 calcEngine:(id)arg2;
- (const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)groupingColumnUid;
- (const struct TSCEFunctor { struct TSCEFormula { struct TSCEASTNodeArray {} *x_1_1_1; struct TSCEFormulaTranslationFlags { unsigned char x_2_2_1; } x_1_1_2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_3_2_1; } x_1_1_3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_4_2_1; } x_1_1_4; } x1; }*)groupingFunctor;
- (int)groupingType;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct GroupColumnArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct UUID {} *x5; struct FunctorArchive {} *x6; struct UUID {} *x7; int x8; }*)arg1;
- (id)initWithColumnIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1 groupingType:(int)arg2 inTableInfo:(id)arg3;
- (id)initWithColumnUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 groupingType:(int)arg2;
- (id)initWithGroupingColumnUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 columnUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 groupingType:(int)arg3;
- (bool)isEqual:(id)arg1;
- (id)p_groupingFormatWithLocale:(id)arg1;
- (void)setFunctorForType;

@end