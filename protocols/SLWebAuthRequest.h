/* Generated by RuntimeBrowser.
 */

@protocol SLWebAuthRequest <NSObject>

@required

+ (void)clearCookiesFromStorage:(NSHTTPCookieStorage *)arg1 authRequestURL:(NSString *)arg2;
+ (NSURLRequest *)requestForURL:(NSURL *)arg1;
+ (NSURL *)urlForClientID:(NSString *)arg1 redirectURI:(NSString *)arg2 scope:(NSArray *)arg3 username:(NSString *)arg4 authRequestURL:(NSString *)arg5;
+ (NSURL *)urlForClientID:(NSString *)arg1 redirectURI:(NSString *)arg2 scope:(NSArray *)arg3 username:(NSString *)arg4 authRequestURL:(NSString *)arg5 codeChallenge:(NSString *)arg6;
+ (bool)urlPageWillContainAuthorizationCode:(NSURL *)arg1;
+ (NSURLRequest *)urlRequestForClientID:(NSString *)arg1 redirectURI:(NSString *)arg2 scope:(NSArray *)arg3 username:(NSString *)arg4 authRequestURL:(NSString *)arg5;

@optional

+ (NSString *)authCodeFromRedirectURL:(NSURL *)arg1;
+ (NSString *)authCodeFromURLRequest:(NSURLRequest *)arg1;
+ (NSString *)authCodeFromWebPageTitle:(NSString *)arg1;

@end
