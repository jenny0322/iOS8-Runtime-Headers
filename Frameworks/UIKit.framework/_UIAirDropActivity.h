/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SFAirDropActivityViewController;

@interface _UIAirDropActivity : UIActivity  {
    SFAirDropActivityViewController *_airDropViewController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _airdropCompletion;

}

@property(retain) SFAirDropActivityViewController * airDropViewController;
@property(copy) id airdropCompletion;


- (id)activityType;
- (void)dealloc;
- (void)setAirDropViewController:(id)arg1;
- (void)setAirdropCompletion:(id)arg1;
- (id)airdropCompletion;
- (id)airDropViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)performActivity;
- (struct CGSize { double x1; double x2; })_thumbnailSize;

@end
