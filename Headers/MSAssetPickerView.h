#import "NSView.h"

@class MSAssetCollection, NSIndexSet;

@interface MSAssetPickerView : NSView
{
    long long sourceDragIndex;
    id <MSPresetPickerViewDelegate> _delegate;
    double _tileMargin;
    double _edgeMargin;
    unsigned long long _hoveringIndex;
    NSIndexSet *_currentIndexes;
    MSAssetCollection *_assetCollection;
    unsigned long long _assetType;
    struct CGSize _tileSize;
}

@property(nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) MSAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(copy, nonatomic) NSIndexSet *currentIndexes; // @synthesize currentIndexes=_currentIndexes;
@property(nonatomic) unsigned long long hoveringIndex; // @synthesize hoveringIndex=_hoveringIndex;
@property(nonatomic) double edgeMargin; // @synthesize edgeMargin=_edgeMargin;
@property(nonatomic) double tileMargin; // @synthesize tileMargin=_tileMargin;
@property(nonatomic) struct CGSize tileSize; // @synthesize tileSize=_tileSize;
@property(nonatomic) __weak id <MSPresetPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)delegateInsertPresetFromPasteboardData:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)delegateDidDragPresetToIndex:(unsigned long long)arg1;
- (BOOL)delegateSupportsDrop;
- (BOOL)delegateDrawFullContentInRect:(struct CGRect)arg1 index:(unsigned long long)arg2;
- (BOOL)delegateShowMenuForIndex:(unsigned long long)arg1;
- (void)delegateDrawContentInRect:(struct CGRect)arg1 tag:(unsigned long long)arg2;
- (id)delegateTooltipForIndex:(unsigned long long)arg1;
- (BOOL)delegateShouldShowAddButton;
- (void)delegateRemovePresetAtIndex:(unsigned long long)arg1;
- (void)delegatePickPresetAtIndex:(unsigned long long)arg1;
- (void)addPreset;
- (unsigned long long)delegateNumberOfPresets;
- (struct MSPresetIteratorStruct)incrementIterator:(struct MSPresetIteratorStruct)arg1;
- (long long)columnCount;
- (struct MSPresetIteratorStruct)newIterator;
- (void)moveDraggedViewToRowAtIndex:(long long)arg1;
- (long long)hoverIndexForDraggingInfo:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)canDragFromIndex:(unsigned long long)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)removePresetForButton:(id)arg1;
- (void)removePresetWithTag:(long long)arg1;
- (void)pickPresetForButton:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)shouldShowMenuForButton:(id)arg1;
- (BOOL)drawFullContentForButton:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawContentForButton:(id)arg1 inRect:(struct CGRect)arg2;
- (BOOL)isInStackView;
- (void)stackIfPossible;
- (void)addPreset:(id)arg1;
- (id)addPresetButtonWithOffset:(struct CGPoint)arg1;
- (id)presetButtonForIndex:(unsigned long long)arg1 withOffset:(struct CGPoint)arg2;
- (void)reloadData;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

