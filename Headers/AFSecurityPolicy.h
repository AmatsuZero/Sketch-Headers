#import "NSObject.h"

@class NSArray;

@interface AFSecurityPolicy : NSObject
{
    BOOL _validatesCertificateChain;
    BOOL _allowInvalidCertificates;
    BOOL _validatesDomainName;
    unsigned long long _SSLPinningMode;
    NSArray *_pinnedCertificates;
    NSArray *_pinnedPublicKeys;
}

+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)policyWithPinningMode:(unsigned long long)arg1;
+ (id)defaultPolicy;
+ (id)defaultPinnedCertificates;
@property(retain, nonatomic) NSArray *pinnedPublicKeys; // @synthesize pinnedPublicKeys=_pinnedPublicKeys;
@property(nonatomic) BOOL validatesDomainName; // @synthesize validatesDomainName=_validatesDomainName;
@property(nonatomic) BOOL allowInvalidCertificates; // @synthesize allowInvalidCertificates=_allowInvalidCertificates;
@property(retain, nonatomic) NSArray *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(nonatomic) BOOL validatesCertificateChain; // @synthesize validatesCertificateChain=_validatesCertificateChain;
@property(nonatomic) unsigned long long SSLPinningMode; // @synthesize SSLPinningMode=_SSLPinningMode;
- (void).cxx_destruct;
- (BOOL)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (BOOL)evaluateServerTrust:(struct __SecTrust *)arg1;
- (id)init;

@end

