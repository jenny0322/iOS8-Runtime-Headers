/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIKeyboardCandidateGridCollectionViewControllerDelegate>, UIView, NSArray, UIKBCandidateCollectionView, TIKeyboardCandidateResultSet, UIKeyboardCandidateGridLayout, UIButton, <UIKeyboardCandidateListDelegate>, NSString, UIKeyboardCandidateGridCollectionView;

@interface UIKeyboardCandidateGridCollectionViewController : UIViewController <UICollectionViewDataSource, UIKeyboardCandidateList, UIKeyboardCandidateGridLayoutDelegate> {
    bool_alwaysShowExtensionCandidates;
    bool_hasSecondaryCandidates;
    bool_showHiddenCandidatesOnly;
    bool_singleLineMode;
    bool_showsExtensionCandidates;
    bool_supportsNumberKeySelection;
    bool_secondaryCandidatesViewIsCurrent;
    bool__usesDeemphasizedTextAppearance;
    int _candidatesVisualStyle;
    <UIKeyboardCandidateGridCollectionViewControllerDelegate> *_delegate;
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    TIKeyboardCandidateResultSet *_candidateSet;
    NSArray *_candidateGroups;
    double _rowHeight;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    } _visualStyling;
    UIButton *_padInlineFloatingArrowButton;
    UIView *_headerView;
    UIKBCandidateCollectionView *_secondaryCandidatesView;
    double _groupBarWidth;
}

@property(readonly) UIKeyboardCandidateGridCollectionView * collectionView;
@property <UIKeyboardCandidateGridCollectionViewControllerDelegate> * delegate;
@property <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property(retain) TIKeyboardCandidateResultSet * candidateSet;
@property(retain) NSArray * candidateGroups;
@property double rowHeight;
@property struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;
@property int candidatesVisualStyle;
@property bool alwaysShowExtensionCandidates;
@property(readonly) UIButton * padInlineFloatingArrowButton;
@property(retain) UIView * headerView;
@property bool hasSecondaryCandidates;
@property(retain) UIKBCandidateCollectionView * secondaryCandidatesView;
@property bool showHiddenCandidatesOnly;
@property bool singleLineMode;
@property(readonly) UIKeyboardCandidateGridLayout * collectionViewGridLayout;
@property double groupBarWidth;
@property(readonly) bool hasGroupBar;
@property bool showsExtensionCandidates;
@property bool supportsNumberKeySelection;
@property bool secondaryCandidatesViewIsCurrent;
@property bool _usesDeemphasizedTextAppearance;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (unsigned long long)currentIndex;
- (bool)hasCandidates;
- (id)currentCandidate;
- (void)layout;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (bool)showsExtensionCandidates;
- (void)setSingleLineMode:(bool)arg1;
- (bool)singleLineMode;
- (void)setShowHiddenCandidatesOnly:(bool)arg1;
- (id)padInlineFloatingArrowButton;
- (void)setAlwaysShowExtensionCandidates:(bool)arg1;
- (bool)hasGroupBar;
- (id)lastCandidateIndexPath;
- (void)candidateViewDidFinishExtending;
- (void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1;
- (struct CGSize { double x1; double x2; })rowSizeForGridLayout;
- (void)setShowsExtensionCandidates:(bool)arg1;
- (bool)alwaysShowExtensionCandidates;
- (unsigned long long)rowIndexForCellAtIndexPath:(id)arg1;
- (bool)showHiddenCandidatesOnly;
- (id)candidateAtIndexPath:(id)arg1;
- (void)stepOneLine:(bool)arg1;
- (id)firstCandidateIndexPath;
- (id)indexPathForCandidate:(id)arg1;
- (void)scrollViewIndexChanged:(id)arg1;
- (void)setGroupBarWidth:(double)arg1;
- (double)groupBarWidth;
- (void)setHasSecondaryCandidates:(bool)arg1;
- (void)setCandidateGroups:(id)arg1;
- (bool)padInlineFloatingIsExpanded;
- (void)setSupportsNumberKeySelection:(bool)arg1;
- (bool)supportsNumberKeySelection;
- (void)updateIndexTitles;
- (void)updateHeaderView;
- (id)lastCandidateIndexPathInGroupAtIndex:(unsigned long long)arg1;
- (id)firstCandidateIndexPathInGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)candidateIndexOffset;
- (id)groupAtIndex:(unsigned long long)arg1;
- (bool)secondaryCandidatesViewIsCurrent;
- (unsigned long long)groupsCount;
- (void)setSecondaryCandidatesViewIsCurrent:(bool)arg1;
- (void)setHeaderView:(id)arg1;
- (void)padInlineFloatingExpand;
- (unsigned long long)padInlineHighlightedRowIndex;
- (id)candidateGroups;
- (bool)_usesDeemphasizedTextAppearance;
- (id)collectionViewGridLayout;
- (void)set_usesDeemphasizedTextAppearance:(bool)arg1;
- (void)scrollToBottomWithAnimation:(bool)arg1;
- (void)scrollToTopWithAnimation:(bool)arg1 revealHeaderView:(bool)arg2;
- (void)scrollToTopWithAnimation:(bool)arg1;
- (id)headerView;
- (void)setSecondaryCandidatesView:(id)arg1;
- (int)candidatesVisualStyle;
- (id)secondaryCandidatesView;
- (bool)hasSecondaryCandidates;
- (void)loadSecondaryCandidatesView;
- (void)setCandidatesVisualStyle:(int)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (void)viewDidLoad;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)revealHiddenCandidates;
- (void)candidatesDidChange;
- (bool)hasPreviousPage;
- (bool)hasNextPage;
- (bool)handleNumberKey:(unsigned long long)arg1;
- (unsigned long long)selectedSortIndex;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (bool)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (bool)isHiddenCandidatesList;
- (bool)isExtendedList;
- (id)statisticsIdentifier;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidateSet:(id)arg1;
- (id)candidateSet;
- (id)selectedItemIndexPath;
- (id)collectionView;
- (id)candidateListDelegate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1;
- (void)reloadData;

@end
