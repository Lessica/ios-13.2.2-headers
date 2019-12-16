/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZonePurgeOperation : _BRCOperation <BRCOperationSubclass> {
    BRCPrivateServerZone * _serverZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
