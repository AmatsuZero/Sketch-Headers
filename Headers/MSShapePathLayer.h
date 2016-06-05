//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSShapePathLayer.h"

#import "MSShapePathLayer.h"

@class NSBezierPath, NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSShapePathLayer : _MSShapePathLayer <MSShapePathLayer>
{
    BOOL _isEditing;
}

+ (id)shapeWithBezierPath:(id)arg1;
+ (id)shapeWithShapePath:(id)arg1 inRect:(struct CGRect)arg2;
+ (id)keyPathsForValuesAffectingPreviewImages;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (void)flatten;
- (id)layerSuitableForInsertingIntoGroup:(id)arg1;
- (BOOL)canBeContainedByGroup;
- (BOOL)isLine;
- (BOOL)calculateHasBlendedLayer;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setEndDecorationType:(unsigned long long)arg1;
- (void)setStartDecorationType:(unsigned long long)arg1;
- (id)allCurvePoints;
- (void)multiplyBy:(double)arg1;
- (BOOL)isPartOfClippingMask;
- (void)hideSelectionTemporarily;
@property(nonatomic) BOOL isClosed;
- (void)setBooleanOperation:(long long)arg1;
- (BOOL)isNearlyEmpty;
- (struct CGPoint)relativePoint:(struct CGPoint)arg1;
- (struct CGPoint)absolutePoint:(struct CGPoint)arg1;
- (void)simplify;
- (struct CGPoint)pointCenteredAfterPointIndex:(long long)arg1;
@property(retain, nonatomic) NSBezierPath *bezierPath;
- (id)bezierPathWithTransforms;
- (id)bezierPathInRect:(struct CGRect)arg1;
- (void)transformPointsToNewRect:(struct CGRect)arg1;
- (struct CGRect)newRectForAdjustingFrameAfterEditIntegral:(BOOL)arg1;
- (void)adjustFrameAfterEditIntegral:(BOOL)arg1;
- (void)refreshOverlay;
- (void)reversePath;
- (BOOL)editable;
- (void)resetPoints;
- (void)removePathsAndReset;
- (void)applyPropertiesToBezier:(id)arg1;
- (void)closeLastPath:(BOOL)arg1;
- (void)performInitEmptyObject;
- (id)usedStyle;
- (BOOL)canBeHidden;
- (BOOL)shouldDrawSelection;
- (BOOL)canSmartRotate;
- (id)embedInShapeGroup;
- (id)handlerName;
- (BOOL)handleDoubleClick;
- (void)toggleClosePath;
- (struct CGRect)boundsForCursorPreview;
- (id)bezierPathForCursorPreview;
- (id)insertionCursor;
- (id)bezierPathForHover;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (BOOL)isMasked;
- (void)copyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)isExportableViaDragAndDrop;
- (id)badgeMenu;
- (void)addMenuItemNamed:(id)arg1 to:(id)arg2 withImage:(id)arg3 tag:(long long)arg4;
- (void)onBooleanOperation:(id)arg1;
- (unsigned long long)selectedBadgeMenuItem;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)booleanOperationCanBeReset;
- (BOOL)supportsInnerOuterBorders;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) long long booleanOperation;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL edited;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) id <MSShapePath> pathGeneric; // @dynamic pathGeneric;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

