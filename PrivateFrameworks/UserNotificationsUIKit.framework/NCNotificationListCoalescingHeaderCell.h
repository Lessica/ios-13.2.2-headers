/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCoalescingHeaderCell : UIView <MTMaterialGrouping, NCLegibilitySettingsAdjusting, NCNotificationListCoalescingControlsHandler, NCNotificationListCoalescingControlsViewDelegate, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NCNotificationListCoalescingControlsView * _coalescingControlsView;
    <NCNotificationListCoalescingControlsHandlerDelegate> * _handlerDelegate;
    NCNotificationListHeaderTitleView * _headerTitleView;
    _UILegibilitySettings * _legibilitySettings;
    NSString * _materialGroupNameBase;
    NSString * _title;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, retain) NCNotificationListCoalescingControlsView *coalescingControlsView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NCNotificationListCoalescingControlsHandlerDelegate> *handlerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationListHeaderTitleView *headerTitleView;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (struct CGSize { double x1; double x2; })_coalescingControlsViewPreferredSize;
+ (void)_contentSizeCategoryDidChange:(id)arg1;
+ (double)coalescingHeaderCellHeightForWidth:(double)arg1 title:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_coalescingControlsViewFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_configureCoalescingControlsViewIfNecessary;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_layoutCoalescingControlsView;
- (void)_layoutHeaderTitleView;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (id)coalescingControlsView;
- (id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)arg1;
- (bool)dismissModalFullScreenIfNeeded;
- (id)handlerDelegate;
- (id)headerTitleView;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)materialGroupNameBase;
- (void)notificationListCoalescingControlsView:(id)arg1 didTransitionToClearState:(bool)arg2;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)arg1;
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClear:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsRestack:(id)arg1;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCoalescingControlsView:(id)arg1;
- (void)setHandlerDelegate:(id)arg1;
- (void)setHeaderTitleView:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1;
- (id)title;

@end
