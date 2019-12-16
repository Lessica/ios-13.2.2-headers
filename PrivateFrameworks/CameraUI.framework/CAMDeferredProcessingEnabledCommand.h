/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMDeferredProcessingEnabledCommand : CAMCaptureCommand {
    bool  __enabled;
}

@property (getter=_isEnabled, nonatomic, readonly) bool _enabled;

- (bool)_isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeferredProcessingEnabled:(bool)arg1;
- (id)initWithSubcommands:(id)arg1;

@end
