#import "MSModelBase.h"

@class MSArray;

@interface _MSSharedObjectContainer : MSModelBase
{
    MSArray *_objects;
}

@property(retain, nonatomic) MSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveObjects:(id)arg1;
- (id)primitiveObjects;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

