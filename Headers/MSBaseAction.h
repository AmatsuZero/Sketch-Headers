#import "NSResponder.h"

#import "MSPopToolbarItemActionObject.h"
#import "NSMenuDelegate.h"

@class MSActionsController, MSDocument, NSString, NSToolbarItem;

@interface MSBaseAction : NSResponder <NSMenuDelegate, MSPopToolbarItemActionObject>
{
    MSDocument *_document;
    MSActionsController *_controller;
    id <MSBasicDelegate> _delegate;
    NSToolbarItem *_toolbarItem;
}

@property(retain, nonatomic) NSToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MSActionsController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (BOOL)isInNormalHandler;
- (BOOL)isActive;
- (BOOL)showInToolbar;
- (id)image;
- (id)smallImage;
- (BOOL)toolbarItemShouldDrawWithArrow:(id)arg1;
- (BOOL)hasSubMenu;
- (id)children;
- (BOOL)containsActionWithName:(id)arg1;
- (BOOL)validate;
- (BOOL)validateItem:(id)arg1;
- (id)tooltip;
- (unsigned short)shortcutCharacter;
- (id)label;
- (id)imageName;
- (id)identifier;
- (void)doPerformAction:(id)arg1;
- (void)performAction:(id)arg1;
- (SEL)selector;
- (BOOL)dynamicTitle;
- (BOOL)isSelectable;
- (id)undoManager;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (id)contentDrawView;
- (id)currentPage;
- (id)setCurrentHandlerKey:(id)arg1;
- (id)toggleHandlerKey:(id)arg1;
- (id)currentHandler;
- (id)currentHandlerKey;
- (id)selectedLayers;
- (id)initWithDocument:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)dynamicallyChangeTitleForItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menu;
- (id)menuItem;
- (id)menuItemForMenu:(id)arg1;
- (id)toolbarLabel;
- (id)toolbarItemWithSize:(unsigned long long)arg1;
- (id)imageForToolbarSize:(unsigned long long)arg1;
- (BOOL)validateToolbarItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

