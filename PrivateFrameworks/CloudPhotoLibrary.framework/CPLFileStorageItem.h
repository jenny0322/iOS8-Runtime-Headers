/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject <NSCopying> {
    bool_original;
    bool_markedForDelete;
    CPLResourceIdentity *_identity;
    NSDate *_lastAccessDate;
}

@property(readonly) CPLResourceIdentity * identity;
@property(getter=isOriginal,readonly) bool original;
@property(getter=isMarkedForDelete,readonly) bool markedForDelete;
@property(readonly) NSDate * lastAccessDate;


- (id)initWithIdentity:(id)arg1 original:(bool)arg2 markedForDelete:(bool)arg3 lastAccessDate:(id)arg4;
- (id)lastAccessDate;
- (bool)isMarkedForDelete;
- (bool)isOriginal;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)identity;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;

@end
