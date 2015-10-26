#import "NSObject.h"

@class NSArray, NSPasteboard;

@protocol BCOutlineViewDelegate <NSObject>
@property(readonly, nonatomic) NSArray *dragTypes;
- (void)handleBadgePressedOnNode:(id)arg1 withAltState:(BOOL)arg2;
- (BOOL)copyNodes:(NSArray *)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)moveNodes:(NSArray *)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)canCopyNodes:(NSArray *)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)canMoveNodes:(NSArray *)arg1 toParent:(id)arg2 after:(id)arg3;
- (NSArray *)readNodesFromPasteboard:(NSPasteboard *)arg1;
- (BOOL)writeNodes:(NSArray *)arg1 toPasteboard:(NSPasteboard *)arg2;
- (NSArray *)exportNodes:(NSArray *)arg1;
- (void)removeNodes:(NSArray *)arg1;
- (void)updateNode:(id)arg1 expandedState:(unsigned long long)arg2;
- (BOOL)isNodeExpandable:(id)arg1;
- (BOOL)isNodeExpanded:(id)arg1;
- (void)changeSelectionTo:(NSArray *)arg1;
- (BOOL)isNodeSelected:(id)arg1;

@optional
- (void)hoverNodeDidChangeTo:(id)arg1;
- (NSArray *)menuItemsForSelectedObjects:(NSArray *)arg1;
@end

