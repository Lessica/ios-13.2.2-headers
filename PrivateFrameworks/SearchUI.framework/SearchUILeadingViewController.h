/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent> {
    UIView * _view;
    <SearchUIFeedbackDelegate> * feedbackDelegate;
    SearchUIDetailedRowModel * rowModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SearchUIDetailedRowModel *rowModel;
@property (readonly) Class superclass;
@property (readonly) unsigned long long type;
@property (nonatomic, retain) UIView *view;

+ (Class)leadingViewClassForRowModel:(id)arg1;
+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (id)feedbackDelegate;
- (void)forceVerticalCenteringOfContents;
- (void)hide;
- (id)imageView;
- (id)init;
- (id)rowModel;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)setView:(id)arg1;
- (id)setupView;
- (bool)shouldVerticallyCenter;
- (unsigned long long)type;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)view;

@end