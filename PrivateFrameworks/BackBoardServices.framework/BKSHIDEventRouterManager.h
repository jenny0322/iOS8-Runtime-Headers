/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase  {
    bool_needsFlush;
}

@property bool needsFlush;

+ (id)sharedInstance;

- (void)_flush;
- (void)setNeedsFlush:(bool)arg1;
- (bool)needsFlush;
- (void)_flushTrigger;
- (void)setEventRouters:(id)arg1;
- (void)_routerUpdated:(id)arg1;
- (id)init;
- (void)dealloc;

@end
