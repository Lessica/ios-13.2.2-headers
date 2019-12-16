/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKGeolocationProviderIOS : NSObject {
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider> > { 
        void *m_ptr; 
    }  _coreLocationProvider;
    struct RefPtr<WebKit::WebGeolocationManagerProxy, WTF::DumbPtrTraits<WebKit::WebGeolocationManagerProxy> > { 
        struct WebGeolocationManagerProxy {} *m_ptr; 
    }  _geolocationManager;
    bool  _isWebCoreGeolocationActive;
    struct RefPtr<WebKit::WebGeolocationPosition, WTF::DumbPtrTraits<WebKit::WebGeolocationPosition> > { 
        struct WebGeolocationPosition {} *m_ptr; 
    }  _lastActivePosition;
    struct Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow, 16> { 
        struct GeolocationRequestData {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _requestsWaitingForCoreLocationAuthorization;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setEnableHighAccuracy:(bool)arg1;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)decidePolicyForGeolocationRequestFromOrigin:(struct SecurityOrigin { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct SecurityOriginData { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_2_1_2; struct Optional<unsigned short> { bool x_3_2_1; union constexpr_storage_t<unsigned short> { unsigned char x_2_3_1; unsigned short x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; bool x5; bool x6; bool x7; bool x8; int x9; bool x10; bool x11; bool x12; bool x13; }*)arg1 frame:(struct WebFrameProxy { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; const void*x9; void*x10; void*x11; unsigned int x12/* : ? */; void*x13; int x14; void*x15; SEL x16; SEL x17; void*x18; void*x19; unsigned int x20/* : ? */; void*x21; void*x22; void*x23; void*x24; void*x25; const out void*x26; void*x27; void*x28; void*x29; struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_30_1_1; } x30; }*)arg2 completionHandler:(struct Function<void (bool)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >=^{CallableWrapperBase<void, bool> {}*)arg3 view:(id)arg4;
- (void)errorOccurred:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (id)init;
- (id)initWithProcessPool:(struct WebProcessPool { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; const void*x9; void*x10; BOOL x11; void*x12; out const void*x13; void*x14; void*x15; void*x16; unsigned int x17/* : ? */; void*x18; int x19; void*x20; SEL x21; SEL x22; void*x23; void*x24; unsigned int x25/* : ? */; void*x26; const out BOOL x27; void*x28; short x29; short x30; void*x31; out out long x32; void*x33; void*x34; struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_35_1_1; } x35; }*)arg1;
- (void)positionChanged:(id)arg1;
- (void)resetGeolocation;

@end