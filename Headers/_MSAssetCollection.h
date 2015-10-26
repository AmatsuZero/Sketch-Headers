#import "MSModelBase.h"

@class MSArray, MSImageCollection;

@interface _MSAssetCollection : MSModelBase
{
    MSArray *_colors;
    MSArray *_gradients;
    MSArray *_images;
    MSImageCollection *_imageCollection;
}

@property(retain, nonatomic) MSImageCollection *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(retain, nonatomic) MSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) MSArray *gradients; // @synthesize gradients=_gradients;
@property(retain, nonatomic) MSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveImageCollection:(id)arg1;
- (id)primitiveImageCollection;
- (void)setPrimitiveImages:(id)arg1;
- (id)primitiveImages;
- (void)setPrimitiveGradients:(id)arg1;
- (id)primitiveGradients;
- (void)setPrimitiveColors:(id)arg1;
- (id)primitiveColors;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

