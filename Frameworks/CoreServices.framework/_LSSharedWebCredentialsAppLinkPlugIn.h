/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn

- (id)appLinksWithContext:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg1 error:(id*)arg2;
- (id)appLinksWithContext:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg1 forSWCResults:(id)arg2;
- (struct optional<LSBinding> { union { BOOL x_1_1_1; struct LSBinding { unsigned int x_2_2_1; struct LSBundleData {} *x_2_2_2; unsigned int x_2_2_3; struct { /* ? */ } *x_2_2_4; id x_2_2_5; } x_1_1_2; } x1; bool x2; })bindingWithContext:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg1 forServiceDetails:(id)arg2 callingBundleIdentifier:(id)arg3;
- (id)callingBundleIdentifier;
- (void)enumerateBindingsWithContext:(/* Warning: unhandled struct encoding: '{LSContext=@}' */ struct LSContext { id x1; }*)arg1 forSWCResults:(id)arg2 block:(id /* block */)arg3;
- (id)init;

@end
