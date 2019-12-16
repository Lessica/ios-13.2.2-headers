/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroductionController : NSObject {
    bool  _allowParentalControls;
    NSString * _childName;
    id /* block */  _completionBlock;
    bool  _forceParentalControls;
    STIntroductionModel * _introductionModel;
    bool  _isModalPresentation;
    UINavigationController * _navigationController;
    bool  _skipWelcome;
}

@property bool allowParentalControls;
@property (copy) NSString *childName;
@property (copy) id /* block */ completionBlock;
@property bool forceParentalControls;
@property (readonly) UIViewController *initialViewController;
@property (readonly) STIntroductionModel *introductionModel;
@property (nonatomic) bool isModalPresentation;
@property (retain) UINavigationController *navigationController;
@property bool skipWelcome;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_viewControllerCompleted:(id)arg1;
- (id)_viewControllerFollowingViewController:(id)arg1;
- (bool)allowParentalControls;
- (id)childName;
- (id /* block */)completionBlock;
- (bool)forceParentalControls;
- (id)init;
- (id)initialViewController;
- (id)introductionModel;
- (bool)isModalPresentation;
- (id)navigationController;
- (void)presentOverViewController:(id)arg1;
- (void)setAllowParentalControls:(bool)arg1;
- (void)setChildName:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setForceParentalControls:(bool)arg1;
- (void)setIsModalPresentation:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setSkipWelcome:(bool)arg1;
- (bool)skipWelcome;

@end
