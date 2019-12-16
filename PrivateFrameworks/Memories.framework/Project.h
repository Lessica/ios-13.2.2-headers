/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface Project : NSObject <NSKeyedUnarchiverDelegate, PVImageDelegate> {
    bool  _allowsSplits;
    double  _aspectRatio;
    ProjectAssetManager * _assetManager;
    TitleDefinition * _defaultTitle;
    <ProjectDelegate> * _delegate;
    NSMutableArray * _deletedMediaFiles;
    bool  _fadeSongForce;
    double  _fadeToBlackDuration;
    double  _fadeToBlackStartTime;
    bool  _isExportingPlist;
    bool  _isMiro;
    NSArray * _lastArchiveNameAndDate;
    NSArray * _savedEditList;
    NSMutableDictionary * m_contentModesForOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  m_currentSize;
    int  m_currentTime;
    NSMutableArray * m_deletedMediaFiles;
    bool  m_dirty;
    NSString * m_displayName;
    int  m_duration;
    int  m_durationForAllAssets;
    int  m_editListDuration;
    NSDictionary * m_editedRanges;
    int  m_exportHeight;
    int  m_frameRate;
    bool  m_hasBeenModified;
    NSString * m_identifier;
    int  m_isEditingCount;
    int  m_kenBurnsAcceptability;
    FIFOCache * m_kenBurnsImageCache;
    bool  m_missingKBSourceImage;
    NSDate * m_modDate;
    bool  m_modifiedSincePublish;
    bool  m_needsToUpdateAnchors;
    NSString * m_path;
    NSMutableDictionary * m_project;
    NSMutableArray * m_projectChangeLogs;
    int  m_projectID;
    bool  m_readOnly;
    int  m_suspendMusicValidate;
    int  m_suspendSave;
    int  m_suspendUpdateAnchors;
    FIFOCache * m_trailerShotCache;
    NSUndoManager * m_undoManager;
    NSMutableArray * m_unusedBkgdAudioClips;
    bool  m_validate;
}

@property (nonatomic) bool allowOriginalMusicForNoneTheme;
@property (nonatomic) bool allowsSplits;
@property (nonatomic, readonly) int aspect;
@property (nonatomic) double aspectRatio;
@property (nonatomic, retain) ProjectAssetManager *assetManager;
@property (nonatomic, readonly) NSString *assetsDirectory;
@property (nonatomic, retain) NSString *audioTimePitchAlgorithm;
@property (nonatomic, retain) NSMutableArray *backgroundAudioClips;
@property (nonatomic) int currentTime;
@property (nonatomic, retain) NSMutableArray *cutaways;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) TitleDefinition *defaultTitle;
@property (nonatomic, copy) NSString *defaultTransitionType;
@property (nonatomic) <ProjectDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *deletedMediaFiles;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) int durationForAllAssets;
@property (nonatomic, retain) NSMutableArray *editList;
@property (nonatomic, readonly) bool exportAt60fps;
@property (nonatomic, readonly) NSString *exportDirectory;
@property (nonatomic) bool fadeInFromBlack;
@property (nonatomic) bool fadeOutToBlack;
@property (nonatomic) bool fadeSongForce;
@property (nonatomic) double fadeToBlackDuration;
@property (nonatomic) double fadeToBlackStartTime;
@property (nonatomic, retain) PVEffect *filterEffect;
@property (nonatomic, retain) NSString *filterEffectID;
@property (nonatomic, readonly) unsigned int filterSeed;
@property (nonatomic, retain) NSMutableArray *foregroundAudioClips;
@property (nonatomic) unsigned long long frameRateMode;
@property (nonatomic) bool hasBeenModified;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isExportingPlist;
@property (nonatomic) bool isMiro;
@property (nonatomic, readonly) bool isSimpleProject;
@property (nonatomic, retain) NSArray *lastArchiveNameAndDate;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic) bool modifiedSincePublish;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, readonly) NSString *persistedStorageName;
@property (nonatomic, readonly) bool playbackAt60fps;
@property (nonatomic, retain) NSMutableDictionary *projectDictionary;
@property (nonatomic, readonly) int projectID;
@property (nonatomic, readonly) NSString *projectVersion;
@property (nonatomic) bool readOnly;
@property (nonatomic, retain) NSArray *savedEditList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *temporaryUniqueIdentifier;
@property (nonatomic, retain) NSString *themeID;
@property (getter=isTrailer, nonatomic, readonly) bool trailer;
@property (nonatomic, retain) NSMutableDictionary *trailerDict;
@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic) bool useThemeAudio;

