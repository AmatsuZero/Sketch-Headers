#import "NSObject.h"

#import "AFURLResponseSerialization.h"

@class NSIndexSet, NSSet, NSString;

@interface AFHTTPResponseSerializer : NSObject <AFURLResponseSerialization>
{
    unsigned long long _stringEncoding;
    NSIndexSet *_acceptableStatusCodes;
    NSSet *_acceptableContentTypes;
}

+ (BOOL)supportsSecureCoding;
+ (id)serializer;
@property(copy, nonatomic) NSSet *acceptableContentTypes; // @synthesize acceptableContentTypes=_acceptableContentTypes;
@property(copy, nonatomic) NSIndexSet *acceptableStatusCodes; // @synthesize acceptableStatusCodes=_acceptableStatusCodes;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (BOOL)validateResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

