//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSOperationQueue;

@interface MSPasteboardLayerProvider : NSObject
{
    NSOperationQueue *_queue;
    NSData *_data;
}

+ (id)providerForDictionary:(id)arg1;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

