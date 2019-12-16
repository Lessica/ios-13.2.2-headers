/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMuninGestureController : NSObject <UIGestureRecognizerDelegate> {
    <MKMuninGestureControllerDelegate> * _delegate;
    long long  _lastZoomDirection;
    double  _lastZoomScale;
    MKMuninView * _muninView;
    bool  _navigatingEnabled;
    VKCompoundAnimation * _panDecelerationAnimationGroup;
    UIPanGestureRecognizer * _panGestureRecognizer;
    bool  _panningEnabled;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    bool  _pinchingEnabled;
    bool  _readyToReplayTap;
    UITapGestureRecognizer * _singleNavigateGestureRecognizer;
    NSDate * _singleTapTime;
    double  _startZoomScale;
    long long  _userInteractionCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKMuninGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MKMuninView *muninView;
@property (nonatomic) bool navigatingEnabled;
@property (nonatomic) bool panningEnabled;
@property (nonatomic) bool pinchingEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_moveBackToReplayTap;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithMuninView:(id)arg1;
- (id)muninView;
- (bool)navigatingEnabled;
- (bool)panningEnabled;
- (bool)pinchingEnabled;
- (void)setDelegate:(id)arg1;
- (void)setMuninView:(id)arg1;
- (void)setNavigatingEnabled:(bool)arg1;
- (void)setPanningEnabled:(bool)arg1;
- (void)setPinchingEnabled:(bool)arg1;

@end
