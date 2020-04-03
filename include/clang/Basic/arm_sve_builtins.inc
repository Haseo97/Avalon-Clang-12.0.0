#ifdef GET_SVE_BUILTINS
BUILTIN(__builtin_sve_svld1_f16, "q8hq16bhC*", "n")
BUILTIN(__builtin_sve_svld1_f32, "q4fq16bfC*", "n")
BUILTIN(__builtin_sve_svld1_f64, "q2dq16bdC*", "n")
BUILTIN(__builtin_sve_svld1_s16, "q8sq16bSsC*", "n")
BUILTIN(__builtin_sve_svld1_s32, "q4iq16bSiC*", "n")
BUILTIN(__builtin_sve_svld1_s64, "q2Wiq16bSWiC*", "n")
BUILTIN(__builtin_sve_svld1_s8, "q16Scq16bScC*", "n")
BUILTIN(__builtin_sve_svld1_u16, "q8Usq16bUsC*", "n")
BUILTIN(__builtin_sve_svld1_u32, "q4Uiq16bUiC*", "n")
BUILTIN(__builtin_sve_svld1_u64, "q2UWiq16bUWiC*", "n")
BUILTIN(__builtin_sve_svld1_u8, "q16Ucq16bUcC*", "n")
#endif

