/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroDownloadSongOperation : NSOperation {
    bool  _isExecuting;
    bool  _isFinished;
    MiroMemory * _memory;
}

@property (retain) MiroMemory *memory;

- (void).cxx_destruct;
- (void)downloadSong;
- (void)finished;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)markSongAsUsed;
- (id)memory;
- (void)setMemory:(id)arg1;
- (void)start;

@end
