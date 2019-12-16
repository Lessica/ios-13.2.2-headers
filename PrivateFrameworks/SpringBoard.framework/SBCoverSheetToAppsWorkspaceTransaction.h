/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBDismissOverlaysAnimationController * _dismissOverlaysAnimationController;
    bool  _preservesBanners;
    SBTransientOverlayDismissAllWorkspaceTransaction * _transientOverlayTransaction;
}

@property (nonatomic) bool preservesBanners;

- (void).cxx_destruct;
- (void)_begin;
- (void)_dismissOverlaysIfNeeded;
- (unsigned long long)_dismissOverlaysOptions;
- (id)initWithTransitionRequest:(id)arg1;
- (bool)preservesBanners;
- (void)setPreservesBanners:(bool)arg1;

@end
