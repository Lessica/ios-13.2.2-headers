/* Generated by RuntimeBrowser.
 */

@protocol WFChooseFromListIntentHandling <NSObject>

@required

- (void)handleChooseFromList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFChooseFromListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFChooseFromListIntentResponse *, void*
- (void)provideChosenItemsOptionsForChooseFromList:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: WFChooseFromListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)resolveChosenItemsForChooseFromList:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFChooseFromListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolvePromptForChooseFromList:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFChooseFromListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*

@optional

- (void)confirmChooseFromList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFChooseFromListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFChooseFromListIntentResponse *, void*
- (NSArray *)defaultChosenItemsForChooseFromList:(WFChooseFromListIntent *)arg1;

@end
