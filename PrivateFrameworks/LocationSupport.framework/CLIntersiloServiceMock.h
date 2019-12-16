/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

@interface CLIntersiloServiceMock : CLIntersiloService <CLIntersiloServiceMockProtocol> {
    NSMutableDictionary * _keyedPayloads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *keyedPayloads;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

- (void).cxx_destruct;
- (void)beginService;
- (void)endService;
- (id)getPayloadForKey:(id)arg1;
- (id)getPayloadForSelector:(SEL)arg1;
- (id)keyedPayloads;
- (void)removePayloadForKey:(id)arg1;
- (void)removePayloadForSelector:(SEL)arg1;
- (void)setKeyedPayloads:(id)arg1;
- (void)setPayload:(id)arg1 forKey:(id)arg2;
- (void)setPayload:(id)arg1 forSelector:(SEL)arg2;
- (id)syncgetPayloadForKey:(id)arg1;
- (id)syncgetPayloadForSelector:(SEL)arg1;

@end
