/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Parsed attribute helpers                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static bool isStruct(const Decl *D) {
  if (const auto *S = dyn_cast<RecordDecl>(D))
    return !S->isUnion();
  return false;
}

static bool isSharedVar(const Decl *D) {
  if (const auto *S = dyn_cast<VarDecl>(D))
    return S->hasGlobalStorage() && !S->getTLSKind();
  return false;
}

static bool isGlobalVar(const Decl *D) {
  if (const auto *S = dyn_cast<VarDecl>(D))
    return S->hasGlobalStorage();
  return false;
}

static bool isHasFunctionProto(const Decl *D) {
  if (const auto *S = dyn_cast<Decl>(D))
    return (S->getFunctionType(true) != nullptr &&
                              isa<FunctionProtoType>(S->getFunctionType())) ||
                                       isa<ObjCMethodDecl>(S) ||
                                       isa<BlockDecl>(S);
  return false;
}

static bool isFunctionLike(const Decl *D) {
  if (const auto *S = dyn_cast<Decl>(D))
    return S->getFunctionType(false) != nullptr;
  return false;
}

static bool isInlineFunction(const Decl *D) {
  if (const auto *S = dyn_cast<FunctionDecl>(D))
    return S->isInlineSpecified();
  return false;
}

static bool isLocalVar(const Decl *D) {
  if (const auto *S = dyn_cast<VarDecl>(D))
    return S->hasLocalStorage() && !isa<ParmVarDecl>(S);
  return false;
}

static bool isObjCInstanceMethod(const Decl *D) {
  if (const auto *S = dyn_cast<ObjCMethodDecl>(D))
    return S->isInstanceMethod();
  return false;
}

static bool isImplicitObjectParameter(const Decl *D) {
  if (const auto *S = dyn_cast<FunctionDecl>(D))
    return static_cast<void>(S), false;
  return false;
}

static bool isNonParmVar(const Decl *D) {
  if (const auto *S = dyn_cast<VarDecl>(D))
    return S->getKind() != Decl::ParmVar;
  return false;
}

static bool isNonBitField(const Decl *D) {
  if (const auto *S = dyn_cast<FieldDecl>(D))
    return !S->isBitField();
  return false;
}

static bool isNonStaticCXXMethod(const Decl *D) {
  if (const auto *S = dyn_cast<CXXMethodDecl>(D))
    return !S->isStatic();
  return false;
}

static bool isNonStaticNonConstCXXMethod(const Decl *D) {
  if (const auto *S = dyn_cast<CXXMethodDecl>(D))
    return !S->isStatic() && !S->isConst();
  return false;
}

static bool isFunctionTmpl(const Decl *D) {
  if (const auto *S = dyn_cast<FunctionDecl>(D))
    return S->getTemplatedKind() ==
                                 FunctionDecl::TK_FunctionTemplate;
  return false;
}

static bool isTLSVar(const Decl *D) {
  if (const auto *S = dyn_cast<VarDecl>(D))
    return S->getTLSKind() != 0;
  return false;
}

static bool isNonLocalVar(const Decl *D) {
  if (const auto *S = dyn_cast<VarDecl>(D))
    return !S->hasLocalStorage();
  return false;
}

struct ParsedAttrInfoAArch64VectorPcs : public ParsedAttrInfo {
  ParsedAttrInfoAArch64VectorPcs() {
    AttrKind = ParsedAttr::AT_AArch64VectorPcs;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"aarch64_vector_pcs"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::aarch64_vector_pcs"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::aarch64_vector_pcs"});
  }
static const ParsedAttrInfoAArch64VectorPcs Instance;
};
const ParsedAttrInfoAArch64VectorPcs ParsedAttrInfoAArch64VectorPcs::Instance;
struct ParsedAttrInfoAMDGPUFlatWorkGroupSize : public ParsedAttrInfo {
  ParsedAttrInfoAMDGPUFlatWorkGroupSize() {
    AttrKind = ParsedAttr::AT_AMDGPUFlatWorkGroupSize;
    NumArgs = 2;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"amdgpu_flat_work_group_size"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::amdgpu_flat_work_group_size"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "kernel functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoAMDGPUFlatWorkGroupSize Instance;
};
const ParsedAttrInfoAMDGPUFlatWorkGroupSize ParsedAttrInfoAMDGPUFlatWorkGroupSize::Instance;
struct ParsedAttrInfoAMDGPUNumSGPR : public ParsedAttrInfo {
  ParsedAttrInfoAMDGPUNumSGPR() {
    AttrKind = ParsedAttr::AT_AMDGPUNumSGPR;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"amdgpu_num_sgpr"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::amdgpu_num_sgpr"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "kernel functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoAMDGPUNumSGPR Instance;
};
const ParsedAttrInfoAMDGPUNumSGPR ParsedAttrInfoAMDGPUNumSGPR::Instance;
struct ParsedAttrInfoAMDGPUNumVGPR : public ParsedAttrInfo {
  ParsedAttrInfoAMDGPUNumVGPR() {
    AttrKind = ParsedAttr::AT_AMDGPUNumVGPR;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"amdgpu_num_vgpr"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::amdgpu_num_vgpr"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "kernel functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoAMDGPUNumVGPR Instance;
};
const ParsedAttrInfoAMDGPUNumVGPR ParsedAttrInfoAMDGPUNumVGPR::Instance;
struct ParsedAttrInfoAMDGPUWavesPerEU : public ParsedAttrInfo {
  ParsedAttrInfoAMDGPUWavesPerEU() {
    AttrKind = ParsedAttr::AT_AMDGPUWavesPerEU;
    NumArgs = 1;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"amdgpu_waves_per_eu"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::amdgpu_waves_per_eu"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "kernel functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoAMDGPUWavesPerEU Instance;
};
const ParsedAttrInfoAMDGPUWavesPerEU ParsedAttrInfoAMDGPUWavesPerEU::Instance;
struct ParsedAttrInfoInterrupt : public ParsedAttrInfo {
  ParsedAttrInfoInterrupt() {
    AttrKind = ParsedAttr::AT_Interrupt;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 1;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"interrupt"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::interrupt"});
  }
virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::armeb || T.getArch() == llvm::Triple::thumbeb || T.getArch() == llvm::Triple::avr || T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64 || T.getArch() == llvm::Triple::msp430 || T.getArch() == llvm::Triple::mips || T.getArch() == llvm::Triple::mipsel || T.getArch() == llvm::Triple::riscv32 || T.getArch() == llvm::Triple::riscv64);
}

static const ParsedAttrInfoInterrupt Instance;
};
const ParsedAttrInfoInterrupt ParsedAttrInfoInterrupt::Instance;
struct ParsedAttrInfoAVRSignal : public ParsedAttrInfo {
  ParsedAttrInfoAVRSignal() {
    AttrKind = ParsedAttr::AT_AVRSignal;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"signal"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::signal"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::avr);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoAVRSignal Instance;
};
const ParsedAttrInfoAVRSignal ParsedAttrInfoAVRSignal::Instance;
struct ParsedAttrInfoAbiTag : public ParsedAttrInfo {
  ParsedAttrInfoAbiTag() {
    AttrKind = ParsedAttr::AT_AbiTag;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"abi_tag"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::abi_tag"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isStruct(D) && !isa<VarDecl>(D) && !isa<FunctionDecl>(D) && !isa<NamespaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "structs, variables, functions, and namespaces";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record_not_is_union, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_namespace, /*IsSupported=*/LangOpts.CPlusPlus));
}

static const ParsedAttrInfoAbiTag Instance;
};
const ParsedAttrInfoAbiTag ParsedAttrInfoAbiTag::Instance;
struct ParsedAttrInfoAcquireCapability : public ParsedAttrInfo {
  ParsedAttrInfoAcquireCapability() {
    AttrKind = ParsedAttr::AT_AcquireCapability;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"acquire_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::acquire_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"acquire_shared_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::acquire_shared_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"exclusive_lock_function"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"shared_lock_function"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_acquire_capability = 0,
    CXX11_clang_acquire_capability = 1,
    GNU_acquire_shared_capability = 2,
    CXX11_clang_acquire_shared_capability = 3,
    GNU_exclusive_lock_function = 4,
    GNU_shared_lock_function = 5,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_acquire_capability;
    case 1: return CXX11_clang_acquire_capability;
    case 2: return GNU_acquire_shared_capability;
    case 3: return CXX11_clang_acquire_shared_capability;
    case 4: return GNU_exclusive_lock_function;
    case 5: return GNU_shared_lock_function;
  }
}

static const ParsedAttrInfoAcquireCapability Instance;
};
const ParsedAttrInfoAcquireCapability ParsedAttrInfoAcquireCapability::Instance;
struct ParsedAttrInfoAcquireHandle : public ParsedAttrInfo {
  ParsedAttrInfoAcquireHandle() {
    AttrKind = ParsedAttr::AT_AcquireHandle;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"acquire_handle"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::acquire_handle"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::acquire_handle"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<TypedefNameDecl>(D) && !isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions, typedefs, and parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_type_alias, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoAcquireHandle Instance;
};
const ParsedAttrInfoAcquireHandle ParsedAttrInfoAcquireHandle::Instance;
struct ParsedAttrInfoAcquiredAfter : public ParsedAttrInfo {
  ParsedAttrInfoAcquiredAfter() {
    AttrKind = ParsedAttr::AT_AcquiredAfter;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"acquired_after"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FieldDecl>(D) && !isSharedVar(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "non-static data members and global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoAcquiredAfter Instance;
};
const ParsedAttrInfoAcquiredAfter ParsedAttrInfoAcquiredAfter::Instance;
struct ParsedAttrInfoAcquiredBefore : public ParsedAttrInfo {
  ParsedAttrInfoAcquiredBefore() {
    AttrKind = ParsedAttr::AT_AcquiredBefore;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"acquired_before"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FieldDecl>(D) && !isSharedVar(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "non-static data members and global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoAcquiredBefore Instance;
};
const ParsedAttrInfoAcquiredBefore ParsedAttrInfoAcquiredBefore::Instance;
struct ParsedAttrInfoAddressSpace : public ParsedAttrInfo {
  ParsedAttrInfoAddressSpace() {
    AttrKind = ParsedAttr::AT_AddressSpace;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"address_space"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::address_space"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::address_space"});
  }
static const ParsedAttrInfoAddressSpace Instance;
};
const ParsedAttrInfoAddressSpace ParsedAttrInfoAddressSpace::Instance;
struct ParsedAttrInfoAlias : public ParsedAttrInfo {
  ParsedAttrInfoAlias() {
    AttrKind = ParsedAttr::AT_Alias;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"alias"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::alias"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isGlobalVar(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions and global variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_global, /*IsSupported=*/true));
}

static const ParsedAttrInfoAlias Instance;
};
const ParsedAttrInfoAlias ParsedAttrInfoAlias::Instance;
struct ParsedAttrInfoAlignValue : public ParsedAttrInfo {
  ParsedAttrInfoAlignValue() {
    AttrKind = ParsedAttr::AT_AlignValue;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"align_value"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D) && !isa<TypedefNameDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables and typedefs";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_type_alias, /*IsSupported=*/true));
}

static const ParsedAttrInfoAlignValue Instance;
};
const ParsedAttrInfoAlignValue ParsedAttrInfoAlignValue::Instance;
struct ParsedAttrInfoAligned : public ParsedAttrInfo {
  ParsedAttrInfoAligned() {
    AttrKind = ParsedAttr::AT_Aligned;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"aligned"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::aligned"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"align"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"alignas"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_Alignas"});
  }
virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_aligned = 0,
    CXX11_gnu_aligned = 1,
    Declspec_align = 2,
    Keyword_alignas = 3,
    Keyword_Alignas = 4,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_aligned;
    case 1: return CXX11_gnu_aligned;
    case 2: return Declspec_align;
    case 3: return Keyword_alignas;
    case 4: return Keyword_Alignas;
  }
}

static const ParsedAttrInfoAligned Instance;
};
const ParsedAttrInfoAligned ParsedAttrInfoAligned::Instance;
struct ParsedAttrInfoAllocAlign : public ParsedAttrInfo {
  ParsedAttrInfoAllocAlign() {
    AttrKind = ParsedAttr::AT_AllocAlign;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"alloc_align"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::alloc_align"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isHasFunctionProto(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "non-K&R-style functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoAllocAlign Instance;
};
const ParsedAttrInfoAllocAlign ParsedAttrInfoAllocAlign::Instance;
struct ParsedAttrInfoAllocSize : public ParsedAttrInfo {
  ParsedAttrInfoAllocSize() {
    AttrKind = ParsedAttr::AT_AllocSize;
    NumArgs = 1;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"alloc_size"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::alloc_size"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoAllocSize Instance;
};
const ParsedAttrInfoAllocSize ParsedAttrInfoAllocSize::Instance;
struct ParsedAttrInfoAlwaysDestroy : public ParsedAttrInfo {
  ParsedAttrInfoAlwaysDestroy() {
    AttrKind = ParsedAttr::AT_AlwaysDestroy;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"always_destroy"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::always_destroy"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoAlwaysDestroy Instance;
};
const ParsedAttrInfoAlwaysDestroy ParsedAttrInfoAlwaysDestroy::Instance;
struct ParsedAttrInfoAlwaysInline : public ParsedAttrInfo {
  ParsedAttrInfoAlwaysInline() {
    AttrKind = ParsedAttr::AT_AlwaysInline;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"always_inline"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::always_inline"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__forceinline"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_always_inline = 0,
    CXX11_gnu_always_inline = 1,
    Keyword_forceinline = 2,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_always_inline;
    case 1: return CXX11_gnu_always_inline;
    case 2: return Keyword_forceinline;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoAlwaysInline Instance;
};
const ParsedAttrInfoAlwaysInline ParsedAttrInfoAlwaysInline::Instance;
struct ParsedAttrInfoAnalyzerNoReturn : public ParsedAttrInfo {
  ParsedAttrInfoAnalyzerNoReturn() {
    AttrKind = ParsedAttr::AT_AnalyzerNoReturn;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"analyzer_noreturn"});
  }
static const ParsedAttrInfoAnalyzerNoReturn Instance;
};
const ParsedAttrInfoAnalyzerNoReturn ParsedAttrInfoAnalyzerNoReturn::Instance;
struct ParsedAttrInfoAnnotate : public ParsedAttrInfo {
  ParsedAttrInfoAnnotate() {
    AttrKind = ParsedAttr::AT_Annotate;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"annotate"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::annotate"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::annotate"});
  }
static const ParsedAttrInfoAnnotate Instance;
};
const ParsedAttrInfoAnnotate ParsedAttrInfoAnnotate::Instance;
struct ParsedAttrInfoAnyX86NoCallerSavedRegisters : public ParsedAttrInfo {
  ParsedAttrInfoAnyX86NoCallerSavedRegisters() {
    AttrKind = ParsedAttr::AT_AnyX86NoCallerSavedRegisters;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_caller_saved_registers"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::no_caller_saved_registers"});
  }
virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64);
}

static const ParsedAttrInfoAnyX86NoCallerSavedRegisters Instance;
};
const ParsedAttrInfoAnyX86NoCallerSavedRegisters ParsedAttrInfoAnyX86NoCallerSavedRegisters::Instance;
struct ParsedAttrInfoAnyX86NoCfCheck : public ParsedAttrInfo {
  ParsedAttrInfoAnyX86NoCfCheck() {
    AttrKind = ParsedAttr::AT_AnyX86NoCfCheck;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"nocf_check"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::nocf_check"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isFunctionLike(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions and function pointers";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_hasType_functionType, /*IsSupported=*/true));
}

static const ParsedAttrInfoAnyX86NoCfCheck Instance;
};
const ParsedAttrInfoAnyX86NoCfCheck ParsedAttrInfoAnyX86NoCfCheck::Instance;
struct ParsedAttrInfoArcWeakrefUnavailable : public ParsedAttrInfo {
  ParsedAttrInfoArcWeakrefUnavailable() {
    AttrKind = ParsedAttr::AT_ArcWeakrefUnavailable;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_arc_weak_reference_unavailable"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_arc_weak_reference_unavailable"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_arc_weak_reference_unavailable"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCInterfaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C interfaces";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoArcWeakrefUnavailable Instance;
};
const ParsedAttrInfoArcWeakrefUnavailable ParsedAttrInfoArcWeakrefUnavailable::Instance;
struct ParsedAttrInfoArgumentWithTypeTag : public ParsedAttrInfo {
  ParsedAttrInfoArgumentWithTypeTag() {
    AttrKind = ParsedAttr::AT_ArgumentWithTypeTag;
    NumArgs = 3;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"argument_with_type_tag"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::argument_with_type_tag"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::argument_with_type_tag"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"pointer_with_type_tag"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::pointer_with_type_tag"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::pointer_with_type_tag"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isHasFunctionProto(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "non-K&R-style functions";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_argument_with_type_tag = 0,
    CXX11_clang_argument_with_type_tag = 1,
    C2x_clang_argument_with_type_tag = 2,
    GNU_pointer_with_type_tag = 3,
    CXX11_clang_pointer_with_type_tag = 4,
    C2x_clang_pointer_with_type_tag = 5,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_argument_with_type_tag;
    case 1: return CXX11_clang_argument_with_type_tag;
    case 2: return C2x_clang_argument_with_type_tag;
    case 3: return GNU_pointer_with_type_tag;
    case 4: return CXX11_clang_pointer_with_type_tag;
    case 5: return C2x_clang_pointer_with_type_tag;
  }
}

static const ParsedAttrInfoArgumentWithTypeTag Instance;
};
const ParsedAttrInfoArgumentWithTypeTag ParsedAttrInfoArgumentWithTypeTag::Instance;
struct ParsedAttrInfoArmMveAlias : public ParsedAttrInfo {
  ParsedAttrInfoArmMveAlias() {
    AttrKind = ParsedAttr::AT_ArmMveAlias;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"__clang_arm_mve_alias"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::__clang_arm_mve_alias"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::__clang_arm_mve_alias"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::armeb || T.getArch() == llvm::Triple::thumbeb);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoArmMveAlias Instance;
};
const ParsedAttrInfoArmMveAlias ParsedAttrInfoArmMveAlias::Instance;
struct ParsedAttrInfoArmMveStrictPolymorphism : public ParsedAttrInfo {
  ParsedAttrInfoArmMveStrictPolymorphism() {
    AttrKind = ParsedAttr::AT_ArmMveStrictPolymorphism;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"__clang_arm_mve_strict_polymorphism"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::__clang_arm_mve_strict_polymorphism"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::__clang_arm_mve_strict_polymorphism"});
  }
virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::armeb || T.getArch() == llvm::Triple::thumbeb);
}

