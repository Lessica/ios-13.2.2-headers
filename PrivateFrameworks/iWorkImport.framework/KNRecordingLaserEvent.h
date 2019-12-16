/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingLaserEvent : KNRecordingEvent {
    struct CGPoint { 
        double x; 
        double y; 
    }  _unitLocation;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } unitLocation;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithParentEventTrack:(id)arg1 archive:(const struct RecordingEventArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RecordingNavigationEventArchive {} *x5; struct RecordingLaserEventArchive {} *x6; struct RecordingPauseEventArchive {} *x7; struct RecordingMovieEventArchive {} *x8; double x9; }*)arg2 unarchiver:(id)arg3;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 unitLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(struct RecordingEventArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RecordingNavigationEventArchive {} *x5; struct RecordingLaserEventArchive {} *x6; struct RecordingPauseEventArchive {} *x7; struct RecordingMovieEventArchive {} *x8; double x9; }*)arg1 archiver:(id)arg2;
- (struct CGPoint { double x1; double x2; })unitLocation;

@end
