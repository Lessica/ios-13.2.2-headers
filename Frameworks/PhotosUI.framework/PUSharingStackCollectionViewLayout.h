/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSharingStackCollectionViewLayout : UICollectionViewLayout {
    <PUSharingStackCollectionViewLayoutDelegate> * _delegate;
    NSArray * _stackedItemsLayoutAttributes;
}

@property (nonatomic) <PUSharingStackCollectionViewLayoutDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *stackedItemsLayoutAttributes;

- (void).cxx_destruct;
- (id)_layoutItemInputAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)delegate;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)setDelegate:(id)arg1;
- (id)stackedItemsLayoutAttributes;

@end
