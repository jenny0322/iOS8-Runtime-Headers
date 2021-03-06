/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraitsPhotoSize : PBCodable <NSCopying> {
    unsigned int _height;
    unsigned int _width;
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    } _has;
}

@property bool hasWidth;
@property unsigned int width;
@property bool hasHeight;
@property unsigned int height;


- (bool)hasHeight;
- (void)setHasHeight:(bool)arg1;
- (bool)hasWidth;
- (void)setHasWidth:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (unsigned int)width;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
