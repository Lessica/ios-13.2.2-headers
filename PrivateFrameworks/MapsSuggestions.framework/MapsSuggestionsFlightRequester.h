/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFlightRequester : NSObject <MapsSuggestionsFlightRequester> {
    PARSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)init;
- (bool)requestFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 departureDate:(id)arg3 handler:(id /* block */)arg4;
- (struct NSString { Class x1; }*)uniqueName;

@end
