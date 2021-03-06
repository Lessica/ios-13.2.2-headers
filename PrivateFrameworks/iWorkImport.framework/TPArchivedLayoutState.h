/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPArchivedLayoutState : TSPObject {
    TPLayoutState * _layoutState;
}

@property (nonatomic, copy) TPLayoutState *layoutState;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithContext:(id)arg1 layoutState:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArchivedLayoutState:(id)arg1;
- (id)layoutState;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setLayoutState:(id)arg1;

@end
