/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior  {
    SCNPhysicsBody *_chassisBody;
    NSArray *_wheels;
    SCNPhysicsWorld *_world;
    struct btRaycastVehicle { int (**x1)(); struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_2_1_1; int x_2_1_2; int x_2_1_3; struct btVector3 {} *x_2_1_4; boolx_2_1_5; } x2; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_3_1_1; int x_3_1_2; int x_3_1_3; struct btVector3 {} *x_3_1_4; boolx_3_1_5; } x3; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_4_1_1; int x_4_1_2; int x_4_1_3; float *x_4_1_4; boolx_4_1_5; } x4; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_5_1_1; int x_5_1_2; int x_5_1_3; float *x_5_1_4; boolx_5_1_5; } x5; int x6; int x7; float x8; float x9; struct btVehicleRaycaster {} *x10; float x11; float x12; float x13; struct btRigidBody {} *x14; int x15; int x16; int x17; struct btAlignedObjectArray<btWheelInfo> { struct btAlignedAllocator<btWheelInfo, 16> { } x_18_1_1; int x_18_1_2; int x_18_1_3; struct btWheelInfo {} *x_18_1_4; boolx_18_1_5; } x18; } *_vehicle;
    double _speedKmHour;
}

@property(readonly) double speedInKilometersPerHour;
@property(readonly) NSArray * wheels;
@property(readonly) SCNPhysicsBody * chassisBody;

+ (id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2;
+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNPhysicsVehicle:(id)arg1;
- (id)chassisBody;
- (id)wheels;
- (double)speedInKilometersPerHour;
- (void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (id)wheelAtIndex:(unsigned long long)arg1;
- (void)_createWheel:(id)arg1;
- (id)initWithChassisBody:(id)arg1 wheels:(id)arg2;
- (void)_initializeWheelsArray;
- (struct btRaycastVehicle { int (**x1)(); struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_2_1_1; int x_2_1_2; int x_2_1_3; struct btVector3 {} *x_2_1_4; boolx_2_1_5; } x2; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_3_1_1; int x_3_1_2; int x_3_1_3; struct btVector3 {} *x_3_1_4; boolx_3_1_5; } x3; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_4_1_1; int x_4_1_2; int x_4_1_3; float *x_4_1_4; boolx_4_1_5; } x4; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_5_1_1; int x_5_1_2; int x_5_1_3; float *x_5_1_4; boolx_5_1_5; } x5; int x6; int x7; float x8; float x9; struct btVehicleRaycaster {} *x10; float x11; float x12; float x13; struct btRigidBody {} *x14; int x15; int x16; int x17; struct btAlignedObjectArray<btWheelInfo> { struct btAlignedAllocator<btWheelInfo, 16> { } x_18_1_1; int x_18_1_2; int x_18_1_3; struct btWheelInfo {} *x_18_1_4; boolx_18_1_5; } x18; }*)btVehicle;
- (void)_handleCreateIfNeeded:(bool)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
- (id)physicsWorld;
- (id)valueForKeyPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_update;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;

@end
