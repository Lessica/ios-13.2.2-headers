/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@interface Core_Audio_IO_Gateway : Core_Audio_Gateway <Core_Audio_IO> {
    struct Client_Side_IO_Gateway { unsigned int x1; struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct shared_ptr<Client_Side_IO_Host> { struct Client_Side_IO_Host {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct shared_ptr<HALIO::IPC_Client_Transport<Client_Side_IO_Host> > { struct IPC_Client_Transport<Client_Side_IO_Host> {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; } * _client_gateway;
}

@property (nonatomic) struct Client_Side_IO_Gateway { unsigned int x1; struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct shared_ptr<Client_Side_IO_Host> { struct Client_Side_IO_Host {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct shared_ptr<HALIO::IPC_Client_Transport<Client_Side_IO_Host> > { struct IPC_Client_Transport<Client_Side_IO_Host> {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; }*client_gateway;

- (struct Client_Side_IO_Gateway { unsigned int x1; struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct shared_ptr<Client_Side_IO_Host> { struct Client_Side_IO_Host {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct shared_ptr<HALIO::IPC_Client_Transport<Client_Side_IO_Host> > { struct IPC_Client_Transport<Client_Side_IO_Host> {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; }*)client_gateway;
- (void)handle_io_message:(unsigned int)arg1 with:(id)arg2 reply:(id /* block */)arg3;
- (void)handle_server_disconnected;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setClient_gateway:(struct Client_Side_IO_Gateway { unsigned int x1; struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct shared_ptr<Client_Side_IO_Host> { struct Client_Side_IO_Host {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct shared_ptr<HALIO::IPC_Client_Transport<Client_Side_IO_Host> > { struct IPC_Client_Transport<Client_Side_IO_Host> {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; }*)arg1;
- (void)start_after_io_device_change:(unsigned int)arg1;
- (void)stop_before_io_device_change:(unsigned int)arg1 reply:(id /* block */)arg2;

@end
