/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKCommentCursor, CKCommentQuery;

@interface CKFetchShareCommentsOperationInfo : CKOperationInfo  {
    CKCommentQuery *_query;
    CKCommentCursor *_cursor;
    unsigned long long _resultsLimit;
}

@property(retain) CKCommentQuery * query;
@property(retain) CKCommentCursor * cursor;
@property unsigned long long resultsLimit;

+ (bool)supportsSecureCoding;

- (void)setResultsLimit:(unsigned long long)arg1;
- (unsigned long long)resultsLimit;
- (id)cursor;
- (id)query;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (void)setCursor:(id)arg1;
- (void)setQuery:(id)arg1;

@end
