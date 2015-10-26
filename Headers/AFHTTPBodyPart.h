#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSInputStream, NSString;

@interface AFHTTPBodyPart : NSObject <NSCopying>
{
    int _phase;
    NSInputStream *_inputStream;
    unsigned long long _phaseReadOffset;
    BOOL _hasInitialBoundary;
    BOOL _hasFinalBoundary;
    unsigned long long _stringEncoding;
    NSDictionary *_headers;
    NSString *_boundary;
    id _body;
    unsigned long long _bodyContentLength;
}

@property(nonatomic) BOOL hasFinalBoundary; // @synthesize hasFinalBoundary=_hasFinalBoundary;
@property(nonatomic) BOOL hasInitialBoundary; // @synthesize hasInitialBoundary=_hasInitialBoundary;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) unsigned long long bodyContentLength; // @synthesize bodyContentLength=_bodyContentLength;
@property(retain, nonatomic) id body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)transitionToNextPhase;
- (long long)readData:(id)arg1 intoBuffer:(char *)arg2 maxLength:(unsigned long long)arg3;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=hasBytesAvailable) BOOL bytesAvailable;
@property(readonly, nonatomic) unsigned long long contentLength;
- (id)stringForHeaders;
- (void)dealloc;
- (id)init;

@end

