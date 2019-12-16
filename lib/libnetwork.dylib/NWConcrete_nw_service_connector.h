/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_service_connector : NSObject <OS_nw_service_connector> {
    NSObject<OS_nw_dictionary> * activeConnections;
    NSObject<OS_nw_dictionary> * activeOutgoingRequests;
    NSObject<OS_nw_parameters> * clientParameters;
    NSObject<OS_nw_listener> * listener;
    unsigned short  localPortHBO;
    unsigned char  localPrivKey;
    unsigned char  localPubKey;
    NSObject<OS_nw_dictionary> * pendingIncomingRequests;
    NSObject<OS_nw_array> * pendingUnverifiedIncomingRequests;
    NSObject<OS_xpc_object> * remotePubKeys;
    unsigned char  retryCounterForAddressInUse;
    id /* block */  serviceAvailableBlock;
    NSObject<OS_dispatch_queue> * serviceConnectorQueue;
    unsigned int  state;
    unsigned long long  uniqueID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
