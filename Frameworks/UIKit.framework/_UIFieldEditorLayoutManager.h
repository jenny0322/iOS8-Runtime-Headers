/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFieldEditorLayoutManager : NSLayoutManager  {
    bool_needsExtraBulletRendering;
}

@property bool needsExtraBulletRendering;


- (void)showCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { double x1; double x2; }*)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7;
- (void)setNeedsExtraBulletRendering:(bool)arg1;
- (bool)needsExtraBulletRendering;

@end
