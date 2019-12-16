/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXASLLogController : NSObject <FLEXLogController> {
    unsigned long long  _heapSize;
    NSObject<OS_dispatch_io> * _io;
    NSString * _lastTimestamp;
    NSMutableIndexSet * _logMessageIdentifiers;
    NSObject<OS_dispatch_queue> * _logQueue;
    NSTimer * _logUpdateTimer;
    NSString * _remaining;
    int  _stderror;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long heapSize;
@property (nonatomic, retain) NSObject<OS_dispatch_io> *io;
@property (nonatomic, retain) NSString *lastTimestamp;
@property (nonatomic, readonly) NSMutableIndexSet *logMessageIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *logQueue;
@property (nonatomic, retain) NSTimer *logUpdateTimer;
@property (nonatomic, retain) NSString *remaining;
@property (nonatomic) int stderror;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ updateHandler;

+ (id)withUpdateHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (struct __asl_object_s { }*)ASLMessageListForCurrentProcess;
- (id)allLogMessagesForCurrentProcess;
- (void)dealloc;
- (unsigned long long)heapSize;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (id)io;
- (id)lastTimestamp;
- (id)logMessageIdentifiers;
- (id)logQueue;
- (id)logUpdateTimer;
- (id)newLogMessagesForCurrentProcess;
- (id)remaining;
- (void)setHeapSize:(unsigned long long)arg1;
- (void)setIo:(id)arg1;
- (void)setLastTimestamp:(id)arg1;
- (void)setLogQueue:(id)arg1;
- (void)setLogUpdateTimer:(id)arg1;
- (void)setRemaining:(id)arg1;
- (void)setStderror:(int)arg1;
- (bool)startMonitoring;
- (int)stderror;
- (id /* block */)updateHandler;
- (void)updateLogMessages;

@end
