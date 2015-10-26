#import "MSPreferencePane.h"

#import "NSTableViewDelegate.h"

@class BCKeyEventActionTableView, MSPluginManager, NSArray, NSArrayController, NSButton, NSCache, NSControl, NSFont, NSImage, NSLayoutConstraint, NSMenu, NSPredicate, NSString, NSTableCellView, NSTextField;

@interface MSPluginsPreferencePane : MSPreferencePane <NSTableViewDelegate>
{
    BOOL _observingPlugins;
    NSArrayController *_pluginsArrayController;
    NSArray *_filteredPlugins;
    NSPredicate *_pluginFilterPredicate;
    NSImage *_zeroPluginsImage;
    NSString *_zeroPluginsTitle;
    NSString *_zeroPluginsText;
    NSTextField *_filterTextField;
    BCKeyEventActionTableView *_tableView;
    NSButton *_getPluginsButton;
    NSControl *_contextMenuControl;
    NSMenu *_contextMenu;
    MSPluginManager *_pluginManager;
    NSTableCellView *_pluginCellView;
    NSLayoutConstraint *_pluginCellViewWidthConstraint;
    NSCache *_rowHeightCache;
}

+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
@property(nonatomic) BOOL observingPlugins; // @synthesize observingPlugins=_observingPlugins;
@property(retain, nonatomic) NSCache *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
@property(retain, nonatomic) NSLayoutConstraint *pluginCellViewWidthConstraint; // @synthesize pluginCellViewWidthConstraint=_pluginCellViewWidthConstraint;
@property(retain, nonatomic) NSTableCellView *pluginCellView; // @synthesize pluginCellView=_pluginCellView;
@property(nonatomic) __weak MSPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(nonatomic) __weak NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic) __weak NSControl *contextMenuControl; // @synthesize contextMenuControl=_contextMenuControl;
@property(nonatomic) __weak NSButton *getPluginsButton; // @synthesize getPluginsButton=_getPluginsButton;
@property(nonatomic) __weak BCKeyEventActionTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSTextField *filterTextField; // @synthesize filterTextField=_filterTextField;
@property(copy, nonatomic) NSString *zeroPluginsText; // @synthesize zeroPluginsText=_zeroPluginsText;
@property(copy, nonatomic) NSString *zeroPluginsTitle; // @synthesize zeroPluginsTitle=_zeroPluginsTitle;
@property(retain, nonatomic) NSImage *zeroPluginsImage; // @synthesize zeroPluginsImage=_zeroPluginsImage;
@property(copy, nonatomic) NSPredicate *pluginFilterPredicate; // @synthesize pluginFilterPredicate=_pluginFilterPredicate;
@property(copy, nonatomic) NSArray *filteredPlugins; // @synthesize filteredPlugins=_filteredPlugins;
@property(retain, nonatomic) NSArrayController *pluginsArrayController; // @synthesize pluginsArrayController=_pluginsArrayController;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)controlTextDidChange:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *pluginSortDescriptors;
- (void)menuNeedsUpdate:(id)arg1;
- (void)viewDocumentation:(id)arg1;
- (void)revealInFinder:(id)arg1;
- (void)toggleItemsEnabled:(id)arg1;
- (void)toggleSelectedItemsEnabled;
- (void)toggleSelectedItemsEnabled:(id)arg1;
- (void)tableContextMenu:(id)arg1;
- (void)getPlugins:(id)arg1;
- (void)disablePluginInfo:(id)arg1;
- (void)enablePluginInfo:(id)arg1;
- (void)togglePluginEnabled:(id)arg1;
- (void)uninstallSelectedPlugins:(id)arg1;
- (void)uninstallPlugins:(id)arg1;
- (void)uninstallSelectedPlugins;
- (id)pluginsAtRowIndexes:(id)arg1;
- (void)openPluginsFolder:(id)arg1;
@property(readonly, copy, nonatomic) NSFont *zeroPluginsTitleFont;
- (id)searchString;
- (void)updateUIForPluginsChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithPreferencesController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

