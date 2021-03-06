/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction, UIInputSwitcherView, NSString;

@interface UIInputSwitcher : NSObject  {
    UIDelayedAction *m_switcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    NSString *_newMode;
}

+ (id)sharedInstance;
+ (id)activeInstance;

- (bool)isVisible;
- (id)init;
- (void)dealloc;
- (void)touchSwitcherTimer;
- (id)newMode;
- (void)setNewMode:(id)arg1;
- (void)showSwitcher;
- (void)handleRotate:(id)arg1;
- (void)touchHideSwitcherTimer;
- (void)cancelSwitcherTimer;
- (void)clearHideSwitcherTimer;
- (void)clearSwitcherTimer;
- (bool)handleModifiersChangedEvent:(id)arg1;
- (void)hideSwitcher;
- (bool)handleSwitchCommand:(bool)arg1;
- (bool)switchMode:(id)arg1 withDelay:(bool)arg2;

@end
