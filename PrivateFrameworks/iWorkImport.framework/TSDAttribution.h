/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAttribution : TSKSosBase <NSCopying> {
    NSString * _authorName;
    NSString * _authorURLString;
    bool  _definedAuthorName;
    bool  _definedAuthorURLString;
    bool  _definedDescriptionText;
    bool  _definedExternalURLString;
    bool  _definedTitle;
    NSString * _descriptionText;
    NSString * _externalURLString;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *authorName;
@property (nonatomic, readonly) NSURL *authorURL;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) NSURL *externalURL;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)authorName;
- (id)authorURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionText;
- (id)externalURL;
- (unsigned long long)hash;
- (id)initFromMessage:(const struct Attribution { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTitle:(id)arg1 descriptionText:(id)arg2 externalURL:(id)arg3 authorName:(id)arg4 authorURL:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)saveToMessage:(struct Attribution { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; }*)arg1 archiver:(id)arg2;
- (id)title;

@end
