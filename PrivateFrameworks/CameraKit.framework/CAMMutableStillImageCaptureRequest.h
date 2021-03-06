/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <CAMStillImageCaptureRequestDelegate>;

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest  {
}

@property(getter=isTransient) bool transient;
@property long long deviceOrientation;
@property long long captureDevice;
@property long long flashMode;
@property int hdrMode;
@property bool usesStillImageStabilization;
@property bool wantsAudioForCapture;
@property <CAMStillImageCaptureRequestDelegate> * delegate;


- (void)setWantsAudioForCapture:(bool)arg1;
- (void)setUsesStillImageStabilization:(bool)arg1;
- (void)setHdrMode:(int)arg1;
- (void)setCaptureDevice:(long long)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (void)setFlashMode:(long long)arg1;
- (void)setTransient:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
