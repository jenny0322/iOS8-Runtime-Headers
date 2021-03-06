/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, SAFmfGeoFence;

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand> {
}

@property(retain) SAFmfGeoFence * geoFence;
@property(copy) NSURL * searchContext;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSetCompleted;

- (void)setGeoFence:(id)arg1;
- (id)geoFence;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (id)groupIdentifier;

@end
