/* Generated by RuntimeBrowser.
 */

@protocol PGHighlightItemModelReader <NSObject>

@required

- (NSArray *)fetchChildHighlightItemsForHighlightItem:(id <PGHighlightItem>)arg1;
- (NSArray *)fetchParentHighlightItemsForHighlightItems:(id <NSFastEnumeration>)arg1;
- (unsigned short)visibilityStateForHighlightItem:(id <PGHighlightItem>)arg1;

@end
