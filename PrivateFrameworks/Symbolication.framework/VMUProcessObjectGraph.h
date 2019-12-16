/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUProcessObjectGraph : VMUObjectGraph <VMUCommonGraphInterface> {
    NSString * _binaryImagesDescription;
    VMURangeToStringMap * _binarySectionNameRanges;
    VMUDebugTimer * _debugTimer;
    NSString * _executablePath;
    bool  _gotObjcClassStructureRanges;
    unsigned int  _kernPageSize;
    unsigned long long  _machAbsolute;
    VMUNodeToStringMap * _nodeLabels;
    unsigned long long  _physicalFootprint;
    unsigned long long  _physicalFootprintPeak;
    int  _pid;
    NSString * _processDescriptionString;
    NSString * _processName;
    NSDictionary * _pthreadOffsets;
    unsigned int  _regionCount;
    VMURangeToStringMap * _regionSymbolNameRanges;
    NSArray * _regions;
    bool  _showRawClassNames;
    bool  _showsPhysFootprint;
    VMUGraphStackLogReader * _stackLogReader;
    VMURangeToStringMap * _threadNameRanges;
    void * _userMarked;
    NSArray * _zoneNames;
}

@property (nonatomic, readonly) NSString *binaryImagesDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) VMUDebugTimer *debugTimer;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *executablePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool is64bit;
@property (nonatomic, readonly) unsigned int nodeCount;
@property (nonatomic, readonly) unsigned int nodeNamespaceSize;
@property (nonatomic) unsigned long long physicalFootprint;
@property (nonatomic) unsigned long long physicalFootprintPeak;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processDescriptionString;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic, readonly) unsigned int regionCount;
@property (nonatomic) bool showRawClassNames;
@property (nonatomic) bool showsPhysFootprint;
@property (nonatomic) unsigned long long snapshotMachTime;
@property (nonatomic, retain) <VMUStackLogReader> *stackLogReader;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int vmPageSize;
@property (nonatomic, readonly) unsigned int zoneCount;

- (void).cxx_destruct;
- (void)_deriveObjcClassStructureRanges;
- (id)_descriptionForRegionAddress:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 showSegment:(bool)arg3;
- (id)_detailedNodeOffsetDescription:(struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
- (void)_renameWithNodeMap:(unsigned int*)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int*)arg3 edgeNamespace:(unsigned int)arg4;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (id)binaryImagesDescription;
- (id)binarySectionNameForAddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })binarySectionRangeContainingAddress:(unsigned long long)arg1;
- (void*)contentForNode:(unsigned int)arg1;
- (void*)copyUserMarked;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugTimer;
- (unsigned int)enumerateReferencesFromDataRegion:(id)arg1 atGlobalSymbol:(id)arg2 withBlock:(id /* block */)arg3;
- (unsigned int)enumerateRegionsWithBlock:(id /* block */)arg1;
- (id)executablePath;
- (bool)hasLabelsForNodes;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 diskLogs:(id)arg4;
- (id)initWithPid:(int)arg1 nodes:(struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; }*)arg2 nodeCount:(unsigned int)arg3 zoneNames:(id)arg4 classInfoMap:(id)arg5 regions:(id)arg6 pthreadOffsets:(id)arg7 userMarked:(void*)arg8;
- (bool)is64bit;
- (id)labelForNode:(unsigned int)arg1;
- (void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2;
- (void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2 options:(unsigned int)arg3;
- (id)nodeDescription:(unsigned int)arg1;
- (id)nodeDescription:(unsigned int)arg1 withDestinationNode:(unsigned int)arg2 referenceInfo:(struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })arg3;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2 showLabel:(bool)arg3;
- (bool)nodeDetailIsAutoreleasePoolContentPage:(/* Warning: unhandled struct encoding: '{?=Qb60b4@}' */ struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })arg1;
- (bool)nodeIsAutoreleasePoolContentPage:(unsigned int)arg1;
- (id)nodeOffsetDescription:(struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3;
- (unsigned int)nodeReferencedFromDataRegion:(id)arg1 byGlobalSymbol:(id)arg2;
- (unsigned long long)physicalFootprint;
- (unsigned long long)physicalFootprintPeak;
- (int)pid;
- (id)processDescriptionString;
- (id)processName;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeForSymbolName:(id)arg1 inRegion:(id)arg2;
- (id)realizedClasses;
- (id)referenceDescription:(struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
- (void)refineEdges:(unsigned int)arg1 withOptions:(unsigned int)arg2 markingInvalid:(void*)arg3;
- (void)refineTypesWithOverlay:(id)arg1;
- (unsigned int)regionCount;
- (id)regionSymbolNameForAddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })regionSymbolRangeContainingAddress:(unsigned long long)arg1;
- (void)setBinaryImagesDescription:(id)arg1;
- (void)setBinarySectionName:(id)arg1 forRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setDebugTimer:(id)arg1;
- (void)setLabel:(id)arg1 forNode:(unsigned int)arg2;
- (void)setPhysicalFootprint:(unsigned long long)arg1;
- (void)setPhysicalFootprintPeak:(unsigned long long)arg1;
- (void)setProcessDescriptionString:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setRegionSymbolName:(id)arg1 forRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setShowRawClassNames:(bool)arg1;
- (void)setShowsPhysFootprint:(bool)arg1;
- (void)setSnapshotMachTime:(unsigned long long)arg1;
- (void)setStackLogReader:(id)arg1;
- (void)setThreadName:(id)arg1 forRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setUserMarked:(void*)arg1;
- (id)shortLabelForNode:(unsigned int)arg1;
- (id)shortNodeDescription:(unsigned int)arg1;
- (bool)showRawClassNames;
- (bool)showsPhysFootprint;
- (unsigned long long)snapshotMachTime;
- (id)stackLogReader;
- (id)threadNameForAddress:(unsigned long long)arg1;
- (unsigned int)vmPageSize;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (unsigned int)zoneCount;
- (id)zoneNameForIndex:(unsigned int)arg1;

@end
