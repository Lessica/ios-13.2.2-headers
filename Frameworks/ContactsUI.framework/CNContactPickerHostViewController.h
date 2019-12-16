/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol> {
    <NSCopying> * _currentRequestIdentifier;
    <CNContactPickerContentDelegate> * _delegate;
    NSExtension * _extension;
}

@property (nonatomic, retain) <NSCopying> *currentRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactPickerContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (readonly) Class superclass;

+ (id)contactPickerExtension;
+ (id)contextForIdentifier:(id)arg1;
+ (bool)getViewController:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)currentRequestIdentifier;
- (id)delegate;
- (id)extension;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(bool)arg1;
- (id)navigationController;
- (void)pickerDidCancel;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)setCurrentRequestIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;

@end