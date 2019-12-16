/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface GPBBoolInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
    GPBMessage * _autocreator;
    bool  _valueSet;
    long long  _values;
}

@property (nonatomic, readonly) unsigned long long count;

- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateForTextFormat:(id /* block */)arg1;
- (void)enumerateKeysAndInt64sUsingBlock:(id /* block */)arg1;
- (bool)getInt64:(long long*)arg1 forKey:(bool)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithInt64s:(const long long*)arg1 forKeys:(const bool*)arg2 count:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeInt64ForKey:(bool)arg1;
- (void)setGPBGenericValue:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; }*)arg1 forGPBGenericValueKey:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; }*)arg2;
- (void)setInt64:(long long)arg1 forKey:(bool)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end
