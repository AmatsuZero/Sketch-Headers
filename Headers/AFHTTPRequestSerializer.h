#import "NSObject.h"

#import "AFURLRequestSerialization.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface AFHTTPRequestSerializer : NSObject <AFURLRequestSerialization>
{
    BOOL _allowsCellularAccess;
    BOOL _HTTPShouldHandleCookies;
    BOOL _HTTPShouldUsePipelining;
    unsigned long long _stringEncoding;
    unsigned long long _cachePolicy;
    unsigned long long _networkServiceType;
    double _timeoutInterval;
    NSSet *_HTTPMethodsEncodingParametersInURI;
    NSMutableSet *_mutableObservedChangedKeyPaths;
    NSMutableDictionary *_mutableHTTPRequestHeaders;
    unsigned long long _queryStringSerializationStyle;
    CDUnknownBlockType _queryStringSerialization;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)serializer;
@property(copy, nonatomic) CDUnknownBlockType queryStringSerialization; // @synthesize queryStringSerialization=_queryStringSerialization;
@property(nonatomic) unsigned long long queryStringSerializationStyle; // @synthesize queryStringSerializationStyle=_queryStringSerializationStyle;
@property(retain, nonatomic) NSMutableDictionary *mutableHTTPRequestHeaders; // @synthesize mutableHTTPRequestHeaders=_mutableHTTPRequestHeaders;
@property(retain, nonatomic) NSMutableSet *mutableObservedChangedKeyPaths; // @synthesize mutableObservedChangedKeyPaths=_mutableObservedChangedKeyPaths;
@property(retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI; // @synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) unsigned long long networkServiceType; // @synthesize networkServiceType=_networkServiceType;
@property(nonatomic) BOOL HTTPShouldUsePipelining; // @synthesize HTTPShouldUsePipelining=_HTTPShouldUsePipelining;
@property(nonatomic) BOOL HTTPShouldHandleCookies; // @synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (id)requestWithMultipartFormRequest:(id)arg1 writingStreamContentsToFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4;
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3;
- (void)setQueryStringSerializationWithBlock:(CDUnknownBlockType)arg1;
- (void)setQueryStringSerializationWithStyle:(unsigned long long)arg1;
- (void)clearAuthorizationHeader;
- (void)setAuthorizationHeaderFieldWithToken:(id)arg1;
- (void)setAuthorizationHeaderFieldWithUsername:(id)arg1 password:(id)arg2;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(readonly, nonatomic) NSDictionary *HTTPRequestHeaders;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

