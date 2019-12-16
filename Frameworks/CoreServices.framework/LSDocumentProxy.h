/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {
    NSString * _MIMEType;
    NSURL * _URL;
    bool  _isContentManaged;
    NSString * _name;
    struct { 
        unsigned int val[8]; 
    }  _sourceAuditToken;
    NSString * _typeIdentifier;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *containerOwnerApplicationIdentifier;
@property (getter=isContentManaged, nonatomic, readonly) bool contentManaged;
@property (getter=isImageOrVideo, readonly) bool imageOrVideo;
@property (nonatomic, readonly) const struct { unsigned int x1[8]; }*managedSourceAuditToken;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) const struct { unsigned int x1[8]; }*sourceAuditToken;
@property (nonatomic, readonly) bool sourceIsManaged;
@property (nonatomic, readonly) NSString *typeIdentifier;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(bool)arg4 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg5;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const struct { unsigned int x1[8]; }*)arg4;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(bool)arg4;
+ (id)documentProxyForURL:(id)arg1;
+ (id)documentProxyForURL:(id)arg1 isContentManaged:(bool)arg2 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg3;
+ (id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const struct { unsigned int x1[8]; }*)arg2;
+ (id)documentProxyForURL:(id)arg1 sourceIsManaged:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)URL;
- (struct optional<LaunchServices::BindingEvaluator> { union { BOOL x_1_1_1; struct BindingEvaluator { id x_2_2_1; id x_2_2_2; id x_2_2_3; unsigned long x_2_2_4; unsigned short x_2_2_5; oneway /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x_2_2_6; const short x_2_2_7; int x_2_2_8; out in inout void*x_2_2_9; void*x_2_2_10; unsigned int x_2_2_11/* : ? */; void*x_2_2_12; const void*x_2_2_13; unsigned char x_2_2_14[32]; } x_1_1_2; bool x_1_1_3; unsigned long long x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; struct vector<LSBundleClass, std::__1::allocator<LSBundleClass> > { unsigned int *x_7_2_1; unsigned int *x_7_2_2; struct __compressed_pair<LSBundleClass *, std::__1::allocator<LSBundleClass> > { unsigned int *x_3_3_1; } x_7_2_3; } x_1_1_7; id /* block */ x_1_1_8; id x_1_1_9; void*x_1_1_10; id x_1_1_11; } x1; bool x2; })_bindingEvaluatorWithAuditToken:(const struct { unsigned int x1[8]; }*)arg1;
- (id)_boundIconInfo;
- (id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id*)arg1;
- (id)applicationsAvailableForOpeningFromAirDropWithError:(id*)arg1;
- (id)applicationsAvailableForOpeningWithError:(id*)arg1;
- (id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id*)arg2;
- (id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg1 limit:(unsigned long long)arg2 XPCConnection:(id)arg3 error:(id*)arg4;
- (id)containerOwnerApplicationIdentifier;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(bool)arg5 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg6;
- (bool)isContentManaged;
- (bool)isImageOrVideo;
- (const struct { unsigned int x1[8]; }*)managedSourceAuditToken;
- (id)name;
- (const struct { unsigned int x1[8]; }*)sourceAuditToken;
- (bool)sourceIsManaged;
- (id)typeIdentifier;
- (id)uniqueIdentifier;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceURL:(id)arg4;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2;

@end