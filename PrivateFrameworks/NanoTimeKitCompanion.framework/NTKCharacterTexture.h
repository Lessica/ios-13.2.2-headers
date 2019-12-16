/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterTexture : NSObject {
    const void * _data;
    unsigned int  _gid;
    int  _length;
    <MTLTexture> * _mtlTexture;
}

@property (nonatomic, readonly) const void*data;
@property (nonatomic) unsigned int gid;
@property (nonatomic, readonly) int length;
@property (nonatomic, retain) <MTLTexture> *mtlTexture;

- (void).cxx_destruct;
- (const void*)data;
- (unsigned int)gid;
- (id)initWithData:(const void*)arg1 length:(int)arg2;
- (int)length;
- (id)mtlTexture;
- (void)setGid:(unsigned int)arg1;
- (void)setMtlTexture:(id)arg1;

@end
