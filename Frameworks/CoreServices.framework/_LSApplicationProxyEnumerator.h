/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSApplicationProxyEnumerator : _LSDBEnumerator {
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _bundleIdentifiers;
    unsigned int  _container;
    unsigned long long  _options;
    NSURL * _volumeURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_applicationProxyWithContext:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg1 bundleIdentifier:(unsigned int)arg2;
- (bool)_evaluateBundleNoIO:(unsigned int)arg1 data:(const struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned short x6; unsigned int x7; unsigned int x8; int x9; int x10; struct LSVersionNumber { unsigned char x_11_1_1[32]; } x11; struct LSVersionNumber { unsigned char x_12_1_1[32]; } x12; struct LSVersionNumber { unsigned char x_13_1_1[32]; } x13; struct LSVersionNumber { unsigned char x_14_1_1[32]; } x14; unsigned int x15; unsigned int x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned long long x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; unsigned int x40; unsigned int x41; unsigned long long x42; unsigned long long x43; unsigned int x44; unsigned int x45; unsigned long long x46; }*)arg2 context:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg3;
- (bool)_getContainer:(unsigned int*)arg1 context:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg2 error:(id*)arg3;
- (bool)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg3;
- (bool)_prepareWithContext:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg1 error:(id*)arg2;
- (id)initWithVolumeURL:(id)arg1 options:(unsigned long long)arg2;

@end
