/* Generated by RuntimeBrowser.
 */

@protocol NFRegistrationContainer <NSObject>

@required

- (NFDefinition *)registerClass:(void *)arg1 factory:(void *)arg2; // needs 2 arg types, found 7: Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, <NFResolver> *, void*
- (NFDefinition *)registerClass:(void *)arg1 name:(void *)arg2 factory:(void *)arg3; // needs 3 arg types, found 8: Class, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, <NFResolver> *, void*
- (NFDefinition *)registerKey:(void *)arg1 factory:(void *)arg2; // needs 2 arg types, found 7: NFKey *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, <NFResolver> *, void*
- (NFDefinition *)registerProtocol:(void *)arg1 factory:(void *)arg2; // needs 2 arg types, found 7: Protocol *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, <NFResolver> *, void*
- (NFDefinition *)registerProtocol:(void *)arg1 name:(void *)arg2 factory:(void *)arg3; // needs 3 arg types, found 8: Protocol *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, <NFResolver> *, void*
- (NFDefinition *)unsafeRegisterForKey:(void *)arg1 name:(void *)arg2 factory:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, <NFResolver> *, void*

@end