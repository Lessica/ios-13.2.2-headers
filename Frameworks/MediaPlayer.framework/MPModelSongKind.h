/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelSongKind : MPModelKind {
    unsigned long long  _options;
    unsigned long long  _variants;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long variants;

+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView {} *x1; struct __shared_weak_count {} *x2; })arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })predicateWithBaseProperty:(struct ModelPropertyBase { int (**x1)(); struct EntityClass {} *x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; }*)arg1;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })representedSearchScopePredicate;
- (unsigned long long)variants;

@end
