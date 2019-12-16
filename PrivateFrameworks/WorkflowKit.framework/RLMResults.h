/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface RLMResults : NSObject <NSFastEnumeration, RLMCollection, RLMFastEnumerable, RLMThreadConfined_Private> {
    struct RLMClassInfo { id x1; struct ObjectSchema {} *x2; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_1_1; struct RLMObservationInfo {} **x_3_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_3_1_3; } x3; struct Table {} *x4; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_5_1_1; struct RLMClassInfo {} **x_5_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_5_1_3; } x5; } * _info;
    bool  _optional;
    RLMRealm * _realm;
    struct Results { 
        struct shared_ptr<realm::Realm> { 
            struct Realm {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_realm; 
        struct ObjectSchema {} *m_object_schema; 
        struct Query { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } error_code; 
            struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup> > { 
                struct QueryGroup {} *__begin_; 
                struct QueryGroup {} *__end_; 
                struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup> > { 
                    struct QueryGroup {} *__value_; 
                } __end_cap_; 
            } m_groups; 
            struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
                unsigned long long *__begin_; 
                unsigned long long *__end_; 
                struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
                    unsigned long long *__value_; 
                } __end_cap_; 
            } m_subtable_path; 
            struct shared_ptr<const realm::Descriptor> { 
                struct Descriptor {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } m_current_descriptor; 
            struct BasicTableRef<realm::Table> { 
                struct Table {} *m_ptr; 
            } m_table; 
            struct RowIndexes {} *m_view; 
            struct shared_ptr<realm::LinkView> { 
                struct LinkView {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } m_source_link_view; 
            struct TableViewBase {} *m_source_table_view; 
            struct unique_ptr<realm::TableViewBase, std::__1::default_delete<realm::TableViewBase> > { 
                struct __compressed_pair<realm::TableViewBase *, std::__1::default_delete<realm::TableViewBase> > { 
                    struct TableViewBase {} *__value_; 
                } __ptr_; 
            } m_owned_source_table_view; 
        } m_query; 
        struct TableView { 
            int (**_vptr$RowIndexes)(); 
            struct Column<long long> { 
                int (**_vptr$ColumnBase)(); 
                unsigned long long m_column_ndx; 
                struct unique_ptr<realm::StringIndex, std::__1::default_delete<realm::StringIndex> > { 
                    struct __compressed_pair<realm::StringIndex *, std::__1::default_delete<realm::StringIndex> > { 
                        struct StringIndex {} *__value_; 
                    } __ptr_; 
                } m_search_index; 
                struct BpTree<long long> { 
                    struct unique_ptr<realm::Array, std::__1::default_delete<realm::Array> > { 
                        struct __compressed_pair<realm::Array *, std::__1::default_delete<realm::Array> > { 
                            struct Array {} *__value_; 
                        } __ptr_; 
                    } m_root; 
                } m_tree; 
            } m_row_indexes; 
            unsigned long long m_limit_count; 
            unsigned long long m_debug_cookie; 
            struct BasicTableRef<realm::Table> { 
                struct Table {} *m_ptr; 
            } m_table; 
            struct BacklinkColumn {} *m_linked_column; 
            struct BasicRow<const realm::Table> { 
                struct BasicTableRef<realm::Table> { 
                    struct Table {} *m_ptr; 
                } m_table; 
                unsigned long long m_row_ndx; 
                struct RowBase {} *m_prev; 
                struct RowBase {} *m_next; 
            } m_linked_row; 
            struct shared_ptr<const realm::LinkView> { 
                struct LinkView {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } m_linkview_source; 
            unsigned long long m_distinct_column_source; 
            struct DescriptorOrdering { 
                struct vector<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> >, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > > > { 
                    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > {} *__begin_; 
                    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > {} *__end_; 
                    struct __compressed_pair<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > *, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > > > { 
                        struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > {} *__value_; 
                    } __end_cap_; 
                } m_descriptors; 
            } m_descriptor_ordering; 
            struct Query { 
                struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
                    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned long long __cap_; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    struct { 
                                        unsigned char __size_; 
                                    } ; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } error_code; 
                struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup> > { 
                    struct QueryGroup {} *__begin_; 
                    struct QueryGroup {} *__end_; 
                    struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup> > { 
                        struct QueryGroup {} *__value_; 
                    } __end_cap_; 
                } m_groups; 
                struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
                    unsigned long long *__begin_; 
                    unsigned long long *__end_; 
                    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
                        unsigned long long *__value_; 
                    } __end_cap_; 
                } m_subtable_path; 
                struct shared_ptr<const realm::Descriptor> { 
                    struct Descriptor {} *__ptr_; 
                    struct __shared_weak_count {} *__cntrl_; 
                } m_current_descriptor; 
                struct BasicTableRef<realm::Table> { 
                    struct Table {} *m_ptr; 
                } m_table; 
                struct RowIndexes {} *m_view; 
                struct shared_ptr<realm::LinkView> { 
                    struct LinkView {} *__ptr_; 
                    struct __shared_weak_count {} *__cntrl_; 
                } m_source_link_view; 
                struct TableViewBase {} *m_source_table_view; 
                struct unique_ptr<realm::TableViewBase, std::__1::default_delete<realm::TableViewBase> > { 
                    struct __compressed_pair<realm::TableViewBase *, std::__1::default_delete<realm::TableViewBase> > { 
                        struct TableViewBase {} *__value_; 
                    } __ptr_; 
                } m_owned_source_table_view; 
            } m_query; 
            unsigned long long m_start; 
            unsigned long long m_end; 
            unsigned long long m_limit; 
            struct Optional<unsigned long long> { 
                union { 
                    unsigned long long m_value; 
                    BOOL m_null_state; 
                } ; 
                bool m_engaged; 
            } m_last_seen_version; 
            unsigned long long m_num_detached_refs; 
        } m_table_view; 
        struct shared_ptr<realm::LinkView> { 
            struct LinkView {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_link_view; 
        struct BasicTableRef<realm::Table> { 
            struct Table {} *m_ptr; 
        } m_table; 
        struct DescriptorOrdering { 
            struct vector<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> >, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > > > { 
                struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > {} *__begin_; 
                struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > {} *__end_; 
                struct __compressed_pair<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > *, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > > > { 
                    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor> > {} *__value_; 
                } __end_cap_; 
            } m_descriptors; 
        } m_descriptor_ordering; 
        struct Handle<realm::_impl::ResultsNotifier> { 
            struct ResultsNotifier {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_notifier; 
        int m_mode; 
        int m_update_policy; 
        bool m_has_used_table_view; 
        bool m_wants_background_updates; 
    }  _results;
}

@property (getter=isAttached, nonatomic, readonly) bool attached;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly, copy) NSString *objectClassName;
@property (nonatomic, readonly) struct RLMClassInfo { id x1; struct ObjectSchema {} *x2; /* Warning: unhandled struct encoding: '{vector<RLMObservationInfo *' */ struct x3; }*objectInfo; /* unknown property attribute:  std::__1::allocator<RLMClassInfo *> >=^^{RLMClassInfo}}}} */
@property (nonatomic, readonly) id objectiveCMetadata;
@property (getter=isOptional, nonatomic) bool optional;
@property (nonatomic, readonly) RLMRealm *realm;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (id)emptyDetachedResults;
+ (id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct ThreadSafeReferenceBase {} *x_1_1_1; } x1; })arg1 metadata:(id)arg2 realm:(id)arg3;
+ (id)resultsWithObjectInfo:(struct RLMClassInfo { id x1; struct ObjectSchema {} *x2; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_1_1; struct RLMObservationInfo {} **x_3_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_3_1_3; } x3; struct Table {} *x4; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_5_1_1; struct RLMClassInfo {} **x_5_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_5_1_3; } x5; }*)arg1 results:(struct Results { struct shared_ptr<realm::Realm> { struct Realm {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct ObjectSchema {} *x2; struct Query { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_3_1_1; struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup> > { struct QueryGroup {} *x_2_2_1; struct QueryGroup {} *x_2_2_2; struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup> > { struct QueryGroup {} *x_3_3_1; } x_2_2_3; } x_3_1_2; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x_3_2_1; unsigned long long *x_3_2_2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_3_1; } x_3_2_3; } x_3_1_3; } x3; }*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_aggregateForKeyPath:(void *)arg1 method:(void *)arg2 methodName:(void *)arg3 returnNilForEmpty:(void *)arg4; // needs 4 arg types, found 3: id, id, bool
- (id)_avgForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)addNotificationBlock:(id /* block */)arg1;
- (id)aggregate:(void *)arg1 method:(void *)arg2 methodName:(void *)arg3 returnNilForEmpty:(void *)arg4; // needs 4 arg types, found 3: id, id, bool
- (id)averageOfProperty:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)deleteObjectsFromRealm;
- (id)description;
- (id)distinctResultsUsingKeyPaths:(id)arg1;
- (id)fastEnumerator;
- (id)firstObject;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObjectWhere:(id)arg1;
- (unsigned long long)indexOfObjectWhere:(id)arg1 args:(char *)arg2;
- (unsigned long long)indexOfObjectWithPredicate:(id)arg1;
- (id)initPrivate;
- (id)initWithObjectInfo:(struct RLMClassInfo { id x1; struct ObjectSchema {} *x2; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_1_1; struct RLMObservationInfo {} **x_3_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_3_1_3; } x3; struct Table {} *x4; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_5_1_1; struct RLMClassInfo {} **x_5_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_5_1_3; } x5; }*)arg1 results:(struct Results { struct shared_ptr<realm::Realm> { struct Realm {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct ObjectSchema {} *x2; struct Query { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_3_1_1; struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup> > { struct QueryGroup {} *x_2_2_1; struct QueryGroup {} *x_2_2_2; struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup> > { struct QueryGroup {} *x_3_3_1; } x_2_2_3; } x_3_1_2; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x_3_2_1; unsigned long long *x_3_2_2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_3_1; } x_3_2_3; } x_3_1_3; } x3; }*)arg2;
- (id)initWithResults:(struct Results { struct shared_ptr<realm::Realm> { struct Realm {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct ObjectSchema {} *x2; struct Query { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_3_1_1; struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup> > { struct QueryGroup {} *x_2_2_1; struct QueryGroup {} *x_2_2_2; struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup> > { struct QueryGroup {} *x_3_3_1; } x_2_2_3; } x_3_1_2; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x_3_2_1; unsigned long long *x_3_2_2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_3_1; } x_3_2_3; } x_3_1_3; } x3; })arg1;
- (bool)isAttached;
- (bool)isInvalidated;
- (bool)isOptional;
- (id)lastObject;
- (struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct ThreadSafeReferenceBase {} *x_1_1_1; } x1; })makeThreadSafeReference;
- (id)maxOfProperty:(id)arg1;
- (id)minOfProperty:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectClassName;
- (struct RLMClassInfo { id x1; struct ObjectSchema {} *x2; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_1_1; struct RLMObservationInfo {} **x_3_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_3_1_3; } x3; struct Table {} *x4; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_5_1_1; struct RLMClassInfo {} **x_5_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_5_1_3; } x5; }*)objectInfo;
- (id)objectiveCMetadata;
- (id)objectsWhere:(id)arg1;
- (id)objectsWhere:(id)arg1 args:(char *)arg2;
- (id)objectsWithPredicate:(id)arg1;
- (id)realm;
- (void)setOptional:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (id)sortedResultsUsingKeyPath:(id)arg1 ascending:(bool)arg2;
- (id)subresultsWithResults:(struct Results { struct shared_ptr<realm::Realm> { struct Realm {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct ObjectSchema {} *x2; struct Query { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_3_1_1; struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup> > { struct QueryGroup {} *x_2_2_1; struct QueryGroup {} *x_2_2_2; struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup> > { struct QueryGroup {} *x_3_3_1; } x_2_2_3; } x_3_1_2; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x_3_2_1; unsigned long long *x_3_2_2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_3_1; } x_3_2_3; } x_3_1_3; } x3; })arg1;
- (id)sumOfProperty:(id)arg1;
- (struct TableView { int (**x1)(); struct Column<long long> { int (**x_2_1_1)(); unsigned long long x_2_1_2; struct unique_ptr<realm::StringIndex, std::__1::default_delete<realm::StringIndex> > { struct __compressed_pair<realm::StringIndex *, std::__1::default_delete<realm::StringIndex> > { struct StringIndex {} *x_1_3_1; } x_3_2_1; } x_2_1_3; struct BpTree<long long> { struct unique_ptr<realm::Array, std::__1::default_delete<realm::Array> > { struct __compressed_pair<realm::Array *, std::__1::default_delete<realm::Array> > { struct Array {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_2_1_4; } x2; unsigned long long x3; unsigned long long x4; struct BasicTableRef<realm::Table> { struct Table {} *x_5_1_1; } x5; struct BacklinkColumn {} *x6; struct BasicRow<const realm::Table> { struct BasicTableRef<realm::Table> { struct Table {} *x_1_2_1; } x_7_1_1; unsigned long long x_7_1_2; struct RowBase {} *x_7_1_3; struct RowBase {} *x_7_1_4; } x7; struct shared_ptr<const realm::LinkView> { struct LinkView {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; })tableView;
- (int)type;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
