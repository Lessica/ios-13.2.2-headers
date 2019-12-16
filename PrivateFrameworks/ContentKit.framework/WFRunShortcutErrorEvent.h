/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFRunShortcutErrorEvent : WFEvent {
    NSString * _actionName;
    NSString * _errorCode;
    NSString * _errorDomain;
    NSString * _key;
}

@property (nonatomic, copy) NSString *actionName;
@property (nonatomic, copy) NSString *errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic, copy) NSString *key;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)actionName;
- (id)errorCode;
- (id)errorDomain;
- (id)key;
- (void)setActionName:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setKey:(id)arg1;

@end
