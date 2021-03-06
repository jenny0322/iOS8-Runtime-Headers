/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUControlAppearance, NSMutableDictionary, NSDictionary, SUTabBarAppearance, SUToolbarAppearance;

@interface SUUIAppearance : NSObject <NSCopying> {
    SUControlAppearance *_backButtonAppearance;
    SUControlAppearance *_confirmationButtonAppearance;
    SUControlAppearance *_destructiveButtonAppearance;
    SUControlAppearance *_exitStoreButtonAppearance;
    SUControlAppearance *_forwardButtonAppearance;
    bool_isDefaultAppearance;
    NSMutableDictionary *_navigationBarBackgroundImages;
    NSDictionary *_navigationBarTitleTextAttributes;
    NSMutableDictionary *_navigationButtonAppearance;
    NSMutableDictionary *_segmentedControlAppearance;
    SUTabBarAppearance *_tabBarAppearance;
    SUToolbarAppearance *_toolbarAppearance;
}

@property(copy) SUControlAppearance * backButtonAppearance;
@property(copy) SUControlAppearance * confirmationButtonAppearance;
@property(copy) SUControlAppearance * destructiveButtonAppearance;
@property(copy) SUControlAppearance * exitStoreButtonAppearance;
@property(copy) SUControlAppearance * forwardButtonAppearance;
@property(copy) NSDictionary * navigationBarTitleTextAttributes;
@property(copy) SUTabBarAppearance * tabBarAppearance;
@property(copy) SUToolbarAppearance * toolbarAppearance;

+ (id)_defaultDoneButtonAppearance;
+ (id)_defaultButtonAppearance;
+ (id)_defaultForwardButtonAppearance;
+ (id)_defaultDestructiveButtonAppearance;
+ (id)_defaultConfirmationButtonAppearance;
+ (id)_defaultBackButtonAppearance;
+ (id)_defaultShadowWithColor:(id)arg1 offset:(struct CGSize { double x1; double x2; })arg2;
+ (id)_defaultTabBarAppearance;
+ (id)defaultAppearance;

- (void)setToolbarAppearance:(id)arg1;
- (void)setForwardButtonAppearance:(id)arg1;
- (void)setExitStoreButtonAppearance:(id)arg1;
- (void)setDestructiveButtonAppearance:(id)arg1;
- (void)setConfirmationButtonAppearance:(id)arg1;
- (void)setBackButtonAppearance:(id)arg1;
- (void)styleTabBar:(id)arg1;
- (void)styleForwardButtonItem:(id)arg1;
- (void)styleDestructiveButton:(id)arg1;
- (id)navigationBarBackgroundImageForBarMetrics:(long long)arg1;
- (id)forwardButtonAppearance;
- (id)exitStoreButtonAppearance;
- (id)toolbarAppearance;
- (id)segmentedControlAppearanceForStyle:(long long)arg1 tintStyle:(long long)arg2;
- (id)navigationBarTitleTextAttributes;
- (id)backButtonAppearance;
- (id)destructiveButtonAppearance;
- (id)confirmationButtonAppearance;
- (id)navigationButtonAppearanceForStyle:(long long)arg1;
- (void)setSegmentedControlAppearance:(id)arg1 forStyle:(long long)arg2 tintStyle:(long long)arg3;
- (id)_copySegmentedControlKeyWithStyle:(long long)arg1 tintStyle:(long long)arg2;
- (void)setNavigationButtonAppearance:(id)arg1 forStyle:(long long)arg2;
- (void)setNavigationBarTitleTextAttributes:(id)arg1;
- (void)setTabBarAppearance:(id)arg1;
- (void)setNavigationBarBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)styleSegmentedControl:(id)arg1 tintStyle:(long long)arg2;
- (void)styleConfirmationButtonItem:(id)arg1;
- (void)_styleBackBarButtonItem:(id)arg1;
- (void)styleToolbar:(id)arg1;
- (void)styleExitStoreButtonItem:(id)arg1;
- (void)styleBarButtonItem:(id)arg1;
- (void)styleTabBarItem:(id)arg1;
- (void)styleNavigationBar:(id)arg1;
- (id)tabBarAppearance;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
