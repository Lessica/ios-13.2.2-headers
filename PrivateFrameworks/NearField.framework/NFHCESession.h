/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks> {
    NFWeakReference * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFHCESessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)delegate;
- (void)didConnectToReader;
- (void)didDisconnectFromReader;
- (void)didEndUnexpectedly;
- (void)didReceiveAPDU:(id)arg1;
- (void)endSession;
- (id)readAPDU:(id*)arg1;
- (id)sendAPDU:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)startEmulation;
- (id)stopEmulation;

@end
