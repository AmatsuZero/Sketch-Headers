#import "MSNormalBaseEventHandler.h"

@interface MSRotateEventHandler : MSNormalBaseEventHandler
{
    long long startingDegrees;
    double startingRotation;
    BOOL isDraggingCenterPoint;
    BOOL isDraggingInsideLayer;
    struct CGPoint previousMouseLocation;
    BOOL _exitOnMouseUp;
    BOOL _disableMoving;
    struct CGPoint _rotationCenter;
}

+ (id)cursorForDegrees:(long long)arg1;
+ (long long)degreesForPoint:(struct CGPoint)arg1 inLayer:(id)arg2 rotationCenter:(struct CGPoint)arg3;
@property(nonatomic) struct CGPoint rotationCenter; // @synthesize rotationCenter=_rotationCenter;
@property(nonatomic) BOOL disableMoving; // @synthesize disableMoving=_disableMoving;
@property(nonatomic) BOOL exitOnMouseUp; // @synthesize exitOnMouseUp=_exitOnMouseUp;
- (void)willPerformUndo;
- (id)firstLayer;
- (id)layers;
- (struct CGPoint)rotationCenterInAbsoluteCoordinates;
- (double)alignDegreesTo45Angles:(double)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (long long)degreesForPoint:(struct CGPoint)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseDraggedRotateLayer:(id)arg1 mouse:(struct CGPoint)arg2 flags:(unsigned long long)arg3;
- (void)mouseDraggedMoveLayer:(id)arg1 mouse:(struct CGPoint)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)calculateIsDraggingInsideLayer:(struct CGPoint)arg1;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)isDraggingCenterPoint:(struct CGPoint)arg1;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;

@end

