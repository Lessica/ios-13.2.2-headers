/* Generated by RuntimeBrowser
   Image: /usr/lib/swift/libswiftCore.dylib
 */

@interface __SwiftNativeNSSetBase : NSSet {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline> > { 
        struct atomic<swift::RefCountBitsT<swift::RefCountIsInline> > { 
            /* Warning: Unrecognized filer type: '{' using 'void*' */ void*__a_; 
        } refCounts; 
    }  refCounts;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsWeakReference;
- (id)autorelease;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
