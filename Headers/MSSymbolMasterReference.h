//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCSortable.h"

@class MSAssetLibrary, MSSymbolMaster, NSString;

@interface MSSymbolMasterReference : NSObject <BCSortable>
{
    MSAssetLibrary *_sourceLibrary;
    MSSymbolMaster *_symbolMaster;
}

+ (id)referenceForSymbolMaster:(id)arg1 inLibrary:(id)arg2;
+ (id)referenceForSymbolMaster:(id)arg1;
@property(retain, nonatomic) MSSymbolMaster *symbolMaster; // @synthesize symbolMaster=_symbolMaster;
@property(retain, nonatomic) MSAssetLibrary *sourceLibrary; // @synthesize sourceLibrary=_sourceLibrary;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

