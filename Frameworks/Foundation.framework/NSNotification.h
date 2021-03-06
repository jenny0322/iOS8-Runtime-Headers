/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDictionary;

@interface NSNotification : NSObject <NSCopying, NSCoding> {
}

@property(copy,readonly) NSString * name;
@property(retain,readonly) id object;
@property(copy,readonly) NSDictionary * userInfo;

+ (id)notificationWithName:(id)arg1 object:(id)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (id)init;
- (id)object;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)userInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (Class)classForCoder;

@end
