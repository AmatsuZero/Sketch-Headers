//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelObject.h"

@class NSDictionary, NSString;

@protocol _MSDocumentData <MSModelObject>
@property(readonly, nonatomic) id <MSArray> pagesGeneric;
@property(readonly, nonatomic) id <MSSharedTextStyleContainer> layerTextStylesGeneric;
@property(readonly, nonatomic) id <MSSymbolContainer> layerSymbolsGeneric;
@property(readonly, nonatomic) id <MSSharedStyleContainer> layerStylesGeneric;
@property(readonly, nonatomic) id <MSAssetCollection> assetsGeneric;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) BOOL enableSliceInteraction;
@property(readonly, nonatomic) BOOL enableLayerInteraction;
@property(readonly, nonatomic) unsigned long long currentPageIndex;
@property(readonly, nonatomic) NSString *cloudUserID;
@property(readonly, nonatomic) NSString *cloudShareURL;
@property(readonly, copy, nonatomic) NSString *cloudShareID;
@end

