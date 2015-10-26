#import "MSStyleBasicFill.h"

@class MSImageProxy;

@interface _MSStyleFill : MSStyleBasicFill
{
    MSImageProxy *_image;
    long long _noiseIndex;
    double _noiseIntensity;
    long long _patternFillType;
    double _patternTileScale;
}

@property(nonatomic) double patternTileScale; // @synthesize patternTileScale=_patternTileScale;
@property(nonatomic) long long patternFillType; // @synthesize patternFillType=_patternFillType;
@property(nonatomic) double noiseIntensity; // @synthesize noiseIntensity=_noiseIntensity;
@property(nonatomic) long long noiseIndex; // @synthesize noiseIndex=_noiseIndex;
@property(retain, nonatomic) MSImageProxy *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitivePatternTileScale:(double)arg1;
- (double)primitivePatternTileScale;
- (void)setPrimitivePatternFillType:(long long)arg1;
- (long long)primitivePatternFillType;
- (void)setPrimitiveNoiseIntensity:(double)arg1;
- (double)primitiveNoiseIntensity;
- (void)setPrimitiveNoiseIndex:(long long)arg1;
- (long long)primitiveNoiseIndex;
- (void)setPrimitiveImage:(id)arg1;
- (id)primitiveImage;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

