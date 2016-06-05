//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURLProtectionSpace, NSURLSession;

@interface MSCloudAPI : NSObject
{
    NSDictionary *_errorCodesByErrorString;
    NSURLSession *_urlSession;
    NSURLProtectionSpace *_protectionSpace;
}

@property(retain, nonatomic) NSURLProtectionSpace *protectionSpace; // @synthesize protectionSpace=_protectionSpace;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSDictionary *errorCodesByErrorString; // @synthesize errorCodesByErrorString=_errorCodesByErrorString;
- (void).cxx_destruct;
- (id)authValueForKey:(id)arg1;
- (void)saveAuthValue:(id)arg1 forKey:(id)arg2;
- (void)showErrorDialogForError:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)userID;
- (void)setAuthToken:(id)arg1;
- (id)authToken;
- (void)setEmailAddress:(id)arg1;
- (id)emailAddress;
- (BOOL)isLoggedIn;
- (void)logout;
- (id)hmacsha1:(id)arg1 key:(id)arg2;
- (id)signingForRequest:(id)arg1 authToken:(id)arg2;
- (id)signToken;
- (id)urlRequestWithMethod:(id)arg1 url:(id)arg2 parameters:(id)arg3 authToken:(id)arg4;
- (void)processAPIRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)errorCodeFromErrorMessage:(id)arg1;
- (long long)currentPlatform;
- (id)init;

@end

