/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPencilAnnotationStorage : TSPObject <TSKPencilAnnotationStorage> {
    long long  _attachedLocation;
    long long  _attachedType;
    long long  _compoundAnnotationType;
    NSDate * _creationDate;
    TSKPKDrawing * _drawing;
    PKDrawing * _drawingForTextRecognition;
    TSPData * _encodedDrawingTSPData;
    TSPData * _legacyEncodedDrawingTSPData;
    struct CGPoint { 
        double x; 
        double y; 
    }  _markupOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalAttachedSize;
    <TSKPencilAnnotationStorage> * _parentStorage;
    struct CGPath { } * _path;
    TSUColor * _penColor;
    double  _pencilAnnotationDrawingScale;
    double  _percentOfPAContainedInParentRep;
    TSPData * _rasterizedImageTSPData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _renderedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strokePointsFrame;
    NSArray * _subStorages;
    unsigned long long  _textBaselinesTouchedCount;
    long long  _toolType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unscaledBoundsOfStrokes;
    unsigned long long  _visibleStrokesCount;
}

@property (nonatomic) long long attachedLocation;
@property (nonatomic) long long attachedType;
@property (nonatomic) long long compoundAnnotationType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TSKPKDrawing *drawing;
@property (nonatomic, retain) PKDrawing *drawingForTextRecognition;
@property (nonatomic, readonly) NSData *encodedDrawing;
@property (nonatomic, readonly) TSPData *encodedDrawingTSPData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCalloutLine;
@property (nonatomic, readonly) bool isCalloutMarginAnnotation;
@property (nonatomic, readonly) bool isCalloutParentStorage;
@property (nonatomic, readonly) NSData *legacyEncodedDrawing;
@property (nonatomic, readonly) TSPData *legacyEncodedDrawingTSPData;
@property (nonatomic) struct CGPoint { double x1; double x2; } markupOffset;
@property (nonatomic, readonly) bool needsTextRecognition;
@property (nonatomic) struct CGSize { double x1; double x2; } originalAttachedSize;
@property (nonatomic) <TSKPencilAnnotationStorage> *parentStorage;
@property (nonatomic, readonly) struct CGPath { }*path;
@property (nonatomic, readonly) TSUColor *penColor;
@property (nonatomic) double pencilAnnotationDrawingScale;
@property (nonatomic) double percentOfPAContainedInParentRep;
@property (nonatomic, readonly) TSUImage *rasterizedImage;
@property (nonatomic, readonly) TSPData *rasterizedImageTSPData;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } renderedFrame;
@property (nonatomic, readonly) bool shouldInvertStretchAxis;
@property (nonatomic, readonly) bool shouldResizeInOneDirection;
@property (nonatomic, readonly) bool shouldResizeWithAnchor;
@property (nonatomic, readonly) bool shouldShowAnchorRect;
@property (nonatomic, readonly) bool shouldSplitAcrossAnchorRects;
@property (nonatomic, readonly) bool shouldUseHeadTail;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } strokePointsFrame;
@property (nonatomic, retain) NSArray *subStorages;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long textBaselinesTouchedCount;
@property (nonatomic, readonly) long long toolType;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledBoundsOfStrokes;
@property (nonatomic, readonly) TSUBezierPath *unscaledPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledRenderedFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledStrokePointsFrame;
@property (nonatomic) unsigned long long visibleStrokesCount;

