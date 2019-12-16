/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODBReader : NSObject {
    bool  _closed;
    struct sqlite3 { } * _db;
    bool  _defunct;
    int  _editionUpdating;
    unsigned long long  _expirationRecordCount;
    struct { unsigned int x1; double x2; } * _expirationRecords;
    NSString * _path;
    NSDictionary * _pragmaOverrides;
    NSObject<OS_dispatch_queue> * _readQueue;
    struct sqlite3_stmt { } * _tileQuery;
    struct sqlite3_stmt { } * _versionQuery;
}

@property bool closed;

- (void).cxx_destruct;
- (void)_closeDB;
- (id)_dataForA:(unsigned int)arg1 andB:(unsigned int)arg2 andC:(unsigned int)arg3 andD:(unsigned int)arg4 isCurrent:(bool*)arg5 eTag:(id*)arg6;
- (id)_dataForKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; })arg1 isCurrent:(bool*)arg2 eTag:(id*)arg3;
- (void)_databaseReset:(id)arg1;
- (void)_editionUpdateBegin:(id)arg1;
- (void)_editionUpdateEnd:(id)arg1;
- (void)_openDB;
- (bool)closed;
- (id)dataForKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg1 isCurrent:(bool*)arg2 eTag:(id*)arg3;
- (void)dataForKeys:(struct GEOTileKeyList { Class x1; void *x2; void *x3; id x4; unsigned long long x5; unsigned long long x6; }*)arg1 callbackQueue:(id)arg2 asyncHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2;
- (void)setClosed:(bool)arg1;
- (void)setExpirationRecords:(struct { unsigned int x1; double x2; }*)arg1 count:(unsigned long long)arg2;

@end
