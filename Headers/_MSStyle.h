#import "MSModelBase.h"

@class MSBorderStyleCollection, MSFillStyleCollection, MSGraphicsContextSettings, MSInnerShadowStyleCollection, MSShadowStyleCollection, MSStyleBlur, MSStyleBorderOptions, MSStyleColorControls, MSStyleReflection, MSTextStyle, NSString;

@interface _MSStyle : MSModelBase
{
    MSBorderStyleCollection *_borders;
    unsigned long long _endDecorationType;
    MSFillStyleCollection *_fills;
    MSInnerShadowStyleCollection *_innerShadows;
    long long _miterLimit;
    MSShadowStyleCollection *_shadows;
    NSString *_sharedObjectID;
    unsigned long long _startDecorationType;
    MSStyleBlur *_blur;
    MSStyleBorderOptions *_borderOptions;
    MSStyleColorControls *_colorControls;
    MSGraphicsContextSettings *_contextSettings;
    MSStyleReflection *_reflection;
    MSTextStyle *_textStyle;
}

@property(retain, nonatomic) MSTextStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) MSStyleReflection *reflection; // @synthesize reflection=_reflection;
@property(retain, nonatomic) MSGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSStyleColorControls *colorControls; // @synthesize colorControls=_colorControls;
@property(retain, nonatomic) MSStyleBorderOptions *borderOptions; // @synthesize borderOptions=_borderOptions;
@property(retain, nonatomic) MSStyleBlur *blur; // @synthesize blur=_blur;
@property(nonatomic) unsigned long long startDecorationType; // @synthesize startDecorationType=_startDecorationType;
@property(retain, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(retain, nonatomic) MSShadowStyleCollection *shadows; // @synthesize shadows=_shadows;
@property(nonatomic) long long miterLimit; // @synthesize miterLimit=_miterLimit;
@property(retain, nonatomic) MSInnerShadowStyleCollection *innerShadows; // @synthesize innerShadows=_innerShadows;
@property(retain, nonatomic) MSFillStyleCollection *fills; // @synthesize fills=_fills;
@property(nonatomic) unsigned long long endDecorationType; // @synthesize endDecorationType=_endDecorationType;
@property(retain, nonatomic) MSBorderStyleCollection *borders; // @synthesize borders=_borders;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveTextStyle:(id)arg1;
- (id)primitiveTextStyle;
- (void)setPrimitiveReflection:(id)arg1;
- (id)primitiveReflection;
- (void)setPrimitiveContextSettings:(id)arg1;
- (id)primitiveContextSettings;
- (void)setPrimitiveColorControls:(id)arg1;
- (id)primitiveColorControls;
- (void)setPrimitiveBorderOptions:(id)arg1;
- (id)primitiveBorderOptions;
- (void)setPrimitiveBlur:(id)arg1;
- (id)primitiveBlur;
- (void)setPrimitiveStartDecorationType:(unsigned long long)arg1;
- (unsigned long long)primitiveStartDecorationType;
- (void)setPrimitiveSharedObjectID:(id)arg1;
- (id)primitiveSharedObjectID;
- (void)setPrimitiveShadows:(id)arg1;
- (id)primitiveShadows;
- (void)setPrimitiveMiterLimit:(long long)arg1;
- (long long)primitiveMiterLimit;
- (void)setPrimitiveInnerShadows:(id)arg1;
- (id)primitiveInnerShadows;
- (void)setPrimitiveFills:(id)arg1;
- (id)primitiveFills;
- (void)setPrimitiveEndDecorationType:(unsigned long long)arg1;
- (unsigned long long)primitiveEndDecorationType;
- (void)setPrimitiveBorders:(id)arg1;
- (id)primitiveBorders;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

