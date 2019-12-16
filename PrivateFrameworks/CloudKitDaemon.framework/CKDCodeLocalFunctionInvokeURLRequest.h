/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest {
    NSURL * _explicitBaseURL;
    NSString * _functionName;
    NSData * _serializedParameters;
    id /* block */  _serializedResultsCallback;
    NSString * _serviceName;
}

@property (nonatomic, copy) NSURL *explicitBaseURL;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic, retain) NSData *serializedParameters;
@property (nonatomic, copy) id /* block */ serializedResultsCallback;
@property (nonatomic, copy) NSString *serviceName;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (bool)allowsAnonymousAccount;
- (Class)expectedResponseClass;
- (id)explicitBaseURL;
- (id)functionName;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 explicitBaseURL:(id)arg4;
- (bool)parsingStandaloneMessage;
- (long long)partitionType;
- (id)requestBodyStream;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (bool)requestGETPreAuth;
- (Class)requestMessageClass;
- (id)serializedParameters;
- (id /* block */)serializedResultsCallback;
- (long long)serverType;
- (id)serviceName;
- (void)setExplicitBaseURL:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setSerializedResultsCallback:(id /* block */)arg1;
- (void)setServiceName:(id)arg1;
- (bool)shouldCompressBody;
- (id)url;

@end
