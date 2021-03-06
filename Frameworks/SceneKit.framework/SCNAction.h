/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SCNAction : NSObject <NSCopying, NSSecureCoding> {
    id _reserved;

  /* Error parsing encoded ivar type info: ^{SCNCAction=^^?f@?@BdddddBB@?^{__CFString}qdddd} */
    struct SCNCAction { int (**x1)(); float x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; id x5; boolx6; double x7; double x8; double x9; double x10; double x11; boolx12; boolx13; id x14; void*x15; struct __CFString {} *x16; long long x17; double x18; double x19; double x20; double x21; } *_caction;

}

@property double duration;
@property long long timingMode;
@property id timingFunction;
@property double speed;

+ (id)runBlock:(id)arg1;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)group:(id)arg1;
+ (id)sequence:(id)arg1;
+ (id)moveBy:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveTo:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)runAction:(id)arg1 onChildNodeWithName:(id)arg2;
+ (id)javaScriptActionWithScript:(id)arg1 duration:(double)arg2;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(id)arg2;
+ (id)removeFromParentNode;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (id)repeatActionForever:(id)arg1;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(bool)arg5;
+ (id)rotateToAxisAngle:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 duration:(double)arg2;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 duration:(double)arg3;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)waitForDuration:(double)arg1;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (id)runBlock:(id)arg1 queue:(id)arg2;
+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;

- (double)ratioForTime:(double)arg1;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (void)timeJumpWithTarget:(id)arg1 timeOffset:(double)arg2;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
- (void)setTimingMode:(long long)arg1;
- (long long)timingMode;
- (void)setDurationRange:(double)arg1;
- (double)durationRange;
- (void)setCppAction:(void*)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (bool)isCustom;
- (struct SCNCAction { int (**x1)(); float x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; id x5; boolx6; double x7; double x8; double x9; double x10; double x11; boolx12; boolx13; id x14; void*x15; struct __CFString {} *x16; long long x17; double x18; double x19; double x20; double x21; }*)caction;
     /* Encoded args for previous method: ^{SCNCAction=^^?f@?@BdddddBB@?^{__CFString}qdddd}16@0:8 */

- (void)setSpeed:(double)arg1;
- (double)speed;
- (void)setTimingFunction:(id)arg1;
- (void)setDuration:(double)arg1;
- (id)timingFunction;
- (id)init;
- (void)setFinished:(bool)arg1;
- (bool)finished;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (void)setKey:(id)arg1;
- (void)setCompletionBlock:(id)arg1;

@end
