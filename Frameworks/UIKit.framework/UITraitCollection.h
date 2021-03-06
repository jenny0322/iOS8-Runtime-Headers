/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary;

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        long long userInterfaceIdiom; 
        double displayScale; 
        long long touchLevel; 
        long long interactionModel; 
        long long horizontalSizeClass; 
        long long verticalSizeClass; 
    } _builtinTraits;
    NSDictionary *_clientDefinedTraits;
}

@property(readonly) long long userInterfaceIdiom;
@property(readonly) double displayScale;
@property(readonly) long long horizontalSizeClass;
@property(readonly) long long verticalSizeClass;

+ (bool)supportsSecureCoding;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithInteractionModel:(long long)arg1;
+ (id)_emptyTraitCollection;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;

- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)interactionModel;
- (long long)touchLevel;
- (id)_initWithBuiltinTraitStorage:(struct { long long x1; double x2; long long x3; long long x4; long long x5; long long x6; }*)arg1 clientDefinedTraits:(id)arg2;
- (bool)_matchesIntersectionWithTraitCollection:(id)arg1;
- (id)_namedImageDescription;
- (id)_valueForTraitNamed:(id)arg1;
- (double)displayScale;
- (bool)containsTraitsInCollection:(id)arg1;
- (long long)horizontalSizeClass;
- (long long)verticalSizeClass;
- (long long)userInterfaceIdiom;

@end
