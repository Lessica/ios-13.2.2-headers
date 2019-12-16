/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGReminderSuggestion : SGReminderSuggestionBase <REMReminderCreationDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDateComponents *dueDateComponents;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) long long locationProximity;
@property (nonatomic, readonly) NSString *locationString;
@property (nonatomic, readonly) NSAttributedString *notes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSAttributedString *title;
@property (nonatomic, readonly) bool titleIsGeneratedSuggestion;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) bool wantsExtendedDetailOnlyView;

+ (id)remindersImage;

- (void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(bool)arg2;
- (id)dueDateComponents;
- (id)location;
- (long long)locationProximity;
- (id)locationString;
- (id)notes;
- (void)reminderCreationViewController:(id)arg1 didCreateReminder:(bool)arg2 error:(id)arg3;
- (id)suggestionCategoryImage;
- (id)suggestionImage;
- (id)suggestionPrimaryAction;
- (id)title;
- (id)url;
- (id)userActivity;
- (bool)wantsExtendedDetailOnlyView;

@end
