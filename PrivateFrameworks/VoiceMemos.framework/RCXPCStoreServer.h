/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCXPCStoreServer : NSXPCStoreServer {
    id /* block */  _shouldAcceptDatabaseConnection;
}

@property (nonatomic, copy) id /* block */ shouldAcceptDatabaseConnection;

- (void).cxx_destruct;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setShouldAcceptDatabaseConnection:(id /* block */)arg1;
- (id /* block */)shouldAcceptDatabaseConnection;

@end
