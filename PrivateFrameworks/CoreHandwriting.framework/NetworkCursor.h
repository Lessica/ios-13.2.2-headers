/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface NetworkCursor : NSObject {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _nodeIndexes;
    unsigned long long  _stateType;
}

@property (nonatomic) unsigned long long stateType;

+ (id)cursorByAddingNodeIndex:(unsigned long long)arg1 toCursor:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addNodeIndex:(unsigned long long)arg1 withStateType:(unsigned long long)arg2;
- (id)init;
- (bool)isCompletePattern;
- (unsigned long long)nodeIndexAtPosition:(unsigned long long)arg1;
- (unsigned long long)nodeIndexCount;
- (void)setStateType:(unsigned long long)arg1;
- (unsigned long long)stateType;

@end
