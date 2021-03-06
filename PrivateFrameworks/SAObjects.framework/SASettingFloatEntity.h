/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber;

@interface SASettingFloatEntity : SASettingNumericEntity  {
}

@property(copy) NSNumber * previousValue;
@property float value;

+ (id)floatEntityWithValue:(float)arg1;
+ (id)floatEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)floatEntity;

- (void)setPreviousValue:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)initWithValue:(float)arg1;
- (float)value;
- (void)setValue:(float)arg1;
- (id)previousValue;
- (id)groupIdentifier;

@end
