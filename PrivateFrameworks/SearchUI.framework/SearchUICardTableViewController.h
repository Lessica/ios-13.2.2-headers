/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardTableViewController : SearchUITableViewController {
    SFCard * _card;
    <SearchUICardViewDelegate> * _cardViewDelegate;
}

@property (nonatomic, retain) SFCard *card;
@property (nonatomic) <SearchUICardViewDelegate> *cardViewDelegate;

- (void).cxx_destruct;
- (id)card;
- (id)cardViewDelegate;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(bool)arg2;
- (id)init;
- (double)offScreenContentScrollDistance;
- (void)setCard:(id)arg1;
- (void)setCardViewDelegate:(id)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setTableModel:(id)arg1;
- (bool)shouldDrawTopAndBottomSeparators;
- (void)showViewController:(id)arg1;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;

@end
