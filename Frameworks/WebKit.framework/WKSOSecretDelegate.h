/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSOSecretDelegate : NSObject <WKNavigationDelegate, WKUIDelegate> {
    bool  _isFirstNavigation;
    struct WeakPtr<WebKit::PopUpSOAuthorizationSession> { 
        struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
            struct WeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSession:(struct PopUpSOAuthorizationSession { int (**x1)(); unsigned int x2; struct WeakPtrFactory<WebKit::SOAuthorizationSession> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_3_1_1; } x3; unsigned char x4; struct WeakObjCPtr<SOAuthorization *> { id x_5_1_1; struct RefPtr<API::NavigationAction, WTF::DumbPtrTraits<API::NavigationAction> > { struct NavigationAction {} *x_2_2_1; } x_5_1_2; struct WeakPtr<WebKit::WebPageProxy> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_3_1; } x_3_2_1; } x_5_1_3; unsigned char x_5_1_4; struct RetainPtr<UIViewController *> { void *x_5_2_1; } x_5_1_5; struct CompletionHandler<void (WTF::RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> > &&)>={Function<void (WTF::RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> > &&)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WTF::RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> > &&>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> > &&> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WTF::RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> > &&> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> > &&> > >=^{CallableWrapperBase<void, WTF::RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> > &&> {} x_5_1_6; } x5; }*)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewDidClose:(id)arg1;

@end