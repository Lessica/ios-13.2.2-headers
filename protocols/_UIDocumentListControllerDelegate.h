/* Generated by RuntimeBrowser.
 */

@protocol _UIDocumentListControllerDelegate <NSObject>

@required

- (void)documentListController:(_UIDocumentListController *)arg1 didSelectContainerWithViewController:(_UIDocumentListController *)arg2;
- (void)documentListController:(_UIDocumentListController *)arg1 didSelectItemAtURL:(NSURL *)arg2;
- (void)documentListController:(void *)arg1 performAction:(void *)arg2 URL:(void *)arg3 originatingView:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: _UIDocumentListController *, long long, NSURL *, UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)documentListController:(_UIDocumentListController *)arg1 didHighlightItemAtURL:(NSURL *)arg2;
- (void)documentListController:(_UIDocumentListController *)arg1 didUnhighlightItemAtURL:(NSURL *)arg2;
- (void)documentListController:(void *)arg1 renameItemAtURL:(void *)arg2 toName:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: _UIDocumentListController *, NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (bool)documentListController:(_UIDocumentListController *)arg1 shouldHighlightItemAtURL:(NSURL *)arg2;
- (bool)documentListController:(_UIDocumentListController *)arg1 shouldSelectItemAtURL:(NSURL *)arg2;
- (UIViewController<_UIDocumentListControllerPreviewViewController> *)documentListController:(_UIDocumentListController *)arg1 viewControllerForPreviewingItemAtURL:(NSURL *)arg2;
- (void)documentListControllerItemsChanged:(_UIDocumentListController *)arg1;
- (void)documentListControllerURLWasRemoved:(_UIDocumentListController *)arg1;

@end
