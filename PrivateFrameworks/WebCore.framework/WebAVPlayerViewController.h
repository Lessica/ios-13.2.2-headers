/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVPlayerViewController : NSObject <AVPlayerViewControllerDelegate> {
    struct RetainPtr<AVPlayerViewController> { 
        void *m_ptr; 
    }  _avPlayerViewController;
    <AVPlayerViewControllerDelegate_WebKitOnly> * _delegate;
    struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit {} *x_6_1_1; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_7_1_1; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x_8_1_1; } x8; struct VideoFullscreenModel {} *x9; struct VideoFullscreenChangeObserver {} *x10; struct RetainPtr<UIWindow> { void *x_11_1_1; } x11; struct RetainPtr<UIViewController> { void *x_12_1_1; } x12; struct RetainPtr<UIView> { void *x_13_1_1; } x13; struct RetainPtr<UIView> { void *x_14_1_1; } x14; struct RetainPtr<UIWindow> { void *x_15_1_1; } x15; struct RetainPtr<WebAVPlayerLayerView> { void *x_16_1_1; } x16; struct Function<void (bool)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >=^{CallableWrapperBase<void, bool> {} x17; } * _fullscreenInterface;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)avPlayerViewController;
- (void)enterFullScreenAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)exitFullScreenAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithFullscreenInterface:(struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit {} *x_6_1_1; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_7_1_1; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x_8_1_1; } x8; struct VideoFullscreenModel {} *x9; struct VideoFullscreenChangeObserver {} *x10; struct RetainPtr<UIWindow> { void *x_11_1_1; } x11; struct RetainPtr<UIViewController> { void *x_12_1_1; } x12; struct RetainPtr<UIView> { void *x_13_1_1; } x13; struct RetainPtr<UIView> { void *x_14_1_1; } x14; struct RetainPtr<UIWindow> { void *x_15_1_1; } x15; struct RetainPtr<WebAVPlayerLayerView> { void *x_16_1_1; } x16; struct Function<void (bool)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >=^{CallableWrapperBase<void, bool> {} x17; }*)arg1;
- (bool)isPictureInPictureActive;
- (bool)isPictureInPicturePossible;
- (bool)pictureInPictureActive;
- (bool)pictureInPictureWasStartedWhenEnteringBackground;
- (bool)playerViewControllerShouldHandleDoneButtonTap:(id)arg1;
- (void)removeFromParentViewController;
- (void)setAllowsPictureInPicturePlayback:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (bool)showsPlaybackControls;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (id)view;

@end