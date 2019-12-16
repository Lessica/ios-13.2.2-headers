/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSCellularPlanQRCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate> {
    bool  _canUseCamera;
    AVCaptureSession * _captureSession;
    <AVCaptureMetadataOutputObjectsDelegate> * _delegate;
    AVCaptureDeviceInput * _deviceInput;
    NSObject<OS_dispatch_queue> * _metadataQueue;
    AVCaptureVideoPreviewLayer * _previewLayer;
}

@property (nonatomic, readonly) bool canUseCamera;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVCaptureMetadataOutputObjectsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_changeCameraConfiguration;
- (void)_handleRuntimeError:(id)arg1;
- (bool)canUseCamera;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)previewLayer;
- (void)setDelegate:(id)arg1;
- (void)setupCameraSession;
- (void)startRunning;
- (void)stopRunning;

@end
