/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

@interface PIURLSessionOperationSubclass : PIOperationSubclass <NSURLSessionTaskDelegate> {
    NSURLSession * _session;
    NSURLSessionConfiguration * _sessionConfiguration;
    NSURLSessionTask * _sessionTask;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSURLSession *session;
@property (nonatomic, retain) NSURLSessionConfiguration *sessionConfiguration;
@property (nonatomic, retain) NSURLSessionTask *sessionTask;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)defaultConfiguration;
+ (id)noCacheConfiguration;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)cancel;
- (void)cleanup;
- (void)execute;
- (id)initWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)session;
- (id)sessionConfiguration;
- (id)sessionTask;
- (void)setSessionConfiguration:(id)arg1;
- (void)setSessionTask:(id)arg1;
- (id)url;

@end