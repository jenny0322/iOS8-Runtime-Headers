/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelMarkerFeatureHandle : NSObject  {
    int _featureType;
    long long _featureIndex;
    int _tileX;
    int _tileY;
    int _tileZ;
}


- (id)initWithFeature:(struct { id x1; char *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned long long x8; boolx9; unsigned long long x10; float x11; unsigned long long x12; id x13; int x14; }*)arg1 featureType:(int)arg2;
- (int)tileZ;
- (int)tileY;
- (int)tileX;
- (int)featureType;
- (long long)featureIndex;

@end
