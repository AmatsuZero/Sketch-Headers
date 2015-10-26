#import "MSSidebarListController.h"

#import "BCOutlineViewDataSource.h"
#import "BCOutlineViewDelegate.h"

@class NSArray, NSString;

@interface MSPageListController : MSSidebarListController <BCOutlineViewDataSource, BCOutlineViewDelegate>
{
}

- (id)menuItemsForSelectedObjects:(id)arg1;
- (void)removePageWithValidation:(id)arg1;
- (void)handleBadgePressedOnNode:(id)arg1 withAltState:(BOOL)arg2;
- (BOOL)copyNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)moveNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (void)addPage:(id)arg1 after:(id)arg2 copying:(BOOL)arg3;
- (BOOL)canMoveNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)canCopyNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (void)removeNodes:(id)arg1;
- (void)updateNode:(id)arg1 expandedState:(unsigned long long)arg2;
- (BOOL)isNodeExpandable:(id)arg1;
- (BOOL)isNodeExpanded:(id)arg1;
- (void)changeSelectionTo:(id)arg1;
- (BOOL)isNodeSelected:(id)arg1;
- (id)pageForNode:(id)arg1;
- (id)childrenOfNode:(id)arg1;
- (id)rootObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *dragTypes;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

