/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKContentRuleListAction : NSObject <WKObject> {
    struct ObjectStorage<API::ContentRuleListAction> { 
        struct type { 
            unsigned char __lx[40]; 
        } data; 
    }  _action;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readonly) bool blockedCookies;
@property (nonatomic, readonly) bool blockedLoad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool madeHTTPS;
@property (nonatomic, readonly, copy) NSArray *notifications;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (bool)blockedCookies;
- (bool)blockedLoad;
- (void)dealloc;
- (bool)madeHTTPS;
- (id)notifications;

@end
