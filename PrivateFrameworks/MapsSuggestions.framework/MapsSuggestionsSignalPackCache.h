/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsSignalPackCache : NSObject {
    NSMutableArray * _mapItems;
    NSMutableArray * _signalPacks;
}

- (void).cxx_destruct;
- (id)_containsSignalPackForMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; unsigned int x7; unsigned int x8; struct os_unfair_lock_s { unsigned int x_9_1_1; } x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 1; unsigned int x_10_1_5 : 1; unsigned int x_10_1_6 : 1; unsigned int x_10_1_7 : 1; unsigned int x_10_1_8 : 1; unsigned int x_10_1_9 : 1; unsigned int x_10_1_10 : 1; unsigned int x_10_1_11 : 1; unsigned int x_10_1_12 : 1; unsigned int x_10_1_13 : 1; unsigned int x_10_1_14 : 1; unsigned int x_10_1_15 : 1; unsigned int x_10_1_16 : 1; unsigned int x_10_1_17 : 1; unsigned int x_10_1_18 : 1; } x10; }*)arg1;
- (unsigned long long)_count;
- (bool)_popRow;
- (void)_removeObjectsAtIndex:(unsigned long long)arg1;
- (id)init;
- (bool)insertMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; unsigned int x7; unsigned int x8; struct os_unfair_lock_s { unsigned int x_9_1_1; } x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 1; unsigned int x_10_1_5 : 1; unsigned int x_10_1_6 : 1; unsigned int x_10_1_7 : 1; unsigned int x_10_1_8 : 1; unsigned int x_10_1_9 : 1; unsigned int x_10_1_10 : 1; unsigned int x_10_1_11 : 1; unsigned int x_10_1_12 : 1; unsigned int x_10_1_13 : 1; unsigned int x_10_1_14 : 1; unsigned int x_10_1_15 : 1; unsigned int x_10_1_16 : 1; unsigned int x_10_1_17 : 1; unsigned int x_10_1_18 : 1; } x10; }*)arg1 signalPack:(id)arg2;
- (id)signalPackForMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; unsigned int x7; unsigned int x8; struct os_unfair_lock_s { unsigned int x_9_1_1; } x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 1; unsigned int x_10_1_5 : 1; unsigned int x_10_1_6 : 1; unsigned int x_10_1_7 : 1; unsigned int x_10_1_8 : 1; unsigned int x_10_1_9 : 1; unsigned int x_10_1_10 : 1; unsigned int x_10_1_11 : 1; unsigned int x_10_1_12 : 1; unsigned int x_10_1_13 : 1; unsigned int x_10_1_14 : 1; unsigned int x_10_1_15 : 1; unsigned int x_10_1_16 : 1; unsigned int x_10_1_17 : 1; unsigned int x_10_1_18 : 1; } x10; }*)arg1;

@end
