/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBState : NSObject {
    <TCCancelDelegate> * mCancelDelegate;
    EDResources * mResources;
    struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; struct __compressed_pair<OcText *, ChAllocator<OcText> > { struct OcText {} *x_3_1_1; } x3; } * mSheetNames;
    EDWorkbook * mWorkbook;
    struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString *> { struct CsString {} **x_4_1_1; struct CsString {} **x_4_1_2; struct __compressed_pair<CsString **, ChAllocator<CsString *> > { struct CsString {} **x_3_2_1; } x_4_1_3; } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; bool x13; unsigned int x14; unsigned short x15; unsigned short x16; } * mXlFormulaProcessor;
    struct XlLinkTable { int (**x1)(); struct XlLinkLookupTable { int (**x_2_1_1)(); bool x_2_1_2; struct ChVector<XlXti *> { struct XlXti {} **x_3_2_1; struct XlXti {} **x_3_2_2; struct __compressed_pair<XlXti **, ChAllocator<XlXti *> > { struct XlXti {} **x_3_3_1; } x_3_2_3; } x_2_1_3; } x2; struct ChVector<XlLink *> { struct XlLink {} **x_3_1_1; struct XlLink {} **x_3_1_2; struct __compressed_pair<XlLink **, ChAllocator<XlLink *> > { struct XlLink {} **x_3_2_1; } x_3_1_3; } x3; } * mXlLinkTable;
    struct XlNameTable { int (**x1)(); struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord *> { struct XlRecord {} **x_1_2_1; struct XlRecord {} **x_1_2_2; struct __compressed_pair<XlRecord **, ChAllocator<XlRecord *> > { struct XlRecord {} **x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct OcText { int (**x_3_1_1)(); int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; char *x_3_1_6; char *x_3_1_7; bool x_3_1_8; } x3[14]; } * mXlNameTable;
}

@property (nonatomic, readonly) <TCCancelDelegate> *cancelDelegate;

- (void).cxx_destruct;
- (id)cancelDelegate;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;
- (bool)isCancelled;
- (id)resources;
- (void)setResources:(id)arg1;
- (void)setWorkbook:(id)arg1;
- (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; struct __compressed_pair<OcText *, ChAllocator<OcText> > { struct OcText {} *x_3_1_1; } x3; }*)sheetNames;
- (id)workbook;
- (struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString *> { struct CsString {} **x_4_1_1; struct CsString {} **x_4_1_2; struct __compressed_pair<CsString **, ChAllocator<CsString *> > { struct CsString {} **x_3_2_1; } x_4_1_3; } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; bool x13; unsigned int x14; unsigned short x15; unsigned short x16; }*)xlFormulaProcessor;
- (struct XlLinkTable { int (**x1)(); struct XlLinkLookupTable { int (**x_2_1_1)(); bool x_2_1_2; struct ChVector<XlXti *> { struct XlXti {} **x_3_2_1; struct XlXti {} **x_3_2_2; struct __compressed_pair<XlXti **, ChAllocator<XlXti *> > { struct XlXti {} **x_3_3_1; } x_3_2_3; } x_2_1_3; } x2; struct ChVector<XlLink *> { struct XlLink {} **x_3_1_1; struct XlLink {} **x_3_1_2; struct __compressed_pair<XlLink **, ChAllocator<XlLink *> > { struct XlLink {} **x_3_2_1; } x_3_1_3; } x3; }*)xlLinkTable;
- (struct XlNameTable { int (**x1)(); struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord *> { struct XlRecord {} **x_1_2_1; struct XlRecord {} **x_1_2_2; struct __compressed_pair<XlRecord **, ChAllocator<XlRecord *> > { struct XlRecord {} **x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct OcText { int (**x_3_1_1)(); int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; char *x_3_1_6; char *x_3_1_7; bool x_3_1_8; } x3[14]; }*)xlNameTable;

@end
