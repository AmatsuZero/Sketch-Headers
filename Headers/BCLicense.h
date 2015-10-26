#import "NSObject.h"

@class NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BCLicense : NSObject
{
    NSString *_applicationID;
    NSDictionary *_payload;
    NSDictionary *_metadata;
    NSString *_publicCertificate;
    long long _signatureStatus;
    NSObject<OS_dispatch_queue> *_validationQueue;
    double _referenceTime;
    NSDate *_referenceDate;
    NSDate *_networkDate;
}

@property(retain, nonatomic) NSDate *networkDate; // @synthesize networkDate=_networkDate;
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(nonatomic) double referenceTime; // @synthesize referenceTime=_referenceTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *validationQueue; // @synthesize validationQueue=_validationQueue;
@property(nonatomic) long long signatureStatus; // @synthesize signatureStatus=_signatureStatus;
@property(retain, nonatomic) NSString *publicCertificate; // @synthesize publicCertificate=_publicCertificate;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *currentDate;
- (void)validateDate;
@property(readonly, nonatomic) double systemStartupTime;
- (void)log;
- (id)status;
- (id)licenseID;
- (BOOL)purchaseIsExpiring;
- (id)expiryDate;
- (long long)remainingDays;
- (long long)type;
- (BOOL)isValid;
- (BOOL)isAppNameValid;
- (BOOL)isExpired;
- (BOOL)isDeviceValid;
- (BOOL)isSignatureValid;
- (void)validateSignature;
- (id)payloadHash;
- (BOOL)saveToURL:(id)arg1 error:(id *)arg2;
- (BOOL)isAboutToExpire;
- (BOOL)shouldTryToRequestNewTrialLicense;
- (id)initWithURL:(id)arg1 applicationID:(id)arg2 publicCertificate:(id)arg3;
- (id)initWithJSONData:(id)arg1 applicationID:(id)arg2 publicCertificate:(id)arg3;
- (id)init;

@end

