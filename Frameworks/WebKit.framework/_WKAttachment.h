/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKAttachment : NSObject <WKObject> {
    struct ObjectStorage<API::Attachment> { 
        struct type { 
            unsigned char __lx[72]; 
        } data; 
    }  _attachment;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _WKAttachmentInfo *info;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (id)description;
- (id)info;
- (bool)isConnected;
- (void)requestInfo:(id /* block */)arg1;
- (void)setData:(id)arg1 newContentType:(id)arg2 newFilename:(id)arg3 completion:(id /* block */)arg4;
- (void)setFileWrapper:(id)arg1 contentType:(id)arg2 completion:(id /* block */)arg3;
- (id)uniqueIdentifier;

@end
