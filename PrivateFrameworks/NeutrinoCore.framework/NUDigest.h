/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUDigest : NSObject {
    struct CC_MD5state_st { 
        unsigned int A; 
        unsigned int B; 
        unsigned int C; 
        unsigned int D; 
        unsigned int Nl; 
        unsigned int Nh; 
        unsigned int data[16]; 
        int num; 
    }  _context;
    NSString * _stringValue;
}

- (void).cxx_destruct;
- (void)addBytes:(const void*)arg1 length:(long long)arg2;
- (void)addCString:(const char *)arg1;
- (void)addString:(id)arg1;
- (void)finalize;
- (id)init;
- (id)stringValue;

@end
