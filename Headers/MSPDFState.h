#import "NSObject.h"

#import "NSCopying.h"

@class MSPDFScanner, MSPDFTextState, NSAffineTransform, NSArray, NSBezierPath, NSColor, NSColorSpace, NSMutableArray, PDFFunction, PDFPattern;

@interface MSPDFState : NSObject <NSCopying>
{
    BOOL _clippingUpdated;
    BOOL _containsClippedItems;
    BOOL _pathClosed;
    BOOL _pathUsed;
    BOOL _pathWasRect;
    int _renderingIntent;
    double _borderAlphaConstant;
    NSColor *_borderColor;
    NSColorSpace *_borderColorSpace;
    PDFFunction *_borderColorSpaceMapping;
    NSArray *_borderDashes;
    unsigned long long _borderCapStyle;
    PDFPattern *_borderGradient;
    unsigned long long _borderJoinStyle;
    double _borderThickness;
    unsigned long long _clippingMode;
    NSBezierPath *_clippingPath;
    double _fillAlphaConstant;
    NSColor *_fillColor;
    NSColorSpace *_fillColorSpace;
    PDFFunction *_fillColorSpaceMapping;
    PDFPattern *_fillGradient;
    NSMutableArray *_layers;
    NSBezierPath *_path;
    MSPDFTextState *_text;
    NSBezierPath *_transformedPath;
    MSPDFScanner *_scanner;
    NSAffineTransform *_transform;
    NSAffineTransform *_flippedTransform;
    struct CGPoint _currentPoint;
}

@property(retain, nonatomic) NSAffineTransform *flippedTransform; // @synthesize flippedTransform=_flippedTransform;
@property(retain, nonatomic) NSAffineTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) __weak MSPDFScanner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) NSBezierPath *transformedPath; // @synthesize transformedPath=_transformedPath;
@property(retain, nonatomic) MSPDFTextState *text; // @synthesize text=_text;
@property(nonatomic) int renderingIntent; // @synthesize renderingIntent=_renderingIntent;
@property(nonatomic) BOOL pathWasRect; // @synthesize pathWasRect=_pathWasRect;
@property(nonatomic) BOOL pathUsed; // @synthesize pathUsed=_pathUsed;
@property(nonatomic) BOOL pathClosed; // @synthesize pathClosed=_pathClosed;
@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) PDFPattern *fillGradient; // @synthesize fillGradient=_fillGradient;
@property(retain, nonatomic) PDFFunction *fillColorSpaceMapping; // @synthesize fillColorSpaceMapping=_fillColorSpaceMapping;
@property(retain, nonatomic) NSColorSpace *fillColorSpace; // @synthesize fillColorSpace=_fillColorSpace;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double fillAlphaConstant; // @synthesize fillAlphaConstant=_fillAlphaConstant;
@property(nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(nonatomic) BOOL containsClippedItems; // @synthesize containsClippedItems=_containsClippedItems;
@property(nonatomic) BOOL clippingUpdated; // @synthesize clippingUpdated=_clippingUpdated;
@property(retain, nonatomic) NSBezierPath *clippingPath; // @synthesize clippingPath=_clippingPath;
@property(nonatomic) unsigned long long clippingMode; // @synthesize clippingMode=_clippingMode;
@property(nonatomic) double borderThickness; // @synthesize borderThickness=_borderThickness;
@property(nonatomic) unsigned long long borderJoinStyle; // @synthesize borderJoinStyle=_borderJoinStyle;
@property(retain, nonatomic) PDFPattern *borderGradient; // @synthesize borderGradient=_borderGradient;
@property(nonatomic) unsigned long long borderCapStyle; // @synthesize borderCapStyle=_borderCapStyle;
@property(retain, nonatomic) NSArray *borderDashes; // @synthesize borderDashes=_borderDashes;
@property(retain, nonatomic) PDFFunction *borderColorSpaceMapping; // @synthesize borderColorSpaceMapping=_borderColorSpaceMapping;
@property(retain, nonatomic) NSColorSpace *borderColorSpace; // @synthesize borderColorSpace=_borderColorSpace;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderAlphaConstant; // @synthesize borderAlphaConstant=_borderAlphaConstant;
- (void).cxx_destruct;
- (id)description;
- (id)stringFromTransform:(id)arg1;
- (id)transformedClippingPath;
- (void)updateClippingWithTextPath:(id)arg1;
- (void)updateClipping;
- (CDStruct_8727d297)transformStruct;
- (id)transformBezierPath:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (void)appendTransform:(id)arg1;
- (void)resetTransform:(id)arg1;
- (void)resetFlipped;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lastLayer;
- (id)layerWithEnclosingGroup:(BOOL)arg1;
- (void)addLayer:(id)arg1;
- (id)initWithScanner:(id)arg1;

@end

