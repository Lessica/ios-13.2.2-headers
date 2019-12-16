/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBMeteredMessageQueue : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    bool  _isProcessingPendingMessages;
    NSObject<OS_dispatch_queue> * _lockQueue;
    id /* block */  _messageSendBlock;
    NSMutableDictionary * _pendingMessagesByIdentifier;
}

@property (nonatomic, copy) id /* block */ messageSendBlock;

- (void).cxx_destruct;
- (void)_lockQueue_processPendingMessages;
- (bool)containsMessageWithIdentifier:(id)arg1;
- (void)enqueueIdentifier:(id)arg1 message:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id /* block */)messageSendBlock;
- (void)setMessageSendBlock:(id /* block */)arg1;

@end
