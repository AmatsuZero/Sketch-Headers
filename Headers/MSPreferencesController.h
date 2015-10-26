#import "NSWindowController.h"

#import "NSToolbarDelegate.h"

@class MSPluginManager, MSPreferencePane, NSArray, NSCache, NSDictionary, NSString, NSToolbar;

@interface MSPreferencesController : NSWindowController <NSToolbarDelegate>
{
    MSPluginManager *_pluginManager;
    NSArray *_toolbarItemIdentifiers;
    NSDictionary *_preferencePaneClasses;
    NSCache *_preferencePanes;
    MSPreferencePane *_currentPreferencePane;
    NSToolbar *_toolbar;
}

+ (id)sharedController;
@property(nonatomic) __weak NSToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) MSPreferencePane *currentPreferencePane; // @synthesize currentPreferencePane=_currentPreferencePane;
@property(retain, nonatomic) NSCache *preferencePanes; // @synthesize preferencePanes=_preferencePanes;
@property(copy, nonatomic) NSDictionary *preferencePaneClasses; // @synthesize preferencePaneClasses=_preferencePaneClasses;
@property(copy, nonatomic) NSArray *toolbarItemIdentifiers; // @synthesize toolbarItemIdentifiers=_toolbarItemIdentifiers;
@property(retain, nonatomic) MSPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
- (void).cxx_destruct;
- (BOOL)validateToolbarItem:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
@property(nonatomic) unsigned long long selectedTabIndex;
- (void)switchToPaneWithIdentifier:(id)arg1;
- (void)switchPanes:(id)arg1;
- (void)adjustColorsAction:(id)arg1;
- (void)scaleDownForRetinaAction:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

