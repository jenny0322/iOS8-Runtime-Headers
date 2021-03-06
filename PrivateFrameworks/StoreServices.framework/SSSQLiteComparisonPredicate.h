/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate <NSCopying> {
    long long _comparisonType;
    id _value;
}

@property(readonly) long long comparisonType;
@property(readonly) id value;

+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;

- (id)_comparisonTypeString;
- (long long)comparisonType;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)value;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
