/* Generated by RuntimeBrowser.
 */

@protocol CNTCC

@required

- (bool)accessCheckAuditToken:(struct { unsigned int x1[8]; })arg1 forService:(long long)arg2;
- (long long)accessPreflightForService:(long long)arg1;
- (bool)isAccessRestrictedForService:(long long)arg1;
- (void)requestAccessForService:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
