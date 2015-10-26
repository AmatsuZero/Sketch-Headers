#import "MSStylePartInspectorViewController.h"

#import "NSMenuDelegate.h"

@class NSButton, NSMenuItem, NSSlider, NSString, NSTextField, NSView;

@interface MSBlurInspectorViewController : MSStylePartInspectorViewController <NSMenuDelegate>
{
    NSView *gaussianBlurView;
    NSView *motionBlurView;
    NSView *zoomBlurView;
    NSButton *editButton;
    NSMenuItem *backgroundBlurMenuItem;
    NSTextField *_zoomBlurTextField;
    NSTextField *_motionBlurTextField;
    NSTextField *_normalBlurTextField;
    NSSlider *_zoomBlurSlider;
    NSSlider *_motionBlurSlider;
    NSSlider *_normalBlurSlider;
}

@property(retain, nonatomic) NSSlider *normalBlurSlider; // @synthesize normalBlurSlider=_normalBlurSlider;
@property(retain, nonatomic) NSSlider *motionBlurSlider; // @synthesize motionBlurSlider=_motionBlurSlider;
@property(retain, nonatomic) NSSlider *zoomBlurSlider; // @synthesize zoomBlurSlider=_zoomBlurSlider;
@property(retain, nonatomic) NSTextField *normalBlurTextField; // @synthesize normalBlurTextField=_normalBlurTextField;
@property(retain, nonatomic) NSTextField *motionBlurTextField; // @synthesize motionBlurTextField=_motionBlurTextField;
@property(retain, nonatomic) NSTextField *zoomBlurTextField; // @synthesize zoomBlurTextField=_zoomBlurTextField;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handlerFocusDidChange:(id)arg1;
- (void)blurPopUpAction:(id)arg1;
- (void)editZoomCenter:(id)arg1;
- (id)layers;
- (void)menuNeedsUpdate:(id)arg1;
- (id)views;
- (void)prepareLayersForBackgroundBlur:(id)arg1;
- (void)reloadInspectorStack:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

