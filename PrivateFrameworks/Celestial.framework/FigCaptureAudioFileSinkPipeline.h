/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureAudioFileSinkPipeline : FigCaptureSinkPipeline {
    BWAudioConverterNode * _audioConverterNode;
    BWAudioFileSinkNode * _audioFileSinkNode;
    BWFileCoordinatorNode * _fileCoordinatorNode;
}

@property (nonatomic, readonly) BWAudioFileSinkNode *audioFileSinkNode;
@property (nonatomic, readonly) BWFileCoordinatorNode *fileCoordinatorNode;

+ (void)initialize;

- (int)_buildAudioFileSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 recordingStatusDelegate:(id)arg4;
- (id)audioFileSinkNode;
- (void)dealloc;
- (id)fileCoordinatorNode;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 sourceAudioOutput:(id)arg4 recordingStatusDelegate:(id)arg5;

@end
