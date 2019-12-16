/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFRequestHandler : NSObject {
    CFServiceHelper * _serviceHelper;
}

@property (retain) CFServiceHelper *serviceHelper;

- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCommandCompletionWithResponse:(id)arg1 forCommand:(id)arg2 startOfExecution:(double)arg3;
- (id)initClientLiteHelper;
- (id)initWithServiceHelper:(id)arg1;
- (bool)isTimeoutDisabled;
- (id)serviceHelper;
- (void)setServiceHelper:(id)arg1;

@end
