/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMiOSScrubberViewController : UIViewController <PMScrubberProviderDelegate, PMiOSScrubberCollectionViewDelegate> {
    PMiOSScrubberCollectionView * _collectionView;
    UIView * _playhead;
    PMScrubberProvider * _provider;
}

@property (nonatomic) PMiOSScrubberCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *playhead;
@property (nonatomic, retain) PMScrubberProvider *provider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)itemWidth;
- (void)playbackProgressDidChange:(double)arg1 provider:(id)arg2;
- (id)playhead;
- (id)provider;
- (void)resultUpdated:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGPoint { double x1; double x2; })scrollViewPlayheadPosition;
- (double)scrollViewProgress;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentInsetWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlayhead:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)touchesBegan;
- (void)touchesEnded;
- (void)updateScrollWithProgress:(double)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
