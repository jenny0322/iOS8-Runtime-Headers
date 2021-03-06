/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {
    struct CGSize { 
        double width; 
        double height; 
    } ratio;
    int orientation;
    int camera;
    boolcameraSwitching;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } contentsRect;
}

@property struct CGSize { double x1; double x2; } ratio;
@property int orientation;
@property int camera;
@property bool cameraSwitching;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;

+ (id)videoAttributesWithVideoAttributes:(id)arg1;

- (bool)isEqualToVideoAttributes:(id)arg1;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize { double x1; double x2; })arg2 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setCameraSwitching:(bool)arg1;
- (bool)cameraSwitching;
- (void)setRatio:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })ratio;
- (id)encodeToNewNSDictionary;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (int)camera;
- (void)setCamera:(int)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)orientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (void)setOrientation:(int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
