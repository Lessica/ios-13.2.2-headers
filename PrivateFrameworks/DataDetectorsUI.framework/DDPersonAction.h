/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDPersonAction : DDRemoteAction {
    CNContact * _contact;
    bool  _contactExists;
}

+ (bool)handlesUrl:(id)arg1 result:(struct __DDResult { }*)arg2;
+ (id)supportedSchemes;
+ (id)viewControllerProviderClass;

- (void).cxx_destruct;
- (id)_appendActionsForPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 class:(Class)arg3 filter:(id)arg4 scheme:(id)arg5;
- (id)_menuActionsForBusinessWithNumber:(id)arg1;
- (id)_menuActionsForPersonWithNumber:(id)arg1 email:(id)arg2;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (id)menuActions;
- (bool)prefersActionMenuStyle;
- (struct CGSize { double x1; double x2; })suggestedContentSize;

@end
