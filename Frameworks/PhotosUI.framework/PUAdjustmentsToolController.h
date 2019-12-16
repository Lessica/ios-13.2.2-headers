/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAdjustmentsToolController : PUPhotoEditToolController <PUAdjustmentViewControllerDelegate, PUAdjustmentsDataSourceDelegate, PUAdjustmentsToolControllerPPT, UIGestureRecognizerDelegate> {
    PXUISnappingController * __snappingController;
    UIView * _adjustmentPickerView;
    PUAdjustmentsViewController * _adjustmentsViewController;
    PUAutoAdjustmentController * _autoAdjustmentController;
    _UIBackdropView * _backdropBackgroundView;
    CEKBadgeTextView * _badgeView;
    PUAdjustmentsDataSource * _dataSource;
    bool  _ppt_EverAdjusted;
    double  _ppt_scrollDelta;
    UIView * _solidBackgroundView;
    bool  _useTranslucentBackground;
    long long  _viewLoadingStartTime;
}

@property (setter=_setSnappingController:, nonatomic, retain) PXUISnappingController *_snappingController;
@property (nonatomic, retain) PUAutoAdjustmentController *autoAdjustmentController;
@property (nonatomic, retain) CEKBadgeTextView *badgeView;
@property (nonatomic, retain) PUAdjustmentsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUAdjustmentsToolControllerSpec *toolControllerSpec;

- (void).cxx_destruct;
- (void)_ppt_scrollAfterDelay:(id /* block */)arg1;
- (void)_setSnappingController:(id)arg1;
- (double)_sliderLength;
- (id)_snappingController;
- (void)_updateBackgroundAnimated:(bool)arg1;
- (void)_updateBadgeTextWithInfo:(id)arg1;
- (void)adjustmentsDataChanged:(id)arg1;
- (id)adjustmentsRenderer:(id)arg1;
- (void)adjustmentsViewControllerDidUpdateSelectedControl:(id)arg1;
- (id)autoAdjustmentController;
- (void)autoEnhanceActionStateChanged;
- (id)badgeView;
- (bool)canResetToDefaultValue;
- (id)centerToolbarView;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (id)dataSource;
- (void)didBecomeActiveTool;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (id)localizedName;
- (id)localizedResetToolActionTitle;
- (void)mediaViewIsReady;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_selectBWSlider:(id /* block */)arg1;
- (void)ppt_selectColorSlider:(id /* block */)arg1;
- (void)ppt_selectLightSlider:(id /* block */)arg1;
- (void)ppt_setSteps:(long long)arg1;
- (void)resetToDefaultValueAnimated:(bool)arg1;
- (void)setAutoAdjustmentController:(id)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setUseGradientBackground:(bool)arg1 animated:(bool)arg2;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;
- (void)specDidChange;
- (long long)toolControllerTag;
- (id)toolbarIcon;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsZoomAndPanEnabled;
- (void)willBecomeActiveTool;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
