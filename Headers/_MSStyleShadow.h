#import "MSStylePart.h"

@class MSColor, MSGraphicsContextSettings;

@interface _MSStyleShadow : MSStylePart
{
    BOOL _hasShadow;
    double _blurRadius;
    double _offsetX;
    double _offsetY;
    double _spread;
    MSColor *_color;
    MSGraphicsContextSettings *_contextSettings;
}

@property(retain, nonatomic) MSGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSColor *color; // @synthesize color=_color;
@property(nonatomic) double spread; // @synthesize spread=_spread;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveContextSettings:(id)arg1;
- (id)primitiveContextSettings;
- (void)setPrimitiveColor:(id)arg1;
- (id)primitiveColor;
- (void)setPrimitiveSpread:(double)arg1;
- (double)primitiveSpread;
- (void)setPrimitiveOffsetY:(double)arg1;
- (double)primitiveOffsetY;
- (void)setPrimitiveOffsetX:(double)arg1;
- (double)primitiveOffsetX;
- (void)setPrimitiveHasShadow:(BOOL)arg1;
- (BOOL)primitiveHasShadow;
- (void)setPrimitiveBlurRadius:(double)arg1;
- (double)primitiveBlurRadius;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

