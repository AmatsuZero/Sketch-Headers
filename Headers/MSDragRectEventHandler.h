#import "MSEventHandler.h"

@interface MSDragRectEventHandler : MSEventHandler
{
    BOOL _handToolActive;
    struct CGPoint _fromPoint;
    struct CGPoint _toPoint;
}

@property(nonatomic) BOOL handToolActive; // @synthesize handToolActive=_handToolActive;
@property(nonatomic) struct CGPoint toPoint; // @synthesize toPoint=_toPoint;
@property(nonatomic) struct CGPoint fromPoint; // @synthesize fromPoint=_fromPoint;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)shouldHideExportBar;
- (BOOL)shouldDrawLayerSelection;
- (void)flagsChanged:(id)arg1;
- (id)layerSnapper;
- (void)prepareGraphicsContext;
- (void)drawRectPreview;
- (void)absoluteDrawInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (id)currentGroup;
- (BOOL)handlesHandToolItself;
- (void)keyUp:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)refresh;
- (struct CGRect)rectForInserting;
- (id)performActionWithRect:(struct CGRect)arg1;
- (struct CGPoint)alignMouseToGrid:(struct CGPoint)arg1;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;

@end

