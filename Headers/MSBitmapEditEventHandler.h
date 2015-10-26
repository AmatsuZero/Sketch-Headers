#import "MSEventHandler.h"

#import "BCPopoverDelegate.h"
#import "MSColorInspectorDelegate.h"
#import "MSModeModePickerDelegate.h"

@class BCPopover, MSBitmapMagicWandEditor, MSBitmapRectangleEditor, MSModePickerView, NSBezierPath, NSBitmapImageRep, NSButton, NSColorSpace, NSCursor, NSString;

@interface MSBitmapEditEventHandler : MSEventHandler <MSModeModePickerDelegate, BCPopoverDelegate, MSColorInspectorDelegate>
{
    long long _currentMode;
    NSBezierPath *_accumulatedSelection;
    MSModePickerView *_pickerView;
    NSButton *_rectSelectionButton;
    NSButton *_magicWandButton;
    NSColorSpace *_colorSpace;
    MSBitmapRectangleEditor *_rectangleEditor;
    MSBitmapMagicWandEditor *_magicWandEditor;
    BCPopover *_popover;
    NSBitmapImageRep *_backupImageRep;
    NSBitmapImageRep *_cachedFirstBitmapImageRep;
    NSCursor *_currentCursor;
}

@property(retain, nonatomic) NSCursor *currentCursor; // @synthesize currentCursor=_currentCursor;
@property(retain, nonatomic) NSBitmapImageRep *cachedFirstBitmapImageRep; // @synthesize cachedFirstBitmapImageRep=_cachedFirstBitmapImageRep;
@property(retain, nonatomic) NSBitmapImageRep *backupImageRep; // @synthesize backupImageRep=_backupImageRep;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSBitmapMagicWandEditor *magicWandEditor; // @synthesize magicWandEditor=_magicWandEditor;
@property(retain, nonatomic) MSBitmapRectangleEditor *rectangleEditor; // @synthesize rectangleEditor=_rectangleEditor;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) NSButton *magicWandButton; // @synthesize magicWandButton=_magicWandButton;
@property(retain, nonatomic) NSButton *rectSelectionButton; // @synthesize rectSelectionButton=_rectSelectionButton;
@property(retain, nonatomic) MSModePickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) NSBezierPath *accumulatedSelection; // @synthesize accumulatedSelection=_accumulatedSelection;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (id)crossHairCursorRemove;
- (id)crossHairCursorAdd;
- (id)crossHairCursor;
- (id)magicWandCursorRemove;
- (id)magicWandCursorAdd;
- (id)magicWandCursor;
- (BOOL)inspectorShouldShowLayerSpecificProperties;
- (unsigned long long)inspectorLocation;
- (id)nibName;
- (struct CGPoint)centerPointForZooming;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (void)markImageAsEdited;
- (id)bitmapLayer;
- (id)coordinateTransformMatrix;
- (void)drawSizeLabel;
- (void)drawBorderAroundBounds;
- (void)drawInRect:(struct CGRect)arg1;
- (BOOL)shouldDrawLayerSelection;
- (id)selectionBezierForFlippingCoordinates;
- (struct CGRect)imageBounds;
- (struct CGSize)imageSize;
- (void)fillSelectionWithColor:(id)arg1 blending:(unsigned long long)arg2;
- (void)fillSelectionWithColor:(id)arg1;
- (id)imageFromSelectedArea;
- (void)duplicate:(id)arg1;
- (BOOL)canDuplicate;
- (void)paste:(id)arg1;
- (void)refreshOverlayRect:(struct CGRect)arg1;
- (struct CGRect)rectFromBitmapToBoundsCoordinates:(struct CGRect)arg1;
- (id)bitmapLayerFromSelectedArea;
- (void)copy:(id)arg1;
- (BOOL)rectHasBeenCropped:(struct CGRect)arg1 fromImage:(id)arg2;
- (void)cropLayerFrame;
- (void)clearAreaUnderSelection;
- (void)cut:(id)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)selectLayerBelowPoint:(struct CGPoint)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)flagsChanged:(id)arg1;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)finishEditing:(id)arg1;
- (void)vectorizeAction:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)popoverWillClose:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (void)colorizeAction:(id)arg1;
- (void)makeNewBackupImage;
- (struct CGRect)selectedRect;
- (struct CGRect)selectionRectInLayerCoordinates;
- (void)cropAction:(id)arg1;
- (void)setImage:(id)arg1 forBitmapLayer:(id)arg2;
- (void)invertAction:(id)arg1;
- (void)magicWandAction:(id)arg1;
- (void)rectSelectionAction:(id)arg1;
- (void)pickerViewChanged:(id)arg1;
- (id)pickerView:(id)arg1 labelForMode:(long long)arg2;
- (void)selectionDidChangeTo:(id)arg1;
- (void)handlerWillLoseFocus;
- (id)toolbarIdentifier;
- (void)validateButtons;
- (void)awakeFromNib;
- (void)handlerGotFocus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

