/* Generated by RuntimeBrowser.
 */

@protocol HMDCameraRecordingUploaderDelegate

@required

- (void)recordingUploader:(HMDCameraRecordingUploader *)arg1 didFinishClip:(NSUUID *)arg2;
- (void)recordingUploader:(HMDCameraRecordingUploader *)arg1 didStartClip:(NSUUID *)arg2;
- (void)recordingUploader:(HMDCameraRecordingUploader *)arg1 willFinishClip:(NSUUID *)arg2;
- (void)recordingUploaderIsIdle:(HMDCameraRecordingUploader *)arg1;

@end
