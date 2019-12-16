/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSGridTemplateViewController : CPSBaseTemplateViewController <CPGridTemplateProviding, CPSButtonDelegate> {
    NSArray * _gridButtons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *gridButtons;
@property (nonatomic, readonly) CPGridTemplate *gridTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buttonForIdentifier:(id)arg1;
- (void)_viewDidLoad;
- (void)didSelectButton:(id)arg1;
- (id)gridButtons;
- (id)gridTemplate;
- (id)initWithGridTemplate:(id)arg1 interfaceDelegate:(id)arg2;
- (void)setControl:(id)arg1 enabled:(bool)arg2;
- (void)setGridButtons:(id)arg1;

@end
