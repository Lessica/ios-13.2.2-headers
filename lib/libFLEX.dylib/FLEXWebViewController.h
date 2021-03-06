/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXWebViewController : UIViewController <WKNavigationDelegate> {
    NSString * _originalText;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *originalText;
@property (readonly) Class superclass;
@property (nonatomic, retain) WKWebView *webView;

+ (bool)supportsPathExtension:(id)arg1;
+ (id)webViewSupportedPathExtensions;

- (void).cxx_destruct;
- (void)copyButtonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithText:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)originalText;
- (void)setOriginalText:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;

@end
