/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

@interface GKPeerPickerViewController : UIViewController {
    bool  _alertCancelled;
    bool  _alertPresented;
    bool  _animating;
    int  _bluetoothStatus;
    GKContentView * _btView;
    GKContentView * _connectTypeView;
    unsigned long long  _connectionTypesMask;
    NSString * _currentConnectionTypeKey;
    GKContentView * _currentView;
    id  _delegate;
    NSTimer * _invitationWaitTimer;
    GKContentView * _inviteView;
    GKContentView * _listView;
    NSMutableArray * _menuQueue;
    GKContentView * _noPeersView;
    UITableView * _peerTableView;
    NSMutableArray * _peers;
    NSString * _pendingPeer;
    int  _pendingState;
    NSString * _searchingForServicesString;
    NSMutableDictionary * _sessionMap;
    int  _state;
    GKContentView * _statusView;
    bool  _updating;
}

@property (nonatomic) bool alertCancelled;
@property (nonatomic) bool alertPresented;
@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic) int bluetoothStatus;
@property (nonatomic, retain) GKContentView *btView;
@property (nonatomic, retain) GKContentView *connectTypeView;
@property unsigned long long connectionTypesMask;
@property (nonatomic) NSString *currentConnectionTypeKey;
@property (nonatomic, readonly) GKSession *currentSession;
@property (nonatomic, readonly) GKContentView *currentView;
@property id delegate;
@property (nonatomic, retain) NSTimer *invitationWaitTimer;
@property (nonatomic, retain) GKContentView *inviteView;
@property (nonatomic, retain) GKContentView *listView;
@property (nonatomic, retain) NSMutableArray *menuQueue;
@property (nonatomic, retain) GKContentView *noPeersView;
@property (nonatomic, retain) UITableView *peerTableView;
@property (nonatomic, retain) NSMutableArray *peers;
@property (nonatomic) int pendingState;
@property (nonatomic, copy) NSString *searchingForServicesString;
@property (nonatomic, retain) NSMutableDictionary *sessionMap;
@property (nonatomic) int state;
@property (nonatomic, retain) GKContentView *statusView;
@property (nonatomic) bool updating;
@property (getter=isVisible, nonatomic, readonly) bool visible;

- (void)_acceptInvitation:(id)arg1;
- (void)_btPowerStateChanged:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_changePanelAnimationDidEnd:(id)arg1;
- (id)_createAlertFromGKContentView:(id)arg1;
- (void)_createBTViewIfNeeded;
- (void)_createConnectTypeViewIfNeeded;
- (void)_createInviteViewIfNeeded;
- (void)_createListViewIfNeeded;
- (void)_createNoPeersViewIfNeeded;
- (void)_createStatusViewIfNeeded;
- (void)_declineInvitation:(id)arg1;
- (int)_determineBluetoothStatus;
- (void)_nearbyButtonPressed:(id)arg1;
- (void)_onlineButtonPressed:(id)arg1;
- (void)_setSessionAvailabilityForState:(int)arg1;
- (void)_setupListView;
- (bool)_shouldShowConnectTypeView;
- (void)_showBluetoothErrorView:(bool)arg1;
- (void)_showConnectTypeView:(bool)arg1;
- (void)_showInviteViewWithName:(id)arg1 animated:(bool)arg2;
- (void)_showListView:(bool)arg1;
- (void)_showNoPeersView:(bool)arg1;
- (void)_showRequestBluetoothView:(bool)arg1;
- (void)_showStatusView:(int)arg1 peerName:(id)arg2 animated:(bool)arg3;
- (void)_showView:(id)arg1 animated:(bool)arg2;
- (void)_sortAndUpdateTable;
- (void)_timedOutWaitingForInvitation:(id)arg1;
- (void)_turnBluetoothOn:(id)arg1;
- (bool)_updatePicker:(int)arg1;
- (bool)alertCancelled;
- (bool)alertPresented;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (int)bluetoothStatus;
- (id)btView;
- (id)connectTypeView;
- (unsigned long long)connectionTypesMask;
- (void)contentView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)currentConnectionTypeKey;
- (id)currentSession;
- (id)currentView;
- (void)dealloc;
- (id)delegate;
- (void)didPresentAlertView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dismiss;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)invitationWaitTimer;
- (id)inviteView;
- (bool)isAnimating;
- (bool)isVisible;
- (id)listView;
- (void)loadInitialView;
- (void)loadView;
- (id)menuQueue;
- (id)noPeersView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)peerTableView;
- (id)peers;
- (int)pendingState;
- (id)searchingForServicesString;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)session:(id)arg1 peerDidBecomeBusy:(id)arg2;
- (id)sessionMap;
- (void)setAlertCancelled:(bool)arg1;
- (void)setAlertPresented:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setBluetoothStatus:(int)arg1;
- (void)setBtView:(id)arg1;
- (void)setConnectTypeView:(id)arg1;
- (void)setConnectionTypesMask:(unsigned long long)arg1;
- (void)setCurrentConnectionTypeKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInvitationWaitTimer:(id)arg1;
- (void)setInviteView:(id)arg1;
- (void)setListView:(id)arg1;
- (void)setMenuQueue:(id)arg1;
- (void)setNoPeersView:(id)arg1;
- (void)setPeerTableView:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setPendingState:(int)arg1;
- (void)setSearchingForServicesString:(id)arg1;
- (void)setSessionMap:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStatusView:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)show;
- (int)state;
- (id)statusView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)updating;

@end