/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphIngestMusicProcessor : NSObject <PGGraphIngestProcessor> {
    NSObject<OS_os_log> * _loggingConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_ingestStreamEventSession:(id)arg1 graph:(id)arg2 performerNodesByName:(id)arg3;
- (id)loggingConnection;
- (void)processMusicForGraph:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
