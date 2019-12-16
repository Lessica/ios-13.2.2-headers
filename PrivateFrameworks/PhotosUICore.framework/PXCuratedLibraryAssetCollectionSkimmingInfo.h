/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryAssetCollectionSkimmingInfo : NSObject {
    PXIndexPathSet * _childCollectionsIndexes;
    long long  _childCollectionsZoomLevel;
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _currentChildCollectionIndexPath;
    bool  _hintsVisible;
    <PXDisplayCollection> * _parentAssetCollection;
    bool  _slideshowStarted;
    bool  _touchInteractionStarted;
}

@property (nonatomic, retain) PXIndexPathSet *childCollectionsIndexes;
@property (nonatomic) long long childCollectionsZoomLevel;
@property (nonatomic) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } currentChildCollectionIndexPath;
@property (nonatomic) bool hintsVisible;
@property (nonatomic, retain) <PXDisplayCollection> *parentAssetCollection;
@property (nonatomic) bool slideshowStarted;
@property (nonatomic) bool touchInteractionStarted;

- (void).cxx_destruct;
- (id)childCollectionsIndexes;
- (long long)childCollectionsZoomLevel;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })currentChildCollectionIndexPath;
- (bool)hintsVisible;
- (id)parentAssetCollection;
- (void)setChildCollectionsIndexes:(id)arg1;
- (void)setChildCollectionsZoomLevel:(long long)arg1;
- (void)setCurrentChildCollectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setHintsVisible:(bool)arg1;
- (void)setParentAssetCollection:(id)arg1;
- (void)setSlideshowStarted:(bool)arg1;
- (void)setTouchInteractionStarted:(bool)arg1;
- (bool)slideshowStarted;
- (bool)touchInteractionStarted;

@end
