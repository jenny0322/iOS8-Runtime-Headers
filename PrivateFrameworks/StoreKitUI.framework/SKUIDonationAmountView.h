/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, NSArray, UIImage, SKUIGiftCharity, UIImageView, SKUIGiftAmount, UILabel, UIScrollView;

@interface SKUIDonationAmountView : UIView  {
    NSArray *_amountButtons;
    UILabel *_amountDisclaimerLabel;
    SKUIGiftCharity *_charity;
    UILabel *_descriptionLabel;
    UILabel *_legalTextLabel;
    UILabel *_legalText2Label;
    UIImageView *_logoImageView;
    long long _selectedAmountIndex;
    UIView *_separatorView;
    UIScrollView *_scrollView;
}

@property(readonly) SKUIGiftCharity * charity;
@property(retain) UIImage * logoImage;
@property(readonly) SKUIGiftAmount * selectedAmount;


- (void)_amountButtonUpOutside:(id)arg1;
- (void)_amountButtonUpInside:(id)arg1;
- (void)_amountButtonDown:(id)arg1;
- (id)initWithCharity:(id)arg1;
- (id)charity;
- (id)selectedAmount;
- (void)setLogoImage:(id)arg1;
- (id)logoImage;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
