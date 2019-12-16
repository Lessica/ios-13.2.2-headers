/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSDataWrapper : NSObject {
    NSData * _data;
    const void * _dataPtr;
    unsigned long long  _dataSize;
    unsigned long long  _mapSize;
    bool  _mapped;
    NSObject<OS_xpc_object> * _xpcData;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) const void*dataPtr;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic, readonly) unsigned long long mapSize;
@property (nonatomic, readonly) bool mapped;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcData;

- (void).cxx_destruct;
- (id)data;
- (const void*)dataPtr;
- (unsigned long long)dataSize;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithXPCValue:(id)arg1;
- (unsigned long long)mapSize;
- (bool)mapped;
- (void)setDataSize:(unsigned long long)arg1;
- (id)xpcData;

@end
