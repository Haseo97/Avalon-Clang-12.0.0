/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* An x-macro database of Clang type nodes                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef ABSTRACT_TYPE
#  define ABSTRACT_TYPE(Class, Base) TYPE(Class, Base)
#endif
#ifndef NON_CANONICAL_TYPE
#  define NON_CANONICAL_TYPE(Class, Base) TYPE(Class, Base)
#endif
#ifndef DEPENDENT_TYPE
#  define DEPENDENT_TYPE(Class, Base) TYPE(Class, Base)
#endif
#ifndef NON_CANONICAL_UNLESS_DEPENDENT_TYPE
#  define NON_CANONICAL_UNLESS_DEPENDENT_TYPE(Class, Base) TYPE(Class, Base)
#endif
NON_CANONICAL_TYPE(Adjusted, Type)
ABSTRACT_TYPE(Array, Type)
TYPE(Atomic, Type)
NON_CANONICAL_TYPE(Attributed, Type)
TYPE(Auto, DeducedType)
TYPE(BlockPointer, Type)
TYPE(Builtin, Type)
TYPE(Complex, Type)
TYPE(ConstantArray, ArrayType)
NON_CANONICAL_TYPE(Decayed, AdjustedType)
NON_CANONICAL_UNLESS_DEPENDENT_TYPE(Decltype, Type)
TYPE(DeducedTemplateSpecialization, DeducedType)
ABSTRACT_TYPE(Deduced, Type)
DEPENDENT_TYPE(DependentAddressSpace, Type)
DEPENDENT_TYPE(DependentName, Type)
DEPENDENT_TYPE(DependentSizedArray, ArrayType)
DEPENDENT_TYPE(DependentSizedExtVector, Type)
DEPENDENT_TYPE(DependentTemplateSpecialization, Type)
DEPENDENT_TYPE(DependentVector, Type)
NON_CANONICAL_TYPE(Elaborated, Type)
TYPE(Enum, TagType)
TYPE(ExtVector, VectorType)
TYPE(FunctionNoProto, FunctionType)
TYPE(FunctionProto, FunctionType)
ABSTRACT_TYPE(Function, Type)
TYPE(IncompleteArray, ArrayType)
DEPENDENT_TYPE(InjectedClassName, Type)
TYPE(LValueReference, ReferenceType)
NON_CANONICAL_TYPE(MacroQualified, Type)
TYPE(MemberPointer, Type)
TYPE(ObjCInterface, ObjCObjectType)
TYPE(ObjCObjectPointer, Type)
TYPE(ObjCObject, Type)
NON_CANONICAL_TYPE(ObjCTypeParam, Type)
NON_CANONICAL_UNLESS_DEPENDENT_TYPE(PackExpansion, Type)
NON_CANONICAL_TYPE(Paren, Type)
TYPE(Pipe, Type)
TYPE(Pointer, Type)
TYPE(RValueReference, ReferenceType)
TYPE(Record, TagType)
ABSTRACT_TYPE(Reference, Type)
DEPENDENT_TYPE(SubstTemplateTypeParmPack, Type)
NON_CANONICAL_TYPE(SubstTemplateTypeParm, Type)
ABSTRACT_TYPE(Tag, Type)
NON_CANONICAL_UNLESS_DEPENDENT_TYPE(TemplateSpecialization, Type)
DEPENDENT_TYPE(TemplateTypeParm, Type)
NON_CANONICAL_UNLESS_DEPENDENT_TYPE(TypeOfExpr, Type)
NON_CANONICAL_UNLESS_DEPENDENT_TYPE(TypeOf, Type)
NON_CANONICAL_TYPE(Typedef, Type)
NON_CANONICAL_UNLESS_DEPENDENT_TYPE(UnaryTransform, Type)
DEPENDENT_TYPE(UnresolvedUsing, Type)
TYPE(VariableArray, ArrayType)
TYPE(Vector, Type)
#ifdef LAST_TYPE
LAST_TYPE(Vector)
#undef LAST_TYPE
#endif
#ifdef LEAF_TYPE
LEAF_TYPE(Builtin)
LEAF_TYPE(Enum)
LEAF_TYPE(InjectedClassName)
LEAF_TYPE(ObjCInterface)
LEAF_TYPE(Record)
LEAF_TYPE(TemplateTypeParm)
#undef LEAF_TYPE
#endif
#undef TYPE
#undef ABSTRACT_TYPE
#undef ABSTRACT_TYPE
#undef NON_CANONICAL_TYPE
#undef DEPENDENT_TYPE
#undef NON_CANONICAL_UNLESS_DEPENDENT_TYPE
