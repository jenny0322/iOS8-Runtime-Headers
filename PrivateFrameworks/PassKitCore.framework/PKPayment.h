/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKPaymentToken, PKShippingMethod;

@interface PKPayment : NSObject <NSSecureCoding> {
    PKPaymentToken *_token;
    void *_billingAddress;
    void *_shippingAddress;
    PKShippingMethod *_shippingMethod;
}

@property(retain) PKPaymentToken * token;
@property void* billingAddress;
@property void* shippingAddress;
@property(retain) PKShippingMethod * shippingMethod;

+ (bool)supportsSecureCoding;

- (id)shippingMethod;
- (void*)billingAddress;
- (void*)shippingAddress;
- (void)setShippingMethod:(id)arg1;
- (void)setBillingAddress:(void*)arg1;
- (void)setShippingAddress:(void*)arg1;
- (id)initWithToken:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
