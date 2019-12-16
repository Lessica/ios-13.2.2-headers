/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

@interface GCDAsyncSocketPreBuffer : NSObject {
    char * preBuffer;
    unsigned long long  preBufferSize;
    char * readPointer;
    char * writePointer;
}

- (unsigned long long)availableBytes;
- (unsigned long long)availableSpace;
- (void)dealloc;
- (void)didRead:(unsigned long long)arg1;
- (void)didWrite:(unsigned long long)arg1;
- (void)ensureCapacityForWrite:(unsigned long long)arg1;
- (void)getReadBuffer:(char **)arg1 availableBytes:(unsigned long long*)arg2;
- (void)getWriteBuffer:(char **)arg1 availableSpace:(unsigned long long*)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (char *)readBuffer;
- (void)reset;
- (char *)writeBuffer;

@end