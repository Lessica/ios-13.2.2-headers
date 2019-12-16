/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SFObjCType : NSObject {
    NSString * _className;
    long long  _code;
    NSString * _encoding;
    unsigned long long  _flags;
    NSString * _name;
    unsigned long long  _size;
}

@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSString *encoding;
@property (nonatomic, readonly) unsigned long long flags;
@property (getter=isFloatingPointNumber, nonatomic, readonly) bool floatingPointNumber;
@property (getter=isIntegerNumber, nonatomic, readonly) bool integerNumber;
@property (nonatomic, readonly) NSString *name;
@property (getter=isNumber, nonatomic, readonly) bool number;
@property (getter=isObject, nonatomic, readonly) bool object;
@property (nonatomic, readonly) unsigned long long size;

+ (id)typeForEncoding:(const char *)arg1;
+ (id)typeForValue:(id)arg1;

- (void).cxx_destruct;
- (id)className;
- (long long)code;
- (id)encoding;
- (unsigned long long)flags;
- (void)getBytes:(void*)arg1 forObject:(id)arg2;
- (id)initWithCode:(long long)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned long long)arg5 flags:(unsigned long long)arg6;
- (bool)isFloatingPointNumber;
- (bool)isIntegerNumber;
- (bool)isNumber;
- (bool)isObject;
- (id)name;
- (id)objectWithBytes:(const void*)arg1;
- (unsigned long long)size;

@end
