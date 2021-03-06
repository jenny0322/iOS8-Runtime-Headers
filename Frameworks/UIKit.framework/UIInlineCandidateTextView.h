/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, _UIInlineCandidateCell;

@interface UIInlineCandidateTextView : UIView  {
    int m_type;
    int m_edgeType;
    boolm_animating;
    NSMutableArray *_candidateCellArray;
    NSArray *_candidates;
    id _target;
    SEL _action;
    unsigned long long _selectedItem;
    _UIInlineCandidateCell *_currentlyPushedItem;
    bool_showingArrow;
    bool_arrowHighlighted;
    bool_phraseEditable;
}


- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)showHighlightedArrow;
- (bool)_arrowHighlighted;
- (void)redrawArrow;
- (id)findCell:(struct CGPoint { double x1; double x2; })arg1;
- (void)_cellSelected:(id)arg1;
- (double)_layoutCandidates:(id)arg1 maxCount:(int)arg2 height:(double)arg3 maxScreenWidth:(double)arg4 hasExtensionCandidates:(bool)arg5;
- (unsigned long long)selectedItem;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (int)edgeType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 candidates:(id)arg2 type:(int)arg3 maxScreenWidth:(double)arg4 hasExtensionCandidates:(bool)arg5;
- (unsigned long long)numberOfShownItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateRectForExpandedHitRegion;
- (void)setEdgeType:(int)arg1;
- (int)textEffectsVisibilityLevel;
- (void)setAnimating:(bool)arg1;
- (void)setSelectedItem:(unsigned long long)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
