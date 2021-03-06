/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSDictionary, NSAttributedString;

@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry  {
    bool_hasValidSynthesizedAttributedString;
    NSAttributedString *_synthesizedAttributedString;
    NSAttributedString *_attributedString;
    NSDictionary *_defaultTextAttributes;
}

@property(copy,readonly) NSAttributedString * attributedString;
@property(copy) NSDictionary * defaultTextAttributes;


- (void)_invalidateSynthesizedAttributedString;
- (id)_synthesizedAttributedString;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_calculatedContentSize;
- (id)attributedString;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAttributedString:(id)arg1;
- (id)defaultTextAttributes;
- (void)setDefaultTextAttributes:(id)arg1;

@end
