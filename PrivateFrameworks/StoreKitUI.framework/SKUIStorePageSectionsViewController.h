/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSValue, SKUIMetricsController, NSMapTable, SKUILayoutCache, SKUIResourceLoader, SKUIProductPageOverlayController, NSMutableIndexSet, UITapGestureRecognizer, NSMutableArray, SKUIStorePageSplitsDescription, SKUIStackedBar, UICollectionView, NSString, SKUICollectionView, NSArray, <SKUIStorePageSectionsDelegate>, SKUIColorScheme, SKUIIndexBarControl, NSIndexPath;

@interface SKUIStorePageSectionsViewController : SKUIViewController <SKUILayoutCacheDelegate, SKUIProductPageOverlayDelegate, SKUIResourceLoaderDelegate, SKUIStorePageCollectionViewDelegate, SKUIViewControllerTesting, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
    SKUIProductPageOverlayController *_activeOverlayController;
    SKUICollectionView *_collectionView;
    UITapGestureRecognizer *_collectionViewTapGestureRecognizer;
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsetAdjustments;
    id _deferredSplitsDescription;
    <SKUIStorePageSectionsDelegate> *_delegate;
    bool_delegateWantsDidScroll;
    bool_didInitialReload;
    NSMapTable *_expandSectionContexts;
    NSMutableIndexSet *_expandInsertSections;
    NSMutableIndexSet *_expandRemoveSections;
    long long _ignoreSectionsChangeCount;
    SKUIIndexBarControl *_indexBarControl;
    NSIndexPath *_indexPathOfEditedCell;
    NSArray *_initialOverlayURLs;
    NSValue *_lastKnownSize;
    long long _layoutStyle;
    NSMapTable *_menuSectionContexts;
    SKUIMetricsController *_metricsController;
    SKUIProductPageOverlayController *_overlayController;
    long long _pinningTransitionStyle;
    bool_rendersWithPerspective;
    SKUIResourceLoader *_resourceLoader;
    bool_scrollOffsetHasChanged;
    NSMutableArray *_sections;
    SKUIStorePageSplitsDescription *_splitsDescription;
    SKUIStackedBar *_stackedBar;
    SKUILayoutCache *_textLayoutCache;
}

@property(readonly) UICollectionView * collectionView;
@property(copy) SKUIColorScheme * colorScheme;
@property <SKUIStorePageSectionsDelegate> * delegate;
@property(retain) SKUIIndexBarControl * indexBarControl;
@property(retain) SKUIMetricsController * metricsController;
@property long long pinningTransitionStyle;
@property(readonly) NSArray * sections;
@property(getter=isDisplayingOverlays,readonly) bool displayingOverlays;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (long long)pinningTransitionStyle;
- (id)_newSectionsWithPageComponents:(id)arg1;
- (id)_expandContextForMenuComponent:(id)arg1;
- (id)_visibleMetricsImpressionsString;
- (void)_updateSectionsForIndex:(long long)arg1 menuSection:(id)arg2;
- (void)_setSelectedIndex:(long long)arg1 forMenuSection:(id)arg2;
- (void)_setRendersWithPerspective:(bool)arg1;
- (void)_pageSectionDidDismissOverlayController:(id)arg1;
- (void)_insertSectionsWithComponents:(id)arg1 afterSection:(id)arg2;
- (void)_endIgnoringSectionChanges;
- (void)_beginIgnoringSectionChanges;
- (void)skuiCollectionViewWillLayoutSubviews:(id)arg1;
- (void)itemCollectionView:(id)arg1 didTapVideoForCollectionViewCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)collectionView:(id)arg1 performDefaultActionForViewElement:(id)arg2 indexPath:(id)arg3;
- (void)artworkLoaderDidIdle:(id)arg1;
- (void)collectionView:(id)arg1 editorialView:(id)arg2 didSelectLink:(id)arg3;
- (id)SKUIStackedBar;
- (void)showOverlayWithProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (void)setSKUIStackedBar:(id)arg1;
- (void)setSectionsWithPageComponents:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setPinningTransitionStyle:(long long)arg1;
- (bool)isDisplayingOverlays;
- (id)initWithLayoutStyle:(long long)arg1;
- (bool)performTestWithName:(id)arg1 options:(id)arg2;
- (id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;
- (void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (id)_prepareLayoutForSections;
- (void)_enumerateVisibleSectionsUsingBlock:(id)arg1;
- (id)_sectionsForChartsComponent:(id)arg1;
- (id)indexBarControl;
- (id)_collectionViewSublayouts;
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(long long)arg2;
- (id)_menuContextForMenuComponent:(id)arg1;
- (void)_updateSectionsAfterMenuChange;
- (id)_textLayoutCache;
- (id)defaultSectionForComponent:(id)arg1;
- (id)_splitForSectionIndex:(long long)arg1;
- (void)_scrollFirstAppearanceSectionToView;
- (void)_reloadCollectionView;
- (void)_setPageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)metricsController;
- (void)_prefetchArtworkForVisibleSections;
- (void)_invalidateLayoutWithNewSize:(struct CGSize { double x1; double x2; })arg1 transitionCoordinator:(id)arg2;
- (id)_currentBackdropGroupName;
- (void)_invalidateIfLastKnownSizeChanged;
- (void)_setActiveProductPageOverlayController:(id)arg1;
- (void)dismissOverlays;
- (void)_updateCollectionViewWithUpdates:(id)arg1;
- (id)_newSectionsWithPageComponent:(id)arg1;
- (id)_createSectionsForExpandPageComponent:(id)arg1 context:(id)arg2 newSections:(id)arg3 sectionCount:(long long)arg4 sectionsByViewElement:(id)arg5 updateStyle:(long long)arg6;
- (id)_newSectionContext;
- (void)setSectionsWithSplitsDescription:(id)arg1;
- (id)_defaultSectionForSwooshComponent:(id)arg1;
- (id)_defaultSectionForGridComponent:(id)arg1;
- (void)_enumerateSectionContextsUsingBlock:(id)arg1;
- (void)tapCollectionViewDidRecognize:(id)arg1;
- (void)setIndexBarControl:(id)arg1;
- (id)_newStorePageCollectionViewLayout;
- (void)_initSKUIStorePageSectionsViewController;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)_resourceLoader;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reloadSections:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)scrollViewDidScroll:(id)arg1;

@end