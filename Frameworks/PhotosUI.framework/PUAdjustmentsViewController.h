/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAdjustmentsViewController : UIViewController <CEKSliderDelegate, PUPhotoEditBaseAdjustmentCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    UICollectionView * _collectionView;
    PUAdjustmentsViewFlowLayout * _collectionViewLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _controlSize;
    <PUAdjustmentsViewDataSource> * _dataSource;
    <PUAdjustmentViewControllerDelegate> * _delegate;
    bool  _didPerformHapticFeedback;
    bool  _didSetupControls;
    bool  _isAnimatingScroll;
    UIImage * _itemBackgroundImage;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastOffset;
    long long  _layoutDirection;
    double  _previousTimeStamp;
    PUAdjustmentInfo * _selectedAdjustmentInfo;
    NSIndexPath * _selectedIndexPath;
    UIImage * _selectedItemBackgroundImage;
    PUSelectionFeedbackGenerator * _selectionFeedbackGenerator;
    bool  _shouldDisplayControlValues;
    bool  _shouldDisplayMappedValues;
    CEKSlider * _slider;
    bool  _sliderIsScrubbing;
    PXUISnappingController * _snappingController;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) PUAdjustmentsViewFlowLayout *collectionViewLayout;
@property (nonatomic) struct CGSize { double x1; double x2; } controlSize;
@property (nonatomic) <PUAdjustmentsViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUAdjustmentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPerformHapticFeedback;
@property (nonatomic) bool didSetupControls;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimatingScroll;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, readonly) PUAdjustmentInfo *selectedAdjustmentInfo;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (nonatomic, retain) PUSelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (nonatomic) bool shouldDisplayControlValues;
@property (nonatomic) bool shouldDisplayMappedValues;
@property (nonatomic, retain) CEKSlider *slider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundImageForItemAtIndexPath:(id)arg1;
- (bool)_canShowWhileLocked;
- (id)_circularImageWithSize:(struct CGSize { double x1; double x2; })arg1 color:(id)arg2;
- (void)_performFeedbackIfNeeded;
- (void)_resetControlsAtIndexPath:(id)arg1;
- (void)_setupCellBackgroundImagesIfNeeded;
- (void)_sliderDidEndScrolling;
- (void)_updateCell:(id)arg1 withInfo:(id)arg2;
- (void)_updateCollectionViewLayoutDirection:(long long)arg1;
- (void)_updateSelectedInfo;
- (void)_updateSliderForControlAtIndexPath:(id)arg1;
- (void)_updateViewLayout;
- (bool)canToggleCell:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionViewLayout;
- (struct CGSize { double x1; double x2; })controlSize;
- (id)dataSource;
- (id)delegate;
- (bool)didPerformHapticFeedback;
- (bool)didSetupControls;
- (void)didToggleCell:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isAnimatingScroll;
- (long long)layoutDirection;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)preferredUserInterfaceStyle;
- (void)resetControls;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectedAdjustmentInfo;
- (id)selectedIndexPath;
- (id)selectionFeedbackGenerator;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setControlSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidPerformHapticFeedback:(bool)arg1;
- (void)setDidSetupControls:(bool)arg1;
- (void)setIsAnimatingScroll:(bool)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setSelectionFeedbackGenerator:(id)arg1;
- (void)setShouldDisplayControlValues:(bool)arg1;
- (void)setShouldDisplayMappedValues:(bool)arg1;
- (void)setSlider:(id)arg1;
- (bool)shouldDisplayControlValues;
- (bool)shouldDisplayMappedValues;
- (id)slider;
- (void)slider:(id)arg1 willUpdateValue:(double*)arg2 withVelocity:(double)arg3;
- (void)sliderDidEndScrolling:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)sliderWillBeginScrolling:(id)arg1;
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)updateControls;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
