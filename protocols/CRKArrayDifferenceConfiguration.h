/* Generated by RuntimeBrowser.
 */

@protocol CRKArrayDifferenceConfiguration <NSObject>

@required

- (id /* block */)incomingItemsIdentifierFunction:(void *)arg1; // needs 1 arg types, found 4: void*, id, id, SEL
- (id /* block */)liftingFunction:(void *)arg1; // needs 1 arg types, found 4: void*, id, id, SEL
- (id /* block */)publishedItemsComparator:(void *)arg1; // needs 1 arg types, found 5: id /* block */, id, void*, id, SEL
- (id /* block */)publishedItemsIdentifierFunction:(void *)arg1; // needs 1 arg types, found 4: void*, id, id, SEL
- (void)setLiftingFunction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, id
- (void)setPublishedItemsComparator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, long long, id /* block */, id, void*
- (void)setUpdateBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, id, void*
- (id /* block */)updateBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, id, void*, id, SEL

@end
