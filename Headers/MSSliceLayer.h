#import "_MSSliceLayer.h"

#import "MSLayerWithBackgroundColour.h"

@class NSString;

@interface MSSliceLayer : _MSSliceLayer <MSLayerWithBackgroundColour>
{
    id <MSSliceLayerWatcher> _sliceWatcher;
}

+ (unsigned long long)traits;
+ (id)sliceLayerFromLayer:(id)arg1;
@property(nonatomic) __weak id <MSSliceLayerWatcher> sliceWatcher; // @synthesize sliceWatcher=_sliceWatcher;
- (void).cxx_destruct;
- (id)rootForNameUniqueing;
- (BOOL)canRotate;
- (BOOL)isLayerExportable;
- (void)invalidateLightweightCopy:(id)arg1;
- (BOOL)canBeSelectedOnCanvas;
- (BOOL)canBeTransformed;
- (void)setName:(id)arg1;
- (id)defaultName;
- (void)prepareObjectCopy:(id)arg1;
- (void)initEmptyObject;
- (BOOL)canBeHidden;
- (id)inspectorViewControllerNames;
- (unsigned long long)filterType;
- (id)badgeNameLookup;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)drawPreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (BOOL)canBePartOfSymbol;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

