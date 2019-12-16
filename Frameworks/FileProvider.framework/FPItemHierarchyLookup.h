/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPItemHierarchyLookup : NSObject {
    <FPItemHierarchyLookingUp> * _hierarchyServicer;
    FPItem * _item;
    NSCache * _parentHierarchyItems;
}

@property <FPItemHierarchyLookingUp> *hierarchyServicer;
@property (nonatomic, retain) NSCache *parentHierarchyItems;

- (void).cxx_destruct;
- (id)_fetchItemWithID:(id)arg1;
- (id)hierarchyServicer;
- (id)initWithItem:(id)arg1 parentHierarchyItems:(id)arg2 hierarchyServicer:(id)arg3;
- (id)parentHierarchyItems;
- (void)setHierarchyServicer:(id)arg1;
- (void)setParentHierarchyItems:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
