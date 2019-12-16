/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryFetchExecutor : NSObject {
    CNChangeHistoryFetchRequest * _request;
    CNContactStore * _store;
}

@property (nonatomic, readonly, copy) CNChangeHistoryFetchRequest *request;
@property (nonatomic, readonly) CNContactStore *store;

+ (id)contactEventForChange:(id)arg1 factory:(id)arg2;
+ (id)os_log;

- (void).cxx_destruct;
- (id)contactEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2;
- (id)deltaSync;
- (id)description;
- (id)fullSync;
- (id)groupEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2;
- (id)initWithRequest:(id)arg1 store:(id)arg2;
- (id)keysToFetch;
- (id)request;
- (id)run:(id*)arg1;
- (id)store;

@end
