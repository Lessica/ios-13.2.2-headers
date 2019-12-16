/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailTitleCell : EKEventDetailCell <EKEventDetailPredictedLocationCellDelegate, UITextViewDelegate> {
    NSMutableArray * _dateTimeViews;
    NSObject<EKEventDetailTitleCellDelegate> * _delegate;
    UIButton * _editButton;
    bool  _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    bool  _hideCellSeparator;
    int  _lastPosition;
    NSMutableArray * _locationItems;
    unsigned long long  _numberOfTitleLines;
    bool  _observingLocaleChanges;
    EKEventDetailPredictedLocationCell * _predictedLocationView;
    UILabel * _recurrenceView;
    bool  _rejectionReasonCell;
    bool  _showingInlineDayView;
    UILabel * _statusView;
    UILabel * _titleView;
    UILabel * _travelTimeView;
    unsigned int  _visibleItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (nonatomic) bool showingInlineDayView;
@property (nonatomic, readonly) UIView *sourceViewForPopover;
@property (readonly) Class superclass;

+ (void)_geocodeEventIfNeeded:(id)arg1;
+ (void)_invalidateCachedFonts;
+ (id)_largeTitleFont;
+ (id)_locationFont;
+ (void)_registerForInvalidation;
+ (id)_titleFont;

- (void).cxx_destruct;
- (id)_dateTimeViewForLine:(unsigned long long)arg1;
- (id)_editButton;
- (double)_layoutForWidth:(double)arg1;
- (id)_predictedLocationView;
- (void)_promptForSpanWithSourceView:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)_recurrenceView;
- (void)_saveEventWithSpan:(long long)arg1;
- (void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2;
- (id)_statusView;
- (id)_titleView;
- (id)_travelTimeView;
- (void)_updateSeparatorInsets;
- (bool)_useLargeFonts;
- (void)addLocation:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)editButtonTapped;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;
- (bool)hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (id)initAsRejectionReasonCellWithEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 style:(long long)arg3;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (unsigned long long)numberOfTitleLines;
- (void)setColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg1;
- (void)setHideCellSeparator:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNumberOfTitleLines:(unsigned long long)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (void)setShowingInlineDayView:(bool)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelTimeString:(id)arg1;
- (bool)showingInlineDayView;
- (id)sourceViewForPopover;
- (double)titleHeight;
- (bool)update;

@end