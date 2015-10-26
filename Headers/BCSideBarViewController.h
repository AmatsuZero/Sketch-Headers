#import "NSViewController.h"

#import "NSSplitViewDelegate.h"

@class BCFilterInfo, BCOutlineViewController, BCPageListViewController, NSButton, NSPopUpButton, NSSearchField, NSSplitView, NSString, NSTextField, NSView;

@interface BCSideBarViewController : NSViewController <NSSplitViewDelegate>
{
    BOOL _userUpdatedPageHeight;
    unsigned long long _sliceCount;
    BCFilterInfo *_filter;
    id <BCOutlineViewDataSource> _pageListDataSource;
    id <BCOutlineViewDelegate> _pageListDelegate;
    NSView *_pageCreationView;
    BCPageListViewController *_pageListViewController;
    NSView *_pageListContainer;
    long long _pageCount;
    NSTextField *_currentPageLabel;
    NSPopUpButton *_pagePopup;
    id <BCOutlineViewDataSource> _layerListDataSource;
    id <BCOutlineViewDelegate> _layerListDelegate;
    NSView *_layerListContainer;
    BCOutlineViewController *_layerListViewController;
    NSSearchField *_filterStringTextField;
    NSButton *_togglePageListButton;
    NSButton *_filterSlicesButton;
    NSSplitView *_splitView;
}

@property(nonatomic) BOOL userUpdatedPageHeight; // @synthesize userUpdatedPageHeight=_userUpdatedPageHeight;
@property(nonatomic) __weak NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) __weak NSButton *filterSlicesButton; // @synthesize filterSlicesButton=_filterSlicesButton;
@property(nonatomic) __weak NSButton *togglePageListButton; // @synthesize togglePageListButton=_togglePageListButton;
@property(nonatomic) __weak NSSearchField *filterStringTextField; // @synthesize filterStringTextField=_filterStringTextField;
@property(retain, nonatomic) BCOutlineViewController *layerListViewController; // @synthesize layerListViewController=_layerListViewController;
@property(retain, nonatomic) NSView *layerListContainer; // @synthesize layerListContainer=_layerListContainer;
@property(retain, nonatomic) id <BCOutlineViewDelegate> layerListDelegate; // @synthesize layerListDelegate=_layerListDelegate;
@property(retain, nonatomic) id <BCOutlineViewDataSource> layerListDataSource; // @synthesize layerListDataSource=_layerListDataSource;
@property(nonatomic) __weak NSPopUpButton *pagePopup; // @synthesize pagePopup=_pagePopup;
@property(nonatomic) __weak NSTextField *currentPageLabel; // @synthesize currentPageLabel=_currentPageLabel;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) NSView *pageListContainer; // @synthesize pageListContainer=_pageListContainer;
@property(retain, nonatomic) BCPageListViewController *pageListViewController; // @synthesize pageListViewController=_pageListViewController;
@property(retain, nonatomic) NSView *pageCreationView; // @synthesize pageCreationView=_pageCreationView;
@property(retain, nonatomic) id <BCOutlineViewDelegate> pageListDelegate; // @synthesize pageListDelegate=_pageListDelegate;
@property(retain, nonatomic) id <BCOutlineViewDataSource> pageListDataSource; // @synthesize pageListDataSource=_pageListDataSource;
@property(retain, nonatomic) BCFilterInfo *filter; // @synthesize filter=_filter;
@property(nonatomic) unsigned long long sliceCount; // @synthesize sliceCount=_sliceCount;
- (void).cxx_destruct;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)onTogglePageList:(id)arg1;
@property(readonly, nonatomic) BOOL isPageListCollapsed;
- (void)showPageView;
- (void)hidePageView;
- (void)flagsChangedNotification;
- (void)findLayer:(id)arg1;
- (void)renamePage;
- (void)renameLayer;
- (void)controlTextDidChange:(id)arg1;
- (void)checkPageListHeight;
- (void)refreshWithMask:(unsigned long long)arg1;
- (void)refreshPagePopup;
- (void)pagePopupChanged:(id)arg1;
- (void)updatePopupWithBlock:(CDUnknownBlockType)arg1;
- (void)refreshPageLabel;
@property(readonly, nonatomic) id <BCOutlineViewNode> currentPage;
- (void)awakeFromNib;
- (void)embedView:(id)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)initWithPageListDataSource:(id)arg1 delegate:(id)arg2 layerListDataSource:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

