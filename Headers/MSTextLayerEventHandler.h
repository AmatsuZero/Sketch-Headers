#import "MSEventHandler.h"

#import "MSFirstLineTypesetterDelegate.h"
#import "MSTextLayerEditingDelegate.h"
#import "NSTextStorageDelegate.h"
#import "NSTextViewDelegate.h"
#import "NSWindowDelegate.h"

@class MSTextLayer, MSTextLayerTextView, MSTextWindow, NSString;

@interface MSTextLayerEventHandler : MSEventHandler <NSTextViewDelegate, NSTextStorageDelegate, NSWindowDelegate, MSTextLayerEditingDelegate, MSFirstLineTypesetterDelegate>
{
    MSTextLayerTextView *_textView;
    MSTextWindow *_textViewWindow;
    MSTextLayer *_textLayer;
}

@property(retain, nonatomic) MSTextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) MSTextWindow *textViewWindow; // @synthesize textViewWindow=_textViewWindow;
@property(retain, nonatomic) MSTextLayerTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (BOOL)scrollEventShouldExitHandler:(id)arg1;
- (BOOL)canDuplicate;
- (void)dealloc;
- (id)undoManager;
- (BOOL)shouldDrawLayerSelection;
- (id)toolbarIdentifier;
- (void)doTextModification:(CDUnknownBlockType)arg1;
- (void)makeLowercase:(id)arg1;
- (void)makeUppercase:(id)arg1;
- (void)removeTextView;
- (void)handlerWillLoseFocus;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)selectAll:(id)arg1;
- (struct CGRect)windowFrameForDrawView;
- (struct CGRect)windowFrameForTextView;
- (void)zoomValueWillChangeTo:(double)arg1;
- (void)viewDidScroll:(id)arg1;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)adjustTextViewFrame;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)dispatchTryPutFirstFocusBack;
- (void)tryPutFirstFocusBack;
- (void)windowDidResignKey:(id)arg1;
- (void)adjustForegroundColor;
- (id)insertionPointColor;
- (double)averageLuminanceOfImage:(struct CGImage *)arg1;
- (struct CGImage *)newTextLayerImageFromWindowBackingStore;
- (void)beginEditing;
- (double)baselineAdjustmentForTypesetter:(id)arg1;
- (struct CGRect)frameForTextViewOnCanvasBasedOnBaseFrame:(struct CGRect)arg1;
- (struct CGRect)frameForTextView;
- (void)makeTextWindow;
- (void)makeTextView;
- (void)addTextView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handlerGotFocus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

