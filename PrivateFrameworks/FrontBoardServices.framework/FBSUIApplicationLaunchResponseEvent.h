/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSUIApplicationLaunchResponse;

@interface FBSUIApplicationLaunchResponseEvent : FBSWorkspaceEvent  {
    FBSUIApplicationLaunchResponse *_response;
}

@property(retain) FBSUIApplicationLaunchResponse * response;


- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setResponse:(id)arg1;
- (id)response;
- (void)dealloc;

@end
