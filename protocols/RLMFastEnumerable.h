/* Generated by RuntimeBrowser.
 */

@protocol RLMFastEnumerable

@required

- (unsigned long long)count;
- (RLMFastEnumerator *)fastEnumerator;
- (struct RLMClassInfo { id x1; struct ObjectSchema {} *x2; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_1_1; struct RLMObservationInfo {} **x_3_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_3_1_3; } x3; struct Table {} *x4; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_5_1_1; struct RLMClassInfo {} **x_5_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_5_1_3; } x5; }*)objectInfo;
- (RLMRealm *)realm;
- (struct TableView { int (**x1)(); struct Column<long long> { int (**x_2_1_1)(); unsigned long long x_2_1_2; struct unique_ptr<realm::StringIndex, std::__1::default_delete<realm::StringIndex> > { struct __compressed_pair<realm::StringIndex *, std::__1::default_delete<realm::StringIndex> > { struct StringIndex {} *x_1_3_1; } x_3_2_1; } x_2_1_3; struct BpTree<long long> { struct unique_ptr<realm::Array, std::__1::default_delete<realm::Array> > { struct __compressed_pair<realm::Array *, std::__1::default_delete<realm::Array> > { struct Array {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_2_1_4; } x2; unsigned long long x3; unsigned long long x4; struct BasicTableRef<realm::Table> { struct Table {} *x_5_1_1; } x5; struct BacklinkColumn {} *x6; struct BasicRow<const realm::Table> { struct BasicTableRef<realm::Table> { struct Table {} *x_1_2_1; } x_7_1_1; unsigned long long x_7_1_2; struct RowBase {} *x_7_1_3; struct RowBase {} *x_7_1_4; } x7; struct shared_ptr<const realm::LinkView> { struct LinkView {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; })tableView;

@end