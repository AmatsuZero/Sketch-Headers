#import "MSLayerGroup.h"

@class MSLayoutGrid, MSRulerData, MSSimpleGrid;

@interface _MSPage : MSLayerGroup
{
    double _zoomValue;
    MSSimpleGrid *_grid;
    MSRulerData *_horizontalRulerData;
    MSLayoutGrid *_layout;
    MSRulerData *_verticalRulerData;
    struct CGPoint _scrollOrigin;
}

@property(retain, nonatomic) MSRulerData *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(retain, nonatomic) MSLayoutGrid *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MSRulerData *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
@property(retain, nonatomic) MSSimpleGrid *grid; // @synthesize grid=_grid;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveVerticalRulerData:(id)arg1;
- (id)primitiveVerticalRulerData;
- (void)setPrimitiveLayout:(id)arg1;
- (id)primitiveLayout;
- (void)setPrimitiveHorizontalRulerData:(id)arg1;
- (id)primitiveHorizontalRulerData;
- (void)setPrimitiveGrid:(id)arg1;
- (id)primitiveGrid;
- (void)setPrimitiveZoomValue:(double)arg1;
- (double)primitiveZoomValue;
- (void)setPrimitiveScrollOrigin:(struct CGPoint)arg1;
- (struct CGPoint)primitiveScrollOrigin;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

