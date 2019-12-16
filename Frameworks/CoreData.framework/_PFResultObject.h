/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFResultObject : NSDictionary {
    int  _cd_rc;
    unsigned int  _count;
    _PFResultArray * _parent_buffer;
    unsigned long long  _primary_key;
    unsigned long long  _sql_entity_id;
}

+ (Class)classForKeyedUnarchiver;

- (unsigned long long*)_columnOffsets;
- (unsigned long long)_countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 forKeys:(bool)arg4;
- (void)_setParentBuffer:(id)arg1;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (Class)classForArchiver;
- (Class)classForCoder;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)dataFromPtr:(void*)arg1;
- (void)dealloc;
- (id)doubleFromPtr:(void*)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)number32FromPtr:(void*)arg1;
- (id)number64FromPtr:(void*)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectIDFromPtr:(void*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)stringFromPtr:(void*)arg1;
- (id)taggedStringFromPtr:(unsigned long long*)arg1 withLength:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;

@end