/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VEKProduction_MiroMemory_Bridge : NSObject {
    MiroAutoEditor * _autoEditor;
    VEKBlueprint * _blueprint;
    VEKExportController * _exportController;
    MiroMemory * _memory;
    unsigned long long  _nonLocalPickedAssetCount;
    AVPlayerItem * _playerItem;
    NSString * _songID;
    NSSet * _suggestions;
    VEKProgressWatcher * _watcherProperty;
}

@property (retain) MiroAutoEditor *autoEditor;
@property (nonatomic, retain) VEKBlueprint *blueprint;
@property (nonatomic, retain) VEKExportController *exportController;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic) unsigned long long nonLocalPickedAssetCount;
@property (retain) AVPlayerItem *playerItem;
@property (nonatomic) double requestedDuration;
@property (nonatomic, retain) NSString *songID;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSSet *suggestions;
@property (nonatomic, retain) NSString *title;
@property (retain) VEKProgressWatcher *watcherProperty;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_exportProject:(id)arg1 presets:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_generateProjectWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)addAsset:(id)arg1;
- (id)autoEditor;
- (id)blueprint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)didFinishExport;
- (id)exportController;
- (void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(bool)arg3;
- (void)exportWithPresets:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)fudgedDownloadInfo;
- (id)fudgedDurationInfo;
- (void)generateProjectWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (bool)isPending;
- (id)keyAsset;
- (double)maxDuration;
- (double)maximumDuration;
- (id)memory;
- (id)memoryViewedDate;
- (long long)moodForMoodID:(id)arg1;
- (id)moodIDForMood:(long long)arg1;
- (id)moodIDmap;
- (unsigned long long)nonLocalPickedAssetCount;
- (long long)pickedItemCount;
- (id)playerItem;
- (void)playerItemWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAsset:(id)arg1;
- (void)removeClip:(id)arg1;
- (double)requestedDuration;
- (id)requestedMood;
- (void)setAutoEditor:(id)arg1;
- (void)setBlueprint:(id)arg1;
- (void)setExportController:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setNonLocalPickedAssetCount:(unsigned long long)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setRangeOfInterest:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forClip:(id)arg2;
- (void)setRequestedDuration:(double)arg1;
- (void)setSongID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVolume:(long long)arg1 forClip:(id)arg2;
- (void)setWatcherProperty:(id)arg1;
- (void)setupDownloadHandler;
- (id)songID;
- (id)subtitle;
- (id)suggestions;
- (id)title;
- (void)updateBlueprintOnMemory;
- (void)updateNonLocalPickedAssetCount;
- (void)updateSuggestionsOnMemory;
- (id)watcherProperty;

@end
