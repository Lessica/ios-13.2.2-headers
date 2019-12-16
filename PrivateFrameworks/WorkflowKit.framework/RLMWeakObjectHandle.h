/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface RLMWeakObjectHandle : NSObject <NSCopying> {
    struct RLMClassInfo { id x1; struct ObjectSchema {} *x2; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_1_1; struct RLMObservationInfo {} **x_3_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_3_1_3; } x3; struct Table {} *x4; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_5_1_1; struct RLMClassInfo {} **x_5_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_5_1_3; } x5; } * _info;
    Class  _objectClass;
    struct BasicRow<realm::Table> { 
        struct BasicTableRef<realm::Table> { 
            struct Table {} *m_ptr; 
        } m_table; 
        unsigned long long m_row_ndx; 
        struct RowBase {} *m_prev; 
        struct RowBase {} *m_next; 
    }  _row;
}

@property (nonatomic, readonly) RLMObjectBase *object;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithObject:(id)arg1;
- (id)object;

@end
