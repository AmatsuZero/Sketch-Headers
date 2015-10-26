#import "MSEventHandler.h"

@class MSShapeGroup;

@interface MSScissorsEventHandler : MSEventHandler
{
    BOOL _didCutOnMouseDown;
    MSShapeGroup *_shape;
    unsigned long long _hoverIndex;
}

@property(nonatomic) BOOL didCutOnMouseDown; // @synthesize didCutOnMouseDown=_didCutOnMouseDown;
@property(nonatomic) unsigned long long hoverIndex; // @synthesize hoverIndex=_hoverIndex;
@property(retain, nonatomic) MSShapeGroup *shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
- (id)toolbarIdentifier;
- (BOOL)shouldDrawLayerSelection;
- (id)imageName;
- (id)defaultCursor;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1;
- (void)strokePath:(id)arg1 isHovering:(BOOL)arg2;
- (id)trimPathOnBothSides:(id)arg1;
- (void)drawThinStrokeBezierSegments:(id)arg1;
- (void)drawThickStrokeBezierPath:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (unsigned long long)hoverIndexForMouse:(struct CGPoint)arg1;
- (void)cut;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end

