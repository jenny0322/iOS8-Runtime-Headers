/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCServerBag : NSObject  {
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    } isLoadedCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } isLoadedMutex;
    boolisLoaded;
    id observer;
}

+ (void)retrieveBag;
+ (void)checkKeysAgainstHardcodedPrefs:(id)arg1;
+ (bool)verifyRequiredKeys:(id)arg1 withError:(id*)arg2;
+ (bool)verifyRequiredVoiceChatKeys:(id*)arg1;
+ (bool)verifyRequiredKeys:(id*)arg1;
+ (void)pullStoreBagKeys;
+ (id)sharedInstance;

- (void)waitForBagLoad;
- (id)init;

@end
