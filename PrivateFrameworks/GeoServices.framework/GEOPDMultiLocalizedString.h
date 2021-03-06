/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPDMultiLocalizedString : PBCodable <NSCopying> {
    NSMutableArray *_localizedStrings;
}

@property(retain) NSMutableArray * localizedStrings;


- (id)bestLocalizedName;
- (id)localizedStrings;
- (id)localizedStringAtIndex:(unsigned long long)arg1;
- (void)clearLocalizedStrings;
- (unsigned long long)localizedStringsCount;
- (void)addLocalizedString:(id)arg1;
- (void)setLocalizedStrings:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
