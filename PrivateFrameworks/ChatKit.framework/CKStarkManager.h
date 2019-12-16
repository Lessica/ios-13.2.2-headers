/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKStarkManager : NSObject {
    UIViewController * _starkRootViewController;
    UIWindow * _starkWindow;
}

@property (nonatomic, readonly) bool isStarkConnected;
@property (nonatomic, retain) UIViewController *starkRootViewController;
@property (nonatomic, retain) UIWindow *starkWindow;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_assistantContextForConversation:(id)arg1;
- (id)_assistantContextForRecipientID:(id)arg1;
- (void)activateForConversation:(id)arg1;
- (void)activateForRecipient:(id)arg1;
- (void)attachStarkToWindow:(id)arg1;
- (void)detachStarkFromWindow:(id)arg1;
- (bool)isStarkConnected;
- (void)setStarkRootViewController:(id)arg1;
- (void)setStarkWindow:(id)arg1;
- (id)starkRootViewController;
- (id)starkWindow;

@end