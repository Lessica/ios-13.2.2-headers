/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSAvailableApplicationsForURLQuery : _LSQuery {
    NSURL * _URL;
}

@property (nonatomic, readonly, copy) NSURL *URL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)yieldBundles:(const struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg1 context:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg2 block:(id /* block */)arg3;

@end
