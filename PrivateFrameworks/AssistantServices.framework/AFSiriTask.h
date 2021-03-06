/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString, AFSiriRequest, NSXPCListenerEndpoint;

@interface AFSiriTask : NSObject <BSXPCCoding, NSSecureCoding> {
    AFSiriRequest *_request;
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)supportsSecureCoding;

- (void)completeWithResponse:(id)arg1;
- (id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2;
- (id)_responseHandlerProxyWithErrorHandler:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)request;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
