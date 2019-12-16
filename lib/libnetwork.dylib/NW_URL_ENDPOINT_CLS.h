/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NW_URL_ENDPOINT_CLS : NWConcrete_nw_endpoint {
    char * hostname;
    char * path;
    unsigned short  port;
    char * sanitized_url;
    char * scheme;
    char * url;
    BOOL  url_hash;
    struct __CFURL { } * url_ref;
}

- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(bool)arg1;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (const char *)hostname;
- (id)initWithURL:(const char *)arg1;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2 matchParent:(bool)arg3;
- (unsigned short)port;
- (unsigned int)type;

@end
