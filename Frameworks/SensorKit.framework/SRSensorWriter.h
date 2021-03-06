/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SensorKit.framework/SensorKit
 */

@interface SRSensorWriter : NSObject <SRAuthorizationStoreDelegate, SRDaemonNotificationDelegate> {
    <SRAuthorizationStore> * _authorizationStore;
    bool  _authorized;
    NSXPCConnection * _connection;
    bool  _connectionDidInterrupt;
    bool  _connectionDidInvalidate;
    SRDaemonNotification * _daemonNotification;
    SRSensorDatastore * _datastore;
    SRDefaults * _defaults;
    <SRSensorWriterDelegate> * _delegate;
    bool  _monitoring;
    NSDictionary * _nextDatastoreFiles;
    bool  _requestNewSegmentInFlight;
    bool  _retryGetMonitoring;
    NSString * _sensorIdentifier;
    NSDictionary * _sensorInfo;
}

@property (nonatomic, retain) <SRAuthorizationStore> *authorizationStore;
@property bool authorized;
@property (retain) NSXPCConnection *connection;
@property bool connectionDidInterrupt;
@property bool connectionDidInvalidate;
@property (readonly, retain) SRSensorDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property <SRSensorWriterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMonitoring) bool monitoring;
@property (retain) NSDictionary *nextDatastoreFiles;
@property bool requestNewSegmentInFlight;
@property bool retryGetMonitoring;
@property (copy) NSString *sensorIdentifier;
@property (nonatomic, retain) NSDictionary *sensorInfo;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)connectionToDaemon;
+ (void)initialize;
+ (id)remoteInterface;

- (id)authorizationStore;
- (void)authorizationStore:(id)arg1 didDetermineInitialAuthorizationValues:(id)arg2;
- (void)authorizationStore:(id)arg1 grantedAuthorizations:(id)arg2 forBundleId:(id)arg3;
- (void)authorizationStore:(id)arg1 resetAuthorizations:(id)arg2 forBundleId:(id)arg3;
- (void)authorizationStore:(id)arg1 revokedAuthorizations:(id)arg2 forBundleId:(id)arg3;
- (bool)authorized;
- (id)connection;
- (bool)connectionDidInterrupt;
- (bool)connectionDidInvalidate;
- (void)daemonForcedResetDatastoreFiles:(id)arg1;
- (void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)arg1;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (id)datastore;
- (void)dealloc;
- (id)delegate;
- (void)evaluateAuthorizationState;
- (void)flushDatabase;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 authorizationStore:(id)arg2 xpcConnection:(id)arg3 daemonNotification:(id)arg4;
- (bool)isMonitoring;
- (id)nextDatastoreFiles;
- (void)provideSample:(id)arg1;
- (void)provideSample:(id)arg1 timestamp:(double)arg2;
- (void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 continuousTimestamp:(unsigned long long)arg3;
- (void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)provideSampleData:(id)arg1;
- (void)provideSampleData:(id)arg1 continuousTimestamp:(unsigned long long)arg2;
- (void)provideSampleData:(id)arg1 timestamp:(double)arg2;
- (void)registerWithDaemonForWritingIfNeededWithReply:(id /* block */)arg1;
- (void)requestNewSegment;
- (bool)requestNewSegmentInFlight;
- (void)resetDatastoreFiles:(id)arg1;
- (bool)retryGetMonitoring;
- (id)sensorIdentifier;
- (id)sensorInfo;
- (void)setAuthorizationStore:(id)arg1;
- (void)setAuthorized:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionDidInterrupt:(bool)arg1;
- (void)setConnectionDidInvalidate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadata:(id)arg1 continuousTimestamp:(unsigned long long)arg2;
- (void)setMonitoring:(bool)arg1;
- (void)setNextDatastoreFiles:(id)arg1;
- (void)setRequestNewSegmentInFlight:(bool)arg1;
- (void)setRetryGetMonitoring:(bool)arg1;
- (void)setSensorIdentifier:(id)arg1;
- (void)setSensorInfo:(id)arg1;
- (void)setupConnection;
- (void)updateSensorInfo;

@end
