/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKProcessGroup : NSObject {
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<WKProcessGroupDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<WKProcessGroupDelegate> > { 
        id m_weakReference; 
    }  _delegate;
    struct RetainPtr<WKGeolocationProviderIOS> { 
        void *m_ptr; 
    }  _geolocationProvider;
    struct RefPtr<WebKit::WebProcessPool, WTF::DumbPtrTraits<WebKit::WebProcessPool> > { 
        struct WebProcessPool {} *m_ptr; 
    }  _processPool;
}

@property (readonly) struct OpaqueWKContext { }*_contextRef;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property <WKProcessGroupDelegate> *delegate;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (void).cxx_destruct;
- (struct OpaqueWKContext { }*)_contextRef;
- (id)_geolocationProvider;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id).cxx_construct;
- (id)delegate;
- (id)init;
- (id)initWithInjectedBundleURL:(id)arg1;
- (id)initWithInjectedBundleURL:(id)arg1 andCustomClassesForParameterCoder:(id)arg2;
- (void)setDelegate:(id)arg1;

@end