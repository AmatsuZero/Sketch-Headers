//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableSymbolMaster.h"

@interface MSImmutableSymbolMaster : _MSImmutableSymbolMaster
{
    long long _changeIdentifier;
}

+ (unsigned long long)traits;
@property(readonly, nonatomic) long long changeIdentifier; // @synthesize changeIdentifier=_changeIdentifier;
- (BOOL)influenceRectClipsToBounds;
- (void)preserveFlexibleWidthTextLayersInMutableMaster:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (id)masterWithOverrides:(id)arg1 size:(struct CGSize)arg2 allSymbols:(id)arg3;
- (id)masterWithOverrides:(id)arg1 allSymbols:(id)arg2;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (id)availableOverridesWithParent:(id)arg1 overrideValues:(id)arg2 inDocument:(id)arg3;
- (BOOL)canAddOverridesForMaster:(id)arg1 toParent:(id)arg2;
- (id)overridePointsWithParent:(id)arg1;
- (BOOL)shouldDrawBackgroundInContext:(id)arg1 isDrawingAsSymbolInstance:(BOOL)arg2;
- (id)svgStyle:(id)arg1;
- (void)addTransformAttributes:(id)arg1 exporter:(id)arg2;

@end

