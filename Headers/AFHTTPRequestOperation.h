#import "AFURLConnectionOperation.h"

@class AFHTTPResponseSerializer<AFURLResponseSerialization>, NSError, NSHTTPURLResponse, NSRecursiveLock;

@interface AFHTTPRequestOperation : AFURLConnectionOperation
{
    AFHTTPResponseSerializer<AFURLResponseSerialization> *_responseSerializer;
    id _responseObject;
    NSError *_responseSerializationError;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSError *responseSerializationError; // @synthesize responseSerializationError=_responseSerializationError;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> *responseSerializer; // @synthesize responseSerializer=_responseSerializer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)pause;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)error;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSRecursiveLock *lock; // @dynamic lock;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @dynamic response;

@end

