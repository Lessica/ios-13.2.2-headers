/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging> {
    HMDActiveSiriSessionInfo * _activeSessionInfo;
    NSString * _identifier;
    HMDSiriRemoteInputServer * _server;
}

@property (nonatomic, retain) HMDActiveSiriSessionInfo *activeSessionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) HMDSiriRemoteInputServer *server;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)siriSessionForUI;

- (void).cxx_destruct;
- (id)_createArgsDictionaryWithError:(id)arg1;
- (bool)_startStream;
- (void)_stopStream;
- (bool)activate;
- (id)activeSessionInfo;
- (id)activeSessionToken;
- (void)activeSiriSession:(id)arg1 didCreateAudioFrame:(id)arg2 sequenceNumber:(id)arg3 gain:(id)arg4;
- (void)activeSiriSessionDidStop:(id)arg1;
- (void)deactivate;
- (void)handleResetStream;
- (void)handleStartStream;
- (void)handleStopStream;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidate;
- (void)publish;
- (void)sendMsg:(const char *)arg1 args:(id)arg2;
- (id)server;
- (void)setActiveBulkSendSession:(id)arg1;
- (void)setActiveSessionInfo:(id)arg1;
- (void)setServer:(id)arg1;

@end