static const ParsedAttrInfoArmMveStrictPolymorphism Instance;
};
const ParsedAttrInfoArmMveStrictPolymorphism ParsedAttrInfoArmMveStrictPolymorphism::Instance;
struct ParsedAttrInfoArtificial : public ParsedAttrInfo {
  ParsedAttrInfoArtificial() {
    AttrKind = ParsedAttr::AT_Artificial;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"artificial"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::artificial"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isInlineFunction(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "inline functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoArtificial Instance;
};
const ParsedAttrInfoArtificial ParsedAttrInfoArtificial::Instance;
struct ParsedAttrInfoAssertCapability : public ParsedAttrInfo {
  ParsedAttrInfoAssertCapability() {
    AttrKind = ParsedAttr::AT_AssertCapability;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"assert_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::assert_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"assert_shared_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::assert_shared_capability"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_assert_capability = 0,
    CXX11_clang_assert_capability = 1,
    GNU_assert_shared_capability = 2,
    CXX11_clang_assert_shared_capability = 3,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_assert_capability;
    case 1: return CXX11_clang_assert_capability;
    case 2: return GNU_assert_shared_capability;
    case 3: return CXX11_clang_assert_shared_capability;
  }
}

static const ParsedAttrInfoAssertCapability Instance;
};
const ParsedAttrInfoAssertCapability ParsedAttrInfoAssertCapability::Instance;
struct ParsedAttrInfoAssertExclusiveLock : public ParsedAttrInfo {
  ParsedAttrInfoAssertExclusiveLock() {
    AttrKind = ParsedAttr::AT_AssertExclusiveLock;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"assert_exclusive_lock"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoAssertExclusiveLock Instance;
};
const ParsedAttrInfoAssertExclusiveLock ParsedAttrInfoAssertExclusiveLock::Instance;
struct ParsedAttrInfoAssertSharedLock : public ParsedAttrInfo {
  ParsedAttrInfoAssertSharedLock() {
    AttrKind = ParsedAttr::AT_AssertSharedLock;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"assert_shared_lock"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoAssertSharedLock Instance;
};
const ParsedAttrInfoAssertSharedLock ParsedAttrInfoAssertSharedLock::Instance;
struct ParsedAttrInfoAssumeAligned : public ParsedAttrInfo {
  ParsedAttrInfoAssumeAligned() {
    AttrKind = ParsedAttr::AT_AssumeAligned;
    NumArgs = 1;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"assume_aligned"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::assume_aligned"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D) && !isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods and functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoAssumeAligned Instance;
};
const ParsedAttrInfoAssumeAligned ParsedAttrInfoAssumeAligned::Instance;
struct ParsedAttrInfoAvailability : public ParsedAttrInfo {
  ParsedAttrInfoAvailability() {
    AttrKind = ParsedAttr::AT_Availability;
    NumArgs = 9;
    OptArgs = 0;
    HasCustomParsing = 1;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"availability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::availability"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::availability"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<NamedDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "named declarations";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_enum, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_enum_constant, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_field, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_namespace, /*IsSupported=*/LangOpts.CPlusPlus));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_category, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_implementation, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_property, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_protocol, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_type_alias, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoAvailability Instance;
};
const ParsedAttrInfoAvailability ParsedAttrInfoAvailability::Instance;
struct ParsedAttrInfoBPFPreserveAccessIndex : public ParsedAttrInfo {
  ParsedAttrInfoBPFPreserveAccessIndex() {
    AttrKind = ParsedAttr::AT_BPFPreserveAccessIndex;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"preserve_access_index"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::preserve_access_index"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::preserve_access_index"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, and classes";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if ((!LangOpts.CPlusPlus))
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::bpfel || T.getArch() == llvm::Triple::bpfeb);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoBPFPreserveAccessIndex Instance;
};
const ParsedAttrInfoBPFPreserveAccessIndex ParsedAttrInfoBPFPreserveAccessIndex::Instance;
struct ParsedAttrInfoBlocks : public ParsedAttrInfo {
  ParsedAttrInfoBlocks() {
    AttrKind = ParsedAttr::AT_Blocks;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"blocks"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::blocks"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::blocks"});
  }
static const ParsedAttrInfoBlocks Instance;
};
const ParsedAttrInfoBlocks ParsedAttrInfoBlocks::Instance;
struct ParsedAttrInfoCDecl : public ParsedAttrInfo {
  ParsedAttrInfoCDecl() {
    AttrKind = ParsedAttr::AT_CDecl;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cdecl"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::cdecl"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__cdecl"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_cdecl"});
  }
static const ParsedAttrInfoCDecl Instance;
};
const ParsedAttrInfoCDecl ParsedAttrInfoCDecl::Instance;
struct ParsedAttrInfoCFAuditedTransfer : public ParsedAttrInfo {
  ParsedAttrInfoCFAuditedTransfer() {
    AttrKind = ParsedAttr::AT_CFAuditedTransfer;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cf_audited_transfer"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::cf_audited_transfer"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::cf_audited_transfer"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCFAuditedTransfer Instance;
};
const ParsedAttrInfoCFAuditedTransfer ParsedAttrInfoCFAuditedTransfer::Instance;
struct ParsedAttrInfoCFConsumed : public ParsedAttrInfo {
  ParsedAttrInfoCFConsumed() {
    AttrKind = ParsedAttr::AT_CFConsumed;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cf_consumed"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::cf_consumed"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::cf_consumed"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoCFConsumed Instance;
};
const ParsedAttrInfoCFConsumed ParsedAttrInfoCFConsumed::Instance;
struct ParsedAttrInfoCFGuard : public ParsedAttrInfo {
  ParsedAttrInfoCFGuard() {
    AttrKind = ParsedAttr::AT_CFGuard;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"guard"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoCFGuard Instance;
};
const ParsedAttrInfoCFGuard ParsedAttrInfoCFGuard::Instance;
struct ParsedAttrInfoCFICanonicalJumpTable : public ParsedAttrInfo {
  ParsedAttrInfoCFICanonicalJumpTable() {
    AttrKind = ParsedAttr::AT_CFICanonicalJumpTable;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cfi_canonical_jump_table"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::cfi_canonical_jump_table"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::cfi_canonical_jump_table"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCFICanonicalJumpTable Instance;
};
const ParsedAttrInfoCFICanonicalJumpTable ParsedAttrInfoCFICanonicalJumpTable::Instance;
struct ParsedAttrInfoCFReturnsNotRetained : public ParsedAttrInfo {
  ParsedAttrInfoCFReturnsNotRetained() {
    AttrKind = ParsedAttr::AT_CFReturnsNotRetained;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cf_returns_not_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::cf_returns_not_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::cf_returns_not_retained"});
  }
static const ParsedAttrInfoCFReturnsNotRetained Instance;
};
const ParsedAttrInfoCFReturnsNotRetained ParsedAttrInfoCFReturnsNotRetained::Instance;
struct ParsedAttrInfoCFReturnsRetained : public ParsedAttrInfo {
  ParsedAttrInfoCFReturnsRetained() {
    AttrKind = ParsedAttr::AT_CFReturnsRetained;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cf_returns_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::cf_returns_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::cf_returns_retained"});
  }
static const ParsedAttrInfoCFReturnsRetained Instance;
};
const ParsedAttrInfoCFReturnsRetained ParsedAttrInfoCFReturnsRetained::Instance;
struct ParsedAttrInfoCFUnknownTransfer : public ParsedAttrInfo {
  ParsedAttrInfoCFUnknownTransfer() {
    AttrKind = ParsedAttr::AT_CFUnknownTransfer;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cf_unknown_transfer"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::cf_unknown_transfer"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::cf_unknown_transfer"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCFUnknownTransfer Instance;
};
const ParsedAttrInfoCFUnknownTransfer ParsedAttrInfoCFUnknownTransfer::Instance;
struct ParsedAttrInfoCPUDispatch : public ParsedAttrInfo {
  ParsedAttrInfoCPUDispatch() {
    AttrKind = ParsedAttr::AT_CPUDispatch;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cpu_dispatch"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::cpu_dispatch"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::cpu_dispatch"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"cpu_dispatch"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCPUDispatch Instance;
};
const ParsedAttrInfoCPUDispatch ParsedAttrInfoCPUDispatch::Instance;
struct ParsedAttrInfoCPUSpecific : public ParsedAttrInfo {
  ParsedAttrInfoCPUSpecific() {
    AttrKind = ParsedAttr::AT_CPUSpecific;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cpu_specific"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::cpu_specific"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::cpu_specific"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"cpu_specific"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCPUSpecific Instance;
};
const ParsedAttrInfoCPUSpecific ParsedAttrInfoCPUSpecific::Instance;
struct ParsedAttrInfoCUDAConstant : public ParsedAttrInfo {
  ParsedAttrInfoCUDAConstant() {
    AttrKind = ParsedAttr::AT_CUDAConstant;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"constant"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"__constant__"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CUDA)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoCUDAConstant Instance;
};
const ParsedAttrInfoCUDAConstant ParsedAttrInfoCUDAConstant::Instance;
struct ParsedAttrInfoCUDADevice : public ParsedAttrInfo {
  ParsedAttrInfoCUDADevice() {
    AttrKind = ParsedAttr::AT_CUDADevice;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"device"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"__device__"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions and variables";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CUDA)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoCUDADevice Instance;
};
const ParsedAttrInfoCUDADevice ParsedAttrInfoCUDADevice::Instance;
struct ParsedAttrInfoCUDAGlobal : public ParsedAttrInfo {
  ParsedAttrInfoCUDAGlobal() {
    AttrKind = ParsedAttr::AT_CUDAGlobal;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"global"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"__global__"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CUDA)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCUDAGlobal Instance;
};
const ParsedAttrInfoCUDAGlobal ParsedAttrInfoCUDAGlobal::Instance;
struct ParsedAttrInfoCUDAHost : public ParsedAttrInfo {
  ParsedAttrInfoCUDAHost() {
    AttrKind = ParsedAttr::AT_CUDAHost;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"host"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"__host__"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CUDA)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCUDAHost Instance;
};
const ParsedAttrInfoCUDAHost ParsedAttrInfoCUDAHost::Instance;
struct ParsedAttrInfoCUDAInvalidTarget : public ParsedAttrInfo {
  ParsedAttrInfoCUDAInvalidTarget() {
    AttrKind = ParsedAttr::AT_CUDAInvalidTarget;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CUDA)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

static const ParsedAttrInfoCUDAInvalidTarget Instance;
};
const ParsedAttrInfoCUDAInvalidTarget ParsedAttrInfoCUDAInvalidTarget::Instance;
struct ParsedAttrInfoCUDALaunchBounds : public ParsedAttrInfo {
  ParsedAttrInfoCUDALaunchBounds() {
    AttrKind = ParsedAttr::AT_CUDALaunchBounds;
    NumArgs = 1;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"launch_bounds"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"__launch_bounds__"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D) && !isFunctionLike(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods, functions, and function pointers";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CUDA)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_hasType_functionType, /*IsSupported=*/true));
}

static const ParsedAttrInfoCUDALaunchBounds Instance;
};
const ParsedAttrInfoCUDALaunchBounds ParsedAttrInfoCUDALaunchBounds::Instance;
struct ParsedAttrInfoCUDAShared : public ParsedAttrInfo {
  ParsedAttrInfoCUDAShared() {
    AttrKind = ParsedAttr::AT_CUDAShared;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"shared"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"__shared__"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CUDA)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoCUDAShared Instance;
};
const ParsedAttrInfoCUDAShared ParsedAttrInfoCUDAShared::Instance;
struct ParsedAttrInfoCXX11NoReturn : public ParsedAttrInfo {
  ParsedAttrInfoCXX11NoReturn() {
    AttrKind = ParsedAttr::AT_CXX11NoReturn;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"::noreturn"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCXX11NoReturn Instance;
};
const ParsedAttrInfoCXX11NoReturn ParsedAttrInfoCXX11NoReturn::Instance;
struct ParsedAttrInfoCallableWhen : public ParsedAttrInfo {
  ParsedAttrInfoCallableWhen() {
    AttrKind = ParsedAttr::AT_CallableWhen;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"callable_when"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::callable_when"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function_is_member, /*IsSupported=*/LangOpts.CPlusPlus));
}

static const ParsedAttrInfoCallableWhen Instance;
};
const ParsedAttrInfoCallableWhen ParsedAttrInfoCallableWhen::Instance;
struct ParsedAttrInfoCallback : public ParsedAttrInfo {
  ParsedAttrInfoCallback() {
    AttrKind = ParsedAttr::AT_Callback;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"callback"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::callback"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::callback"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCallback Instance;
};
const ParsedAttrInfoCallback ParsedAttrInfoCallback::Instance;
struct ParsedAttrInfoCapability : public ParsedAttrInfo {
  ParsedAttrInfoCapability() {
    AttrKind = ParsedAttr::AT_Capability;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"shared_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::shared_capability"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D) && !isa<TypedefNameDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, classes, and typedefs";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_capability = 0,
    CXX11_clang_capability = 1,
    GNU_shared_capability = 2,
    CXX11_clang_shared_capability = 3,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_capability;
    case 1: return CXX11_clang_capability;
    case 2: return GNU_shared_capability;
    case 3: return CXX11_clang_shared_capability;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_type_alias, /*IsSupported=*/true));
}

static const ParsedAttrInfoCapability Instance;
};
const ParsedAttrInfoCapability ParsedAttrInfoCapability::Instance;
struct ParsedAttrInfoCarriesDependency : public ParsedAttrInfo {
  ParsedAttrInfoCarriesDependency() {
    AttrKind = ParsedAttr::AT_CarriesDependency;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"carries_dependency"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"::carries_dependency"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D) && !isa<ObjCMethodDecl>(D) && !isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "parameters, Objective-C methods, and functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCarriesDependency Instance;
};
const ParsedAttrInfoCarriesDependency ParsedAttrInfoCarriesDependency::Instance;
struct ParsedAttrInfoCleanup : public ParsedAttrInfo {
  ParsedAttrInfoCleanup() {
    AttrKind = ParsedAttr::AT_Cleanup;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cleanup"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::cleanup"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isLocalVar(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "local variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoCleanup Instance;
};
const ParsedAttrInfoCleanup ParsedAttrInfoCleanup::Instance;
struct ParsedAttrInfoCodeSeg : public ParsedAttrInfo {
  ParsedAttrInfoCodeSeg() {
    AttrKind = ParsedAttr::AT_CodeSeg;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"code_seg"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions and classes";
    return false;
  }
  return true;
}

static const ParsedAttrInfoCodeSeg Instance;
};
const ParsedAttrInfoCodeSeg ParsedAttrInfoCodeSeg::Instance;
struct ParsedAttrInfoCold : public ParsedAttrInfo {
  ParsedAttrInfoCold() {
    AttrKind = ParsedAttr::AT_Cold;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"cold"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::cold"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoCold Instance;
};
const ParsedAttrInfoCold ParsedAttrInfoCold::Instance;
struct ParsedAttrInfoCommon : public ParsedAttrInfo {
  ParsedAttrInfoCommon() {
    AttrKind = ParsedAttr::AT_Common;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"common"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::common"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoCommon Instance;
};
const ParsedAttrInfoCommon ParsedAttrInfoCommon::Instance;
struct ParsedAttrInfoConst : public ParsedAttrInfo {
  ParsedAttrInfoConst() {
    AttrKind = ParsedAttr::AT_Const;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"const"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::const"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"__const"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::__const"});
  }
static const ParsedAttrInfoConst Instance;
};
const ParsedAttrInfoConst ParsedAttrInfoConst::Instance;
struct ParsedAttrInfoConstInit : public ParsedAttrInfo {
  ParsedAttrInfoConstInit() {
    AttrKind = ParsedAttr::AT_ConstInit;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"constinit"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"require_constant_initialization"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::require_constant_initialization"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isGlobalVar(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "global variables";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CPlusPlus)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Keyword_constinit = 0,
    GNU_require_constant_initialization = 1,
    CXX11_clang_require_constant_initialization = 2,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_constinit;
    case 1: return GNU_require_constant_initialization;
    case 2: return CXX11_clang_require_constant_initialization;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_global, /*IsSupported=*/true));
}

static const ParsedAttrInfoConstInit Instance;
};
const ParsedAttrInfoConstInit ParsedAttrInfoConstInit::Instance;
struct ParsedAttrInfoConstructor : public ParsedAttrInfo {
  ParsedAttrInfoConstructor() {
    AttrKind = ParsedAttr::AT_Constructor;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"constructor"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::constructor"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoConstructor Instance;
};
const ParsedAttrInfoConstructor ParsedAttrInfoConstructor::Instance;
struct ParsedAttrInfoConsumable : public ParsedAttrInfo {
  ParsedAttrInfoConsumable() {
    AttrKind = ParsedAttr::AT_Consumable;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"consumable"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::consumable"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoConsumable Instance;
};
const ParsedAttrInfoConsumable ParsedAttrInfoConsumable::Instance;
struct ParsedAttrInfoConsumableAutoCast : public ParsedAttrInfo {
  ParsedAttrInfoConsumableAutoCast() {
    AttrKind = ParsedAttr::AT_ConsumableAutoCast;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"consumable_auto_cast_state"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::consumable_auto_cast_state"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoConsumableAutoCast Instance;
};
const ParsedAttrInfoConsumableAutoCast ParsedAttrInfoConsumableAutoCast::Instance;
struct ParsedAttrInfoConsumableSetOnRead : public ParsedAttrInfo {
  ParsedAttrInfoConsumableSetOnRead() {
    AttrKind = ParsedAttr::AT_ConsumableSetOnRead;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"consumable_set_state_on_read"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::consumable_set_state_on_read"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoConsumableSetOnRead Instance;
};
const ParsedAttrInfoConsumableSetOnRead ParsedAttrInfoConsumableSetOnRead::Instance;
struct ParsedAttrInfoConvergent : public ParsedAttrInfo {
  ParsedAttrInfoConvergent() {
    AttrKind = ParsedAttr::AT_Convergent;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"convergent"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::convergent"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::convergent"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoConvergent Instance;
};
const ParsedAttrInfoConvergent ParsedAttrInfoConvergent::Instance;
struct ParsedAttrInfoDLLExport : public ParsedAttrInfo {
  ParsedAttrInfoDLLExport() {
    AttrKind = ParsedAttr::AT_DLLExport;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"dllexport"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"dllexport"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::dllexport"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<VarDecl>(D) && !isa<CXXRecordDecl>(D) && !isa<ObjCInterfaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions, variables, classes, and Objective-C interfaces";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64 || T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::aarch64) && (T.getOS() == llvm::Triple::Win32);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoDLLExport Instance;
};
const ParsedAttrInfoDLLExport ParsedAttrInfoDLLExport::Instance;
struct ParsedAttrInfoDLLExportStaticLocal : public ParsedAttrInfo {
  ParsedAttrInfoDLLExportStaticLocal() {
    AttrKind = ParsedAttr::AT_DLLExportStaticLocal;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64 || T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::aarch64) && (T.getOS() == llvm::Triple::Win32);
}

static const ParsedAttrInfoDLLExportStaticLocal Instance;
};
const ParsedAttrInfoDLLExportStaticLocal ParsedAttrInfoDLLExportStaticLocal::Instance;
struct ParsedAttrInfoDLLImport : public ParsedAttrInfo {
  ParsedAttrInfoDLLImport() {
    AttrKind = ParsedAttr::AT_DLLImport;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"dllimport"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"dllimport"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::dllimport"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<VarDecl>(D) && !isa<CXXRecordDecl>(D) && !isa<ObjCInterfaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions, variables, classes, and Objective-C interfaces";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64 || T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::aarch64) && (T.getOS() == llvm::Triple::Win32);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoDLLImport Instance;
};
const ParsedAttrInfoDLLImport ParsedAttrInfoDLLImport::Instance;
struct ParsedAttrInfoDLLImportStaticLocal : public ParsedAttrInfo {
  ParsedAttrInfoDLLImportStaticLocal() {
    AttrKind = ParsedAttr::AT_DLLImportStaticLocal;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64 || T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::aarch64) && (T.getOS() == llvm::Triple::Win32);
}

static const ParsedAttrInfoDLLImportStaticLocal Instance;
};
const ParsedAttrInfoDLLImportStaticLocal ParsedAttrInfoDLLImportStaticLocal::Instance;
struct ParsedAttrInfoDeprecated : public ParsedAttrInfo {
  ParsedAttrInfoDeprecated() {
    AttrKind = ParsedAttr::AT_Deprecated;
    NumArgs = 0;
    OptArgs = 2;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"deprecated"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::deprecated"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"deprecated"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"::deprecated"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"::deprecated"});
  }
static const ParsedAttrInfoDeprecated Instance;
};
const ParsedAttrInfoDeprecated ParsedAttrInfoDeprecated::Instance;
struct ParsedAttrInfoDestructor : public ParsedAttrInfo {
  ParsedAttrInfoDestructor() {
    AttrKind = ParsedAttr::AT_Destructor;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"destructor"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::destructor"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoDestructor Instance;
};
const ParsedAttrInfoDestructor ParsedAttrInfoDestructor::Instance;
struct ParsedAttrInfoDiagnoseIf : public ParsedAttrInfo {
  ParsedAttrInfoDiagnoseIf() {
    AttrKind = ParsedAttr::AT_DiagnoseIf;
    NumArgs = 3;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"diagnose_if"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D) && !isa<ObjCPropertyDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions, Objective-C methods, and Objective-C properties";
    return false;
  }
  return true;
}

static const ParsedAttrInfoDiagnoseIf Instance;
};
const ParsedAttrInfoDiagnoseIf ParsedAttrInfoDiagnoseIf::Instance;
struct ParsedAttrInfoDisableTailCalls : public ParsedAttrInfo {
  ParsedAttrInfoDisableTailCalls() {
    AttrKind = ParsedAttr::AT_DisableTailCalls;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"disable_tail_calls"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::disable_tail_calls"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::disable_tail_calls"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions and Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoDisableTailCalls Instance;
};
const ParsedAttrInfoDisableTailCalls ParsedAttrInfoDisableTailCalls::Instance;
struct ParsedAttrInfoEmptyBases : public ParsedAttrInfo {
  ParsedAttrInfoEmptyBases() {
    AttrKind = ParsedAttr::AT_EmptyBases;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"empty_bases"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "classes";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64 || T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::aarch64) && ( Target.getCXXABI().isMicrosoft() );
}

static const ParsedAttrInfoEmptyBases Instance;
};
const ParsedAttrInfoEmptyBases ParsedAttrInfoEmptyBases::Instance;
struct ParsedAttrInfoEnableIf : public ParsedAttrInfo {
  ParsedAttrInfoEnableIf() {
    AttrKind = ParsedAttr::AT_EnableIf;
    NumArgs = 2;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"enable_if"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoEnableIf Instance;
};
const ParsedAttrInfoEnableIf ParsedAttrInfoEnableIf::Instance;
struct ParsedAttrInfoEnumExtensibility : public ParsedAttrInfo {
  ParsedAttrInfoEnumExtensibility() {
    AttrKind = ParsedAttr::AT_EnumExtensibility;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"enum_extensibility"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::enum_extensibility"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::enum_extensibility"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<EnumDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "enums";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_enum, /*IsSupported=*/true));
}

static const ParsedAttrInfoEnumExtensibility Instance;
};
const ParsedAttrInfoEnumExtensibility ParsedAttrInfoEnumExtensibility::Instance;
struct ParsedAttrInfoExcludeFromExplicitInstantiation : public ParsedAttrInfo {
  ParsedAttrInfoExcludeFromExplicitInstantiation() {
    AttrKind = ParsedAttr::AT_ExcludeFromExplicitInstantiation;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"exclude_from_explicit_instantiation"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::exclude_from_explicit_instantiation"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::exclude_from_explicit_instantiation"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D) && !isa<FunctionDecl>(D) && !isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables, functions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoExcludeFromExplicitInstantiation Instance;
};
const ParsedAttrInfoExcludeFromExplicitInstantiation ParsedAttrInfoExcludeFromExplicitInstantiation::Instance;
struct ParsedAttrInfoExclusiveTrylockFunction : public ParsedAttrInfo {
  ParsedAttrInfoExclusiveTrylockFunction() {
    AttrKind = ParsedAttr::AT_ExclusiveTrylockFunction;
    NumArgs = 1;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"exclusive_trylock_function"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoExclusiveTrylockFunction Instance;
};
const ParsedAttrInfoExclusiveTrylockFunction ParsedAttrInfoExclusiveTrylockFunction::Instance;
struct ParsedAttrInfoExtVectorType : public ParsedAttrInfo {
  ParsedAttrInfoExtVectorType() {
    AttrKind = ParsedAttr::AT_ExtVectorType;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ext_vector_type"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<TypedefNameDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "typedefs";
    return false;
  }
  return true;
}

static const ParsedAttrInfoExtVectorType Instance;
};
const ParsedAttrInfoExtVectorType ParsedAttrInfoExtVectorType::Instance;
struct ParsedAttrInfoExternalSourceSymbol : public ParsedAttrInfo {
  ParsedAttrInfoExternalSourceSymbol() {
    AttrKind = ParsedAttr::AT_ExternalSourceSymbol;
    NumArgs = 0;
    OptArgs = 3;
    HasCustomParsing = 1;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"external_source_symbol"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::external_source_symbol"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::external_source_symbol"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<NamedDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "named declarations";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_enum, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_enum_constant, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_field, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_namespace, /*IsSupported=*/LangOpts.CPlusPlus));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_category, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_implementation, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_property, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_protocol, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_type_alias, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoExternalSourceSymbol Instance;
};
const ParsedAttrInfoExternalSourceSymbol ParsedAttrInfoExternalSourceSymbol::Instance;
struct ParsedAttrInfoFallThrough : public ParsedAttrInfo {
  ParsedAttrInfoFallThrough() {
    AttrKind = ParsedAttr::AT_FallThrough;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 1;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"::fallthrough"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"::fallthrough"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::fallthrough"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"fallthrough"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::fallthrough"});
  }
static const ParsedAttrInfoFallThrough Instance;
};
const ParsedAttrInfoFallThrough ParsedAttrInfoFallThrough::Instance;
struct ParsedAttrInfoFastCall : public ParsedAttrInfo {
  ParsedAttrInfoFastCall() {
    AttrKind = ParsedAttr::AT_FastCall;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"fastcall"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::fastcall"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__fastcall"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_fastcall"});
  }
static const ParsedAttrInfoFastCall Instance;
};
const ParsedAttrInfoFastCall ParsedAttrInfoFastCall::Instance;
struct ParsedAttrInfoFlagEnum : public ParsedAttrInfo {
  ParsedAttrInfoFlagEnum() {
    AttrKind = ParsedAttr::AT_FlagEnum;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"flag_enum"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::flag_enum"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::flag_enum"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<EnumDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "enums";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_enum, /*IsSupported=*/true));
}

static const ParsedAttrInfoFlagEnum Instance;
};
const ParsedAttrInfoFlagEnum ParsedAttrInfoFlagEnum::Instance;
struct ParsedAttrInfoFlatten : public ParsedAttrInfo {
  ParsedAttrInfoFlatten() {
    AttrKind = ParsedAttr::AT_Flatten;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"flatten"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::flatten"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoFlatten Instance;
};
const ParsedAttrInfoFlatten ParsedAttrInfoFlatten::Instance;
struct ParsedAttrInfoFormat : public ParsedAttrInfo {
  ParsedAttrInfoFormat() {
    AttrKind = ParsedAttr::AT_Format;
    NumArgs = 3;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"format"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::format"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D) && !isa<BlockDecl>(D) && !isHasFunctionProto(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods, blocks, and non-K&R-style functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoFormat Instance;
};
const ParsedAttrInfoFormat ParsedAttrInfoFormat::Instance;
struct ParsedAttrInfoFormatArg : public ParsedAttrInfo {
  ParsedAttrInfoFormatArg() {
    AttrKind = ParsedAttr::AT_FormatArg;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"format_arg"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::format_arg"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D) && !isHasFunctionProto(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods and non-K&R-style functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoFormatArg Instance;
};
const ParsedAttrInfoFormatArg ParsedAttrInfoFormatArg::Instance;
struct ParsedAttrInfoGNUInline : public ParsedAttrInfo {
  ParsedAttrInfoGNUInline() {
    AttrKind = ParsedAttr::AT_GNUInline;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"gnu_inline"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::gnu_inline"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoGNUInline Instance;
};
const ParsedAttrInfoGNUInline ParsedAttrInfoGNUInline::Instance;
struct ParsedAttrInfoGuardedBy : public ParsedAttrInfo {
  ParsedAttrInfoGuardedBy() {
    AttrKind = ParsedAttr::AT_GuardedBy;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"guarded_by"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FieldDecl>(D) && !isSharedVar(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "non-static data members and global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoGuardedBy Instance;
};
const ParsedAttrInfoGuardedBy ParsedAttrInfoGuardedBy::Instance;
struct ParsedAttrInfoGuardedVar : public ParsedAttrInfo {
  ParsedAttrInfoGuardedVar() {
    AttrKind = ParsedAttr::AT_GuardedVar;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"guarded_var"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::guarded_var"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FieldDecl>(D) && !isSharedVar(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "non-static data members and global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoGuardedVar Instance;
};
const ParsedAttrInfoGuardedVar ParsedAttrInfoGuardedVar::Instance;
struct ParsedAttrInfoHIPPinnedShadow : public ParsedAttrInfo {
  ParsedAttrInfoHIPPinnedShadow() {
    AttrKind = ParsedAttr::AT_HIPPinnedShadow;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"hip_pinned_shadow"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"__hip_pinned_shadow__"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.HIP)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoHIPPinnedShadow Instance;
};
const ParsedAttrInfoHIPPinnedShadow ParsedAttrInfoHIPPinnedShadow::Instance;
struct ParsedAttrInfoHot : public ParsedAttrInfo {
  ParsedAttrInfoHot() {
    AttrKind = ParsedAttr::AT_Hot;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"hot"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::hot"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoHot Instance;
};
const ParsedAttrInfoHot ParsedAttrInfoHot::Instance;
struct ParsedAttrInfoIBAction : public ParsedAttrInfo {
  ParsedAttrInfoIBAction() {
    AttrKind = ParsedAttr::AT_IBAction;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ibaction"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::ibaction"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::ibaction"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isObjCInstanceMethod(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "Objective-C instance methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method_is_instance, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoIBAction Instance;
};
const ParsedAttrInfoIBAction ParsedAttrInfoIBAction::Instance;
struct ParsedAttrInfoIBOutlet : public ParsedAttrInfo {
  ParsedAttrInfoIBOutlet() {
    AttrKind = ParsedAttr::AT_IBOutlet;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"iboutlet"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::iboutlet"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::iboutlet"});
  }
static const ParsedAttrInfoIBOutlet Instance;
};
const ParsedAttrInfoIBOutlet ParsedAttrInfoIBOutlet::Instance;
struct ParsedAttrInfoIBOutletCollection : public ParsedAttrInfo {
  ParsedAttrInfoIBOutletCollection() {
    AttrKind = ParsedAttr::AT_IBOutletCollection;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"iboutletcollection"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::iboutletcollection"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::iboutletcollection"});
  }
static const ParsedAttrInfoIBOutletCollection Instance;
};
const ParsedAttrInfoIBOutletCollection ParsedAttrInfoIBOutletCollection::Instance;
struct ParsedAttrInfoIFunc : public ParsedAttrInfo {
  ParsedAttrInfoIFunc() {
    AttrKind = ParsedAttr::AT_IFunc;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ifunc"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::ifunc"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getObjectFormat() == llvm::Triple::ELF);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoIFunc Instance;
};
const ParsedAttrInfoIFunc ParsedAttrInfoIFunc::Instance;
struct ParsedAttrInfoInitPriority : public ParsedAttrInfo {
  ParsedAttrInfoInitPriority() {
    AttrKind = ParsedAttr::AT_InitPriority;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"init_priority"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::init_priority"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoInitPriority Instance;
};
const ParsedAttrInfoInitPriority ParsedAttrInfoInitPriority::Instance;
struct ParsedAttrInfoIntelOclBicc : public ParsedAttrInfo {
  ParsedAttrInfoIntelOclBicc() {
    AttrKind = ParsedAttr::AT_IntelOclBicc;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"intel_ocl_bicc"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::intel_ocl_bicc"});
  }
static const ParsedAttrInfoIntelOclBicc Instance;
};
const ParsedAttrInfoIntelOclBicc ParsedAttrInfoIntelOclBicc::Instance;
struct ParsedAttrInfoInternalLinkage : public ParsedAttrInfo {
  ParsedAttrInfoInternalLinkage() {
    AttrKind = ParsedAttr::AT_InternalLinkage;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"internal_linkage"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::internal_linkage"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::internal_linkage"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D) && !isa<FunctionDecl>(D) && !isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables, functions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoInternalLinkage Instance;
};
const ParsedAttrInfoInternalLinkage ParsedAttrInfoInternalLinkage::Instance;
struct ParsedAttrInfoLTOVisibilityPublic : public ParsedAttrInfo {
  ParsedAttrInfoLTOVisibilityPublic() {
    AttrKind = ParsedAttr::AT_LTOVisibilityPublic;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"lto_visibility_public"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::lto_visibility_public"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::lto_visibility_public"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoLTOVisibilityPublic Instance;
};
const ParsedAttrInfoLTOVisibilityPublic ParsedAttrInfoLTOVisibilityPublic::Instance;
struct ParsedAttrInfoLayoutVersion : public ParsedAttrInfo {
  ParsedAttrInfoLayoutVersion() {
    AttrKind = ParsedAttr::AT_LayoutVersion;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"layout_version"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "classes";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64 || T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::aarch64) && ( Target.getCXXABI().isMicrosoft() );
}

static const ParsedAttrInfoLayoutVersion Instance;
};
const ParsedAttrInfoLayoutVersion ParsedAttrInfoLayoutVersion::Instance;
struct ParsedAttrInfoLifetimeBound : public ParsedAttrInfo {
  ParsedAttrInfoLifetimeBound() {
    AttrKind = ParsedAttr::AT_LifetimeBound;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"lifetimebound"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::lifetimebound"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D) && !isImplicitObjectParameter(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "parameters and implicit object parameters";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CPlusPlus)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

static const ParsedAttrInfoLifetimeBound Instance;
};
const ParsedAttrInfoLifetimeBound ParsedAttrInfoLifetimeBound::Instance;
struct ParsedAttrInfoLockReturned : public ParsedAttrInfo {
  ParsedAttrInfoLockReturned() {
    AttrKind = ParsedAttr::AT_LockReturned;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"lock_returned"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoLockReturned Instance;
};
const ParsedAttrInfoLockReturned ParsedAttrInfoLockReturned::Instance;
struct ParsedAttrInfoLockable : public ParsedAttrInfo {
  ParsedAttrInfoLockable() {
    AttrKind = ParsedAttr::AT_Lockable;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"lockable"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoLockable Instance;
};
const ParsedAttrInfoLockable ParsedAttrInfoLockable::Instance;
struct ParsedAttrInfoLocksExcluded : public ParsedAttrInfo {
  ParsedAttrInfoLocksExcluded() {
    AttrKind = ParsedAttr::AT_LocksExcluded;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"locks_excluded"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoLocksExcluded Instance;
};
const ParsedAttrInfoLocksExcluded ParsedAttrInfoLocksExcluded::Instance;
struct ParsedAttrInfoLoopHint : public ParsedAttrInfo {
  ParsedAttrInfoLoopHint() {
    AttrKind = ParsedAttr::AT_LoopHint;
    NumArgs = 3;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Pragma,"loop"});
    Spellings.push_back({AttributeCommonInfo::AS_Pragma,"unroll"});
    Spellings.push_back({AttributeCommonInfo::AS_Pragma,"nounroll"});
    Spellings.push_back({AttributeCommonInfo::AS_Pragma,"unroll_and_jam"});
    Spellings.push_back({AttributeCommonInfo::AS_Pragma,"nounroll_and_jam"});
  }
virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Pragma_clang_loop = 0,
    Pragma_unroll = 1,
    Pragma_nounroll = 2,
    Pragma_unroll_and_jam = 3,
    Pragma_nounroll_and_jam = 4,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Pragma_clang_loop;
    case 1: return Pragma_unroll;
    case 2: return Pragma_nounroll;
    case 3: return Pragma_unroll_and_jam;
    case 4: return Pragma_nounroll_and_jam;
  }
}

static const ParsedAttrInfoLoopHint Instance;
};
const ParsedAttrInfoLoopHint ParsedAttrInfoLoopHint::Instance;
struct ParsedAttrInfoMIGServerRoutine : public ParsedAttrInfo {
  ParsedAttrInfoMIGServerRoutine() {
    AttrKind = ParsedAttr::AT_MIGServerRoutine;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"mig_server_routine"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::mig_server_routine"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::mig_server_routine"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D) && !isa<BlockDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions, Objective-C methods, and blocks";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_block, /*IsSupported=*/LangOpts.Blocks));
}

static const ParsedAttrInfoMIGServerRoutine Instance;
};
const ParsedAttrInfoMIGServerRoutine ParsedAttrInfoMIGServerRoutine::Instance;
struct ParsedAttrInfoMSABI : public ParsedAttrInfo {
  ParsedAttrInfoMSABI() {
    AttrKind = ParsedAttr::AT_MSABI;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ms_abi"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::ms_abi"});
  }
static const ParsedAttrInfoMSABI Instance;
};
const ParsedAttrInfoMSABI ParsedAttrInfoMSABI::Instance;
struct ParsedAttrInfoMSAllocator : public ParsedAttrInfo {
  ParsedAttrInfoMSAllocator() {
    AttrKind = ParsedAttr::AT_MSAllocator;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"allocator"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoMSAllocator Instance;
};
const ParsedAttrInfoMSAllocator ParsedAttrInfoMSAllocator::Instance;
struct ParsedAttrInfoMSInheritance : public ParsedAttrInfo {
  ParsedAttrInfoMSInheritance() {
    AttrKind = ParsedAttr::AT_MSInheritance;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__single_inheritance"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__multiple_inheritance"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__virtual_inheritance"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__unspecified_inheritance"});
  }
virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.MicrosoftExt)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Keyword_single_inheritance = 0,
    Keyword_multiple_inheritance = 1,
    Keyword_virtual_inheritance = 2,
    Keyword_unspecified_inheritance = 3,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_single_inheritance;
    case 1: return Keyword_multiple_inheritance;
    case 2: return Keyword_virtual_inheritance;
    case 3: return Keyword_unspecified_inheritance;
  }
}

static const ParsedAttrInfoMSInheritance Instance;
};
const ParsedAttrInfoMSInheritance ParsedAttrInfoMSInheritance::Instance;
struct ParsedAttrInfoMSNoVTable : public ParsedAttrInfo {
  ParsedAttrInfoMSNoVTable() {
    AttrKind = ParsedAttr::AT_MSNoVTable;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"novtable"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "classes";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64 || T.getArch() == llvm::Triple::arm || T.getArch() == llvm::Triple::thumb || T.getArch() == llvm::Triple::aarch64) && ( Target.getCXXABI().isMicrosoft() );
}

static const ParsedAttrInfoMSNoVTable Instance;
};
const ParsedAttrInfoMSNoVTable ParsedAttrInfoMSNoVTable::Instance;
struct ParsedAttrInfoMSStruct : public ParsedAttrInfo {
  ParsedAttrInfoMSStruct() {
    AttrKind = ParsedAttr::AT_MSStruct;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ms_struct"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::ms_struct"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoMSStruct Instance;
};
const ParsedAttrInfoMSStruct ParsedAttrInfoMSStruct::Instance;
struct ParsedAttrInfoMayAlias : public ParsedAttrInfo {
  ParsedAttrInfoMayAlias() {
    AttrKind = ParsedAttr::AT_MayAlias;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"may_alias"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::may_alias"});
  }
static const ParsedAttrInfoMayAlias Instance;
};
const ParsedAttrInfoMayAlias ParsedAttrInfoMayAlias::Instance;
struct ParsedAttrInfoMicroMips : public ParsedAttrInfo {
  ParsedAttrInfoMicroMips() {
    AttrKind = ParsedAttr::AT_MicroMips;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"micromips"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::micromips"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::mips || T.getArch() == llvm::Triple::mipsel);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoMicroMips Instance;
};
const ParsedAttrInfoMicroMips ParsedAttrInfoMicroMips::Instance;
struct ParsedAttrInfoMinSize : public ParsedAttrInfo {
  ParsedAttrInfoMinSize() {
    AttrKind = ParsedAttr::AT_MinSize;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"minsize"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::minsize"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::minsize"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions and Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoMinSize Instance;
};
const ParsedAttrInfoMinSize ParsedAttrInfoMinSize::Instance;
struct ParsedAttrInfoMinVectorWidth : public ParsedAttrInfo {
  ParsedAttrInfoMinVectorWidth() {
    AttrKind = ParsedAttr::AT_MinVectorWidth;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"min_vector_width"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::min_vector_width"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::min_vector_width"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoMinVectorWidth Instance;
};
const ParsedAttrInfoMinVectorWidth ParsedAttrInfoMinVectorWidth::Instance;
struct ParsedAttrInfoMips16 : public ParsedAttrInfo {
  ParsedAttrInfoMips16() {
    AttrKind = ParsedAttr::AT_Mips16;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"mips16"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::mips16"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::mips || T.getArch() == llvm::Triple::mipsel);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoMips16 Instance;
};
const ParsedAttrInfoMips16 ParsedAttrInfoMips16::Instance;
struct ParsedAttrInfoMipsLongCall : public ParsedAttrInfo {
  ParsedAttrInfoMipsLongCall() {
    AttrKind = ParsedAttr::AT_MipsLongCall;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"long_call"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::long_call"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"far"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::far"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::mips || T.getArch() == llvm::Triple::mipsel || T.getArch() == llvm::Triple::mips64 || T.getArch() == llvm::Triple::mips64el);
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_long_call = 0,
    CXX11_gnu_long_call = 1,
    GNU_far = 2,
    CXX11_gnu_far = 3,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_long_call;
    case 1: return CXX11_gnu_long_call;
    case 2: return GNU_far;
    case 3: return CXX11_gnu_far;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoMipsLongCall Instance;
};
const ParsedAttrInfoMipsLongCall ParsedAttrInfoMipsLongCall::Instance;
struct ParsedAttrInfoMipsShortCall : public ParsedAttrInfo {
  ParsedAttrInfoMipsShortCall() {
    AttrKind = ParsedAttr::AT_MipsShortCall;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"short_call"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::short_call"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"near"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::near"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::mips || T.getArch() == llvm::Triple::mipsel || T.getArch() == llvm::Triple::mips64 || T.getArch() == llvm::Triple::mips64el);
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_short_call = 0,
    CXX11_gnu_short_call = 1,
    GNU_near = 2,
    CXX11_gnu_near = 3,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_short_call;
    case 1: return CXX11_gnu_short_call;
    case 2: return GNU_near;
    case 3: return CXX11_gnu_near;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoMipsShortCall Instance;
};
const ParsedAttrInfoMipsShortCall ParsedAttrInfoMipsShortCall::Instance;
struct ParsedAttrInfoMode : public ParsedAttrInfo {
  ParsedAttrInfoMode() {
    AttrKind = ParsedAttr::AT_Mode;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"mode"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::mode"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D) && !isa<EnumDecl>(D) && !isa<TypedefNameDecl>(D) && !isa<FieldDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "variables, enums, typedefs, and non-static data members";
    return false;
  }
  return true;
}

static const ParsedAttrInfoMode Instance;
};
const ParsedAttrInfoMode ParsedAttrInfoMode::Instance;
struct ParsedAttrInfoNSConsumed : public ParsedAttrInfo {
  ParsedAttrInfoNSConsumed() {
    AttrKind = ParsedAttr::AT_NSConsumed;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ns_consumed"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::ns_consumed"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::ns_consumed"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoNSConsumed Instance;
};
const ParsedAttrInfoNSConsumed ParsedAttrInfoNSConsumed::Instance;
struct ParsedAttrInfoNSConsumesSelf : public ParsedAttrInfo {
  ParsedAttrInfoNSConsumesSelf() {
    AttrKind = ParsedAttr::AT_NSConsumesSelf;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ns_consumes_self"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::ns_consumes_self"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::ns_consumes_self"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoNSConsumesSelf Instance;
};
const ParsedAttrInfoNSConsumesSelf ParsedAttrInfoNSConsumesSelf::Instance;
struct ParsedAttrInfoNSReturnsAutoreleased : public ParsedAttrInfo {
  ParsedAttrInfoNSReturnsAutoreleased() {
    AttrKind = ParsedAttr::AT_NSReturnsAutoreleased;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ns_returns_autoreleased"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::ns_returns_autoreleased"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::ns_returns_autoreleased"});
  }
static const ParsedAttrInfoNSReturnsAutoreleased Instance;
};
const ParsedAttrInfoNSReturnsAutoreleased ParsedAttrInfoNSReturnsAutoreleased::Instance;
struct ParsedAttrInfoNSReturnsNotRetained : public ParsedAttrInfo {
  ParsedAttrInfoNSReturnsNotRetained() {
    AttrKind = ParsedAttr::AT_NSReturnsNotRetained;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ns_returns_not_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::ns_returns_not_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::ns_returns_not_retained"});
  }
static const ParsedAttrInfoNSReturnsNotRetained Instance;
};
const ParsedAttrInfoNSReturnsNotRetained ParsedAttrInfoNSReturnsNotRetained::Instance;
struct ParsedAttrInfoNSReturnsRetained : public ParsedAttrInfo {
  ParsedAttrInfoNSReturnsRetained() {
    AttrKind = ParsedAttr::AT_NSReturnsRetained;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ns_returns_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::ns_returns_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::ns_returns_retained"});
  }
static const ParsedAttrInfoNSReturnsRetained Instance;
};
const ParsedAttrInfoNSReturnsRetained ParsedAttrInfoNSReturnsRetained::Instance;
struct ParsedAttrInfoNaked : public ParsedAttrInfo {
  ParsedAttrInfoNaked() {
    AttrKind = ParsedAttr::AT_Naked;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"naked"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::naked"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"naked"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNaked Instance;
};
const ParsedAttrInfoNaked ParsedAttrInfoNaked::Instance;
struct ParsedAttrInfoNeonPolyVectorType : public ParsedAttrInfo {
  ParsedAttrInfoNeonPolyVectorType() {
    AttrKind = ParsedAttr::AT_NeonPolyVectorType;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"neon_polyvector_type"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::neon_polyvector_type"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::neon_polyvector_type"});
  }
static const ParsedAttrInfoNeonPolyVectorType Instance;
};
const ParsedAttrInfoNeonPolyVectorType ParsedAttrInfoNeonPolyVectorType::Instance;
struct ParsedAttrInfoNeonVectorType : public ParsedAttrInfo {
  ParsedAttrInfoNeonVectorType() {
    AttrKind = ParsedAttr::AT_NeonVectorType;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"neon_vector_type"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::neon_vector_type"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::neon_vector_type"});
  }
static const ParsedAttrInfoNeonVectorType Instance;
};
const ParsedAttrInfoNeonVectorType ParsedAttrInfoNeonVectorType::Instance;
struct ParsedAttrInfoNoAlias : public ParsedAttrInfo {
  ParsedAttrInfoNoAlias() {
    AttrKind = ParsedAttr::AT_NoAlias;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"noalias"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoNoAlias Instance;
};
const ParsedAttrInfoNoAlias ParsedAttrInfoNoAlias::Instance;
struct ParsedAttrInfoNoBuiltin : public ParsedAttrInfo {
  ParsedAttrInfoNoBuiltin() {
    AttrKind = ParsedAttr::AT_NoBuiltin;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_builtin"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::no_builtin"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::no_builtin"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoBuiltin Instance;
};
const ParsedAttrInfoNoBuiltin ParsedAttrInfoNoBuiltin::Instance;
struct ParsedAttrInfoNoCommon : public ParsedAttrInfo {
  ParsedAttrInfoNoCommon() {
    AttrKind = ParsedAttr::AT_NoCommon;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"nocommon"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::nocommon"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoCommon Instance;
};
const ParsedAttrInfoNoCommon ParsedAttrInfoNoCommon::Instance;
struct ParsedAttrInfoNoDebug : public ParsedAttrInfo {
  ParsedAttrInfoNoDebug() {
    AttrKind = ParsedAttr::AT_NoDebug;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"nodebug"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::nodebug"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<TypedefNameDecl>(D) && !isFunctionLike(D) && !isa<ObjCMethodDecl>(D) && !isNonParmVar(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "typedefs, functions, function pointers, Objective-C methods, and variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_type_alias, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_hasType_functionType, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_not_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoDebug Instance;
};
const ParsedAttrInfoNoDebug ParsedAttrInfoNoDebug::Instance;
struct ParsedAttrInfoNoDeref : public ParsedAttrInfo {
  ParsedAttrInfoNoDeref() {
    AttrKind = ParsedAttr::AT_NoDeref;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"noderef"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::noderef"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::noderef"});
  }
static const ParsedAttrInfoNoDeref Instance;
};
const ParsedAttrInfoNoDeref ParsedAttrInfoNoDeref::Instance;
struct ParsedAttrInfoNoDestroy : public ParsedAttrInfo {
  ParsedAttrInfoNoDestroy() {
    AttrKind = ParsedAttr::AT_NoDestroy;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_destroy"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::no_destroy"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoDestroy Instance;
};
const ParsedAttrInfoNoDestroy ParsedAttrInfoNoDestroy::Instance;
struct ParsedAttrInfoNoDuplicate : public ParsedAttrInfo {
  ParsedAttrInfoNoDuplicate() {
    AttrKind = ParsedAttr::AT_NoDuplicate;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"noduplicate"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::noduplicate"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::noduplicate"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoDuplicate Instance;
};
const ParsedAttrInfoNoDuplicate ParsedAttrInfoNoDuplicate::Instance;
struct ParsedAttrInfoNoEscape : public ParsedAttrInfo {
  ParsedAttrInfoNoEscape() {
    AttrKind = ParsedAttr::AT_NoEscape;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"noescape"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::noescape"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::noescape"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoEscape Instance;
};
const ParsedAttrInfoNoEscape ParsedAttrInfoNoEscape::Instance;
struct ParsedAttrInfoNoInline : public ParsedAttrInfo {
  ParsedAttrInfoNoInline() {
    AttrKind = ParsedAttr::AT_NoInline;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"noinline"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::noinline"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"noinline"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoInline Instance;
};
const ParsedAttrInfoNoInline ParsedAttrInfoNoInline::Instance;
struct ParsedAttrInfoNoInstrumentFunction : public ParsedAttrInfo {
  ParsedAttrInfoNoInstrumentFunction() {
    AttrKind = ParsedAttr::AT_NoInstrumentFunction;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_instrument_function"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::no_instrument_function"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoInstrumentFunction Instance;
};
const ParsedAttrInfoNoInstrumentFunction ParsedAttrInfoNoInstrumentFunction::Instance;
struct ParsedAttrInfoNoMicroMips : public ParsedAttrInfo {
  ParsedAttrInfoNoMicroMips() {
    AttrKind = ParsedAttr::AT_NoMicroMips;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"nomicromips"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::nomicromips"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::mips || T.getArch() == llvm::Triple::mipsel);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoMicroMips Instance;
};
const ParsedAttrInfoNoMicroMips ParsedAttrInfoNoMicroMips::Instance;
struct ParsedAttrInfoNoMips16 : public ParsedAttrInfo {
  ParsedAttrInfoNoMips16() {
    AttrKind = ParsedAttr::AT_NoMips16;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"nomips16"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::nomips16"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::mips || T.getArch() == llvm::Triple::mipsel);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoMips16 Instance;
};
const ParsedAttrInfoNoMips16 ParsedAttrInfoNoMips16::Instance;
struct ParsedAttrInfoNoReturn : public ParsedAttrInfo {
  ParsedAttrInfoNoReturn() {
    AttrKind = ParsedAttr::AT_NoReturn;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"noreturn"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::noreturn"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"noreturn"});
  }
static const ParsedAttrInfoNoReturn Instance;
};
const ParsedAttrInfoNoReturn ParsedAttrInfoNoReturn::Instance;
struct ParsedAttrInfoNoSanitize : public ParsedAttrInfo {
  ParsedAttrInfoNoSanitize() {
    AttrKind = ParsedAttr::AT_NoSanitize;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_sanitize"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::no_sanitize"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::no_sanitize"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D) && !isGlobalVar(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions, Objective-C methods, and global variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_global, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoSanitize Instance;
};
const ParsedAttrInfoNoSanitize ParsedAttrInfoNoSanitize::Instance;
struct ParsedAttrInfoNoSanitizeSpecific : public ParsedAttrInfo {
  ParsedAttrInfoNoSanitizeSpecific() {
    AttrKind = ParsedAttr::AT_NoSanitizeSpecific;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_address_safety_analysis"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::no_address_safety_analysis"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_sanitize_address"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::no_sanitize_address"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_sanitize_thread"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::no_sanitize_thread"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_sanitize_memory"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::no_sanitize_memory"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::no_sanitize_memory"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isGlobalVar(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions and global variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_global, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoSanitizeSpecific Instance;
};
const ParsedAttrInfoNoSanitizeSpecific ParsedAttrInfoNoSanitizeSpecific::Instance;
struct ParsedAttrInfoNoSpeculativeLoadHardening : public ParsedAttrInfo {
  ParsedAttrInfoNoSpeculativeLoadHardening() {
    AttrKind = ParsedAttr::AT_NoSpeculativeLoadHardening;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_speculative_load_hardening"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::no_speculative_load_hardening"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::no_speculative_load_hardening"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions and Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoNoSpeculativeLoadHardening Instance;
};
const ParsedAttrInfoNoSpeculativeLoadHardening ParsedAttrInfoNoSpeculativeLoadHardening::Instance;
struct ParsedAttrInfoNoSplitStack : public ParsedAttrInfo {
  ParsedAttrInfoNoSplitStack() {
    AttrKind = ParsedAttr::AT_NoSplitStack;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_split_stack"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::no_split_stack"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoSplitStack Instance;
};
const ParsedAttrInfoNoSplitStack ParsedAttrInfoNoSplitStack::Instance;
struct ParsedAttrInfoNoStackProtector : public ParsedAttrInfo {
  ParsedAttrInfoNoStackProtector() {
    AttrKind = ParsedAttr::AT_NoStackProtector;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_stack_protector"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::no_stack_protector"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::no_stack_protector"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoStackProtector Instance;
};
const ParsedAttrInfoNoStackProtector ParsedAttrInfoNoStackProtector::Instance;
struct ParsedAttrInfoNoThreadSafetyAnalysis : public ParsedAttrInfo {
  ParsedAttrInfoNoThreadSafetyAnalysis() {
    AttrKind = ParsedAttr::AT_NoThreadSafetyAnalysis;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"no_thread_safety_analysis"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::no_thread_safety_analysis"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::no_thread_safety_analysis"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoThreadSafetyAnalysis Instance;
};
const ParsedAttrInfoNoThreadSafetyAnalysis ParsedAttrInfoNoThreadSafetyAnalysis::Instance;
struct ParsedAttrInfoNoThrow : public ParsedAttrInfo {
  ParsedAttrInfoNoThrow() {
    AttrKind = ParsedAttr::AT_NoThrow;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"nothrow"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::nothrow"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"nothrow"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isFunctionLike(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions and function pointers";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_hasType_functionType, /*IsSupported=*/true));
}

static const ParsedAttrInfoNoThrow Instance;
};
const ParsedAttrInfoNoThrow ParsedAttrInfoNoThrow::Instance;
struct ParsedAttrInfoNoUniqueAddress : public ParsedAttrInfo {
  ParsedAttrInfoNoUniqueAddress() {
    AttrKind = ParsedAttr::AT_NoUniqueAddress;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"::no_unique_address"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isNonBitField(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "non-bit-field non-static data members";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && ( Target.getCXXABI().isItaniumFamily() );
}

static const ParsedAttrInfoNoUniqueAddress Instance;
};
const ParsedAttrInfoNoUniqueAddress ParsedAttrInfoNoUniqueAddress::Instance;
struct ParsedAttrInfoNonNull : public ParsedAttrInfo {
  ParsedAttrInfoNonNull() {
    AttrKind = ParsedAttr::AT_NonNull;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"nonnull"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::nonnull"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D) && !isHasFunctionProto(D) && !isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions, methods, and parameters";
    return false;
  }
  return true;
}

static const ParsedAttrInfoNonNull Instance;
};
const ParsedAttrInfoNonNull ParsedAttrInfoNonNull::Instance;
struct ParsedAttrInfoNotTailCalled : public ParsedAttrInfo {
  ParsedAttrInfoNotTailCalled() {
    AttrKind = ParsedAttr::AT_NotTailCalled;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"not_tail_called"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::not_tail_called"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::not_tail_called"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoNotTailCalled Instance;
};
const ParsedAttrInfoNotTailCalled ParsedAttrInfoNotTailCalled::Instance;
struct ParsedAttrInfoOSConsumed : public ParsedAttrInfo {
  ParsedAttrInfoOSConsumed() {
    AttrKind = ParsedAttr::AT_OSConsumed;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"os_consumed"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::os_consumed"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::os_consumed"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoOSConsumed Instance;
};
const ParsedAttrInfoOSConsumed ParsedAttrInfoOSConsumed::Instance;
struct ParsedAttrInfoOSConsumesThis : public ParsedAttrInfo {
  ParsedAttrInfoOSConsumesThis() {
    AttrKind = ParsedAttr::AT_OSConsumesThis;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"os_consumes_this"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::os_consumes_this"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::os_consumes_this"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isNonStaticCXXMethod(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "non-static member functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoOSConsumesThis Instance;
};
const ParsedAttrInfoOSConsumesThis ParsedAttrInfoOSConsumesThis::Instance;
struct ParsedAttrInfoOSReturnsNotRetained : public ParsedAttrInfo {
  ParsedAttrInfoOSReturnsNotRetained() {
    AttrKind = ParsedAttr::AT_OSReturnsNotRetained;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"os_returns_not_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::os_returns_not_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::os_returns_not_retained"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D) && !isa<ObjCPropertyDecl>(D) && !isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions, Objective-C methods, Objective-C properties, and parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_property, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoOSReturnsNotRetained Instance;
};
const ParsedAttrInfoOSReturnsNotRetained ParsedAttrInfoOSReturnsNotRetained::Instance;
struct ParsedAttrInfoOSReturnsRetained : public ParsedAttrInfo {
  ParsedAttrInfoOSReturnsRetained() {
    AttrKind = ParsedAttr::AT_OSReturnsRetained;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"os_returns_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::os_returns_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::os_returns_retained"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D) && !isa<ObjCPropertyDecl>(D) && !isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions, Objective-C methods, Objective-C properties, and parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_property, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoOSReturnsRetained Instance;
};
const ParsedAttrInfoOSReturnsRetained ParsedAttrInfoOSReturnsRetained::Instance;
struct ParsedAttrInfoOSReturnsRetainedOnNonZero : public ParsedAttrInfo {
  ParsedAttrInfoOSReturnsRetainedOnNonZero() {
    AttrKind = ParsedAttr::AT_OSReturnsRetainedOnNonZero;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"os_returns_retained_on_non_zero"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::os_returns_retained_on_non_zero"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::os_returns_retained_on_non_zero"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoOSReturnsRetainedOnNonZero Instance;
};
const ParsedAttrInfoOSReturnsRetainedOnNonZero ParsedAttrInfoOSReturnsRetainedOnNonZero::Instance;
struct ParsedAttrInfoOSReturnsRetainedOnZero : public ParsedAttrInfo {
  ParsedAttrInfoOSReturnsRetainedOnZero() {
    AttrKind = ParsedAttr::AT_OSReturnsRetainedOnZero;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"os_returns_retained_on_zero"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::os_returns_retained_on_zero"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::os_returns_retained_on_zero"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoOSReturnsRetainedOnZero Instance;
};
const ParsedAttrInfoOSReturnsRetainedOnZero ParsedAttrInfoOSReturnsRetainedOnZero::Instance;
struct ParsedAttrInfoObjCBoxable : public ParsedAttrInfo {
  ParsedAttrInfoObjCBoxable() {
    AttrKind = ParsedAttr::AT_ObjCBoxable;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_boxable"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_boxable"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_boxable"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoObjCBoxable Instance;
};
const ParsedAttrInfoObjCBoxable ParsedAttrInfoObjCBoxable::Instance;
struct ParsedAttrInfoObjCBridge : public ParsedAttrInfo {
  ParsedAttrInfoObjCBridge() {
    AttrKind = ParsedAttr::AT_ObjCBridge;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_bridge"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_bridge"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_bridge"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D) && !isa<TypedefNameDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, classes, and typedefs";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_type_alias, /*IsSupported=*/true));
}

static const ParsedAttrInfoObjCBridge Instance;
};
const ParsedAttrInfoObjCBridge ParsedAttrInfoObjCBridge::Instance;
struct ParsedAttrInfoObjCBridgeMutable : public ParsedAttrInfo {
  ParsedAttrInfoObjCBridgeMutable() {
    AttrKind = ParsedAttr::AT_ObjCBridgeMutable;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_bridge_mutable"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_bridge_mutable"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_bridge_mutable"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoObjCBridgeMutable Instance;
};
const ParsedAttrInfoObjCBridgeMutable ParsedAttrInfoObjCBridgeMutable::Instance;
struct ParsedAttrInfoObjCBridgeRelated : public ParsedAttrInfo {
  ParsedAttrInfoObjCBridgeRelated() {
    AttrKind = ParsedAttr::AT_ObjCBridgeRelated;
    NumArgs = 3;
    OptArgs = 0;
    HasCustomParsing = 1;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_bridge_related"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_bridge_related"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_bridge_related"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoObjCBridgeRelated Instance;
};
const ParsedAttrInfoObjCBridgeRelated ParsedAttrInfoObjCBridgeRelated::Instance;
struct ParsedAttrInfoObjCClassStub : public ParsedAttrInfo {
  ParsedAttrInfoObjCClassStub() {
    AttrKind = ParsedAttr::AT_ObjCClassStub;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_class_stub"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_class_stub"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_class_stub"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCInterfaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C interfaces";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if ((LangOpts.ObjCRuntime.allowsClassStubs()))
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCClassStub Instance;
};
const ParsedAttrInfoObjCClassStub ParsedAttrInfoObjCClassStub::Instance;
struct ParsedAttrInfoObjCDesignatedInitializer : public ParsedAttrInfo {
  ParsedAttrInfoObjCDesignatedInitializer() {
    AttrKind = ParsedAttr::AT_ObjCDesignatedInitializer;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_designated_initializer"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_designated_initializer"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_designated_initializer"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCDesignatedInitializer Instance;
};
const ParsedAttrInfoObjCDesignatedInitializer ParsedAttrInfoObjCDesignatedInitializer::Instance;
struct ParsedAttrInfoObjCDirect : public ParsedAttrInfo {
  ParsedAttrInfoObjCDirect() {
    AttrKind = ParsedAttr::AT_ObjCDirect;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_direct"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_direct"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_direct"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.ObjC)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCDirect Instance;
};
const ParsedAttrInfoObjCDirect ParsedAttrInfoObjCDirect::Instance;
struct ParsedAttrInfoObjCDirectMembers : public ParsedAttrInfo {
  ParsedAttrInfoObjCDirectMembers() {
    AttrKind = ParsedAttr::AT_ObjCDirectMembers;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_direct_members"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_direct_members"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_direct_members"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCImplDecl>(D) && !isa<ObjCInterfaceDecl>(D) && !isa<ObjCCategoryDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C implementation declarations, Objective-C interfaces, and Objective-C containers";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.ObjC)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_implementation, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_category, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCDirectMembers Instance;
};
const ParsedAttrInfoObjCDirectMembers ParsedAttrInfoObjCDirectMembers::Instance;
struct ParsedAttrInfoObjCException : public ParsedAttrInfo {
  ParsedAttrInfoObjCException() {
    AttrKind = ParsedAttr::AT_ObjCException;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_exception"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_exception"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_exception"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCInterfaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C interfaces";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCException Instance;
};
const ParsedAttrInfoObjCException ParsedAttrInfoObjCException::Instance;
struct ParsedAttrInfoObjCExplicitProtocolImpl : public ParsedAttrInfo {
  ParsedAttrInfoObjCExplicitProtocolImpl() {
    AttrKind = ParsedAttr::AT_ObjCExplicitProtocolImpl;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_protocol_requires_explicit_implementation"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_protocol_requires_explicit_implementation"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_protocol_requires_explicit_implementation"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCProtocolDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C protocols";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_protocol, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCExplicitProtocolImpl Instance;
};
const ParsedAttrInfoObjCExplicitProtocolImpl ParsedAttrInfoObjCExplicitProtocolImpl::Instance;
struct ParsedAttrInfoObjCExternallyRetained : public ParsedAttrInfo {
  ParsedAttrInfoObjCExternallyRetained() {
    AttrKind = ParsedAttr::AT_ObjCExternallyRetained;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_externally_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_externally_retained"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_externally_retained"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isNonParmVar(D) && !isa<FunctionDecl>(D) && !isa<BlockDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables, functions, blocks, and Objective-C methods";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.ObjCAutoRefCount)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_not_is_parameter, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_block, /*IsSupported=*/LangOpts.Blocks));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCExternallyRetained Instance;
};
const ParsedAttrInfoObjCExternallyRetained ParsedAttrInfoObjCExternallyRetained::Instance;
struct ParsedAttrInfoObjCGC : public ParsedAttrInfo {
  ParsedAttrInfoObjCGC() {
    AttrKind = ParsedAttr::AT_ObjCGC;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_gc"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_gc"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_gc"});
  }
static const ParsedAttrInfoObjCGC Instance;
};
const ParsedAttrInfoObjCGC ParsedAttrInfoObjCGC::Instance;
struct ParsedAttrInfoObjCIndependentClass : public ParsedAttrInfo {
  ParsedAttrInfoObjCIndependentClass() {
    AttrKind = ParsedAttr::AT_ObjCIndependentClass;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_independent_class"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_independent_class"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_independent_class"});
  }
static const ParsedAttrInfoObjCIndependentClass Instance;
};
const ParsedAttrInfoObjCIndependentClass ParsedAttrInfoObjCIndependentClass::Instance;
struct ParsedAttrInfoObjCInertUnsafeUnretained : public ParsedAttrInfo {
  ParsedAttrInfoObjCInertUnsafeUnretained() {
    AttrKind = ParsedAttr::AT_ObjCInertUnsafeUnretained;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__unsafe_unretained"});
  }
static const ParsedAttrInfoObjCInertUnsafeUnretained Instance;
};
const ParsedAttrInfoObjCInertUnsafeUnretained ParsedAttrInfoObjCInertUnsafeUnretained::Instance;
struct ParsedAttrInfoObjCKindOf : public ParsedAttrInfo {
  ParsedAttrInfoObjCKindOf() {
    AttrKind = ParsedAttr::AT_ObjCKindOf;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__kindof"});
  }
static const ParsedAttrInfoObjCKindOf Instance;
};
const ParsedAttrInfoObjCKindOf ParsedAttrInfoObjCKindOf::Instance;
struct ParsedAttrInfoObjCMethodFamily : public ParsedAttrInfo {
  ParsedAttrInfoObjCMethodFamily() {
    AttrKind = ParsedAttr::AT_ObjCMethodFamily;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_method_family"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_method_family"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_method_family"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCMethodFamily Instance;
};
const ParsedAttrInfoObjCMethodFamily ParsedAttrInfoObjCMethodFamily::Instance;
struct ParsedAttrInfoObjCNSObject : public ParsedAttrInfo {
  ParsedAttrInfoObjCNSObject() {
    AttrKind = ParsedAttr::AT_ObjCNSObject;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"NSObject"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::NSObject"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::NSObject"});
  }
static const ParsedAttrInfoObjCNSObject Instance;
};
const ParsedAttrInfoObjCNSObject ParsedAttrInfoObjCNSObject::Instance;
struct ParsedAttrInfoObjCNonLazyClass : public ParsedAttrInfo {
  ParsedAttrInfoObjCNonLazyClass() {
    AttrKind = ParsedAttr::AT_ObjCNonLazyClass;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_nonlazy_class"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_nonlazy_class"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_nonlazy_class"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCInterfaceDecl>(D) && !isa<ObjCImplDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C interfaces and Objective-C implementation declarations";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.ObjC)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_implementation, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCNonLazyClass Instance;
};
const ParsedAttrInfoObjCNonLazyClass ParsedAttrInfoObjCNonLazyClass::Instance;
struct ParsedAttrInfoObjCOwnership : public ParsedAttrInfo {
  ParsedAttrInfoObjCOwnership() {
    AttrKind = ParsedAttr::AT_ObjCOwnership;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_ownership"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_ownership"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_ownership"});
  }
static const ParsedAttrInfoObjCOwnership Instance;
};
const ParsedAttrInfoObjCOwnership ParsedAttrInfoObjCOwnership::Instance;
struct ParsedAttrInfoObjCPreciseLifetime : public ParsedAttrInfo {
  ParsedAttrInfoObjCPreciseLifetime() {
    AttrKind = ParsedAttr::AT_ObjCPreciseLifetime;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_precise_lifetime"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_precise_lifetime"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_precise_lifetime"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoObjCPreciseLifetime Instance;
};
const ParsedAttrInfoObjCPreciseLifetime ParsedAttrInfoObjCPreciseLifetime::Instance;
struct ParsedAttrInfoObjCRequiresPropertyDefs : public ParsedAttrInfo {
  ParsedAttrInfoObjCRequiresPropertyDefs() {
    AttrKind = ParsedAttr::AT_ObjCRequiresPropertyDefs;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_requires_property_definitions"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_requires_property_definitions"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_requires_property_definitions"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCInterfaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C interfaces";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCRequiresPropertyDefs Instance;
};
const ParsedAttrInfoObjCRequiresPropertyDefs ParsedAttrInfoObjCRequiresPropertyDefs::Instance;
struct ParsedAttrInfoObjCRequiresSuper : public ParsedAttrInfo {
  ParsedAttrInfoObjCRequiresSuper() {
    AttrKind = ParsedAttr::AT_ObjCRequiresSuper;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_requires_super"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_requires_super"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_requires_super"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCRequiresSuper Instance;
};
const ParsedAttrInfoObjCRequiresSuper ParsedAttrInfoObjCRequiresSuper::Instance;
struct ParsedAttrInfoObjCReturnsInnerPointer : public ParsedAttrInfo {
  ParsedAttrInfoObjCReturnsInnerPointer() {
    AttrKind = ParsedAttr::AT_ObjCReturnsInnerPointer;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_returns_inner_pointer"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_returns_inner_pointer"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_returns_inner_pointer"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D) && !isa<ObjCPropertyDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods and Objective-C properties";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_property, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCReturnsInnerPointer Instance;
};
const ParsedAttrInfoObjCReturnsInnerPointer ParsedAttrInfoObjCReturnsInnerPointer::Instance;
struct ParsedAttrInfoObjCRootClass : public ParsedAttrInfo {
  ParsedAttrInfoObjCRootClass() {
    AttrKind = ParsedAttr::AT_ObjCRootClass;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_root_class"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_root_class"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_root_class"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCInterfaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C interfaces";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCRootClass Instance;
};
const ParsedAttrInfoObjCRootClass ParsedAttrInfoObjCRootClass::Instance;
struct ParsedAttrInfoObjCRuntimeName : public ParsedAttrInfo {
  ParsedAttrInfoObjCRuntimeName() {
    AttrKind = ParsedAttr::AT_ObjCRuntimeName;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_runtime_name"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_runtime_name"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_runtime_name"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCInterfaceDecl>(D) && !isa<ObjCProtocolDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C interfaces and Objective-C protocols";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_protocol, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCRuntimeName Instance;
};
const ParsedAttrInfoObjCRuntimeName ParsedAttrInfoObjCRuntimeName::Instance;
struct ParsedAttrInfoObjCRuntimeVisible : public ParsedAttrInfo {
  ParsedAttrInfoObjCRuntimeVisible() {
    AttrKind = ParsedAttr::AT_ObjCRuntimeVisible;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_runtime_visible"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_runtime_visible"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_runtime_visible"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCInterfaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C interfaces";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCRuntimeVisible Instance;
};
const ParsedAttrInfoObjCRuntimeVisible ParsedAttrInfoObjCRuntimeVisible::Instance;
struct ParsedAttrInfoObjCSubclassingRestricted : public ParsedAttrInfo {
  ParsedAttrInfoObjCSubclassingRestricted() {
    AttrKind = ParsedAttr::AT_ObjCSubclassingRestricted;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"objc_subclassing_restricted"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::objc_subclassing_restricted"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::objc_subclassing_restricted"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCInterfaceDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "Objective-C interfaces";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_interface, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoObjCSubclassingRestricted Instance;
};
const ParsedAttrInfoObjCSubclassingRestricted ParsedAttrInfoObjCSubclassingRestricted::Instance;
struct ParsedAttrInfoOpenCLAccess : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLAccess() {
    AttrKind = ParsedAttr::AT_OpenCLAccess;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__read_only"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"read_only"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__write_only"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"write_only"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__read_write"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"read_write"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D) && !isa<TypedefNameDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "parameters and typedefs";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Keyword_read_only = 0,
    Keyword_write_only = 2,
    Keyword_read_write = 4,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_read_only;
    case 1: return Keyword_read_only;
    case 2: return Keyword_write_only;
    case 3: return Keyword_write_only;
    case 4: return Keyword_read_write;
    case 5: return Keyword_read_write;
  }
}

static const ParsedAttrInfoOpenCLAccess Instance;
};
const ParsedAttrInfoOpenCLAccess ParsedAttrInfoOpenCLAccess::Instance;
struct ParsedAttrInfoOpenCLConstantAddressSpace : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLConstantAddressSpace() {
    AttrKind = ParsedAttr::AT_OpenCLConstantAddressSpace;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__constant"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"constant"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"opencl_constant"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::opencl_constant"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::opencl_constant"});
  }
virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Keyword_constant = 0,
    GNU_opencl_constant = 2,
    CXX11_clang_opencl_constant = 3,
    C2x_clang_opencl_constant = 4,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_constant;
    case 1: return Keyword_constant;
    case 2: return GNU_opencl_constant;
    case 3: return CXX11_clang_opencl_constant;
    case 4: return C2x_clang_opencl_constant;
  }
}

static const ParsedAttrInfoOpenCLConstantAddressSpace Instance;
};
const ParsedAttrInfoOpenCLConstantAddressSpace ParsedAttrInfoOpenCLConstantAddressSpace::Instance;
struct ParsedAttrInfoOpenCLGenericAddressSpace : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLGenericAddressSpace() {
    AttrKind = ParsedAttr::AT_OpenCLGenericAddressSpace;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__generic"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"generic"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"opencl_generic"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::opencl_generic"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::opencl_generic"});
  }
virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Keyword_generic = 0,
    GNU_opencl_generic = 2,
    CXX11_clang_opencl_generic = 3,
    C2x_clang_opencl_generic = 4,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_generic;
    case 1: return Keyword_generic;
    case 2: return GNU_opencl_generic;
    case 3: return CXX11_clang_opencl_generic;
    case 4: return C2x_clang_opencl_generic;
  }
}

static const ParsedAttrInfoOpenCLGenericAddressSpace Instance;
};
const ParsedAttrInfoOpenCLGenericAddressSpace ParsedAttrInfoOpenCLGenericAddressSpace::Instance;
struct ParsedAttrInfoOpenCLGlobalAddressSpace : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLGlobalAddressSpace() {
    AttrKind = ParsedAttr::AT_OpenCLGlobalAddressSpace;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__global"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"global"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"opencl_global"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::opencl_global"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::opencl_global"});
  }
virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Keyword_global = 0,
    GNU_opencl_global = 2,
    CXX11_clang_opencl_global = 3,
    C2x_clang_opencl_global = 4,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_global;
    case 1: return Keyword_global;
    case 2: return GNU_opencl_global;
    case 3: return CXX11_clang_opencl_global;
    case 4: return C2x_clang_opencl_global;
  }
}

static const ParsedAttrInfoOpenCLGlobalAddressSpace Instance;
};
const ParsedAttrInfoOpenCLGlobalAddressSpace ParsedAttrInfoOpenCLGlobalAddressSpace::Instance;
struct ParsedAttrInfoOpenCLIntelReqdSubGroupSize : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLIntelReqdSubGroupSize() {
    AttrKind = ParsedAttr::AT_OpenCLIntelReqdSubGroupSize;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"intel_reqd_sub_group_size"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoOpenCLIntelReqdSubGroupSize Instance;
};
const ParsedAttrInfoOpenCLIntelReqdSubGroupSize ParsedAttrInfoOpenCLIntelReqdSubGroupSize::Instance;
struct ParsedAttrInfoOpenCLKernel : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLKernel() {
    AttrKind = ParsedAttr::AT_OpenCLKernel;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__kernel"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"kernel"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoOpenCLKernel Instance;
};
const ParsedAttrInfoOpenCLKernel ParsedAttrInfoOpenCLKernel::Instance;
struct ParsedAttrInfoOpenCLLocalAddressSpace : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLLocalAddressSpace() {
    AttrKind = ParsedAttr::AT_OpenCLLocalAddressSpace;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__local"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"local"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"opencl_local"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::opencl_local"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::opencl_local"});
  }
virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Keyword_local = 0,
    GNU_opencl_local = 2,
    CXX11_clang_opencl_local = 3,
    C2x_clang_opencl_local = 4,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_local;
    case 1: return Keyword_local;
    case 2: return GNU_opencl_local;
    case 3: return CXX11_clang_opencl_local;
    case 4: return C2x_clang_opencl_local;
  }
}

static const ParsedAttrInfoOpenCLLocalAddressSpace Instance;
};
const ParsedAttrInfoOpenCLLocalAddressSpace ParsedAttrInfoOpenCLLocalAddressSpace::Instance;
struct ParsedAttrInfoOpenCLNoSVM : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLNoSVM() {
    AttrKind = ParsedAttr::AT_OpenCLNoSVM;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"nosvm"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.OpenCL)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
}

static const ParsedAttrInfoOpenCLNoSVM Instance;
};
const ParsedAttrInfoOpenCLNoSVM ParsedAttrInfoOpenCLNoSVM::Instance;
struct ParsedAttrInfoOpenCLPrivateAddressSpace : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLPrivateAddressSpace() {
    AttrKind = ParsedAttr::AT_OpenCLPrivateAddressSpace;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__private"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"private"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"opencl_private"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::opencl_private"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::opencl_private"});
  }
virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Keyword_private = 0,
    GNU_opencl_private = 2,
    CXX11_clang_opencl_private = 3,
    C2x_clang_opencl_private = 4,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_private;
    case 1: return Keyword_private;
    case 2: return GNU_opencl_private;
    case 3: return CXX11_clang_opencl_private;
    case 4: return C2x_clang_opencl_private;
  }
}

static const ParsedAttrInfoOpenCLPrivateAddressSpace Instance;
};
const ParsedAttrInfoOpenCLPrivateAddressSpace ParsedAttrInfoOpenCLPrivateAddressSpace::Instance;
struct ParsedAttrInfoOpenCLUnrollHint : public ParsedAttrInfo {
  ParsedAttrInfoOpenCLUnrollHint() {
    AttrKind = ParsedAttr::AT_OpenCLUnrollHint;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"opencl_unroll_hint"});
  }
static const ParsedAttrInfoOpenCLUnrollHint Instance;
};
const ParsedAttrInfoOpenCLUnrollHint ParsedAttrInfoOpenCLUnrollHint::Instance;
struct ParsedAttrInfoOptimizeNone : public ParsedAttrInfo {
  ParsedAttrInfoOptimizeNone() {
    AttrKind = ParsedAttr::AT_OptimizeNone;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"optnone"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::optnone"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::optnone"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions and Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoOptimizeNone Instance;
};
const ParsedAttrInfoOptimizeNone ParsedAttrInfoOptimizeNone::Instance;
struct ParsedAttrInfoOverloadable : public ParsedAttrInfo {
  ParsedAttrInfoOverloadable() {
    AttrKind = ParsedAttr::AT_Overloadable;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"overloadable"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::overloadable"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::overloadable"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoOverloadable Instance;
};
const ParsedAttrInfoOverloadable ParsedAttrInfoOverloadable::Instance;
struct ParsedAttrInfoOwner : public ParsedAttrInfo {
  ParsedAttrInfoOwner() {
    AttrKind = ParsedAttr::AT_Owner;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gsl::Owner"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isStruct(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "structs";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record_not_is_union, /*IsSupported=*/true));
}

static const ParsedAttrInfoOwner Instance;
};
const ParsedAttrInfoOwner ParsedAttrInfoOwner::Instance;
struct ParsedAttrInfoOwnership : public ParsedAttrInfo {
  ParsedAttrInfoOwnership() {
    AttrKind = ParsedAttr::AT_Ownership;
    NumArgs = 1;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ownership_holds"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::ownership_holds"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::ownership_holds"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ownership_returns"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::ownership_returns"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::ownership_returns"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"ownership_takes"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::ownership_takes"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::ownership_takes"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isHasFunctionProto(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "non-K&R-style functions";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_ownership_holds = 0,
    CXX11_clang_ownership_holds = 1,
    C2x_clang_ownership_holds = 2,
    GNU_ownership_returns = 3,
    CXX11_clang_ownership_returns = 4,
    C2x_clang_ownership_returns = 5,
    GNU_ownership_takes = 6,
    CXX11_clang_ownership_takes = 7,
    C2x_clang_ownership_takes = 8,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_ownership_holds;
    case 1: return CXX11_clang_ownership_holds;
    case 2: return C2x_clang_ownership_holds;
    case 3: return GNU_ownership_returns;
    case 4: return CXX11_clang_ownership_returns;
    case 5: return C2x_clang_ownership_returns;
    case 6: return GNU_ownership_takes;
    case 7: return CXX11_clang_ownership_takes;
    case 8: return C2x_clang_ownership_takes;
  }
}

static const ParsedAttrInfoOwnership Instance;
};
const ParsedAttrInfoOwnership ParsedAttrInfoOwnership::Instance;
struct ParsedAttrInfoPacked : public ParsedAttrInfo {
  ParsedAttrInfoPacked() {
    AttrKind = ParsedAttr::AT_Packed;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"packed"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::packed"});
  }
static const ParsedAttrInfoPacked Instance;
};
const ParsedAttrInfoPacked ParsedAttrInfoPacked::Instance;
struct ParsedAttrInfoParamTypestate : public ParsedAttrInfo {
  ParsedAttrInfoParamTypestate() {
    AttrKind = ParsedAttr::AT_ParamTypestate;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"param_typestate"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::param_typestate"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoParamTypestate Instance;
};
const ParsedAttrInfoParamTypestate ParsedAttrInfoParamTypestate::Instance;
struct ParsedAttrInfoPascal : public ParsedAttrInfo {
  ParsedAttrInfoPascal() {
    AttrKind = ParsedAttr::AT_Pascal;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"pascal"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::pascal"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::pascal"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__pascal"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_pascal"});
  }
static const ParsedAttrInfoPascal Instance;
};
const ParsedAttrInfoPascal ParsedAttrInfoPascal::Instance;
struct ParsedAttrInfoPassObjectSize : public ParsedAttrInfo {
  ParsedAttrInfoPassObjectSize() {
    AttrKind = ParsedAttr::AT_PassObjectSize;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"pass_object_size"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::pass_object_size"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::pass_object_size"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"pass_dynamic_object_size"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::pass_dynamic_object_size"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::pass_dynamic_object_size"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_pass_object_size = 0,
    CXX11_clang_pass_object_size = 1,
    C2x_clang_pass_object_size = 2,
    GNU_pass_dynamic_object_size = 3,
    CXX11_clang_pass_dynamic_object_size = 4,
    C2x_clang_pass_dynamic_object_size = 5,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_pass_object_size;
    case 1: return CXX11_clang_pass_object_size;
    case 2: return C2x_clang_pass_object_size;
    case 3: return GNU_pass_dynamic_object_size;
    case 4: return CXX11_clang_pass_dynamic_object_size;
    case 5: return C2x_clang_pass_dynamic_object_size;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoPassObjectSize Instance;
};
const ParsedAttrInfoPassObjectSize ParsedAttrInfoPassObjectSize::Instance;
struct ParsedAttrInfoPatchableFunctionEntry : public ParsedAttrInfo {
  ParsedAttrInfoPatchableFunctionEntry() {
    AttrKind = ParsedAttr::AT_PatchableFunctionEntry;
    NumArgs = 1;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"patchable_function_entry"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::patchable_function_entry"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions and Objective-C methods";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::aarch64 || T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoPatchableFunctionEntry Instance;
};
const ParsedAttrInfoPatchableFunctionEntry ParsedAttrInfoPatchableFunctionEntry::Instance;
struct ParsedAttrInfoPcs : public ParsedAttrInfo {
  ParsedAttrInfoPcs() {
    AttrKind = ParsedAttr::AT_Pcs;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"pcs"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::pcs"});
  }
static const ParsedAttrInfoPcs Instance;
};
const ParsedAttrInfoPcs ParsedAttrInfoPcs::Instance;
struct ParsedAttrInfoPointer : public ParsedAttrInfo {
  ParsedAttrInfoPointer() {
    AttrKind = ParsedAttr::AT_Pointer;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gsl::Pointer"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isStruct(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "structs";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record_not_is_union, /*IsSupported=*/true));
}

static const ParsedAttrInfoPointer Instance;
};
const ParsedAttrInfoPointer ParsedAttrInfoPointer::Instance;
struct ParsedAttrInfoPragmaClangBSSSection : public ParsedAttrInfo {
  ParsedAttrInfoPragmaClangBSSSection() {
    AttrKind = ParsedAttr::AT_PragmaClangBSSSection;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isGlobalVar(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoPragmaClangBSSSection Instance;
};
const ParsedAttrInfoPragmaClangBSSSection ParsedAttrInfoPragmaClangBSSSection::Instance;
struct ParsedAttrInfoPragmaClangDataSection : public ParsedAttrInfo {
  ParsedAttrInfoPragmaClangDataSection() {
    AttrKind = ParsedAttr::AT_PragmaClangDataSection;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isGlobalVar(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoPragmaClangDataSection Instance;
};
const ParsedAttrInfoPragmaClangDataSection ParsedAttrInfoPragmaClangDataSection::Instance;
struct ParsedAttrInfoPragmaClangRelroSection : public ParsedAttrInfo {
  ParsedAttrInfoPragmaClangRelroSection() {
    AttrKind = ParsedAttr::AT_PragmaClangRelroSection;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isGlobalVar(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoPragmaClangRelroSection Instance;
};
const ParsedAttrInfoPragmaClangRelroSection ParsedAttrInfoPragmaClangRelroSection::Instance;
struct ParsedAttrInfoPragmaClangRodataSection : public ParsedAttrInfo {
  ParsedAttrInfoPragmaClangRodataSection() {
    AttrKind = ParsedAttr::AT_PragmaClangRodataSection;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isGlobalVar(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoPragmaClangRodataSection Instance;
};
const ParsedAttrInfoPragmaClangRodataSection ParsedAttrInfoPragmaClangRodataSection::Instance;
struct ParsedAttrInfoPragmaClangTextSection : public ParsedAttrInfo {
  ParsedAttrInfoPragmaClangTextSection() {
    AttrKind = ParsedAttr::AT_PragmaClangTextSection;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoPragmaClangTextSection Instance;
};
const ParsedAttrInfoPragmaClangTextSection ParsedAttrInfoPragmaClangTextSection::Instance;
struct ParsedAttrInfoPreserveAll : public ParsedAttrInfo {
  ParsedAttrInfoPreserveAll() {
    AttrKind = ParsedAttr::AT_PreserveAll;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"preserve_all"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::preserve_all"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::preserve_all"});
  }
static const ParsedAttrInfoPreserveAll Instance;
};
const ParsedAttrInfoPreserveAll ParsedAttrInfoPreserveAll::Instance;
struct ParsedAttrInfoPreserveMost : public ParsedAttrInfo {
  ParsedAttrInfoPreserveMost() {
    AttrKind = ParsedAttr::AT_PreserveMost;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"preserve_most"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::preserve_most"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::preserve_most"});
  }
static const ParsedAttrInfoPreserveMost Instance;
};
const ParsedAttrInfoPreserveMost ParsedAttrInfoPreserveMost::Instance;
struct ParsedAttrInfoPtGuardedBy : public ParsedAttrInfo {
  ParsedAttrInfoPtGuardedBy() {
    AttrKind = ParsedAttr::AT_PtGuardedBy;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"pt_guarded_by"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FieldDecl>(D) && !isSharedVar(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "non-static data members and global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoPtGuardedBy Instance;
};
const ParsedAttrInfoPtGuardedBy ParsedAttrInfoPtGuardedBy::Instance;
struct ParsedAttrInfoPtGuardedVar : public ParsedAttrInfo {
  ParsedAttrInfoPtGuardedVar() {
    AttrKind = ParsedAttr::AT_PtGuardedVar;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"pt_guarded_var"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::pt_guarded_var"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FieldDecl>(D) && !isSharedVar(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "non-static data members and global variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoPtGuardedVar Instance;
};
const ParsedAttrInfoPtGuardedVar ParsedAttrInfoPtGuardedVar::Instance;
struct ParsedAttrInfoPtr32 : public ParsedAttrInfo {
  ParsedAttrInfoPtr32() {
    AttrKind = ParsedAttr::AT_Ptr32;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__ptr32"});
  }
static const ParsedAttrInfoPtr32 Instance;
};
const ParsedAttrInfoPtr32 ParsedAttrInfoPtr32::Instance;
struct ParsedAttrInfoPtr64 : public ParsedAttrInfo {
  ParsedAttrInfoPtr64() {
    AttrKind = ParsedAttr::AT_Ptr64;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__ptr64"});
  }
static const ParsedAttrInfoPtr64 Instance;
};
const ParsedAttrInfoPtr64 ParsedAttrInfoPtr64::Instance;
struct ParsedAttrInfoPure : public ParsedAttrInfo {
  ParsedAttrInfoPure() {
    AttrKind = ParsedAttr::AT_Pure;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"pure"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::pure"});
  }
static const ParsedAttrInfoPure Instance;
};
const ParsedAttrInfoPure ParsedAttrInfoPure::Instance;
struct ParsedAttrInfoRegCall : public ParsedAttrInfo {
  ParsedAttrInfoRegCall() {
    AttrKind = ParsedAttr::AT_RegCall;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"regcall"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::regcall"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__regcall"});
  }
static const ParsedAttrInfoRegCall Instance;
};
const ParsedAttrInfoRegCall ParsedAttrInfoRegCall::Instance;
struct ParsedAttrInfoRegparm : public ParsedAttrInfo {
  ParsedAttrInfoRegparm() {
    AttrKind = ParsedAttr::AT_Regparm;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"regparm"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::regparm"});
  }
static const ParsedAttrInfoRegparm Instance;
};
const ParsedAttrInfoRegparm ParsedAttrInfoRegparm::Instance;
struct ParsedAttrInfoReinitializes : public ParsedAttrInfo {
  ParsedAttrInfoReinitializes() {
    AttrKind = ParsedAttr::AT_Reinitializes;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"reinitializes"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::reinitializes"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isNonStaticNonConstCXXMethod(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "non-static non-const member functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoReinitializes Instance;
};
const ParsedAttrInfoReinitializes ParsedAttrInfoReinitializes::Instance;
struct ParsedAttrInfoReleaseCapability : public ParsedAttrInfo {
  ParsedAttrInfoReleaseCapability() {
    AttrKind = ParsedAttr::AT_ReleaseCapability;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"release_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::release_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"release_shared_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::release_shared_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"release_generic_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::release_generic_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"unlock_function"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::unlock_function"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_release_capability = 0,
    CXX11_clang_release_capability = 1,
    GNU_release_shared_capability = 2,
    CXX11_clang_release_shared_capability = 3,
    GNU_release_generic_capability = 4,
    CXX11_clang_release_generic_capability = 5,
    GNU_unlock_function = 6,
    CXX11_clang_unlock_function = 7,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_release_capability;
    case 1: return CXX11_clang_release_capability;
    case 2: return GNU_release_shared_capability;
    case 3: return CXX11_clang_release_shared_capability;
    case 4: return GNU_release_generic_capability;
    case 5: return CXX11_clang_release_generic_capability;
    case 6: return GNU_unlock_function;
    case 7: return CXX11_clang_unlock_function;
  }
}

static const ParsedAttrInfoReleaseCapability Instance;
};
const ParsedAttrInfoReleaseCapability ParsedAttrInfoReleaseCapability::Instance;
struct ParsedAttrInfoReleaseHandle : public ParsedAttrInfo {
  ParsedAttrInfoReleaseHandle() {
    AttrKind = ParsedAttr::AT_ReleaseHandle;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"release_handle"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::release_handle"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::release_handle"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoReleaseHandle Instance;
};
const ParsedAttrInfoReleaseHandle ParsedAttrInfoReleaseHandle::Instance;
struct ParsedAttrInfoRenderScriptKernel : public ParsedAttrInfo {
  ParsedAttrInfoRenderScriptKernel() {
    AttrKind = ParsedAttr::AT_RenderScriptKernel;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"kernel"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.RenderScript)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoRenderScriptKernel Instance;
};
const ParsedAttrInfoRenderScriptKernel ParsedAttrInfoRenderScriptKernel::Instance;
struct ParsedAttrInfoReqdWorkGroupSize : public ParsedAttrInfo {
  ParsedAttrInfoReqdWorkGroupSize() {
    AttrKind = ParsedAttr::AT_ReqdWorkGroupSize;
    NumArgs = 3;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"reqd_work_group_size"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoReqdWorkGroupSize Instance;
};
const ParsedAttrInfoReqdWorkGroupSize ParsedAttrInfoReqdWorkGroupSize::Instance;
struct ParsedAttrInfoRequiresCapability : public ParsedAttrInfo {
  ParsedAttrInfoRequiresCapability() {
    AttrKind = ParsedAttr::AT_RequiresCapability;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"requires_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::requires_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"exclusive_locks_required"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::exclusive_locks_required"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"requires_shared_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::requires_shared_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"shared_locks_required"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::shared_locks_required"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_requires_capability = 0,
    CXX11_clang_requires_capability = 1,
    GNU_exclusive_locks_required = 2,
    CXX11_clang_exclusive_locks_required = 3,
    GNU_requires_shared_capability = 4,
    CXX11_clang_requires_shared_capability = 5,
    GNU_shared_locks_required = 6,
    CXX11_clang_shared_locks_required = 7,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_requires_capability;
    case 1: return CXX11_clang_requires_capability;
    case 2: return GNU_exclusive_locks_required;
    case 3: return CXX11_clang_exclusive_locks_required;
    case 4: return GNU_requires_shared_capability;
    case 5: return CXX11_clang_requires_shared_capability;
    case 6: return GNU_shared_locks_required;
    case 7: return CXX11_clang_shared_locks_required;
  }
}

static const ParsedAttrInfoRequiresCapability Instance;
};
const ParsedAttrInfoRequiresCapability ParsedAttrInfoRequiresCapability::Instance;
struct ParsedAttrInfoRestrict : public ParsedAttrInfo {
  ParsedAttrInfoRestrict() {
    AttrKind = ParsedAttr::AT_Restrict;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"restrict"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"malloc"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::malloc"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    Declspec_restrict = 0,
    GNU_malloc = 1,
    CXX11_gnu_malloc = 2,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Declspec_restrict;
    case 1: return GNU_malloc;
    case 2: return CXX11_gnu_malloc;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoRestrict Instance;
};
const ParsedAttrInfoRestrict ParsedAttrInfoRestrict::Instance;
struct ParsedAttrInfoReturnTypestate : public ParsedAttrInfo {
  ParsedAttrInfoReturnTypestate() {
    AttrKind = ParsedAttr::AT_ReturnTypestate;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"return_typestate"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::return_typestate"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions and parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoReturnTypestate Instance;
};
const ParsedAttrInfoReturnTypestate ParsedAttrInfoReturnTypestate::Instance;
struct ParsedAttrInfoReturnsNonNull : public ParsedAttrInfo {
  ParsedAttrInfoReturnsNonNull() {
    AttrKind = ParsedAttr::AT_ReturnsNonNull;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"returns_nonnull"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::returns_nonnull"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D) && !isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods and functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoReturnsNonNull Instance;
};
const ParsedAttrInfoReturnsNonNull ParsedAttrInfoReturnsNonNull::Instance;
struct ParsedAttrInfoReturnsTwice : public ParsedAttrInfo {
  ParsedAttrInfoReturnsTwice() {
    AttrKind = ParsedAttr::AT_ReturnsTwice;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"returns_twice"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::returns_twice"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoReturnsTwice Instance;
};
const ParsedAttrInfoReturnsTwice ParsedAttrInfoReturnsTwice::Instance;
struct ParsedAttrInfoSPtr : public ParsedAttrInfo {
  ParsedAttrInfoSPtr() {
    AttrKind = ParsedAttr::AT_SPtr;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__sptr"});
  }
static const ParsedAttrInfoSPtr Instance;
};
const ParsedAttrInfoSPtr ParsedAttrInfoSPtr::Instance;
struct ParsedAttrInfoSYCLKernel : public ParsedAttrInfo {
  ParsedAttrInfoSYCLKernel() {
    AttrKind = ParsedAttr::AT_SYCLKernel;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"sycl_kernel"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::sycl_kernel"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::sycl_kernel"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isFunctionTmpl(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "function templates";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.SYCLIsDevice)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

static const ParsedAttrInfoSYCLKernel Instance;
};
const ParsedAttrInfoSYCLKernel ParsedAttrInfoSYCLKernel::Instance;
struct ParsedAttrInfoScopedLockable : public ParsedAttrInfo {
  ParsedAttrInfoScopedLockable() {
    AttrKind = ParsedAttr::AT_ScopedLockable;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"scoped_lockable"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::scoped_lockable"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoScopedLockable Instance;
};
const ParsedAttrInfoScopedLockable ParsedAttrInfoScopedLockable::Instance;
struct ParsedAttrInfoSection : public ParsedAttrInfo {
  ParsedAttrInfoSection() {
    AttrKind = ParsedAttr::AT_Section;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"section"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::section"});
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"allocate"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isGlobalVar(D) && !isa<ObjCMethodDecl>(D) && !isa<ObjCPropertyDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions, global variables, Objective-C methods, and Objective-C properties";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_section = 0,
    CXX11_gnu_section = 1,
    Declspec_allocate = 2,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_section;
    case 1: return CXX11_gnu_section;
    case 2: return Declspec_allocate;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_global, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_property, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoSection Instance;
};
const ParsedAttrInfoSection ParsedAttrInfoSection::Instance;
struct ParsedAttrInfoSelectAny : public ParsedAttrInfo {
  ParsedAttrInfoSelectAny() {
    AttrKind = ParsedAttr::AT_SelectAny;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"selectany"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"selectany"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::selectany"});
  }
static const ParsedAttrInfoSelectAny Instance;
};
const ParsedAttrInfoSelectAny ParsedAttrInfoSelectAny::Instance;
struct ParsedAttrInfoSentinel : public ParsedAttrInfo {
  ParsedAttrInfoSentinel() {
    AttrKind = ParsedAttr::AT_Sentinel;
    NumArgs = 0;
    OptArgs = 2;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"sentinel"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::sentinel"});
  }
static const ParsedAttrInfoSentinel Instance;
};
const ParsedAttrInfoSentinel ParsedAttrInfoSentinel::Instance;
struct ParsedAttrInfoSetTypestate : public ParsedAttrInfo {
  ParsedAttrInfoSetTypestate() {
    AttrKind = ParsedAttr::AT_SetTypestate;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"set_typestate"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::set_typestate"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function_is_member, /*IsSupported=*/LangOpts.CPlusPlus));
}

static const ParsedAttrInfoSetTypestate Instance;
};
const ParsedAttrInfoSetTypestate ParsedAttrInfoSetTypestate::Instance;
struct ParsedAttrInfoSharedTrylockFunction : public ParsedAttrInfo {
  ParsedAttrInfoSharedTrylockFunction() {
    AttrKind = ParsedAttr::AT_SharedTrylockFunction;
    NumArgs = 1;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"shared_trylock_function"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

static const ParsedAttrInfoSharedTrylockFunction Instance;
};
const ParsedAttrInfoSharedTrylockFunction ParsedAttrInfoSharedTrylockFunction::Instance;
struct ParsedAttrInfoSpeculativeLoadHardening : public ParsedAttrInfo {
  ParsedAttrInfoSpeculativeLoadHardening() {
    AttrKind = ParsedAttr::AT_SpeculativeLoadHardening;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"speculative_load_hardening"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::speculative_load_hardening"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::speculative_load_hardening"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions and Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoSpeculativeLoadHardening Instance;
};
const ParsedAttrInfoSpeculativeLoadHardening ParsedAttrInfoSpeculativeLoadHardening::Instance;
struct ParsedAttrInfoStdCall : public ParsedAttrInfo {
  ParsedAttrInfoStdCall() {
    AttrKind = ParsedAttr::AT_StdCall;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"stdcall"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::stdcall"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__stdcall"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_stdcall"});
  }
static const ParsedAttrInfoStdCall Instance;
};
const ParsedAttrInfoStdCall ParsedAttrInfoStdCall::Instance;
struct ParsedAttrInfoSuppress : public ParsedAttrInfo {
  ParsedAttrInfoSuppress() {
    AttrKind = ParsedAttr::AT_Suppress;
    NumArgs = 0;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 1;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gsl::suppress"});
  }
static const ParsedAttrInfoSuppress Instance;
};
const ParsedAttrInfoSuppress ParsedAttrInfoSuppress::Instance;
struct ParsedAttrInfoSwiftCall : public ParsedAttrInfo {
  ParsedAttrInfoSwiftCall() {
    AttrKind = ParsedAttr::AT_SwiftCall;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"swiftcall"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::swiftcall"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::swiftcall"});
  }
static const ParsedAttrInfoSwiftCall Instance;
};
const ParsedAttrInfoSwiftCall ParsedAttrInfoSwiftCall::Instance;
struct ParsedAttrInfoSwiftContext : public ParsedAttrInfo {
  ParsedAttrInfoSwiftContext() {
    AttrKind = ParsedAttr::AT_SwiftContext;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"swift_context"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::swift_context"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::swift_context"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoSwiftContext Instance;
};
const ParsedAttrInfoSwiftContext ParsedAttrInfoSwiftContext::Instance;
struct ParsedAttrInfoSwiftErrorResult : public ParsedAttrInfo {
  ParsedAttrInfoSwiftErrorResult() {
    AttrKind = ParsedAttr::AT_SwiftErrorResult;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"swift_error_result"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::swift_error_result"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::swift_error_result"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoSwiftErrorResult Instance;
};
const ParsedAttrInfoSwiftErrorResult ParsedAttrInfoSwiftErrorResult::Instance;
struct ParsedAttrInfoSwiftIndirectResult : public ParsedAttrInfo {
  ParsedAttrInfoSwiftIndirectResult() {
    AttrKind = ParsedAttr::AT_SwiftIndirectResult;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"swift_indirect_result"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::swift_indirect_result"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::swift_indirect_result"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoSwiftIndirectResult Instance;
};
const ParsedAttrInfoSwiftIndirectResult ParsedAttrInfoSwiftIndirectResult::Instance;
struct ParsedAttrInfoSysVABI : public ParsedAttrInfo {
  ParsedAttrInfoSysVABI() {
    AttrKind = ParsedAttr::AT_SysVABI;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"sysv_abi"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::sysv_abi"});
  }
static const ParsedAttrInfoSysVABI Instance;
};
const ParsedAttrInfoSysVABI ParsedAttrInfoSysVABI::Instance;
struct ParsedAttrInfoTLSModel : public ParsedAttrInfo {
  ParsedAttrInfoTLSModel() {
    AttrKind = ParsedAttr::AT_TLSModel;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"tls_model"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::tls_model"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isTLSVar(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "thread-local variables";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_thread_local, /*IsSupported=*/true));
}

static const ParsedAttrInfoTLSModel Instance;
};
const ParsedAttrInfoTLSModel ParsedAttrInfoTLSModel::Instance;
struct ParsedAttrInfoTarget : public ParsedAttrInfo {
  ParsedAttrInfoTarget() {
    AttrKind = ParsedAttr::AT_Target;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"target"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::target"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoTarget Instance;
};
const ParsedAttrInfoTarget ParsedAttrInfoTarget::Instance;
struct ParsedAttrInfoTestTypestate : public ParsedAttrInfo {
  ParsedAttrInfoTestTypestate() {
    AttrKind = ParsedAttr::AT_TestTypestate;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"test_typestate"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::test_typestate"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function_is_member, /*IsSupported=*/LangOpts.CPlusPlus));
}

static const ParsedAttrInfoTestTypestate Instance;
};
const ParsedAttrInfoTestTypestate ParsedAttrInfoTestTypestate::Instance;
struct ParsedAttrInfoThisCall : public ParsedAttrInfo {
  ParsedAttrInfoThisCall() {
    AttrKind = ParsedAttr::AT_ThisCall;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"thiscall"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::thiscall"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__thiscall"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_thiscall"});
  }
static const ParsedAttrInfoThisCall Instance;
};
const ParsedAttrInfoThisCall ParsedAttrInfoThisCall::Instance;
struct ParsedAttrInfoThread : public ParsedAttrInfo {
  ParsedAttrInfoThread() {
    AttrKind = ParsedAttr::AT_Thread;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"thread"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.MicrosoftExt)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

static const ParsedAttrInfoThread Instance;
};
const ParsedAttrInfoThread ParsedAttrInfoThread::Instance;
struct ParsedAttrInfoTransparentUnion : public ParsedAttrInfo {
  ParsedAttrInfoTransparentUnion() {
    AttrKind = ParsedAttr::AT_TransparentUnion;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"transparent_union"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::transparent_union"});
  }
virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if ((!LangOpts.CPlusPlus))
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

static const ParsedAttrInfoTransparentUnion Instance;
};
const ParsedAttrInfoTransparentUnion ParsedAttrInfoTransparentUnion::Instance;
struct ParsedAttrInfoTrivialABI : public ParsedAttrInfo {
  ParsedAttrInfoTrivialABI() {
    AttrKind = ParsedAttr::AT_TrivialABI;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"trivial_abi"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::trivial_abi"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "classes";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.CPlusPlus)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoTrivialABI Instance;
};
const ParsedAttrInfoTrivialABI ParsedAttrInfoTrivialABI::Instance;
struct ParsedAttrInfoTryAcquireCapability : public ParsedAttrInfo {
  ParsedAttrInfoTryAcquireCapability() {
    AttrKind = ParsedAttr::AT_TryAcquireCapability;
    NumArgs = 1;
    OptArgs = 15;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"try_acquire_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::try_acquire_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"try_acquire_shared_capability"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::try_acquire_shared_capability"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_try_acquire_capability = 0,
    CXX11_clang_try_acquire_capability = 1,
    GNU_try_acquire_shared_capability = 2,
    CXX11_clang_try_acquire_shared_capability = 3,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_try_acquire_capability;
    case 1: return CXX11_clang_try_acquire_capability;
    case 2: return GNU_try_acquire_shared_capability;
    case 3: return CXX11_clang_try_acquire_shared_capability;
  }
}

static const ParsedAttrInfoTryAcquireCapability Instance;
};
const ParsedAttrInfoTryAcquireCapability ParsedAttrInfoTryAcquireCapability::Instance;
struct ParsedAttrInfoTypeNonNull : public ParsedAttrInfo {
  ParsedAttrInfoTypeNonNull() {
    AttrKind = ParsedAttr::AT_TypeNonNull;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_Nonnull"});
  }
static const ParsedAttrInfoTypeNonNull Instance;
};
const ParsedAttrInfoTypeNonNull ParsedAttrInfoTypeNonNull::Instance;
struct ParsedAttrInfoTypeNullUnspecified : public ParsedAttrInfo {
  ParsedAttrInfoTypeNullUnspecified() {
    AttrKind = ParsedAttr::AT_TypeNullUnspecified;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_Null_unspecified"});
  }
static const ParsedAttrInfoTypeNullUnspecified Instance;
};
const ParsedAttrInfoTypeNullUnspecified ParsedAttrInfoTypeNullUnspecified::Instance;
struct ParsedAttrInfoTypeNullable : public ParsedAttrInfo {
  ParsedAttrInfoTypeNullable() {
    AttrKind = ParsedAttr::AT_TypeNullable;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_Nullable"});
  }
static const ParsedAttrInfoTypeNullable Instance;
};
const ParsedAttrInfoTypeNullable ParsedAttrInfoTypeNullable::Instance;
struct ParsedAttrInfoTypeTagForDatatype : public ParsedAttrInfo {
  ParsedAttrInfoTypeTagForDatatype() {
    AttrKind = ParsedAttr::AT_TypeTagForDatatype;
    NumArgs = 4;
    OptArgs = 0;
    HasCustomParsing = 1;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"type_tag_for_datatype"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::type_tag_for_datatype"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::type_tag_for_datatype"});
  }
static const ParsedAttrInfoTypeTagForDatatype Instance;
};
const ParsedAttrInfoTypeTagForDatatype ParsedAttrInfoTypeTagForDatatype::Instance;
struct ParsedAttrInfoTypeVisibility : public ParsedAttrInfo {
  ParsedAttrInfoTypeVisibility() {
    AttrKind = ParsedAttr::AT_TypeVisibility;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"type_visibility"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::type_visibility"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::type_visibility"});
  }
static const ParsedAttrInfoTypeVisibility Instance;
};
const ParsedAttrInfoTypeVisibility ParsedAttrInfoTypeVisibility::Instance;
struct ParsedAttrInfoUPtr : public ParsedAttrInfo {
  ParsedAttrInfoUPtr() {
    AttrKind = ParsedAttr::AT_UPtr;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__uptr"});
  }
static const ParsedAttrInfoUPtr Instance;
};
const ParsedAttrInfoUPtr ParsedAttrInfoUPtr::Instance;
struct ParsedAttrInfoUnavailable : public ParsedAttrInfo {
  ParsedAttrInfoUnavailable() {
    AttrKind = ParsedAttr::AT_Unavailable;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"unavailable"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::unavailable"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::unavailable"});
  }
static const ParsedAttrInfoUnavailable Instance;
};
const ParsedAttrInfoUnavailable ParsedAttrInfoUnavailable::Instance;
struct ParsedAttrInfoUninitialized : public ParsedAttrInfo {
  ParsedAttrInfoUninitialized() {
    AttrKind = ParsedAttr::AT_Uninitialized;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"uninitialized"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::uninitialized"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isLocalVar(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "local variables";
    return false;
  }
  return true;
}

static const ParsedAttrInfoUninitialized Instance;
};
const ParsedAttrInfoUninitialized ParsedAttrInfoUninitialized::Instance;
struct ParsedAttrInfoUnused : public ParsedAttrInfo {
  ParsedAttrInfoUnused() {
    AttrKind = ParsedAttr::AT_Unused;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"::maybe_unused"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"unused"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::unused"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"::maybe_unused"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D) && !isa<ObjCIvarDecl>(D) && !isa<TypeDecl>(D) && !isa<EnumDecl>(D) && !isa<EnumConstantDecl>(D) && !isa<LabelDecl>(D) && !isa<FieldDecl>(D) && !isa<ObjCMethodDecl>(D) && !isFunctionLike(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables, non-static data members, types, enums, enumerators, labels, non-static data members, Objective-C methods, functions, and function pointers";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    CXX11_maybe_unused = 0,
    GNU_unused = 1,
    CXX11_gnu_unused = 2,
    C2x_maybe_unused = 3,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return CXX11_maybe_unused;
    case 1: return GNU_unused;
    case 2: return CXX11_gnu_unused;
    case 3: return C2x_maybe_unused;
  }
}

static const ParsedAttrInfoUnused Instance;
};
const ParsedAttrInfoUnused ParsedAttrInfoUnused::Instance;
struct ParsedAttrInfoUseHandle : public ParsedAttrInfo {
  ParsedAttrInfoUseHandle() {
    AttrKind = ParsedAttr::AT_UseHandle;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"use_handle"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::use_handle"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::use_handle"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ParmVarDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "parameters";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable_is_parameter, /*IsSupported=*/true));
}

static const ParsedAttrInfoUseHandle Instance;
};
const ParsedAttrInfoUseHandle ParsedAttrInfoUseHandle::Instance;
struct ParsedAttrInfoUsed : public ParsedAttrInfo {
  ParsedAttrInfoUsed() {
    AttrKind = ParsedAttr::AT_Used;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"used"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::used"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isNonLocalVar(D) && !isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables with non-local storage, functions, and Objective-C methods";
    return false;
  }
  return true;
}

static const ParsedAttrInfoUsed Instance;
};
const ParsedAttrInfoUsed ParsedAttrInfoUsed::Instance;
struct ParsedAttrInfoUuid : public ParsedAttrInfo {
  ParsedAttrInfoUuid() {
    AttrKind = ParsedAttr::AT_Uuid;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_Declspec,"uuid"});
    Spellings.push_back({AttributeCommonInfo::AS_Microsoft,"uuid"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D) && !isa<EnumDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, classes, and enums";
    return false;
  }
  return true;
}

virtual bool diagLangOpts(Sema &S, const ParsedAttr &Attr) const {
  auto &LangOpts = S.LangOpts;
  if (LangOpts.MicrosoftExt || LangOpts.Borland)
    return true;

  S.Diag(Attr.getLoc(), diag::warn_attribute_ignored) << Attr;
  return false;
}

static const ParsedAttrInfoUuid Instance;
};
const ParsedAttrInfoUuid ParsedAttrInfoUuid::Instance;
struct ParsedAttrInfoVecReturn : public ParsedAttrInfo {
  ParsedAttrInfoVecReturn() {
    AttrKind = ParsedAttr::AT_VecReturn;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"vecreturn"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::vecreturn"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoVecReturn Instance;
};
const ParsedAttrInfoVecReturn ParsedAttrInfoVecReturn::Instance;
struct ParsedAttrInfoVecTypeHint : public ParsedAttrInfo {
  ParsedAttrInfoVecTypeHint() {
    AttrKind = ParsedAttr::AT_VecTypeHint;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"vec_type_hint"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoVecTypeHint Instance;
};
const ParsedAttrInfoVecTypeHint ParsedAttrInfoVecTypeHint::Instance;
struct ParsedAttrInfoVectorCall : public ParsedAttrInfo {
  ParsedAttrInfoVectorCall() {
    AttrKind = ParsedAttr::AT_VectorCall;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"vectorcall"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::vectorcall"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::vectorcall"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"__vectorcall"});
    Spellings.push_back({AttributeCommonInfo::AS_Keyword,"_vectorcall"});
  }
static const ParsedAttrInfoVectorCall Instance;
};
const ParsedAttrInfoVectorCall ParsedAttrInfoVectorCall::Instance;
struct ParsedAttrInfoVectorSize : public ParsedAttrInfo {
  ParsedAttrInfoVectorSize() {
    AttrKind = ParsedAttr::AT_VectorSize;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 1;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"vector_size"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::vector_size"});
  }
static const ParsedAttrInfoVectorSize Instance;
};
const ParsedAttrInfoVectorSize ParsedAttrInfoVectorSize::Instance;
struct ParsedAttrInfoVisibility : public ParsedAttrInfo {
  ParsedAttrInfoVisibility() {
    AttrKind = ParsedAttr::AT_Visibility;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"visibility"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::visibility"});
  }
static const ParsedAttrInfoVisibility Instance;
};
const ParsedAttrInfoVisibility ParsedAttrInfoVisibility::Instance;
struct ParsedAttrInfoWarnUnused : public ParsedAttrInfo {
  ParsedAttrInfoWarnUnused() {
    AttrKind = ParsedAttr::AT_WarnUnused;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"warn_unused"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::warn_unused"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<RecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "structs, unions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoWarnUnused Instance;
};
const ParsedAttrInfoWarnUnused ParsedAttrInfoWarnUnused::Instance;
struct ParsedAttrInfoWarnUnusedResult : public ParsedAttrInfo {
  ParsedAttrInfoWarnUnusedResult() {
    AttrKind = ParsedAttr::AT_WarnUnusedResult;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"::nodiscard"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"::nodiscard"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::warn_unused_result"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"warn_unused_result"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::warn_unused_result"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<ObjCMethodDecl>(D) && !isa<EnumDecl>(D) && !isa<RecordDecl>(D) && !isFunctionLike(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "Objective-C methods, enums, structs, unions, classes, functions, and function pointers";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    CXX11_nodiscard = 0,
    C2x_nodiscard = 1,
    CXX11_clang_warn_unused_result = 2,
    GNU_warn_unused_result = 3,
    CXX11_gnu_warn_unused_result = 4,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return CXX11_nodiscard;
    case 1: return C2x_nodiscard;
    case 2: return CXX11_clang_warn_unused_result;
    case 3: return GNU_warn_unused_result;
    case 4: return CXX11_gnu_warn_unused_result;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_enum, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_hasType_functionType, /*IsSupported=*/true));
}

static const ParsedAttrInfoWarnUnusedResult Instance;
};
const ParsedAttrInfoWarnUnusedResult ParsedAttrInfoWarnUnusedResult::Instance;
struct ParsedAttrInfoWeak : public ParsedAttrInfo {
  ParsedAttrInfoWeak() {
    AttrKind = ParsedAttr::AT_Weak;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"weak"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::weak"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D) && !isa<FunctionDecl>(D) && !isa<CXXRecordDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "variables, functions, and classes";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_record, /*IsSupported=*/true));
}

static const ParsedAttrInfoWeak Instance;
};
const ParsedAttrInfoWeak ParsedAttrInfoWeak::Instance;
struct ParsedAttrInfoWeakImport : public ParsedAttrInfo {
  ParsedAttrInfoWeakImport() {
    AttrKind = ParsedAttr::AT_WeakImport;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"weak_import"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::weak_import"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::weak_import"});
  }
static const ParsedAttrInfoWeakImport Instance;
};
const ParsedAttrInfoWeakImport ParsedAttrInfoWeakImport::Instance;
struct ParsedAttrInfoWeakRef : public ParsedAttrInfo {
  ParsedAttrInfoWeakRef() {
    AttrKind = ParsedAttr::AT_WeakRef;
    NumArgs = 0;
    OptArgs = 1;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"weakref"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::weakref"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<VarDecl>(D) && !isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "variables and functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_variable, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoWeakRef Instance;
};
const ParsedAttrInfoWeakRef ParsedAttrInfoWeakRef::Instance;
struct ParsedAttrInfoWebAssemblyExportName : public ParsedAttrInfo {
  ParsedAttrInfoWebAssemblyExportName() {
    AttrKind = ParsedAttr::AT_WebAssemblyExportName;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"export_name"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::export_name"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::export_name"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::wasm32 || T.getArch() == llvm::Triple::wasm64);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoWebAssemblyExportName Instance;
};
const ParsedAttrInfoWebAssemblyExportName ParsedAttrInfoWebAssemblyExportName::Instance;
struct ParsedAttrInfoWebAssemblyImportModule : public ParsedAttrInfo {
  ParsedAttrInfoWebAssemblyImportModule() {
    AttrKind = ParsedAttr::AT_WebAssemblyImportModule;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"import_module"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::import_module"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::import_module"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::wasm32 || T.getArch() == llvm::Triple::wasm64);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoWebAssemblyImportModule Instance;
};
const ParsedAttrInfoWebAssemblyImportModule ParsedAttrInfoWebAssemblyImportModule::Instance;
struct ParsedAttrInfoWebAssemblyImportName : public ParsedAttrInfo {
  ParsedAttrInfoWebAssemblyImportName() {
    AttrKind = ParsedAttr::AT_WebAssemblyImportName;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"import_name"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::import_name"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::import_name"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::wasm32 || T.getArch() == llvm::Triple::wasm64);
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoWebAssemblyImportName Instance;
};
const ParsedAttrInfoWebAssemblyImportName ParsedAttrInfoWebAssemblyImportName::Instance;
struct ParsedAttrInfoWorkGroupSizeHint : public ParsedAttrInfo {
  ParsedAttrInfoWorkGroupSizeHint() {
    AttrKind = ParsedAttr::AT_WorkGroupSizeHint;
    NumArgs = 3;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"work_group_size_hint"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::err_attribute_wrong_decl_type_str)
      << Attr << "functions";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
}

static const ParsedAttrInfoWorkGroupSizeHint Instance;
};
const ParsedAttrInfoWorkGroupSizeHint ParsedAttrInfoWorkGroupSizeHint::Instance;
struct ParsedAttrInfoX86ForceAlignArgPointer : public ParsedAttrInfo {
  ParsedAttrInfoX86ForceAlignArgPointer() {
    AttrKind = ParsedAttr::AT_X86ForceAlignArgPointer;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 1;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 1;
    IsSupportedByPragmaAttribute = 0;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"force_align_arg_pointer"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"gnu::force_align_arg_pointer"});
  }
virtual bool existsInTarget(const TargetInfo &Target) const {
  const llvm::Triple &T = Target.getTriple(); (void)T;
  return true && (T.getArch() == llvm::Triple::x86 || T.getArch() == llvm::Triple::x86_64);
}

static const ParsedAttrInfoX86ForceAlignArgPointer Instance;
};
const ParsedAttrInfoX86ForceAlignArgPointer ParsedAttrInfoX86ForceAlignArgPointer::Instance;
struct ParsedAttrInfoXRayInstrument : public ParsedAttrInfo {
  ParsedAttrInfoXRayInstrument() {
    AttrKind = ParsedAttr::AT_XRayInstrument;
    NumArgs = 0;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"xray_always_instrument"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::xray_always_instrument"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::xray_always_instrument"});
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"xray_never_instrument"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::xray_never_instrument"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::xray_never_instrument"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions and Objective-C methods";
    return false;
  }
  return true;
}

virtual unsigned spellingIndexToSemanticSpelling(const ParsedAttr &Attr) const {
  enum Spelling {
    GNU_xray_always_instrument = 0,
    CXX11_clang_xray_always_instrument = 1,
    C2x_clang_xray_always_instrument = 2,
    GNU_xray_never_instrument = 3,
    CXX11_clang_xray_never_instrument = 4,
    C2x_clang_xray_never_instrument = 5,
  SpellingNotCalculated = 15

  };

  unsigned Idx = Attr.getAttributeSpellingListIndex();
  switch (Idx) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_xray_always_instrument;
    case 1: return CXX11_clang_xray_always_instrument;
    case 2: return C2x_clang_xray_always_instrument;
    case 3: return GNU_xray_never_instrument;
    case 4: return CXX11_clang_xray_never_instrument;
    case 5: return C2x_clang_xray_never_instrument;
  }
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoXRayInstrument Instance;
};
const ParsedAttrInfoXRayInstrument ParsedAttrInfoXRayInstrument::Instance;
struct ParsedAttrInfoXRayLogArgs : public ParsedAttrInfo {
  ParsedAttrInfoXRayLogArgs() {
    AttrKind = ParsedAttr::AT_XRayLogArgs;
    NumArgs = 1;
    OptArgs = 0;
    HasCustomParsing = 0;
    IsTargetSpecific = 0;
    IsType = 0;
    IsStmt = 0;
    IsKnownToGCC = 0;
    IsSupportedByPragmaAttribute = 1;
    Spellings.push_back({AttributeCommonInfo::AS_GNU,"xray_log_args"});
    Spellings.push_back({AttributeCommonInfo::AS_CXX11,"clang::xray_log_args"});
    Spellings.push_back({AttributeCommonInfo::AS_C2x,"clang::xray_log_args"});
  }
virtual bool diagAppertainsToDecl(Sema &S, const ParsedAttr &Attr, const Decl *D) const {
  if (!D || (!isa<FunctionDecl>(D) && !isa<ObjCMethodDecl>(D))) {
    S.Diag(Attr.getLoc(), diag::warn_attribute_wrong_decl_type_str)
      << Attr << "functions and Objective-C methods";
    return false;
  }
  return true;
}

virtual void getPragmaAttributeMatchRules(llvm::SmallVectorImpl<std::pair<attr::SubjectMatchRule, bool>> &MatchRules, const LangOptions &LangOpts) const {
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_function, /*IsSupported=*/true));
  MatchRules.push_back(std::make_pair(attr::SubjectMatchRule_objc_method, /*IsSupported=*/LangOpts.ObjC));
}

static const ParsedAttrInfoXRayLogArgs Instance;
};
const ParsedAttrInfoXRayLogArgs ParsedAttrInfoXRayLogArgs::Instance;
static const ParsedAttrInfo *AttrInfoMap[] = {
&ParsedAttrInfoAArch64VectorPcs::Instance,
&ParsedAttrInfoAMDGPUFlatWorkGroupSize::Instance,
&ParsedAttrInfoAMDGPUNumSGPR::Instance,
&ParsedAttrInfoAMDGPUNumVGPR::Instance,
&ParsedAttrInfoAMDGPUWavesPerEU::Instance,
&ParsedAttrInfoInterrupt::Instance,
&ParsedAttrInfoAVRSignal::Instance,
&ParsedAttrInfoAbiTag::Instance,
&ParsedAttrInfoAcquireCapability::Instance,
&ParsedAttrInfoAcquireHandle::Instance,
&ParsedAttrInfoAcquiredAfter::Instance,
&ParsedAttrInfoAcquiredBefore::Instance,
&ParsedAttrInfoAddressSpace::Instance,
&ParsedAttrInfoAlias::Instance,
&ParsedAttrInfoAlignValue::Instance,
&ParsedAttrInfoAligned::Instance,
&ParsedAttrInfoAllocAlign::Instance,
&ParsedAttrInfoAllocSize::Instance,
&ParsedAttrInfoAlwaysDestroy::Instance,
&ParsedAttrInfoAlwaysInline::Instance,
&ParsedAttrInfoAnalyzerNoReturn::Instance,
&ParsedAttrInfoAnnotate::Instance,
&ParsedAttrInfoAnyX86NoCallerSavedRegisters::Instance,
&ParsedAttrInfoAnyX86NoCfCheck::Instance,
&ParsedAttrInfoArcWeakrefUnavailable::Instance,
&ParsedAttrInfoArgumentWithTypeTag::Instance,
&ParsedAttrInfoArmMveAlias::Instance,
&ParsedAttrInfoArmMveStrictPolymorphism::Instance,
&ParsedAttrInfoArtificial::Instance,
&ParsedAttrInfoAssertCapability::Instance,
&ParsedAttrInfoAssertExclusiveLock::Instance,
&ParsedAttrInfoAssertSharedLock::Instance,
&ParsedAttrInfoAssumeAligned::Instance,
&ParsedAttrInfoAvailability::Instance,
&ParsedAttrInfoBPFPreserveAccessIndex::Instance,
&ParsedAttrInfoBlocks::Instance,
&ParsedAttrInfoCDecl::Instance,
&ParsedAttrInfoCFAuditedTransfer::Instance,
&ParsedAttrInfoCFConsumed::Instance,
&ParsedAttrInfoCFGuard::Instance,
&ParsedAttrInfoCFICanonicalJumpTable::Instance,
&ParsedAttrInfoCFReturnsNotRetained::Instance,
&ParsedAttrInfoCFReturnsRetained::Instance,
&ParsedAttrInfoCFUnknownTransfer::Instance,
&ParsedAttrInfoCPUDispatch::Instance,
&ParsedAttrInfoCPUSpecific::Instance,
&ParsedAttrInfoCUDAConstant::Instance,
&ParsedAttrInfoCUDADevice::Instance,
&ParsedAttrInfoCUDAGlobal::Instance,
&ParsedAttrInfoCUDAHost::Instance,
&ParsedAttrInfoCUDAInvalidTarget::Instance,
&ParsedAttrInfoCUDALaunchBounds::Instance,
&ParsedAttrInfoCUDAShared::Instance,
&ParsedAttrInfoCXX11NoReturn::Instance,
&ParsedAttrInfoCallableWhen::Instance,
&ParsedAttrInfoCallback::Instance,
&ParsedAttrInfoCapability::Instance,
&ParsedAttrInfoCarriesDependency::Instance,
&ParsedAttrInfoCleanup::Instance,
&ParsedAttrInfoCodeSeg::Instance,
&ParsedAttrInfoCold::Instance,
&ParsedAttrInfoCommon::Instance,
&ParsedAttrInfoConst::Instance,
&ParsedAttrInfoConstInit::Instance,
&ParsedAttrInfoConstructor::Instance,
&ParsedAttrInfoConsumable::Instance,
&ParsedAttrInfoConsumableAutoCast::Instance,
&ParsedAttrInfoConsumableSetOnRead::Instance,
&ParsedAttrInfoConvergent::Instance,
&ParsedAttrInfoDLLExport::Instance,
&ParsedAttrInfoDLLExportStaticLocal::Instance,
&ParsedAttrInfoDLLImport::Instance,
&ParsedAttrInfoDLLImportStaticLocal::Instance,
&ParsedAttrInfoDeprecated::Instance,
&ParsedAttrInfoDestructor::Instance,
&ParsedAttrInfoDiagnoseIf::Instance,
&ParsedAttrInfoDisableTailCalls::Instance,
&ParsedAttrInfoEmptyBases::Instance,
&ParsedAttrInfoEnableIf::Instance,
&ParsedAttrInfoEnumExtensibility::Instance,
&ParsedAttrInfoExcludeFromExplicitInstantiation::Instance,
&ParsedAttrInfoExclusiveTrylockFunction::Instance,
&ParsedAttrInfoExtVectorType::Instance,
&ParsedAttrInfoExternalSourceSymbol::Instance,
&ParsedAttrInfoFallThrough::Instance,
&ParsedAttrInfoFastCall::Instance,
&ParsedAttrInfoFlagEnum::Instance,
&ParsedAttrInfoFlatten::Instance,
&ParsedAttrInfoFormat::Instance,
&ParsedAttrInfoFormatArg::Instance,
&ParsedAttrInfoGNUInline::Instance,
&ParsedAttrInfoGuardedBy::Instance,
&ParsedAttrInfoGuardedVar::Instance,
&ParsedAttrInfoHIPPinnedShadow::Instance,
&ParsedAttrInfoHot::Instance,
&ParsedAttrInfoIBAction::Instance,
&ParsedAttrInfoIBOutlet::Instance,
&ParsedAttrInfoIBOutletCollection::Instance,
&ParsedAttrInfoIFunc::Instance,
&ParsedAttrInfoInitPriority::Instance,
&ParsedAttrInfoIntelOclBicc::Instance,
&ParsedAttrInfoInternalLinkage::Instance,
&ParsedAttrInfoLTOVisibilityPublic::Instance,
&ParsedAttrInfoLayoutVersion::Instance,
&ParsedAttrInfoLifetimeBound::Instance,
&ParsedAttrInfoLockReturned::Instance,
&ParsedAttrInfoLockable::Instance,
&ParsedAttrInfoLocksExcluded::Instance,
&ParsedAttrInfoLoopHint::Instance,
&ParsedAttrInfoMIGServerRoutine::Instance,
&ParsedAttrInfoMSABI::Instance,
&ParsedAttrInfoMSAllocator::Instance,
&ParsedAttrInfoMSInheritance::Instance,
&ParsedAttrInfoMSNoVTable::Instance,
&ParsedAttrInfoMSStruct::Instance,
&ParsedAttrInfoMayAlias::Instance,
&ParsedAttrInfoMicroMips::Instance,
&ParsedAttrInfoMinSize::Instance,
&ParsedAttrInfoMinVectorWidth::Instance,
&ParsedAttrInfoMips16::Instance,
&ParsedAttrInfoMipsLongCall::Instance,
&ParsedAttrInfoMipsShortCall::Instance,
&ParsedAttrInfoMode::Instance,
&ParsedAttrInfoNSConsumed::Instance,
&ParsedAttrInfoNSConsumesSelf::Instance,
&ParsedAttrInfoNSReturnsAutoreleased::Instance,
&ParsedAttrInfoNSReturnsNotRetained::Instance,
&ParsedAttrInfoNSReturnsRetained::Instance,
&ParsedAttrInfoNaked::Instance,
&ParsedAttrInfoNeonPolyVectorType::Instance,
&ParsedAttrInfoNeonVectorType::Instance,
&ParsedAttrInfoNoAlias::Instance,
&ParsedAttrInfoNoBuiltin::Instance,
&ParsedAttrInfoNoCommon::Instance,
&ParsedAttrInfoNoDebug::Instance,
&ParsedAttrInfoNoDeref::Instance,
&ParsedAttrInfoNoDestroy::Instance,
&ParsedAttrInfoNoDuplicate::Instance,
&ParsedAttrInfoNoEscape::Instance,
&ParsedAttrInfoNoInline::Instance,
&ParsedAttrInfoNoInstrumentFunction::Instance,
&ParsedAttrInfoNoMicroMips::Instance,
&ParsedAttrInfoNoMips16::Instance,
&ParsedAttrInfoNoReturn::Instance,
&ParsedAttrInfoNoSanitize::Instance,
&ParsedAttrInfoNoSanitizeSpecific::Instance,
&ParsedAttrInfoNoSpeculativeLoadHardening::Instance,
&ParsedAttrInfoNoSplitStack::Instance,
&ParsedAttrInfoNoStackProtector::Instance,
&ParsedAttrInfoNoThreadSafetyAnalysis::Instance,
&ParsedAttrInfoNoThrow::Instance,
&ParsedAttrInfoNoUniqueAddress::Instance,
&ParsedAttrInfoNonNull::Instance,
&ParsedAttrInfoNotTailCalled::Instance,
&ParsedAttrInfoOSConsumed::Instance,
&ParsedAttrInfoOSConsumesThis::Instance,
&ParsedAttrInfoOSReturnsNotRetained::Instance,
&ParsedAttrInfoOSReturnsRetained::Instance,
&ParsedAttrInfoOSReturnsRetainedOnNonZero::Instance,
&ParsedAttrInfoOSReturnsRetainedOnZero::Instance,
&ParsedAttrInfoObjCBoxable::Instance,
&ParsedAttrInfoObjCBridge::Instance,
&ParsedAttrInfoObjCBridgeMutable::Instance,
&ParsedAttrInfoObjCBridgeRelated::Instance,
&ParsedAttrInfoObjCClassStub::Instance,
&ParsedAttrInfoObjCDesignatedInitializer::Instance,
&ParsedAttrInfoObjCDirect::Instance,
&ParsedAttrInfoObjCDirectMembers::Instance,
&ParsedAttrInfoObjCException::Instance,
&ParsedAttrInfoObjCExplicitProtocolImpl::Instance,
&ParsedAttrInfoObjCExternallyRetained::Instance,
&ParsedAttrInfoObjCGC::Instance,
&ParsedAttrInfoObjCIndependentClass::Instance,
&ParsedAttrInfoObjCInertUnsafeUnretained::Instance,
&ParsedAttrInfoObjCKindOf::Instance,
&ParsedAttrInfoObjCMethodFamily::Instance,
&ParsedAttrInfoObjCNSObject::Instance,
&ParsedAttrInfoObjCNonLazyClass::Instance,
&ParsedAttrInfoObjCOwnership::Instance,
&ParsedAttrInfoObjCPreciseLifetime::Instance,
&ParsedAttrInfoObjCRequiresPropertyDefs::Instance,
&ParsedAttrInfoObjCRequiresSuper::Instance,
&ParsedAttrInfoObjCReturnsInnerPointer::Instance,
&ParsedAttrInfoObjCRootClass::Instance,
&ParsedAttrInfoObjCRuntimeName::Instance,
&ParsedAttrInfoObjCRuntimeVisible::Instance,
&ParsedAttrInfoObjCSubclassingRestricted::Instance,
&ParsedAttrInfoOpenCLAccess::Instance,
&ParsedAttrInfoOpenCLConstantAddressSpace::Instance,
&ParsedAttrInfoOpenCLGenericAddressSpace::Instance,
&ParsedAttrInfoOpenCLGlobalAddressSpace::Instance,
&ParsedAttrInfoOpenCLIntelReqdSubGroupSize::Instance,
&ParsedAttrInfoOpenCLKernel::Instance,
&ParsedAttrInfoOpenCLLocalAddressSpace::Instance,
&ParsedAttrInfoOpenCLNoSVM::Instance,
&ParsedAttrInfoOpenCLPrivateAddressSpace::Instance,
&ParsedAttrInfoOpenCLUnrollHint::Instance,
&ParsedAttrInfoOptimizeNone::Instance,
&ParsedAttrInfoOverloadable::Instance,
&ParsedAttrInfoOwner::Instance,
&ParsedAttrInfoOwnership::Instance,
&ParsedAttrInfoPacked::Instance,
&ParsedAttrInfoParamTypestate::Instance,
&ParsedAttrInfoPascal::Instance,
&ParsedAttrInfoPassObjectSize::Instance,
&ParsedAttrInfoPatchableFunctionEntry::Instance,
&ParsedAttrInfoPcs::Instance,
&ParsedAttrInfoPointer::Instance,
&ParsedAttrInfoPragmaClangBSSSection::Instance,
&ParsedAttrInfoPragmaClangDataSection::Instance,
&ParsedAttrInfoPragmaClangRelroSection::Instance,
&ParsedAttrInfoPragmaClangRodataSection::Instance,
&ParsedAttrInfoPragmaClangTextSection::Instance,
&ParsedAttrInfoPreserveAll::Instance,
&ParsedAttrInfoPreserveMost::Instance,
&ParsedAttrInfoPtGuardedBy::Instance,
&ParsedAttrInfoPtGuardedVar::Instance,
&ParsedAttrInfoPtr32::Instance,
&ParsedAttrInfoPtr64::Instance,
&ParsedAttrInfoPure::Instance,
&ParsedAttrInfoRegCall::Instance,
&ParsedAttrInfoRegparm::Instance,
&ParsedAttrInfoReinitializes::Instance,
&ParsedAttrInfoReleaseCapability::Instance,
&ParsedAttrInfoReleaseHandle::Instance,
&ParsedAttrInfoRenderScriptKernel::Instance,
&ParsedAttrInfoReqdWorkGroupSize::Instance,
&ParsedAttrInfoRequiresCapability::Instance,
&ParsedAttrInfoRestrict::Instance,
&ParsedAttrInfoReturnTypestate::Instance,
&ParsedAttrInfoReturnsNonNull::Instance,
&ParsedAttrInfoReturnsTwice::Instance,
&ParsedAttrInfoSPtr::Instance,
&ParsedAttrInfoSYCLKernel::Instance,
&ParsedAttrInfoScopedLockable::Instance,
&ParsedAttrInfoSection::Instance,
&ParsedAttrInfoSelectAny::Instance,
&ParsedAttrInfoSentinel::Instance,
&ParsedAttrInfoSetTypestate::Instance,
&ParsedAttrInfoSharedTrylockFunction::Instance,
&ParsedAttrInfoSpeculativeLoadHardening::Instance,
&ParsedAttrInfoStdCall::Instance,
&ParsedAttrInfoSuppress::Instance,
&ParsedAttrInfoSwiftCall::Instance,
&ParsedAttrInfoSwiftContext::Instance,
&ParsedAttrInfoSwiftErrorResult::Instance,
&ParsedAttrInfoSwiftIndirectResult::Instance,
&ParsedAttrInfoSysVABI::Instance,
&ParsedAttrInfoTLSModel::Instance,
&ParsedAttrInfoTarget::Instance,
&ParsedAttrInfoTestTypestate::Instance,
&ParsedAttrInfoThisCall::Instance,
&ParsedAttrInfoThread::Instance,
&ParsedAttrInfoTransparentUnion::Instance,
&ParsedAttrInfoTrivialABI::Instance,
&ParsedAttrInfoTryAcquireCapability::Instance,
&ParsedAttrInfoTypeNonNull::Instance,
&ParsedAttrInfoTypeNullUnspecified::Instance,
&ParsedAttrInfoTypeNullable::Instance,
&ParsedAttrInfoTypeTagForDatatype::Instance,
&ParsedAttrInfoTypeVisibility::Instance,
&ParsedAttrInfoUPtr::Instance,
&ParsedAttrInfoUnavailable::Instance,
&ParsedAttrInfoUninitialized::Instance,
&ParsedAttrInfoUnused::Instance,
&ParsedAttrInfoUseHandle::Instance,
&ParsedAttrInfoUsed::Instance,
&ParsedAttrInfoUuid::Instance,
&ParsedAttrInfoVecReturn::Instance,
&ParsedAttrInfoVecTypeHint::Instance,
&ParsedAttrInfoVectorCall::Instance,
&ParsedAttrInfoVectorSize::Instance,
&ParsedAttrInfoVisibility::Instance,
&ParsedAttrInfoWarnUnused::Instance,
&ParsedAttrInfoWarnUnusedResult::Instance,
&ParsedAttrInfoWeak::Instance,
&ParsedAttrInfoWeakImport::Instance,
&ParsedAttrInfoWeakRef::Instance,
&ParsedAttrInfoWebAssemblyExportName::Instance,
&ParsedAttrInfoWebAssemblyImportModule::Instance,
&ParsedAttrInfoWebAssemblyImportName::Instance,
&ParsedAttrInfoWorkGroupSizeHint::Instance,
&ParsedAttrInfoX86ForceAlignArgPointer::Instance,
&ParsedAttrInfoXRayInstrument::Instance,
&ParsedAttrInfoXRayLogArgs::Instance,
};

static bool checkAttributeMatchRuleAppliesTo(const Decl *D, attr::SubjectMatchRule rule) {
  switch (rule) {
  case attr::SubjectMatchRule_block:
    return isa<BlockDecl>(D);
  case attr::SubjectMatchRule_enum:
    return isa<EnumDecl>(D);
  case attr::SubjectMatchRule_enum_constant:
    return isa<EnumConstantDecl>(D);
  case attr::SubjectMatchRule_field:
    return isa<FieldDecl>(D);
  case attr::SubjectMatchRule_function:
    return isa<FunctionDecl>(D);
  case attr::SubjectMatchRule_function_is_member:
    return isa<CXXMethodDecl>(D);
  case attr::SubjectMatchRule_namespace:
    return isa<NamespaceDecl>(D);
  case attr::SubjectMatchRule_objc_category:
    return isa<ObjCCategoryDecl>(D);
  case attr::SubjectMatchRule_objc_implementation:
    return isa<ObjCImplDecl>(D);
  case attr::SubjectMatchRule_objc_interface:
    return isa<ObjCInterfaceDecl>(D);
  case attr::SubjectMatchRule_objc_method:
    return isa<ObjCMethodDecl>(D);
  case attr::SubjectMatchRule_objc_method_is_instance:
    return isObjCInstanceMethod(D);
  case attr::SubjectMatchRule_objc_property:
    return isa<ObjCPropertyDecl>(D);
  case attr::SubjectMatchRule_objc_protocol:
    return isa<ObjCProtocolDecl>(D);
  case attr::SubjectMatchRule_record:
    return isa<RecordDecl>(D) || isa<CXXRecordDecl>(D);
  case attr::SubjectMatchRule_record_not_is_union:
    return isStruct(D);
  case attr::SubjectMatchRule_hasType_abstract:
    assert(false && "Abstract matcher rule isn't allowed");
    return false;
  case attr::SubjectMatchRule_hasType_functionType:
    return isFunctionLike(D);
  case attr::SubjectMatchRule_type_alias:
    return isa<TypedefNameDecl>(D);
  case attr::SubjectMatchRule_variable:
    return isa<VarDecl>(D);
  case attr::SubjectMatchRule_variable_is_thread_local:
    return isTLSVar(D);
  case attr::SubjectMatchRule_variable_is_global:
    return isGlobalVar(D);
  case attr::SubjectMatchRule_variable_is_parameter:
    return isa<ParmVarDecl>(D);
  case attr::SubjectMatchRule_variable_not_is_parameter:
    return isNonParmVar(D);
  }
  llvm_unreachable("Invalid match rule");
return false;
}

