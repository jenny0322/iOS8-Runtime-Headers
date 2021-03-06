/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRectangleFeature : CIFeature  {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } bounds;
    struct CGPoint { 
        double x; 
        double y; 
    } topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    } topRight;
    struct CGPoint { 
        double x; 
        double y; 
    } bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    } bottomRight;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property struct CGPoint { double x1; double x2; } topLeft;
@property struct CGPoint { double x1; double x2; } topRight;
@property struct CGPoint { double x1; double x2; } bottomLeft;
@property struct CGPoint { double x1; double x2; } bottomRight;

+ (id)rectangleFeaturesWithBoundsArray:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)rectangleFeatureWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)setBottomRight:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBottomLeft:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopRight:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopLeft:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 topLeft:(struct CGPoint { double x1; double x2; })arg2 topRight:(struct CGPoint { double x1; double x2; })arg3 bottomLeft:(struct CGPoint { double x1; double x2; })arg4 bottomRight:(struct CGPoint { double x1; double x2; })arg5;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGPoint { double x1; double x2; })topRight;
- (struct CGPoint { double x1; double x2; })topLeft;
- (id)type;
- (id).cxx_construct;

@end
