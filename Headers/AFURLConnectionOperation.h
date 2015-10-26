#import "NSOperation.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class AFSecurityPolicy, NSData, NSDictionary, NSError, NSInputStream, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSURLConnection, NSURLCredential, NSURLRequest, NSURLResponse;

@interface AFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSSecureCoding, NSCopying>
{
    BOOL _shouldUseCredentialStorage;
    NSOutputStream *_outputStream;
    NSSet *_runLoopModes;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    NSData *_responseData;
    NSString *_responseString;
    unsigned long long _responseStringEncoding;
    NSURLCredential *_credential;
    AFSecurityPolicy *_securityPolicy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSDictionary *_userInfo;
    long long _state;
    NSRecursiveLock *_lock;
    NSURLConnection *_connection;
    long long _totalBytesRead;
    id _backgroundTaskIdentifier;
    CDUnknownBlockType _uploadProgress;
    CDUnknownBlockType _downloadProgress;
    CDUnknownBlockType _authenticationChallenge;
    CDUnknownBlockType _cacheResponse;
    CDUnknownBlockType _redirectResponse;
}

+ (BOOL)supportsSecureCoding;
+ (id)batchOfRequestOperations:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType redirectResponse; // @synthesize redirectResponse=_redirectResponse;
@property(copy, nonatomic) CDUnknownBlockType cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(copy, nonatomic) CDUnknownBlockType authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(copy, nonatomic) CDUnknownBlockType downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) CDUnknownBlockType uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) id backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) AFSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) BOOL shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(nonatomic) unsigned long long responseStringEncoding; // @synthesize responseStringEncoding=_responseStringEncoding;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)cancelConnection;
- (void)cancel;
- (void)finish;
- (void)operationDidStart;
- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setRedirectResponseBlock:(CDUnknownBlockType)arg1;
- (void)setCacheResponseBlock:(CDUnknownBlockType)arg1;
- (void)setWillSendRequestForAuthenticationChallengeBlock:(CDUnknownBlockType)arg1;
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setUploadProgressBlock:(CDUnknownBlockType)arg1;
- (void)resume;
- (BOOL)isPaused;
- (void)operationDidPause;
- (void)pause;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

