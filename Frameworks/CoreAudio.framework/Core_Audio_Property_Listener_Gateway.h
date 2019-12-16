/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@interface Core_Audio_Property_Listener_Gateway : Core_Audio_Gateway <Core_Audio_Property_Listener> {
    struct Listener_List { struct unique_ptr<HAL::Client::Listener_List::Listener_List_Impl, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct __compressed_pair<HAL::Client::Listener_List::Listener_List_Impl *, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct Listener_List_Impl {} *x_1_2_1; } x_1_1_1; } x1; } * _list_ptr;
    NSObject<OS_dispatch_queue> * _notification_queue;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Listener_List={unique_ptr<HAL::Client::Listener_List::Listener_List_Impl' */ struct *list; /* unknown property attribute:  std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> >=^{Listener_List_Impl}}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{Listener_List={unique_ptr<HAL::Client::Listener_List::Listener_List_Impl' */ struct *list_ptr; /* unknown property attribute:  std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> >=^{Listener_List_Impl}}}} */
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notification_queue;

- (void).cxx_destruct;
- (unsigned long long)add_listener_for_property_id:(struct Property_Identity { unsigned int x1; struct PropertyAddress { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; unsigned int x3; int x4; })arg1 with_listener_block:(id /* block */)arg2 and_queue:(id)arg3;
- (unsigned long long)add_listener_for_property_id:(struct Property_Identity { unsigned int x1; struct PropertyAddress { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; unsigned int x3; int x4; })arg1 with_listener_proc:(int (*)arg2 and_user_data:(void*)arg3;
- (void)dealloc;
- (void)handle_property_changes:(id)arg1;
- (void)handle_property_changes:(id)arg1 reply:(id /* block */)arg2;
- (void)handle_server_disconnected;
- (void)handle_server_reconnected;
- (id)initWithObjectMap:(struct shared_ptr<HAL::Client::ObjectIDMap> { struct ObjectIDMap {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct Listener_List { struct unique_ptr<HAL::Client::Listener_List::Listener_List_Impl, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct __compressed_pair<HAL::Client::Listener_List::Listener_List_Impl *, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct Listener_List_Impl {} *x_1_2_1; } x_1_1_1; } x1; }*)list;
- (struct Listener_List { struct unique_ptr<HAL::Client::Listener_List::Listener_List_Impl, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct __compressed_pair<HAL::Client::Listener_List::Listener_List_Impl *, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct Listener_List_Impl {} *x_1_2_1; } x_1_1_1; } x1; }*)list_ptr;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)notification_queue;
- (void)notify_listeners_of_object:(unsigned int)arg1 about_changes_to_properties:(const struct vector<AudioObjectPropertyAddress, std::__1::allocator<AudioObjectPropertyAddress> > { struct AudioObjectPropertyAddress {} *x1; struct AudioObjectPropertyAddress {} *x2; struct __compressed_pair<AudioObjectPropertyAddress *, std::__1::allocator<AudioObjectPropertyAddress> > { struct AudioObjectPropertyAddress {} *x_3_1_1; } x3; }*)arg2;
- (void)release_resources;
- (void)remove_listener_for_property_id:(struct Property_Identity { unsigned int x1; struct PropertyAddress { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; unsigned int x3; int x4; })arg1 with_listener_block:(id /* block */)arg2 and_queue:(id)arg3;
- (void)remove_listener_for_property_id:(struct Property_Identity { unsigned int x1; struct PropertyAddress { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; unsigned int x3; int x4; })arg1 with_listener_proc:(int (*)arg2 and_user_data:(void*)arg3;
- (void)remove_listener_with_token:(unsigned long long)arg1;
- (void)remove_listeners_for_device_id:(unsigned int)arg1;
- (void)setList_ptr:(struct Listener_List { struct unique_ptr<HAL::Client::Listener_List::Listener_List_Impl, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct __compressed_pair<HAL::Client::Listener_List::Listener_List_Impl *, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct Listener_List_Impl {} *x_1_2_1; } x_1_1_1; } x1; }*)arg1;
- (void)setNotification_queue:(id)arg1;
- (void)synchronously_notify_listeners_of_object:(unsigned int)arg1 about_changes_to_properties:(const struct vector<AudioObjectPropertyAddress, std::__1::allocator<AudioObjectPropertyAddress> > { struct AudioObjectPropertyAddress {} *x1; struct AudioObjectPropertyAddress {} *x2; struct __compressed_pair<AudioObjectPropertyAddress *, std::__1::allocator<AudioObjectPropertyAddress> > { struct AudioObjectPropertyAddress {} *x_3_1_1; } x3; }*)arg2;

@end
