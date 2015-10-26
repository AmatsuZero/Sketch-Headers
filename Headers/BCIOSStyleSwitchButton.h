#import "NSButton.h"

@class CALayer;

@interface BCIOSStyleSwitchButton : NSButton
{
    CALayer *_backgroundOn;
    CALayer *_backgroundOff;
    CALayer *_knob;
    CALayer *_knobPressed;
}

@property(retain, nonatomic) CALayer *knobPressed; // @synthesize knobPressed=_knobPressed;
@property(retain, nonatomic) CALayer *knob; // @synthesize knob=_knob;
@property(retain, nonatomic) CALayer *backgroundOff; // @synthesize backgroundOff=_backgroundOff;
@property(retain, nonatomic) CALayer *backgroundOn; // @synthesize backgroundOn=_backgroundOn;
- (void).cxx_destruct;
- (void)moveLayer:(id)arg1 toX:(double)arg2;
- (void)performAnimated:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (id)layerWithImageNamed:(id)arg1;
- (void)setState:(long long)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)reflectStateAnimated:(BOOL)arg1;
- (void)awakeFromNib;

@end

