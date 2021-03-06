/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSURL;

@interface SAAnswerSummaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer> {
}

@property(copy) NSArray * answerPropertyGroups;
@property(copy) NSString * category;
@property(copy) NSURL * image;
@property(copy) NSString * imageCaption;
@property(copy) NSString * text;
@property(copy) NSString * title;
@property(copy) NSString * titleAnnotation;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)summaryStructuredAnswer;

- (void)setTitleAnnotation:(id)arg1;
- (id)titleAnnotation;
- (void)setImageCaption:(id)arg1;
- (id)imageCaption;
- (void)setAnswerPropertyGroups:(id)arg1;
- (id)answerPropertyGroups;
- (id)encodedClassName;
- (id)category;
- (id)text;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setImage:(id)arg1;
- (id)image;
- (id)groupIdentifier;
- (void)setCategory:(id)arg1;
- (void)setText:(id)arg1;

@end
