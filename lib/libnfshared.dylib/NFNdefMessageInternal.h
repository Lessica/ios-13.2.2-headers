/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFNdefMessageInternal : NSObject <NFNdefMessage, NSSecureCoding> {
    NSMutableArray * _records;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *records;
@property (readonly) Class superclass;

+ (id)dataFromNDEFMessage:(id)arg1;
+ (id)decodeFromNDEFMessage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)addRecord:(id)arg1;
- (void)addRecordArray:(id)arg1;
- (id)asData;
- (void)dealloc;
- (id)decode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNDEFMessage:(id)arg1;
- (id)records;

@end
