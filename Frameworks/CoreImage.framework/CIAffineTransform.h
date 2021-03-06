/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSValue;

@interface CIAffineTransform : CIFilter <_CIFilterProperties> {
    CIImage *inputImage;
    NSValue *inputTransform;
}

@property(retain) CIImage * inputImage;
@property(retain) NSValue * inputTransform;

+ (id)customAttributes;

- (id)inputTransform;
- (void)setInputTransform:(id)arg1;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
