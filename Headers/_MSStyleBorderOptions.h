#import "MSStylePart.h"

@class NSArray;

@interface _MSStyleBorderOptions : MSStylePart
{
    NSArray *_dashPattern;
    unsigned long long _lineCapStyle;
    unsigned long long _lineJoinStyle;
}

@property(nonatomic) unsigned long long lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property(nonatomic) unsigned long long lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property(copy, nonatomic) NSArray *dashPattern; // @synthesize dashPattern=_dashPattern;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveLineJoinStyle:(unsigned long long)arg1;
- (unsigned long long)primitiveLineJoinStyle;
- (void)setPrimitiveLineCapStyle:(unsigned long long)arg1;
- (unsigned long long)primitiveLineCapStyle;
- (void)setPrimitiveDashPattern:(id)arg1;
- (id)primitiveDashPattern;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