+ (id)p_rasterizedTSPDataForPencilAnnotationImage:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (long long)attachedLocation;
- (long long)attachedType;
- (long long)compoundAnnotationType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertStrokeRectToUnscaledCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertStrokeToUnscaledCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })convertStrokeToUnscaledCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertUnscaledCanvasToStrokePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertUnscaledCanvasToStrokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })convertUnscaledCanvasToStrokeSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)drawing;
- (id)drawingForTextRecognition;
- (id)encodedDrawing;
- (id)encodedDrawingTSPData;
- (id)initFromSOSWithContext:(id)arg1 markupOffset:(struct CGPoint { double x1; double x2; })arg2 rasterizedImageTSPData:(id)arg3 attachedLocation:(long long)arg4 attachedType:(long long)arg5 encodedDrawing:(id)arg6 legacyEncodedDrawing:(id)arg7 path:(struct CGPath { }*)arg8 unscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg9 originalAttachedSize:(struct CGSize { double x1; double x2; })arg10 percentOfPAContainedInParentRep:(double)arg11 textBaselinesTouchedCount:(unsigned long long)arg12 visibleStrokesCount:(unsigned long long)arg13 penColor:(id)arg14 toolType:(long long)arg15 compoundAnnotationType:(long long)arg16 subStorages:(id)arg17 creationDate:(id)arg18 pencilAnnotationDrawingScale:(double)arg19 strokePointsFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg20 renderedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg21;
- (id)initWithContext:(id)arg1 drawing:(id)arg2 markupOffset:(struct CGPoint { double x1; double x2; })arg3 rasterizedImage:(id)arg4 attachedLocation:(long long)arg5 attachedType:(long long)arg6 path:(struct CGPath { }*)arg7 unscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 originalAttachedSize:(struct CGSize { double x1; double x2; })arg9 percentOfPAContainedInParentRep:(double)arg10 textBaselinesTouchedCount:(unsigned long long)arg11 visibleStrokesCount:(unsigned long long)arg12 penColor:(id)arg13 toolType:(long long)arg14 compoundAnnotationType:(long long)arg15 subStorages:(id)arg16 creationDate:(id)arg17 pencilAnnotationDrawingScale:(double)arg18;
- (id)initWithContext:(id)arg1 drawing:(id)arg2 markupOffset:(struct CGPoint { double x1; double x2; })arg3 rasterizedImageTSPData:(id)arg4 attachedLocation:(long long)arg5 attachedType:(long long)arg6 encodedDrawing:(id)arg7 legacyEncodedDrawing:(id)arg8 path:(struct CGPath { }*)arg9 unscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg10 originalAttachedSize:(struct CGSize { double x1; double x2; })arg11 percentOfPAContainedInParentRep:(double)arg12 textBaselinesTouchedCount:(unsigned long long)arg13 visibleStrokesCount:(unsigned long long)arg14 penColor:(id)arg15 toolType:(long long)arg16 compoundAnnotationType:(long long)arg17 subStorages:(id)arg18 creationDate:(id)arg19 pencilAnnotationDrawingScale:(double)arg20 strokePointsFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg21 renderedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg22;
- (void)initializeTextRecognition;
- (bool)isCalloutLine;
- (bool)isCalloutMarginAnnotation;
- (bool)isCalloutParentStorage;
- (bool)isStretchableParagraphAnnotation;
- (id)legacyEncodedDrawing;
- (id)legacyEncodedDrawingTSPData;
- (void)loadFromArchive:(const struct PencilAnnotationStorageArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct Point {} *x7; struct DataReference {} *x8; struct DataReference {} *x9; struct Path {} *x10; struct Point {} *x11; struct Size {} *x12; struct Size {} *x13; struct Color {} *x14; struct Date {} *x15; struct DataReference {} *x16; struct Point {} *x17; struct Size {} *x18; struct Point {} *x19; struct Size {} *x20; int x21; int x22; double x23; unsigned long long x24; unsigned long long x25; int x26; int x27; double x28; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct CGPoint { double x1; double x2; })markupOffset;
- (bool)needsTextRecognition;
- (struct CGSize { double x1; double x2; })originalAttachedSize;
- (bool)p_isSubStorage;
- (id)parentStorage;
- (struct CGPath { }*)path;
- (id)penColor;
- (double)pencilAnnotationDrawingScale;
- (double)percentOfPAContainedInParentRep;
- (id)rasterizedImage;
- (id)rasterizedImageTSPData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderedFrame;
- (void)saveToArchiver:(id)arg1;
- (void)setAttachedLocation:(long long)arg1;
- (void)setAttachedType:(long long)arg1;
- (void)setCompoundAnnotationType:(long long)arg1;
- (void)setDrawing:(id)arg1;
- (void)setDrawingForTextRecognition:(id)arg1;
- (void)setMarkupOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalAttachedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setParentStorage:(id)arg1;
- (void)setPencilAnnotationDrawingScale:(double)arg1;
- (void)setPercentOfPAContainedInParentRep:(double)arg1;
- (void)setRenderedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStrokePointsFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSubStorages:(id)arg1;
- (void)setTextBaselinesTouchedCount:(unsigned long long)arg1;
- (void)setUnscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleStrokesCount:(unsigned long long)arg1;
- (bool)shouldInvertStretchAxis;
- (bool)shouldResizeInOneDirection;
- (bool)shouldResizeWithAnchor;
- (bool)shouldShowAnchorRect;
- (bool)shouldSplitAcrossAnchorRects;
- (bool)shouldUseHeadTail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokePointsFrame;
- (id)subStorages;
- (unsigned long long)textBaselinesTouchedCount;
- (long long)toolType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledBoundsOfStrokes;
- (id)unscaledPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledRenderedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledStrokePointsFrame;
- (unsigned long long)visibleStrokesCount;

@end
