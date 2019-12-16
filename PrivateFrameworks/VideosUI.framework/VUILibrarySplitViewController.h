/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibrarySplitViewController : UISplitViewController <UISplitViewControllerDelegate, VUICategoryMenuViewControllerDelegate, VUIHomeShareViewControllerDelegate, VUILibraryCategoryMenuViewModelDelegate, VUILibraryGridCollectionViewControllerDelegate> {
    VUILibraryAlertView * _alertView;
    VUILibraryCategoryMenuViewModel * _categoryViewModel;
    VUILibraryGridCollectionViewController * _currentGridCollectionViewController;
    VUIMediaLibrary * _currentHomeShareMediaLibrary;
    NSIndexPath * _currentlySelectedIndexPath;
    UINavigationController * _detailNavigationController;
    bool  _hasLoaded;
    <VUILibrarySplitViewControllerDelegate> * _librarySplitViewControllerDelegate;
    UINavigationController * _masterNavigationController;
    VUIMediaLibrary * _mediaLibrary;
    VUICategoryMenuViewController * _menuViewController;
    bool  _shouldShowBackButton;
}

@property (nonatomic, retain) VUILibraryAlertView *alertView;
@property (nonatomic, retain) VUILibraryCategoryMenuViewModel *categoryViewModel;
@property (nonatomic, retain) VUILibraryGridCollectionViewController *currentGridCollectionViewController;
@property (nonatomic, retain) VUIMediaLibrary *currentHomeShareMediaLibrary;
@property (nonatomic, retain) NSIndexPath *currentlySelectedIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UINavigationController *detailNavigationController;
@property (nonatomic) bool hasLoaded;
@property (readonly) unsigned long long hash;
@property (nonatomic) <VUILibrarySplitViewControllerDelegate> *librarySplitViewControllerDelegate;
@property (nonatomic, retain) UINavigationController *masterNavigationController;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic, retain) VUICategoryMenuViewController *menuViewController;
@property (nonatomic) bool shouldShowBackButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_addRentalsUpdateNotificationObserver;
- (id)_createDetailNavigationViewControllerWithRootViewController:(id)arg1;
- (id)_deviceMediaLibrary;
- (id)_getMediaEntitiesForIndexPath:(id)arg1;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_setDisplayModeForLayoutType:(long long)arg1;
- (void)_showOrHideNoContentView;
- (void)_updateRentals;
- (id)_viewControllerForIndexPath:(id)arg1;
- (id)alertView;
- (void)categoryMenuViewController:(id)arg1 didSelectMenuItemAtIndexPath:(id)arg2;
- (void)categoryMenuViewControllerShouldDismiss:(id)arg1;
- (id)categoryViewModel;
- (id)currentGridCollectionViewController;
- (id)currentHomeShareMediaLibrary;
- (id)currentlySelectedIndexPath;
- (void)dealloc;
- (id)detailNavigationController;
- (void)fetchDidCompleteForViewModel:(id)arg1;
- (void)gridCollectionViewController:(id)arg1 didSelectMediaEntity:(id)arg2;
- (bool)hasLoaded;
- (void)homeShareViewController:(id)arg1 didSelectHomeShare:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1;
- (id)librarySplitViewControllerDelegate;
- (void)loadView;
- (id)masterNavigationController;
- (id)mediaLibrary;
- (id)menuViewController;
- (void)setAlertView:(id)arg1;
- (void)setCategoryViewModel:(id)arg1;
- (void)setCurrentGridCollectionViewController:(id)arg1;
- (void)setCurrentHomeShareMediaLibrary:(id)arg1;
- (void)setCurrentlySelectedIndexPath:(id)arg1;
- (void)setDetailNavigationController:(id)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setLibrarySplitViewControllerDelegate:(id)arg1;
- (void)setMasterNavigationController:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setMenuViewController:(id)arg1;
- (void)setPageMetricsForCategory:(id)arg1 onLibraryGridCollectionViewController:(id)arg2;
- (void)setShouldShowBackButton:(bool)arg1;
- (bool)shouldShowBackButton;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)updateForViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)vui_ppt_isLoading;

@end
