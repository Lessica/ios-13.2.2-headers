/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDocumentPickerExtensionViewController : UIViewController <DebugHierarchyObject_Fallback, _UIDocumentPickerExtensionViewController> {
    unsigned long long  _documentPickerMode;
    NSURL * _documentStorageURL;
    NSURL * _originalURL;
    NSString * _providerIdentifier;
    NSArray * _validTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setPickerMode:, nonatomic) unsigned long long documentPickerMode;
@property (setter=_setDocumentStorageURL:, nonatomic, copy) NSURL *documentStorageURL;
@property (readonly) unsigned long long hash;
@property (setter=_setUploadURL:, nonatomic, copy) NSURL *originalURL;
@property (setter=_setProviderIdentifier:, nonatomic, copy) NSString *providerIdentifier;
@property (readonly) Class superclass;
@property (setter=_setPickableTypes:, nonatomic, copy) NSArray *validTypes;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_documentPickerDidDismiss;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setDocumentStorageURL:(id)arg1;
- (void)_setPickableTypes:(id)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setProviderIdentifier:(id)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setUploadURL:(id)arg1;
- (void)_setUploadURLWrapper:(id)arg1;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)dismissGrantingAccessToURL:(id)arg1;
- (unsigned long long)documentPickerMode;
- (id)documentStorageURL;
- (id)originalURL;
- (void)prepareForDocumentSelectionInMode:(unsigned long long)arg1;
- (void)prepareForPresentationInMode:(unsigned long long)arg1;
- (id)providerIdentifier;
- (id)validTypes;

@end
