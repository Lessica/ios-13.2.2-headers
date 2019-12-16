/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
 */

@interface BUBufferedReadChannel : NSObject <BUReadChannel> {
    NSArray * _blockInfos;
    NSObject<OS_dispatch_data> * _currentStreamOutputData;
    NSObject<OS_dispatch_queue> * _readQueue;
    unsigned long long  _sourceLength;
    long long  _sourceOffset;
    unsigned long long  _sourceReadBufferSize;
    <BUReadChannel> * _sourceReadChannel;
    NSError * _sourceReadChannelError;
    bool  _streamOutputDone;
    unsigned long long  _streamOutputLength;
    long long  _streamOutputOffset;
    unsigned long long  _streamOutputOutstandingLength;
    <BUStreamReadChannel> * _streamReadChannel;
    id /* block */  _streamReadChannelBlock;
    id /* block */  _streamReadChannelSourceHandler;
}

@property (nonatomic, retain) NSArray *blockInfos;
@property (nonatomic, retain) NSObject<OS_dispatch_data> *currentStreamOutputData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *readQueue;
@property (nonatomic) unsigned long long sourceLength;
@property (nonatomic) long long sourceOffset;
@property (nonatomic) unsigned long long sourceReadBufferSize;
@property (nonatomic, retain) <BUReadChannel> *sourceReadChannel;
@property (nonatomic, retain) NSError *sourceReadChannelError;
@property (getter=isStreamOutputDone, nonatomic) bool streamOutputDone;
@property (nonatomic) unsigned long long streamOutputLength;
@property (nonatomic) long long streamOutputOffset;
@property (nonatomic) unsigned long long streamOutputOutstandingLength;
@property (nonatomic, retain) <BUStreamReadChannel> *streamReadChannel;
@property (nonatomic, copy) id /* block */ streamReadChannelBlock;
@property (nonatomic, copy) id /* block */ streamReadChannelSourceHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)_closeStreamReadChannel;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(bool*)arg3;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long long)arg2;
- (void)addBarrier:(id /* block */)arg1;
- (id)blockInfos;
- (void)close;
- (id)currentStreamOutputData;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(id /* block */)arg3;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(id /* block */)arg4;
- (bool)isStreamOutputDone;
- (bool)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)readQueue;
- (void)readWithHandler:(id /* block */)arg1;
- (void)setBlockInfos:(id)arg1;
- (void)setCurrentStreamOutputData:(id)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)setReadQueue:(id)arg1;
- (void)setSourceLength:(unsigned long long)arg1;
- (void)setSourceOffset:(long long)arg1;
- (void)setSourceReadBufferSize:(unsigned long long)arg1;
- (void)setSourceReadChannel:(id)arg1;
- (void)setSourceReadChannelError:(id)arg1;
- (void)setStreamOutputDone:(bool)arg1;
- (void)setStreamOutputLength:(unsigned long long)arg1;
- (void)setStreamOutputOffset:(long long)arg1;
- (void)setStreamOutputOutstandingLength:(unsigned long long)arg1;
- (void)setStreamReadChannel:(id)arg1;
- (void)setStreamReadChannelBlock:(id /* block */)arg1;
- (void)setStreamReadChannelSourceHandler:(id /* block */)arg1;
- (unsigned long long)sourceLength;
- (long long)sourceOffset;
- (unsigned long long)sourceReadBufferSize;
- (id)sourceReadChannel;
- (id)sourceReadChannelError;
- (unsigned long long)streamOutputLength;
- (long long)streamOutputOffset;
- (unsigned long long)streamOutputOutstandingLength;
- (id)streamReadChannel;
- (id /* block */)streamReadChannelBlock;
- (id /* block */)streamReadChannelSourceHandler;

@end
