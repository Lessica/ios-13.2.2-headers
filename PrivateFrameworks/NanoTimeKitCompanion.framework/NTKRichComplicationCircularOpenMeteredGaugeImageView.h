/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView {
    NTKRichComplicationImageView * _centerImageView;
    NTKRichComplicationCurvedProgressView * _progressView;
    NTKColoringLabel * _smallLabel;
}

@property (nonatomic, readonly) NTKRichComplicationImageView *centerImageView;
@property (nonatomic, readonly) NTKRichComplicationCurvedProgressView *progressView;
@property (nonatomic, readonly) NTKColoringLabel *smallLabel;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)centerImageView;
- (id)init;
- (void)layoutSubviews;
- (id)progressView;
- (void)setPaused:(bool)arg1;
- (id)smallLabel;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
