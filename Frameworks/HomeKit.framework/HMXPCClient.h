/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXPCClient : HMFMessageTransport {
    NSXPCConnection * _connection;
    bool  _connectionValid;
    int  _notifyRegisterToken;
    bool  _notifyRegistered;
    id /* block */  _reconnectionHandler;
    bool  _requiresCheckin;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool connectionValid;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) bool notifyRegistered;
@property (nonatomic, copy) id /* block */ reconnectionHandler;
@property (nonatomic) bool requiresCheckin;

- (void).cxx_destruct;
- (id)connection;
- (bool)connectionValid;
- (void)dealloc;
- (id)init;
- (int)notifyRegisterToken;
- (bool)notifyRegistered;
- (id /* block */)reconnectionHandler;
- (void)registerReconnectionHandler:(id /* block */)arg1;
- (bool)requiresCheckin;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setConnectionValid:(bool)arg1;
- (void)setNotifyRegisterToken:(int)arg1;
- (void)setNotifyRegistered:(bool)arg1;
- (void)setReconnectionHandler:(id /* block */)arg1;
- (void)setRequiresCheckin:(bool)arg1;

@end
