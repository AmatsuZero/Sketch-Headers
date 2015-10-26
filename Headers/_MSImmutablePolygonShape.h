#import "MSImmutableCustomShapeLayer.h"

@interface _MSImmutablePolygonShape : MSImmutableCustomShapeLayer
{
    long long _numberOfPoints;
}

@property(nonatomic) long long numberOfPoints; // @synthesize numberOfPoints=_numberOfPoints;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

