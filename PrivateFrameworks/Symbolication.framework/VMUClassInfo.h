/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, VMUClassInfo;

@interface VMUClassInfo : NSObject <NSCoding> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _reader;

    unsigned long long _remoteIsa;
    unsigned long long _specificInstance;
    unsigned int _remotePointerSize;
    unsigned int _ivarCount;
    unsigned int _superclassOffset;
    unsigned int _instanceSize;
    unsigned int _ro_flags;
    unsigned int _rw_flags;
    struct objc_ivar {} **_localIvarList;
    int *_ivarScanSizes;
    unsigned int _remoteType;
    NSString *_remoteClassName;
    NSString *_remoteBinaryName;
    VMUClassInfo *_superclassLayout;
    const char *_weakLayout;
    const char *_strongLayout;
    const char *_extendedLayout;
    char *_scanMap;
    BOOL _hasSpecificLayout;
}

@property(readonly) NSString * typeName;
@property(readonly) NSString * className;
@property(readonly) NSString * binaryName;
@property(readonly) NSString * fullIvarDescription;
@property(readonly) NSString * shortIvarDescription;
@property(readonly) VMUClassInfo * superclassInfo;
@property(readonly) int infoType;
@property(readonly) unsigned long long remoteIsa;
@property(readonly) unsigned long long specificInstance;
@property(readonly) unsigned int instanceSize;
@property(readonly) bool isARR;
@property(readonly) bool isRealized;
@property(readonly) bool isMetaClass;
@property(readonly) bool isRootClass;
@property(readonly) bool hasCppConstructorOrDestructor;
@property(readonly) bool hasSpecificLayout;

+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;
+ (id)classInfoWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;
+ (void)initialize;

- (id)superclassInfo;
- (unsigned long long)specificInstance;
- (unsigned int)instanceSize;
- (bool)isMetaClass;
- (id)shortIvarDescription;
- (struct objc_ivar { }*)ivarWithOffset:(unsigned long long)arg1;
- (void)scanObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withBlock:(id)arg3;
- (id)initWithIsaPointer:(unsigned long long)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg3 type:(int)arg4 memoryReader:(id)arg5;
- (id)fullIvarDescription;
- (void)enumerateIvarsWithBlock:(id)arg1;
- (void)setMemoryReader:(id)arg1;
- (void)_setExtendedLayout:(const char *)arg1;
- (id)_specificCopy:(unsigned long long)arg1 instanceSize:(unsigned int)arg2 superclassOffset:(unsigned int)arg3;
- (void)enumerateKnownSublayoutsForObject:(unsigned long long)arg1 withBlock:(id)arg2;
- (id)_instanceSpecificInfoForObject:(unsigned long long)arg1 pointerSize:(unsigned int)arg2 reader:(id)arg3;
- (void)enumerateScanLocationsToSize:(unsigned int)arg1 withBlock:(id)arg2;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1;
- (id)_ivarDescription:(unsigned int)arg1 withSpacing:(unsigned int)arg2;
- (void)_logDescriptionWithSuperclasses:(bool)arg1 indentation:(int)arg2 toLogger:(id)arg3;
- (bool)hasCppConstructorOrDestructor;
- (int)infoType;
- (unsigned long long)remoteIsa;
- (id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg3 type:(int)arg4 memoryReader:(id)arg5;
- (id)binaryName;
- (void)_setClassNameWithAddress:(unsigned long long)arg1;
- (id)_initWithClass:(unsigned long long)arg1 realizedOnly:(bool)arg2 infoMap:(id)arg3 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg4 type:(int)arg5 memoryReader:(id)arg6;
- (bool)isRootClass;
- (void)_parseIvarsAndLayouts;
- (const char *)_copyRemoteLayout:(unsigned long long)arg1;
- (struct objc_ivar { }*)_copyRemoteIvarAt:(unsigned long long)arg1;
- (bool)isRealized;
- (unsigned long long)_readRemotePointerAt:(unsigned long long)arg1;
- (bool)hasSpecificLayout;
- (void)_processARRLayout:(const char *)arg1 scanType:(int)arg2;
- (bool)isARR;
- (void)_processExtendedLayout:(const char *)arg1;
- (void)_faultScanMap;
- (int)_readRemoteIntAt:(unsigned long long)arg1;
- (const char *)_copyRemoteStringAt:(unsigned long long)arg1;
- (id)initWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;
- (id)typeName;
- (id)debugDescription;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)className;

@end