+ (id)assetsDirectory:(id)arg1;
+ (double)defaultAspectRatio;
+ (id)defaultProjectImage;
+ (struct CGSize { double x1; double x2; })exportImageSize:(struct CGSize { double x1; double x2; })arg1;
+ (void)findSharedMediaItems:(id)arg1 inProjectPlist:(id)arg2 addingToResultsMap:(id*)arg3;
+ (id)firstClipDictInEditListOfProjectPlist:(id)arg1;
+ (struct CGSize { double x1; double x2; })playBackImageSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)projectFilePathFromProjectPath:(id)arg1 forWriting:(bool)arg2;
+ (id)projectHolderPathFromProjectPath:(id)arg1 forWriting:(bool)arg2;
+ (id)projectWithSingleMovieClip:(id)arg1;
+ (void)replaceProjectsURL:(id)arg1 withURL:(id)arg2 inProjectPlist:(id)arg3;
+ (void)setProjectClass:(Class)arg1;
+ (struct CGSize { double x1; double x2; })sizeForMaxPixels:(double)arg1 sourceSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGSize { double x1; double x2; })sizeForRenderIntent:(int)arg1 sourceSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGSize { double x1; double x2; })thumbImageSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)trailerIsSuitableForThisDevice:(id)arg1;

- (void)_addPanAndZoomForKenBurnsClip:(id)arg1 image:(id)arg2;
- (id)_detectedFacesInImage:(id)arg1 clip:(id)arg2;
- (void)_enumerateMediaClipsUsingBlock:(id /* block */)arg1;
- (id)_keyForRenderingIntent:(int)arg1;
- (id)addAutomaticTransitions;
- (void)addForegroundAudioClips:(id)arg1 withAnchor:(id)arg2;
- (void)addPanAndZoomForKenBurnsClip:(id)arg1;
- (void)adjustDurationForKBClip:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustKBRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toContainRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withinImageSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)allowOriginalMusicForNoneTheme;
- (int)allowedTransitionDuration:(int)arg1;
- (bool)allowsSplits;
- (id)anchoredSegmentsIgnoringClip:(id)arg1 clipType:(int)arg2;
- (int)anchoredSlotAtTime:(int)arg1 duration:(int)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)appendVideoClip:(id)arg1;
- (struct CGSize { double x1; double x2; })applyAspectRatioTo16by9Size:(struct CGSize { double x1; double x2; })arg1;
- (int)aspect;
- (double)aspectRatio;
- (id)assetManager;
- (void)assetTrailerShotCache;
- (id)assetsDirectory;
- (id)audioClipsAnchoredToClip:(id)arg1;
- (void)audioOffsetBoundsForClip:(id)arg1 minStart:(int*)arg2 maxStart:(int*)arg3 minEnd:(int*)arg4 maxEnd:(int*)arg5;
- (void)audioOffsetsForClip:(id)arg1 startOffset:(int*)arg2 endOffset:(int*)arg3;
- (void)audioRangeForClip:(id)arg1 start:(int*)arg2 end:(int*)arg3;
- (id)audioTimePitchAlgorithm;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })availableAnchoredRangeAtTime:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3;
- (id)availableAnchoredRangesIgnoringClip:(id)arg1 clipType:(int)arg2;
- (int)availableSpaceEndingAtTime:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3;
- (int)availableSpaceStartingAtTime:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3;
- (id)backgroundAudioClips;
- (id)backgroundAudioClipsInUseAtTime:(int)arg1;
- (void)beginUndoGroup:(id)arg1;
- (unsigned long long)bytesNeededForExport:(id)arg1;
- (unsigned long long)bytesNeededForMultipleExports:(id)arg1;
- (id)cacheKeyForAssetsLibraryURL:(id)arg1 renderingIntent:(int)arg2;
- (id)cacheKeyForFileURL:(id)arg1 renderingIntent:(int)arg2;
- (id)cacheKeyForIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (id)cacheKeyForKenBurnsIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (id)cacheKeyForPhotosIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (bool)canDetachAudioFromClip:(id)arg1;
- (bool)canDuplicateClip:(id)arg1;
- (bool)canMoveAudioToForegroundFromClip:(id)arg1;
- (bool)canSplitClip:(id)arg1 atTime:(int)arg2;
- (void)captureContentsOfClip:(id)arg1 needsDisplay:(bool)arg2;
- (void)checkForReadOnlyCookie;
- (void)cleanupMalformedAudioPaths:(id)arg1;
- (void)cleanupProjectDictionary:(id)arg1;
- (void)cleanupUnusedMediaFiles;
- (bool)clip:(id)arg1 isInUseAtTime:(int)arg2;
- (id)clipAfterClip:(id)arg1;
- (id)clipAfterClip:(id)arg1 inClips:(id)arg2;
- (id)clipAfterTransitionClip:(id)arg1;
- (id)clipBeforeClip:(id)arg1;
- (id)clipBeforeClip:(id)arg1 inClips:(id)arg2;
- (id)clipBeforeTransitionClip:(id)arg1;
- (int)clipDurationGoodFor60fps:(id)arg1;
- (unsigned long long)clipIndexInArray:(id)arg1 atTime:(int)arg2;
- (id)clips;
- (id)clipsAnchoredToClip:(id)arg1;
- (id)clipsForClipType:(int)arg1;
- (id)clipsInUseAtTime:(int)arg1;
- (id)clipsOfType:(int)arg1 inUseAtTime:(int)arg2;
- (id)clipsOfType:(int)arg1 inUseFromTime:(int)arg2 toTime:(int)arg3;
- (bool)clipsOnlyHaveAudioCharacteristics;
- (long long)compareModificationDates:(id)arg1;
- (bool)containsSufficient60fpsContent;
- (int)convertClipStartTimeToProjectTime:(id)arg1;
- (void)convertPlistToCustomObjects:(id)arg1;
- (id)convertToPlist;
- (id)copyMediaClipsOmittingFirstClip:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createSubDirectories;
- (int)currentTime;
- (id)cutaways;
- (id)cutawaysAnchoredToClip:(id)arg1;
- (id)cutawaysInUseAtTime:(int)arg1;
- (void)dealloc;
- (id)defaultTitle;
- (id)defaultTransitionType;
- (id)delegate;
- (void)deleteAllExportedFiles;
- (void)deleteExportedFile:(id)arg1;
- (void)deleteMediaFileAtURL:(id)arg1;
- (id)deletedMediaFiles;
- (id)description;
- (id)detachMovieAudioFromClip:(id)arg1;
- (void)detachTransitions;
- (id)detectedFaceRectsInKenBurnsClip:(id)arg1;
- (id)detectedFacesInKenBurnsClip:(id)arg1;
- (void)didExport;
- (void)didFinishTrimmingClip;
- (void)didInitWithContentsOfFile;
- (id)displayName;
- (int)displayedDurationOfClip:(id)arg1;
- (id)duplicateClip:(id)arg1;
- (int)duration;
- (int)durationForAllAssets;
- (double)durationInSeconds;
- (double)durationOfEditListClipInSeconds:(id)arg1;
- (double)durationSecondsFromFrameTime:(int)arg1;
- (id)editInfo;
- (id)editList;
- (id)editListClipInUseAtTime:(int)arg1;
- (id)editListClipInUseAtTime:(int)arg1 timeFromPreviousEdit:(int*)arg2;
- (id)editListClipInUseNearTime:(int)arg1;
- (int)editListDuration;
- (id)editedRangeList;
- (id)endEditing;
- (void)endEditingOfTrailer;
- (void)endUndoGroup;
- (unsigned long long)estimatedBundleSizeIncludingExternalAssets:(bool)arg1 bundleSize:(unsigned long long*)arg2 externalMap:(id*)arg3;
- (unsigned long long)estimatedSizeOfPassThroughExport;
- (id)expandedEditList;
- (bool)exportAt60fps;
- (id)exportDirectory;
- (id)exportPresetForATV;
- (id)exportPresetForPlugin;
- (id)exportedFilePath:(id)arg1;
- (bool)fadeInFromBlack;
- (bool)fadeOutToBlack;
- (bool)fadeSongForce;
- (double)fadeToBlackDuration;
- (double)fadeToBlackStartTime;
- (id)fileNameFromPreset:(id)arg1;
- (id)filePathForCacheKey:(id)arg1;
- (id)filePathForIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (id)filterEffect;
- (id)filterEffectID;
- (unsigned int)filterSeed;
- (id)firstClip;
- (id)firstMovieClip;
- (void)fixupShotThumbnailFileNameAfterImport;
- (void)flushMajorChanges;
- (void)flushThumbnailTrailerShot;
- (id)foregroundAudioClips;
- (id)foregroundAudioClipsInUseAtTime:(int)arg1;
- (unsigned long long)frameRateMode;
- (bool)has1080Content:(id)arg1 clipType:(int)arg2 onlyMovies:(bool)arg3;
- (bool)has2160PContent:(id)arg1 clipType:(int)arg2 onlyMovies:(bool)arg3;
- (bool)hasAnyExportedFile;
- (bool)hasBeenModified;
- (id)hasExportedFile:(id)arg1;
- (id)hasExportedFileForFullScreen:(bool)arg1;
- (bool)hasHEVCContent:(id)arg1 clipType:(int)arg2 onlyMovies:(bool)arg3;
- (bool)hasKBOnly;
- (bool)hasMissingAssets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontallyClampedKenBurnsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)identifier;
- (id)imageAtTime:(int)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)imageForIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (struct CGImage { }*)imageForURL:(id)arg1 renderingIntent:(int)arg2;
- (id)imageMatchingCurrentDeviceSizeForIdentifierURL:(id)arg1 sourceSize:(struct CGSize { double x1; double x2; })arg2 renderingIntent:(int)arg3;
- (long long)indexOfEditListClipAtTime:(int)arg1;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 validate:(bool)arg2;
- (id)initWithValidState:(bool)arg1;
- (bool)insertClip:(id)arg1 atTime:(int)arg2;
- (bool)insertClip:(id)arg1 atTime:(int)arg2 adjustOtherClips:(bool)arg3;
- (bool)insertMovieClip:(id)arg1 afterClip:(id)arg2;
- (bool)isBiggerThan720;
- (bool)isDirty;
- (bool)isEditing;
- (bool)isEmpty;
- (bool)isExportingPlist;
- (bool)isImageValid:(id)arg1 renderingIntent:(int)arg2 size:(struct CGSize { double x1; double x2; }*)arg3;
- (bool)isMiro;
- (bool)isMovie:(id)arg1 usedInList:(id)arg2;
- (bool)isMovieUsed:(id)arg1;
- (bool)isSimpleProject;
- (bool)isTrailer;
- (bool)isURL:(id)arg1 usedInList:(id)arg2;
- (id)keyframeTimes;
- (id)keyframeTimesForClips:(id)arg1;
- (id)keyframeTimesForEditListClips:(id)arg1;
- (id)lastArchiveNameAndDate;
- (id)lastClip;
- (id)lastContentModeForOrientation:(long long)arg1;
- (id)loadFromProjectData:(id)arg1;
- (id)localExportDirectory;
- (void)markDirty;
- (void)markDirty:(bool)arg1;
- (id)markFacesInImage:(id)arg1 highAccuracy:(bool)arg2;
- (int)maxAllowedDurationOfTransition:(id)arg1 simple:(int*)arg2;
- (float)maxSourceFrameRate;
- (id)md5StringFromData:(id)arg1;
- (id)mediaClipsInfoOmittingFirstClip:(bool)arg1;
- (int)minClipDurationForLeftEatDuration:(int)arg1 rightEatDuration:(int)arg2 totalDuration:(bool)arg3;
- (int)minTotalDurationOfClip:(id)arg1;
- (int)minimumClipDurationForValidation;
- (bool)miroContainsSufficient60fpsContent;
- (id)modificationDate;
- (bool)modifiedSincePublish;
- (bool)moveClipsAfterTime:(int)arg1 duration:(int)arg2;
- (void)moveClipsInArray:(id)arg1 afterTime:(int)arg2 duration:(int)arg3;
- (void)moveClipsInArray:(id)arg1 afterTime:(int)arg2 duration:(int)arg3 except:(id)arg4;
- (id)moveTitleToBlack:(id)arg1;
- (int)movieOrKBDurationGoodFor60fps:(id)arg1;
- (int)naturalFrameRate;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)nearestAnchoredSlotAtTime:(int)arg1 duration:(int)arg2 ignoringClip:(id)arg3 clipType:(int)arg4;
- (id)nextClipOfType:(int)arg1 afterClip:(id)arg2;
- (void)nextKenBurnsStart:(struct { float x1; float x2; float x3; }*)arg1 end:(struct { float x1; float x2; float x3; }*)arg2;
- (id)nonEditListClipsIn:(id)arg1 inUseAtTime:(int)arg2;
- (id)nonTransitionClipBeforeClip:(id)arg1;
- (void)noteClipsChangedInLog:(id)arg1;
- (unsigned long long)numberOfDetectedFacesInKenBurnsClip:(id)arg1;
- (unsigned int)numberOfForegroundAudioTracks;
- (int)numberOfNewsIntroTitlesUsed:(id)arg1 matchesClip:(bool*)arg2;
- (bool)okToDeleteFile:(id)arg1;
- (id)path;
- (id)persistedStorageName;
- (bool)playbackAt60fps;
- (id)plistAsDataWithError:(id*)arg1;
- (void)prepareForCloudPersistence;
- (id)previousClipOfType:(int)arg1 beforeClip:(id)arg2;
- (id)projectDictionary;
- (int)projectID;
- (id)projectVersion;
- (bool)readOnly;
- (void)reattachTransitions;
- (void)rebuildFingerprints:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectEnclosingAllFacesInKenBurnsClip:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectFromKenBurnsPosition:(struct { float x1; float x2; float x3; })arg1 outputAspectRatio:(float)arg2 image:(id)arg3;
- (bool)regenerateImagesIfNecessaryForIdentifierURL:(id)arg1 kbInfo:(id)arg2 exportOnly:(bool)arg3;
- (void)regenerateKBimageFilesIfNecessary:(bool)arg1;
- (void)removeAnchorForClip:(id)arg1;
- (void)removeClip:(id)arg1 releaseAnchor:(bool)arg2;
- (void)removePanAndZoomForKenBurnsClip:(id)arg1;
- (bool)rename:(id)arg1 to:(id)arg2 withPath:(id)arg3;
- (bool)renameTo:(id)arg1;
- (void)replaceClip:(id)arg1 withClip:(id)arg2;
- (void)replacePhotosToKenBurnsURLs;
- (id)replaceURL:(id)arg1 inMovie:(id)arg2 andEditItem:(id)arg3 withURL:(id)arg4;
- (id)replaceURL:(id)arg1 withURL:(id)arg2;
- (void)restoreBackgroundAudioClips:(id)arg1;
- (void)restoreCutaways:(id)arg1;
- (void)restoreForegroundAudioClips:(id)arg1;
- (id)restoredAnchoredClips:(id)arg1;
- (void)resumeMusicValidate;
- (bool)resumeSave;
- (void)resumeUpdateAnchors;
- (bool)save;
- (id)saveAnchoredClipsInList:(id)arg1;
- (id)saveBackgroundAudioClips;
- (void)saveClipAssetToProject:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveClipAssetToProject:(id)arg1 withCompletionHandler:(id /* block */)arg2 excludedRenderingIntents:(id)arg3;
- (void)saveClipImageToProject:(id)arg1 clip:(id)arg2;
- (id)saveCutaways;
- (id)saveForegroundAudioClips;
- (id)saveImageOfAssetRepresentation:(id)arg1;
- (id)saveImageOfAssetRepresentation:(id)arg1 renderingIntent:(int)arg2;
- (id)savePlaybackImageOfAssetRepresentation:(id)arg1;
- (id)saveThumbnailOfAssetRepresentation:(id)arg1;
- (void)saveThumbnailTrailerShot:(id)arg1 forURL:(id)arg2 index:(int)arg3 time:(int)arg4 size:(struct CGSize { double x1; double x2; })arg5;
- (bool)saveToPath:(id)arg1;
- (id)savedEditList;
- (id)scaleAndSaveImageToProject:(id)arg1 cacheKey:(id)arg2 renderingIntent:(int)arg3;
- (id)scaleDownOrRotateIfNeeded:(id)arg1;
- (double)secondsFromProjectTime:(int)arg1;
- (void)setAllowOriginalMusicForNoneTheme:(bool)arg1;
- (void)setAllowsSplits:(bool)arg1;
- (void)setAspectRatio:(double)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setBackgroundAudioClips:(id)arg1;
- (void)setCurrentTime:(int)arg1;
- (void)setCutaways:(id)arg1;
- (void)setDefaultTitle:(id)arg1;
- (void)setDefaultTransitionType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeletedMediaFiles:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDurationForAllAssets:(int)arg1;
- (void)setEditList:(id)arg1;
- (void)setFadeInFromBlack:(bool)arg1;
- (void)setFadeOutToBlack:(bool)arg1;
- (void)setFadeSongForce:(bool)arg1;
- (void)setFadeToBlackDuration:(double)arg1;
- (void)setFadeToBlackStartTime:(double)arg1;
- (void)setFilterEffect:(id)arg1;
- (void)setFilterEffectID:(id)arg1;
- (void)setForegroundAudioClips:(id)arg1;
- (void)setFrameRateMode:(unsigned long long)arg1;
- (void)setHasBeenModified:(bool)arg1;
- (void)setIsExportingPlist:(bool)arg1;
- (void)setIsMiro:(bool)arg1;
- (void)setKenBurnsImage:(id)arg1 forCacheKey:(id)arg2 renderingIntent:(int)arg3;
- (void)setLastArchiveNameAndDate:(id)arg1;
- (void)setLastContentMode:(long long)arg1 forOrientation:(long long)arg2;
- (void)setModificationDate:(id)arg1;
- (void)setModifiedSincePublish:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)setProjectDictionary:(id)arg1;
- (void)setProjectDictionary:(id)arg1 validate:(bool)arg2;
- (void)setReadOnly:(bool)arg1;
- (void)setSavedEditList:(id)arg1;
- (void)setThemeID:(id)arg1;
- (void)setTrailerDict:(id)arg1;
- (void)setUseThemeAudio:(bool)arg1;
- (void)setupUndo;
- (bool)shouldCopyImages;
- (bool)shouldUseDerivativesDirectly;
- (id)simpleEditInfo;
- (void)sizeChanged;
- (int)snapToGuideTimeWithin:(float)arg1 ofProjectTime:(int)arg2 ignoringClip:(id)arg3 forceSnap:(bool*)arg4;
- (int)snapToGuideTimeWithinInEditListWithStartOrEndPointsWithin:(float)arg1 ofProjectTime:(int)arg2 ignoringClip:(id)arg3;
- (id)splitClip:(id)arg1 atTime:(int)arg2;
- (void)startEditing;
- (int)startOffsetForClip:(id)arg1;
- (int)startOffsetForEditListClip:(id)arg1;
- (int)startOffsetForEditListIndex:(long long)arg1;
- (void)suspendMusicValidate;
- (void)suspendSave;
- (void)suspendUpdateAnchors;
- (id)temporaryUniqueIdentifier;
- (id)themeID;
- (id)thumbnailImage;
- (id)thumbnailTrailerKeyForURL:(id)arg1 index:(int)arg2 time:(int)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (id)thumbnailTrailerShotForURL:(id)arg1 index:(int)arg2 time:(int)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (int)timeForNearestEdgeOfClip:(id)arg1 projectTime:(int)arg2;
- (id)trailerDict;
- (void)trailerIsSavingToPath:(id)arg1;
- (id)trailerShotCacheDirectory;
- (id)undoManager;
- (void)undoProjectChanges:(id)arg1;
- (void)updateAnchors;
- (void)updateAnchorsForClip:(id)arg1;
- (void)updateAnchorsIfNeeded;
- (void)updateClipsForCapriWithKonaProject:(id)arg1;
- (void)updateModificationDate;
- (void)updateTrailerMovieNameFieldsFromUnformattedString:(id)arg1;
- (bool)use1080Pcontent:(bool)arg1;
- (bool)use2160Pcontent:(bool)arg1;
- (bool)useClipWithRotation;
- (bool)useHEVCcontent:(bool)arg1;
- (bool)useThemeAudio;
- (id)usedTrackNames;
- (bool)usesOriginalNoneThemeMusic;
- (void)validate;
- (void)validateBackgroundAudioTracks;
- (void)validateCutaways;
- (void)validateEditListTrack;
- (void)validateForegroundAudioTracks;
- (void)validateMusic;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticallyClampedKenBurnsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)videoPreviewImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (void)willBeginTrimmingClip:(id)arg1;
- (void)willStartExport:(id)arg1;
- (void)zeroOutPanAndZoomForMultiUpClip:(id)arg1;

@end
