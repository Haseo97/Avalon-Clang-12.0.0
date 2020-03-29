case ARM::BI__builtin_arm_mve_asrl:
  return AliasName == "asrl";
case ARM::BI__builtin_arm_mve_lsll:
  return AliasName == "lsll";
case ARM::BI__builtin_arm_mve_sqrshr:
  return AliasName == "sqrshr";
case ARM::BI__builtin_arm_mve_sqrshrl:
  return AliasName == "sqrshrl";
case ARM::BI__builtin_arm_mve_sqrshrl_sat48:
  return AliasName == "sqrshrl_sat48";
case ARM::BI__builtin_arm_mve_sqshl:
  return AliasName == "sqshl";
case ARM::BI__builtin_arm_mve_sqshll:
  return AliasName == "sqshll";
case ARM::BI__builtin_arm_mve_srshr:
  return AliasName == "srshr";
case ARM::BI__builtin_arm_mve_srshrl:
  return AliasName == "srshrl";
case ARM::BI__builtin_arm_mve_uqrshl:
  return AliasName == "uqrshl";
case ARM::BI__builtin_arm_mve_uqrshll:
  return AliasName == "uqrshll";
case ARM::BI__builtin_arm_mve_uqrshll_sat48:
  return AliasName == "uqrshll_sat48";
case ARM::BI__builtin_arm_mve_uqshl:
  return AliasName == "uqshl";
case ARM::BI__builtin_arm_mve_uqshll:
  return AliasName == "uqshll";
case ARM::BI__builtin_arm_mve_urshr:
  return AliasName == "urshr";
case ARM::BI__builtin_arm_mve_urshrl:
  return AliasName == "urshrl";
case ARM::BI__builtin_arm_mve_vadciq_m_s32:
  return AliasName == "vadciq_m_s32" || AliasName == "vadciq_m";
case ARM::BI__builtin_arm_mve_vadciq_m_u32:
  return AliasName == "vadciq_m_u32" || AliasName == "vadciq_m";
case ARM::BI__builtin_arm_mve_vadciq_s32:
  return AliasName == "vadciq_s32" || AliasName == "vadciq";
case ARM::BI__builtin_arm_mve_vadciq_u32:
  return AliasName == "vadciq_u32" || AliasName == "vadciq";
case ARM::BI__builtin_arm_mve_vadcq_m_s32:
  return AliasName == "vadcq_m_s32" || AliasName == "vadcq_m";
case ARM::BI__builtin_arm_mve_vadcq_m_u32:
  return AliasName == "vadcq_m_u32" || AliasName == "vadcq_m";
case ARM::BI__builtin_arm_mve_vadcq_s32:
  return AliasName == "vadcq_s32" || AliasName == "vadcq";
case ARM::BI__builtin_arm_mve_vadcq_u32:
  return AliasName == "vadcq_u32" || AliasName == "vadcq";
case ARM::BI__builtin_arm_mve_vaddq_f16:
  return AliasName == "vaddq_f16" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_f32:
  return AliasName == "vaddq_f32" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_m_f16:
  return AliasName == "vaddq_m_f16" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_f32:
  return AliasName == "vaddq_m_f32" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_s16:
  return AliasName == "vaddq_m_s16" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_s32:
  return AliasName == "vaddq_m_s32" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_s8:
  return AliasName == "vaddq_m_s8" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_u16:
  return AliasName == "vaddq_m_u16" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_u32:
  return AliasName == "vaddq_m_u32" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_u8:
  return AliasName == "vaddq_m_u8" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_s16:
  return AliasName == "vaddq_s16" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_s32:
  return AliasName == "vaddq_s32" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_s8:
  return AliasName == "vaddq_s8" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_u16:
  return AliasName == "vaddq_u16" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_u32:
  return AliasName == "vaddq_u32" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_u8:
  return AliasName == "vaddq_u8" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u16:
  return AliasName == "vcmpcsq_m_n_u16" || AliasName == "vcmpcsq_m";
case ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u32:
  return AliasName == "vcmpcsq_m_n_u32" || AliasName == "vcmpcsq_m";
case ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u8:
  return AliasName == "vcmpcsq_m_n_u8" || AliasName == "vcmpcsq_m";
case ARM::BI__builtin_arm_mve_vcmpcsq_m_u16:
  return AliasName == "vcmpcsq_m_u16" || AliasName == "vcmpcsq_m";
case ARM::BI__builtin_arm_mve_vcmpcsq_m_u32:
  return AliasName == "vcmpcsq_m_u32" || AliasName == "vcmpcsq_m";
case ARM::BI__builtin_arm_mve_vcmpcsq_m_u8:
  return AliasName == "vcmpcsq_m_u8" || AliasName == "vcmpcsq_m";
case ARM::BI__builtin_arm_mve_vcmpcsq_n_u16:
  return AliasName == "vcmpcsq_n_u16" || AliasName == "vcmpcsq";
case ARM::BI__builtin_arm_mve_vcmpcsq_n_u32:
  return AliasName == "vcmpcsq_n_u32" || AliasName == "vcmpcsq";
case ARM::BI__builtin_arm_mve_vcmpcsq_n_u8:
  return AliasName == "vcmpcsq_n_u8" || AliasName == "vcmpcsq";
case ARM::BI__builtin_arm_mve_vcmpcsq_u16:
  return AliasName == "vcmpcsq_u16" || AliasName == "vcmpcsq";
case ARM::BI__builtin_arm_mve_vcmpcsq_u32:
  return AliasName == "vcmpcsq_u32" || AliasName == "vcmpcsq";
case ARM::BI__builtin_arm_mve_vcmpcsq_u8:
  return AliasName == "vcmpcsq_u8" || AliasName == "vcmpcsq";
case ARM::BI__builtin_arm_mve_vcmpeqq_f16:
  return AliasName == "vcmpeqq_f16" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_f32:
  return AliasName == "vcmpeqq_f32" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_f16:
  return AliasName == "vcmpeqq_m_f16" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_f32:
  return AliasName == "vcmpeqq_m_f32" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_n_f16:
  return AliasName == "vcmpeqq_m_n_f16" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_n_f32:
  return AliasName == "vcmpeqq_m_n_f32" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s16:
  return AliasName == "vcmpeqq_m_n_s16" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s32:
  return AliasName == "vcmpeqq_m_n_s32" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s8:
  return AliasName == "vcmpeqq_m_n_s8" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u16:
  return AliasName == "vcmpeqq_m_n_u16" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u32:
  return AliasName == "vcmpeqq_m_n_u32" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u8:
  return AliasName == "vcmpeqq_m_n_u8" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_s16:
  return AliasName == "vcmpeqq_m_s16" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_s32:
  return AliasName == "vcmpeqq_m_s32" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_s8:
  return AliasName == "vcmpeqq_m_s8" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_u16:
  return AliasName == "vcmpeqq_m_u16" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_u32:
  return AliasName == "vcmpeqq_m_u32" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_m_u8:
  return AliasName == "vcmpeqq_m_u8" || AliasName == "vcmpeqq_m";
case ARM::BI__builtin_arm_mve_vcmpeqq_n_f16:
  return AliasName == "vcmpeqq_n_f16" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_n_f32:
  return AliasName == "vcmpeqq_n_f32" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_n_s16:
  return AliasName == "vcmpeqq_n_s16" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_n_s32:
  return AliasName == "vcmpeqq_n_s32" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_n_s8:
  return AliasName == "vcmpeqq_n_s8" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_n_u16:
  return AliasName == "vcmpeqq_n_u16" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_n_u32:
  return AliasName == "vcmpeqq_n_u32" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_n_u8:
  return AliasName == "vcmpeqq_n_u8" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_s16:
  return AliasName == "vcmpeqq_s16" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_s32:
  return AliasName == "vcmpeqq_s32" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_s8:
  return AliasName == "vcmpeqq_s8" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_u16:
  return AliasName == "vcmpeqq_u16" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_u32:
  return AliasName == "vcmpeqq_u32" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpeqq_u8:
  return AliasName == "vcmpeqq_u8" || AliasName == "vcmpeqq";
case ARM::BI__builtin_arm_mve_vcmpgeq_f16:
  return AliasName == "vcmpgeq_f16" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgeq_f32:
  return AliasName == "vcmpgeq_f32" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_f16:
  return AliasName == "vcmpgeq_m_f16" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_f32:
  return AliasName == "vcmpgeq_m_f32" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_n_f16:
  return AliasName == "vcmpgeq_m_n_f16" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_n_f32:
  return AliasName == "vcmpgeq_m_n_f32" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s16:
  return AliasName == "vcmpgeq_m_n_s16" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s32:
  return AliasName == "vcmpgeq_m_n_s32" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s8:
  return AliasName == "vcmpgeq_m_n_s8" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_s16:
  return AliasName == "vcmpgeq_m_s16" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_s32:
  return AliasName == "vcmpgeq_m_s32" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_m_s8:
  return AliasName == "vcmpgeq_m_s8" || AliasName == "vcmpgeq_m";
case ARM::BI__builtin_arm_mve_vcmpgeq_n_f16:
  return AliasName == "vcmpgeq_n_f16" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgeq_n_f32:
  return AliasName == "vcmpgeq_n_f32" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgeq_n_s16:
  return AliasName == "vcmpgeq_n_s16" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgeq_n_s32:
  return AliasName == "vcmpgeq_n_s32" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgeq_n_s8:
  return AliasName == "vcmpgeq_n_s8" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgeq_s16:
  return AliasName == "vcmpgeq_s16" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgeq_s32:
  return AliasName == "vcmpgeq_s32" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgeq_s8:
  return AliasName == "vcmpgeq_s8" || AliasName == "vcmpgeq";
case ARM::BI__builtin_arm_mve_vcmpgtq_f16:
  return AliasName == "vcmpgtq_f16" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmpgtq_f32:
  return AliasName == "vcmpgtq_f32" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_f16:
  return AliasName == "vcmpgtq_m_f16" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_f32:
  return AliasName == "vcmpgtq_m_f32" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_n_f16:
  return AliasName == "vcmpgtq_m_n_f16" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_n_f32:
  return AliasName == "vcmpgtq_m_n_f32" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s16:
  return AliasName == "vcmpgtq_m_n_s16" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s32:
  return AliasName == "vcmpgtq_m_n_s32" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s8:
  return AliasName == "vcmpgtq_m_n_s8" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_s16:
  return AliasName == "vcmpgtq_m_s16" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_s32:
  return AliasName == "vcmpgtq_m_s32" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_m_s8:
  return AliasName == "vcmpgtq_m_s8" || AliasName == "vcmpgtq_m";
case ARM::BI__builtin_arm_mve_vcmpgtq_n_f16:
  return AliasName == "vcmpgtq_n_f16" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmpgtq_n_f32:
  return AliasName == "vcmpgtq_n_f32" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmpgtq_n_s16:
  return AliasName == "vcmpgtq_n_s16" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmpgtq_n_s32:
  return AliasName == "vcmpgtq_n_s32" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmpgtq_n_s8:
  return AliasName == "vcmpgtq_n_s8" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmpgtq_s16:
  return AliasName == "vcmpgtq_s16" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmpgtq_s32:
  return AliasName == "vcmpgtq_s32" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmpgtq_s8:
  return AliasName == "vcmpgtq_s8" || AliasName == "vcmpgtq";
case ARM::BI__builtin_arm_mve_vcmphiq_m_n_u16:
  return AliasName == "vcmphiq_m_n_u16" || AliasName == "vcmphiq_m";
case ARM::BI__builtin_arm_mve_vcmphiq_m_n_u32:
  return AliasName == "vcmphiq_m_n_u32" || AliasName == "vcmphiq_m";
case ARM::BI__builtin_arm_mve_vcmphiq_m_n_u8:
  return AliasName == "vcmphiq_m_n_u8" || AliasName == "vcmphiq_m";
case ARM::BI__builtin_arm_mve_vcmphiq_m_u16:
  return AliasName == "vcmphiq_m_u16" || AliasName == "vcmphiq_m";
case ARM::BI__builtin_arm_mve_vcmphiq_m_u32:
  return AliasName == "vcmphiq_m_u32" || AliasName == "vcmphiq_m";
case ARM::BI__builtin_arm_mve_vcmphiq_m_u8:
  return AliasName == "vcmphiq_m_u8" || AliasName == "vcmphiq_m";
case ARM::BI__builtin_arm_mve_vcmphiq_n_u16:
  return AliasName == "vcmphiq_n_u16" || AliasName == "vcmphiq";
case ARM::BI__builtin_arm_mve_vcmphiq_n_u32:
  return AliasName == "vcmphiq_n_u32" || AliasName == "vcmphiq";
case ARM::BI__builtin_arm_mve_vcmphiq_n_u8:
  return AliasName == "vcmphiq_n_u8" || AliasName == "vcmphiq";
case ARM::BI__builtin_arm_mve_vcmphiq_u16:
  return AliasName == "vcmphiq_u16" || AliasName == "vcmphiq";
case ARM::BI__builtin_arm_mve_vcmphiq_u32:
  return AliasName == "vcmphiq_u32" || AliasName == "vcmphiq";
case ARM::BI__builtin_arm_mve_vcmphiq_u8:
  return AliasName == "vcmphiq_u8" || AliasName == "vcmphiq";
case ARM::BI__builtin_arm_mve_vcmpleq_f16:
  return AliasName == "vcmpleq_f16" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpleq_f32:
  return AliasName == "vcmpleq_f32" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpleq_m_f16:
  return AliasName == "vcmpleq_m_f16" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_m_f32:
  return AliasName == "vcmpleq_m_f32" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_m_n_f16:
  return AliasName == "vcmpleq_m_n_f16" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_m_n_f32:
  return AliasName == "vcmpleq_m_n_f32" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_m_n_s16:
  return AliasName == "vcmpleq_m_n_s16" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_m_n_s32:
  return AliasName == "vcmpleq_m_n_s32" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_m_n_s8:
  return AliasName == "vcmpleq_m_n_s8" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_m_s16:
  return AliasName == "vcmpleq_m_s16" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_m_s32:
  return AliasName == "vcmpleq_m_s32" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_m_s8:
  return AliasName == "vcmpleq_m_s8" || AliasName == "vcmpleq_m";
case ARM::BI__builtin_arm_mve_vcmpleq_n_f16:
  return AliasName == "vcmpleq_n_f16" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpleq_n_f32:
  return AliasName == "vcmpleq_n_f32" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpleq_n_s16:
  return AliasName == "vcmpleq_n_s16" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpleq_n_s32:
  return AliasName == "vcmpleq_n_s32" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpleq_n_s8:
  return AliasName == "vcmpleq_n_s8" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpleq_s16:
  return AliasName == "vcmpleq_s16" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpleq_s32:
  return AliasName == "vcmpleq_s32" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpleq_s8:
  return AliasName == "vcmpleq_s8" || AliasName == "vcmpleq";
case ARM::BI__builtin_arm_mve_vcmpltq_f16:
  return AliasName == "vcmpltq_f16" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpltq_f32:
  return AliasName == "vcmpltq_f32" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpltq_m_f16:
  return AliasName == "vcmpltq_m_f16" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_m_f32:
  return AliasName == "vcmpltq_m_f32" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_m_n_f16:
  return AliasName == "vcmpltq_m_n_f16" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_m_n_f32:
  return AliasName == "vcmpltq_m_n_f32" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_m_n_s16:
  return AliasName == "vcmpltq_m_n_s16" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_m_n_s32:
  return AliasName == "vcmpltq_m_n_s32" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_m_n_s8:
  return AliasName == "vcmpltq_m_n_s8" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_m_s16:
  return AliasName == "vcmpltq_m_s16" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_m_s32:
  return AliasName == "vcmpltq_m_s32" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_m_s8:
  return AliasName == "vcmpltq_m_s8" || AliasName == "vcmpltq_m";
case ARM::BI__builtin_arm_mve_vcmpltq_n_f16:
  return AliasName == "vcmpltq_n_f16" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpltq_n_f32:
  return AliasName == "vcmpltq_n_f32" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpltq_n_s16:
  return AliasName == "vcmpltq_n_s16" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpltq_n_s32:
  return AliasName == "vcmpltq_n_s32" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpltq_n_s8:
  return AliasName == "vcmpltq_n_s8" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpltq_s16:
  return AliasName == "vcmpltq_s16" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpltq_s32:
  return AliasName == "vcmpltq_s32" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpltq_s8:
  return AliasName == "vcmpltq_s8" || AliasName == "vcmpltq";
case ARM::BI__builtin_arm_mve_vcmpneq_f16:
  return AliasName == "vcmpneq_f16" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_f32:
  return AliasName == "vcmpneq_f32" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_m_f16:
  return AliasName == "vcmpneq_m_f16" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_f32:
  return AliasName == "vcmpneq_m_f32" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_n_f16:
  return AliasName == "vcmpneq_m_n_f16" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_n_f32:
  return AliasName == "vcmpneq_m_n_f32" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_n_s16:
  return AliasName == "vcmpneq_m_n_s16" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_n_s32:
  return AliasName == "vcmpneq_m_n_s32" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_n_s8:
  return AliasName == "vcmpneq_m_n_s8" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_n_u16:
  return AliasName == "vcmpneq_m_n_u16" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_n_u32:
  return AliasName == "vcmpneq_m_n_u32" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_n_u8:
  return AliasName == "vcmpneq_m_n_u8" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_s16:
  return AliasName == "vcmpneq_m_s16" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_s32:
  return AliasName == "vcmpneq_m_s32" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_s8:
  return AliasName == "vcmpneq_m_s8" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_u16:
  return AliasName == "vcmpneq_m_u16" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_u32:
  return AliasName == "vcmpneq_m_u32" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_m_u8:
  return AliasName == "vcmpneq_m_u8" || AliasName == "vcmpneq_m";
case ARM::BI__builtin_arm_mve_vcmpneq_n_f16:
  return AliasName == "vcmpneq_n_f16" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_n_f32:
  return AliasName == "vcmpneq_n_f32" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_n_s16:
  return AliasName == "vcmpneq_n_s16" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_n_s32:
  return AliasName == "vcmpneq_n_s32" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_n_s8:
  return AliasName == "vcmpneq_n_s8" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_n_u16:
  return AliasName == "vcmpneq_n_u16" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_n_u32:
  return AliasName == "vcmpneq_n_u32" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_n_u8:
  return AliasName == "vcmpneq_n_u8" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_s16:
  return AliasName == "vcmpneq_s16" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_s32:
  return AliasName == "vcmpneq_s32" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_s8:
  return AliasName == "vcmpneq_s8" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_u16:
  return AliasName == "vcmpneq_u16" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_u32:
  return AliasName == "vcmpneq_u32" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcmpneq_u8:
  return AliasName == "vcmpneq_u8" || AliasName == "vcmpneq";
case ARM::BI__builtin_arm_mve_vcreateq_f16:
  return AliasName == "vcreateq_f16";
case ARM::BI__builtin_arm_mve_vcreateq_f32:
  return AliasName == "vcreateq_f32";
case ARM::BI__builtin_arm_mve_vcreateq_s16:
  return AliasName == "vcreateq_s16";
case ARM::BI__builtin_arm_mve_vcreateq_s32:
  return AliasName == "vcreateq_s32";
case ARM::BI__builtin_arm_mve_vcreateq_s64:
  return AliasName == "vcreateq_s64";
case ARM::BI__builtin_arm_mve_vcreateq_s8:
  return AliasName == "vcreateq_s8";
case ARM::BI__builtin_arm_mve_vcreateq_u16:
  return AliasName == "vcreateq_u16";
case ARM::BI__builtin_arm_mve_vcreateq_u32:
  return AliasName == "vcreateq_u32";
case ARM::BI__builtin_arm_mve_vcreateq_u64:
  return AliasName == "vcreateq_u64";
case ARM::BI__builtin_arm_mve_vcreateq_u8:
  return AliasName == "vcreateq_u8";
case ARM::BI__builtin_arm_mve_vcvtbq_f16_f32:
  return AliasName == "vcvtbq_f16_f32";
case ARM::BI__builtin_arm_mve_vcvtbq_m_f16_f32:
  return AliasName == "vcvtbq_m_f16_f32";
case ARM::BI__builtin_arm_mve_vcvttq_f16_f32:
  return AliasName == "vcvttq_f16_f32";
case ARM::BI__builtin_arm_mve_vcvttq_m_f16_f32:
  return AliasName == "vcvttq_m_f16_f32";
case ARM::BI__builtin_arm_mve_vgetq_lane_f16:
  return AliasName == "vgetq_lane_f16" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vgetq_lane_f32:
  return AliasName == "vgetq_lane_f32" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vgetq_lane_s16:
  return AliasName == "vgetq_lane_s16" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vgetq_lane_s32:
  return AliasName == "vgetq_lane_s32" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vgetq_lane_s64:
  return AliasName == "vgetq_lane_s64" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vgetq_lane_s8:
  return AliasName == "vgetq_lane_s8" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vgetq_lane_u16:
  return AliasName == "vgetq_lane_u16" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vgetq_lane_u32:
  return AliasName == "vgetq_lane_u32" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vgetq_lane_u64:
  return AliasName == "vgetq_lane_u64" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vgetq_lane_u8:
  return AliasName == "vgetq_lane_u8" || AliasName == "vgetq_lane";
case ARM::BI__builtin_arm_mve_vld1q_f16:
  return AliasName == "vld1q_f16" || AliasName == "vld1q";
case ARM::BI__builtin_arm_mve_vld1q_f32:
  return AliasName == "vld1q_f32" || AliasName == "vld1q";
case ARM::BI__builtin_arm_mve_vld1q_s16:
  return AliasName == "vld1q_s16" || AliasName == "vld1q";
case ARM::BI__builtin_arm_mve_vld1q_s32:
  return AliasName == "vld1q_s32" || AliasName == "vld1q";
case ARM::BI__builtin_arm_mve_vld1q_s8:
  return AliasName == "vld1q_s8" || AliasName == "vld1q";
case ARM::BI__builtin_arm_mve_vld1q_u16:
  return AliasName == "vld1q_u16" || AliasName == "vld1q";
case ARM::BI__builtin_arm_mve_vld1q_u32:
  return AliasName == "vld1q_u32" || AliasName == "vld1q";
case ARM::BI__builtin_arm_mve_vld1q_u8:
  return AliasName == "vld1q_u8" || AliasName == "vld1q";
case ARM::BI__builtin_arm_mve_vld1q_z_f16:
  return AliasName == "vld1q_z_f16" || AliasName == "vld1q_z";
case ARM::BI__builtin_arm_mve_vld1q_z_f32:
  return AliasName == "vld1q_z_f32" || AliasName == "vld1q_z";
case ARM::BI__builtin_arm_mve_vld1q_z_s16:
  return AliasName == "vld1q_z_s16" || AliasName == "vld1q_z";
case ARM::BI__builtin_arm_mve_vld1q_z_s32:
  return AliasName == "vld1q_z_s32" || AliasName == "vld1q_z";
case ARM::BI__builtin_arm_mve_vld1q_z_s8:
  return AliasName == "vld1q_z_s8" || AliasName == "vld1q_z";
case ARM::BI__builtin_arm_mve_vld1q_z_u16:
  return AliasName == "vld1q_z_u16" || AliasName == "vld1q_z";
case ARM::BI__builtin_arm_mve_vld1q_z_u32:
  return AliasName == "vld1q_z_u32" || AliasName == "vld1q_z";
case ARM::BI__builtin_arm_mve_vld1q_z_u8:
  return AliasName == "vld1q_z_u8" || AliasName == "vld1q_z";
case ARM::BI__builtin_arm_mve_vld2q_f16:
  return AliasName == "vld2q_f16" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_f32:
  return AliasName == "vld2q_f32" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_s16:
  return AliasName == "vld2q_s16" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_s32:
  return AliasName == "vld2q_s32" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_s8:
  return AliasName == "vld2q_s8" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_u16:
  return AliasName == "vld2q_u16" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_u32:
  return AliasName == "vld2q_u32" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_u8:
  return AliasName == "vld2q_u8" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld4q_f16:
  return AliasName == "vld4q_f16" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_f32:
  return AliasName == "vld4q_f32" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_s16:
  return AliasName == "vld4q_s16" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_s32:
  return AliasName == "vld4q_s32" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_s8:
  return AliasName == "vld4q_s8" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_u16:
  return AliasName == "vld4q_u16" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_u32:
  return AliasName == "vld4q_u32" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_u8:
  return AliasName == "vld4q_u8" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s16:
  return AliasName == "vldrbq_gather_offset_s16" || AliasName == "vldrbq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s32:
  return AliasName == "vldrbq_gather_offset_s32" || AliasName == "vldrbq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s8:
  return AliasName == "vldrbq_gather_offset_s8" || AliasName == "vldrbq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u16:
  return AliasName == "vldrbq_gather_offset_u16" || AliasName == "vldrbq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u32:
  return AliasName == "vldrbq_gather_offset_u32" || AliasName == "vldrbq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u8:
  return AliasName == "vldrbq_gather_offset_u8" || AliasName == "vldrbq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s16:
  return AliasName == "vldrbq_gather_offset_z_s16" || AliasName == "vldrbq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s32:
  return AliasName == "vldrbq_gather_offset_z_s32" || AliasName == "vldrbq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s8:
  return AliasName == "vldrbq_gather_offset_z_s8" || AliasName == "vldrbq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u16:
  return AliasName == "vldrbq_gather_offset_z_u16" || AliasName == "vldrbq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u32:
  return AliasName == "vldrbq_gather_offset_z_u32" || AliasName == "vldrbq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u8:
  return AliasName == "vldrbq_gather_offset_z_u8" || AliasName == "vldrbq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrbq_s16:
  return AliasName == "vldrbq_s16";
case ARM::BI__builtin_arm_mve_vldrbq_s32:
  return AliasName == "vldrbq_s32";
case ARM::BI__builtin_arm_mve_vldrbq_s8:
  return AliasName == "vldrbq_s8";
case ARM::BI__builtin_arm_mve_vldrbq_u16:
  return AliasName == "vldrbq_u16";
case ARM::BI__builtin_arm_mve_vldrbq_u32:
  return AliasName == "vldrbq_u32";
case ARM::BI__builtin_arm_mve_vldrbq_u8:
  return AliasName == "vldrbq_u8";
case ARM::BI__builtin_arm_mve_vldrbq_z_s16:
  return AliasName == "vldrbq_z_s16";
case ARM::BI__builtin_arm_mve_vldrbq_z_s32:
  return AliasName == "vldrbq_z_s32";
case ARM::BI__builtin_arm_mve_vldrbq_z_s8:
  return AliasName == "vldrbq_z_s8";
case ARM::BI__builtin_arm_mve_vldrbq_z_u16:
  return AliasName == "vldrbq_z_u16";
case ARM::BI__builtin_arm_mve_vldrbq_z_u32:
  return AliasName == "vldrbq_z_u32";
case ARM::BI__builtin_arm_mve_vldrbq_z_u8:
  return AliasName == "vldrbq_z_u8";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_s64:
  return AliasName == "vldrdq_gather_base_s64";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_u64:
  return AliasName == "vldrdq_gather_base_u64";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_s64:
  return AliasName == "vldrdq_gather_base_wb_s64";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_u64:
  return AliasName == "vldrdq_gather_base_wb_u64";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64:
  return AliasName == "vldrdq_gather_base_wb_z_s64";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64:
  return AliasName == "vldrdq_gather_base_wb_z_u64";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_s64:
  return AliasName == "vldrdq_gather_base_z_s64";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_u64:
  return AliasName == "vldrdq_gather_base_z_u64";
case ARM::BI__builtin_arm_mve_vldrdq_gather_offset_s64:
  return AliasName == "vldrdq_gather_offset_s64" || AliasName == "vldrdq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrdq_gather_offset_u64:
  return AliasName == "vldrdq_gather_offset_u64" || AliasName == "vldrdq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_s64:
  return AliasName == "vldrdq_gather_offset_z_s64" || AliasName == "vldrdq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_u64:
  return AliasName == "vldrdq_gather_offset_z_u64" || AliasName == "vldrdq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_s64:
  return AliasName == "vldrdq_gather_shifted_offset_s64" || AliasName == "vldrdq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_u64:
  return AliasName == "vldrdq_gather_shifted_offset_u64" || AliasName == "vldrdq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_s64:
  return AliasName == "vldrdq_gather_shifted_offset_z_s64" || AliasName == "vldrdq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_u64:
  return AliasName == "vldrdq_gather_shifted_offset_z_u64" || AliasName == "vldrdq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_f16:
  return AliasName == "vldrhq_f16";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_f16:
  return AliasName == "vldrhq_gather_offset_f16" || AliasName == "vldrhq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s16:
  return AliasName == "vldrhq_gather_offset_s16" || AliasName == "vldrhq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s32:
  return AliasName == "vldrhq_gather_offset_s32" || AliasName == "vldrhq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u16:
  return AliasName == "vldrhq_gather_offset_u16" || AliasName == "vldrhq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u32:
  return AliasName == "vldrhq_gather_offset_u32" || AliasName == "vldrhq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_f16:
  return AliasName == "vldrhq_gather_offset_z_f16" || AliasName == "vldrhq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s16:
  return AliasName == "vldrhq_gather_offset_z_s16" || AliasName == "vldrhq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s32:
  return AliasName == "vldrhq_gather_offset_z_s32" || AliasName == "vldrhq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u16:
  return AliasName == "vldrhq_gather_offset_z_u16" || AliasName == "vldrhq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u32:
  return AliasName == "vldrhq_gather_offset_z_u32" || AliasName == "vldrhq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_f16:
  return AliasName == "vldrhq_gather_shifted_offset_f16" || AliasName == "vldrhq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s16:
  return AliasName == "vldrhq_gather_shifted_offset_s16" || AliasName == "vldrhq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s32:
  return AliasName == "vldrhq_gather_shifted_offset_s32" || AliasName == "vldrhq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u16:
  return AliasName == "vldrhq_gather_shifted_offset_u16" || AliasName == "vldrhq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u32:
  return AliasName == "vldrhq_gather_shifted_offset_u32" || AliasName == "vldrhq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_f16:
  return AliasName == "vldrhq_gather_shifted_offset_z_f16" || AliasName == "vldrhq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s16:
  return AliasName == "vldrhq_gather_shifted_offset_z_s16" || AliasName == "vldrhq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s32:
  return AliasName == "vldrhq_gather_shifted_offset_z_s32" || AliasName == "vldrhq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u16:
  return AliasName == "vldrhq_gather_shifted_offset_z_u16" || AliasName == "vldrhq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u32:
  return AliasName == "vldrhq_gather_shifted_offset_z_u32" || AliasName == "vldrhq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrhq_s16:
  return AliasName == "vldrhq_s16";
case ARM::BI__builtin_arm_mve_vldrhq_s32:
  return AliasName == "vldrhq_s32";
case ARM::BI__builtin_arm_mve_vldrhq_u16:
  return AliasName == "vldrhq_u16";
case ARM::BI__builtin_arm_mve_vldrhq_u32:
  return AliasName == "vldrhq_u32";
case ARM::BI__builtin_arm_mve_vldrhq_z_f16:
  return AliasName == "vldrhq_z_f16";
case ARM::BI__builtin_arm_mve_vldrhq_z_s16:
  return AliasName == "vldrhq_z_s16";
case ARM::BI__builtin_arm_mve_vldrhq_z_s32:
  return AliasName == "vldrhq_z_s32";
case ARM::BI__builtin_arm_mve_vldrhq_z_u16:
  return AliasName == "vldrhq_z_u16";
case ARM::BI__builtin_arm_mve_vldrhq_z_u32:
  return AliasName == "vldrhq_z_u32";
case ARM::BI__builtin_arm_mve_vldrwq_f32:
  return AliasName == "vldrwq_f32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_f32:
  return AliasName == "vldrwq_gather_base_f32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_s32:
  return AliasName == "vldrwq_gather_base_s32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_u32:
  return AliasName == "vldrwq_gather_base_u32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32:
  return AliasName == "vldrwq_gather_base_wb_f32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32:
  return AliasName == "vldrwq_gather_base_wb_s32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32:
  return AliasName == "vldrwq_gather_base_wb_u32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_f32:
  return AliasName == "vldrwq_gather_base_wb_z_f32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_s32:
  return AliasName == "vldrwq_gather_base_wb_z_s32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_u32:
  return AliasName == "vldrwq_gather_base_wb_z_u32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_f32:
  return AliasName == "vldrwq_gather_base_z_f32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_s32:
  return AliasName == "vldrwq_gather_base_z_s32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_u32:
  return AliasName == "vldrwq_gather_base_z_u32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_offset_f32:
  return AliasName == "vldrwq_gather_offset_f32" || AliasName == "vldrwq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrwq_gather_offset_s32:
  return AliasName == "vldrwq_gather_offset_s32" || AliasName == "vldrwq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrwq_gather_offset_u32:
  return AliasName == "vldrwq_gather_offset_u32" || AliasName == "vldrwq_gather_offset";
case ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_f32:
  return AliasName == "vldrwq_gather_offset_z_f32" || AliasName == "vldrwq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_s32:
  return AliasName == "vldrwq_gather_offset_z_s32" || AliasName == "vldrwq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_u32:
  return AliasName == "vldrwq_gather_offset_z_u32" || AliasName == "vldrwq_gather_offset_z";
case ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_f32:
  return AliasName == "vldrwq_gather_shifted_offset_f32" || AliasName == "vldrwq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_s32:
  return AliasName == "vldrwq_gather_shifted_offset_s32" || AliasName == "vldrwq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_u32:
  return AliasName == "vldrwq_gather_shifted_offset_u32" || AliasName == "vldrwq_gather_shifted_offset";
case ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_f32:
  return AliasName == "vldrwq_gather_shifted_offset_z_f32" || AliasName == "vldrwq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_s32:
  return AliasName == "vldrwq_gather_shifted_offset_z_s32" || AliasName == "vldrwq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_u32:
  return AliasName == "vldrwq_gather_shifted_offset_z_u32" || AliasName == "vldrwq_gather_shifted_offset_z";
case ARM::BI__builtin_arm_mve_vldrwq_s32:
  return AliasName == "vldrwq_s32";
case ARM::BI__builtin_arm_mve_vldrwq_u32:
  return AliasName == "vldrwq_u32";
case ARM::BI__builtin_arm_mve_vldrwq_z_f32:
  return AliasName == "vldrwq_z_f32";
case ARM::BI__builtin_arm_mve_vldrwq_z_s32:
  return AliasName == "vldrwq_z_s32";
case ARM::BI__builtin_arm_mve_vldrwq_z_u32:
  return AliasName == "vldrwq_z_u32";
case ARM::BI__builtin_arm_mve_vmaxvq_s16:
  return AliasName == "vmaxvq_s16" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_s32:
  return AliasName == "vmaxvq_s32" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_s8:
  return AliasName == "vmaxvq_s8" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_u16:
  return AliasName == "vmaxvq_u16" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_u32:
  return AliasName == "vmaxvq_u32" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_u8:
  return AliasName == "vmaxvq_u8" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vminvq_s16:
  return AliasName == "vminvq_s16" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_s32:
  return AliasName == "vminvq_s32" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_s8:
  return AliasName == "vminvq_s8" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_u16:
  return AliasName == "vminvq_u16" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_u32:
  return AliasName == "vminvq_u32" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_u8:
  return AliasName == "vminvq_u8" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vreinterpretq_f16_f32:
  return AliasName == "vreinterpretq_f16_f32" || AliasName == "vreinterpretq_f16";
case ARM::BI__builtin_arm_mve_vreinterpretq_f16_s16:
  return AliasName == "vreinterpretq_f16_s16" || AliasName == "vreinterpretq_f16";
case ARM::BI__builtin_arm_mve_vreinterpretq_f16_s32:
  return AliasName == "vreinterpretq_f16_s32" || AliasName == "vreinterpretq_f16";
case ARM::BI__builtin_arm_mve_vreinterpretq_f16_s64:
  return AliasName == "vreinterpretq_f16_s64" || AliasName == "vreinterpretq_f16";
case ARM::BI__builtin_arm_mve_vreinterpretq_f16_s8:
  return AliasName == "vreinterpretq_f16_s8" || AliasName == "vreinterpretq_f16";
case ARM::BI__builtin_arm_mve_vreinterpretq_f16_u16:
  return AliasName == "vreinterpretq_f16_u16" || AliasName == "vreinterpretq_f16";
case ARM::BI__builtin_arm_mve_vreinterpretq_f16_u32:
  return AliasName == "vreinterpretq_f16_u32" || AliasName == "vreinterpretq_f16";
case ARM::BI__builtin_arm_mve_vreinterpretq_f16_u64:
  return AliasName == "vreinterpretq_f16_u64" || AliasName == "vreinterpretq_f16";
case ARM::BI__builtin_arm_mve_vreinterpretq_f16_u8:
  return AliasName == "vreinterpretq_f16_u8" || AliasName == "vreinterpretq_f16";
case ARM::BI__builtin_arm_mve_vreinterpretq_f32_f16:
  return AliasName == "vreinterpretq_f32_f16" || AliasName == "vreinterpretq_f32";
case ARM::BI__builtin_arm_mve_vreinterpretq_f32_s16:
  return AliasName == "vreinterpretq_f32_s16" || AliasName == "vreinterpretq_f32";
case ARM::BI__builtin_arm_mve_vreinterpretq_f32_s32:
  return AliasName == "vreinterpretq_f32_s32" || AliasName == "vreinterpretq_f32";
case ARM::BI__builtin_arm_mve_vreinterpretq_f32_s64:
  return AliasName == "vreinterpretq_f32_s64" || AliasName == "vreinterpretq_f32";
case ARM::BI__builtin_arm_mve_vreinterpretq_f32_s8:
  return AliasName == "vreinterpretq_f32_s8" || AliasName == "vreinterpretq_f32";
case ARM::BI__builtin_arm_mve_vreinterpretq_f32_u16:
  return AliasName == "vreinterpretq_f32_u16" || AliasName == "vreinterpretq_f32";
case ARM::BI__builtin_arm_mve_vreinterpretq_f32_u32:
  return AliasName == "vreinterpretq_f32_u32" || AliasName == "vreinterpretq_f32";
case ARM::BI__builtin_arm_mve_vreinterpretq_f32_u64:
  return AliasName == "vreinterpretq_f32_u64" || AliasName == "vreinterpretq_f32";
case ARM::BI__builtin_arm_mve_vreinterpretq_f32_u8:
  return AliasName == "vreinterpretq_f32_u8" || AliasName == "vreinterpretq_f32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s16_f16:
  return AliasName == "vreinterpretq_s16_f16" || AliasName == "vreinterpretq_s16";
case ARM::BI__builtin_arm_mve_vreinterpretq_s16_f32:
  return AliasName == "vreinterpretq_s16_f32" || AliasName == "vreinterpretq_s16";
case ARM::BI__builtin_arm_mve_vreinterpretq_s16_s32:
  return AliasName == "vreinterpretq_s16_s32" || AliasName == "vreinterpretq_s16";
case ARM::BI__builtin_arm_mve_vreinterpretq_s16_s64:
  return AliasName == "vreinterpretq_s16_s64" || AliasName == "vreinterpretq_s16";
case ARM::BI__builtin_arm_mve_vreinterpretq_s16_s8:
  return AliasName == "vreinterpretq_s16_s8" || AliasName == "vreinterpretq_s16";
case ARM::BI__builtin_arm_mve_vreinterpretq_s16_u16:
  return AliasName == "vreinterpretq_s16_u16" || AliasName == "vreinterpretq_s16";
case ARM::BI__builtin_arm_mve_vreinterpretq_s16_u32:
  return AliasName == "vreinterpretq_s16_u32" || AliasName == "vreinterpretq_s16";
case ARM::BI__builtin_arm_mve_vreinterpretq_s16_u64:
  return AliasName == "vreinterpretq_s16_u64" || AliasName == "vreinterpretq_s16";
case ARM::BI__builtin_arm_mve_vreinterpretq_s16_u8:
  return AliasName == "vreinterpretq_s16_u8" || AliasName == "vreinterpretq_s16";
case ARM::BI__builtin_arm_mve_vreinterpretq_s32_f16:
  return AliasName == "vreinterpretq_s32_f16" || AliasName == "vreinterpretq_s32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s32_f32:
  return AliasName == "vreinterpretq_s32_f32" || AliasName == "vreinterpretq_s32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s32_s16:
  return AliasName == "vreinterpretq_s32_s16" || AliasName == "vreinterpretq_s32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s32_s64:
  return AliasName == "vreinterpretq_s32_s64" || AliasName == "vreinterpretq_s32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s32_s8:
  return AliasName == "vreinterpretq_s32_s8" || AliasName == "vreinterpretq_s32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s32_u16:
  return AliasName == "vreinterpretq_s32_u16" || AliasName == "vreinterpretq_s32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s32_u32:
  return AliasName == "vreinterpretq_s32_u32" || AliasName == "vreinterpretq_s32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s32_u64:
  return AliasName == "vreinterpretq_s32_u64" || AliasName == "vreinterpretq_s32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s32_u8:
  return AliasName == "vreinterpretq_s32_u8" || AliasName == "vreinterpretq_s32";
case ARM::BI__builtin_arm_mve_vreinterpretq_s64_f16:
  return AliasName == "vreinterpretq_s64_f16" || AliasName == "vreinterpretq_s64";
case ARM::BI__builtin_arm_mve_vreinterpretq_s64_f32:
  return AliasName == "vreinterpretq_s64_f32" || AliasName == "vreinterpretq_s64";
case ARM::BI__builtin_arm_mve_vreinterpretq_s64_s16:
  return AliasName == "vreinterpretq_s64_s16" || AliasName == "vreinterpretq_s64";
case ARM::BI__builtin_arm_mve_vreinterpretq_s64_s32:
  return AliasName == "vreinterpretq_s64_s32" || AliasName == "vreinterpretq_s64";
case ARM::BI__builtin_arm_mve_vreinterpretq_s64_s8:
  return AliasName == "vreinterpretq_s64_s8" || AliasName == "vreinterpretq_s64";
case ARM::BI__builtin_arm_mve_vreinterpretq_s64_u16:
  return AliasName == "vreinterpretq_s64_u16" || AliasName == "vreinterpretq_s64";
case ARM::BI__builtin_arm_mve_vreinterpretq_s64_u32:
  return AliasName == "vreinterpretq_s64_u32" || AliasName == "vreinterpretq_s64";
case ARM::BI__builtin_arm_mve_vreinterpretq_s64_u64:
  return AliasName == "vreinterpretq_s64_u64" || AliasName == "vreinterpretq_s64";
case ARM::BI__builtin_arm_mve_vreinterpretq_s64_u8:
  return AliasName == "vreinterpretq_s64_u8" || AliasName == "vreinterpretq_s64";
case ARM::BI__builtin_arm_mve_vreinterpretq_s8_f16:
  return AliasName == "vreinterpretq_s8_f16" || AliasName == "vreinterpretq_s8";
case ARM::BI__builtin_arm_mve_vreinterpretq_s8_f32:
  return AliasName == "vreinterpretq_s8_f32" || AliasName == "vreinterpretq_s8";
case ARM::BI__builtin_arm_mve_vreinterpretq_s8_s16:
  return AliasName == "vreinterpretq_s8_s16" || AliasName == "vreinterpretq_s8";
case ARM::BI__builtin_arm_mve_vreinterpretq_s8_s32:
  return AliasName == "vreinterpretq_s8_s32" || AliasName == "vreinterpretq_s8";
case ARM::BI__builtin_arm_mve_vreinterpretq_s8_s64:
  return AliasName == "vreinterpretq_s8_s64" || AliasName == "vreinterpretq_s8";
case ARM::BI__builtin_arm_mve_vreinterpretq_s8_u16:
  return AliasName == "vreinterpretq_s8_u16" || AliasName == "vreinterpretq_s8";
case ARM::BI__builtin_arm_mve_vreinterpretq_s8_u32:
  return AliasName == "vreinterpretq_s8_u32" || AliasName == "vreinterpretq_s8";
case ARM::BI__builtin_arm_mve_vreinterpretq_s8_u64:
  return AliasName == "vreinterpretq_s8_u64" || AliasName == "vreinterpretq_s8";
case ARM::BI__builtin_arm_mve_vreinterpretq_s8_u8:
  return AliasName == "vreinterpretq_s8_u8" || AliasName == "vreinterpretq_s8";
case ARM::BI__builtin_arm_mve_vreinterpretq_u16_f16:
  return AliasName == "vreinterpretq_u16_f16" || AliasName == "vreinterpretq_u16";
case ARM::BI__builtin_arm_mve_vreinterpretq_u16_f32:
  return AliasName == "vreinterpretq_u16_f32" || AliasName == "vreinterpretq_u16";
case ARM::BI__builtin_arm_mve_vreinterpretq_u16_s16:
  return AliasName == "vreinterpretq_u16_s16" || AliasName == "vreinterpretq_u16";
case ARM::BI__builtin_arm_mve_vreinterpretq_u16_s32:
  return AliasName == "vreinterpretq_u16_s32" || AliasName == "vreinterpretq_u16";
case ARM::BI__builtin_arm_mve_vreinterpretq_u16_s64:
  return AliasName == "vreinterpretq_u16_s64" || AliasName == "vreinterpretq_u16";
case ARM::BI__builtin_arm_mve_vreinterpretq_u16_s8:
  return AliasName == "vreinterpretq_u16_s8" || AliasName == "vreinterpretq_u16";
case ARM::BI__builtin_arm_mve_vreinterpretq_u16_u32:
  return AliasName == "vreinterpretq_u16_u32" || AliasName == "vreinterpretq_u16";
case ARM::BI__builtin_arm_mve_vreinterpretq_u16_u64:
  return AliasName == "vreinterpretq_u16_u64" || AliasName == "vreinterpretq_u16";
case ARM::BI__builtin_arm_mve_vreinterpretq_u16_u8:
  return AliasName == "vreinterpretq_u16_u8" || AliasName == "vreinterpretq_u16";
case ARM::BI__builtin_arm_mve_vreinterpretq_u32_f16:
  return AliasName == "vreinterpretq_u32_f16" || AliasName == "vreinterpretq_u32";
case ARM::BI__builtin_arm_mve_vreinterpretq_u32_f32:
  return AliasName == "vreinterpretq_u32_f32" || AliasName == "vreinterpretq_u32";
case ARM::BI__builtin_arm_mve_vreinterpretq_u32_s16:
  return AliasName == "vreinterpretq_u32_s16" || AliasName == "vreinterpretq_u32";
case ARM::BI__builtin_arm_mve_vreinterpretq_u32_s32:
  return AliasName == "vreinterpretq_u32_s32" || AliasName == "vreinterpretq_u32";
case ARM::BI__builtin_arm_mve_vreinterpretq_u32_s64:
  return AliasName == "vreinterpretq_u32_s64" || AliasName == "vreinterpretq_u32";
case ARM::BI__builtin_arm_mve_vreinterpretq_u32_s8:
  return AliasName == "vreinterpretq_u32_s8" || AliasName == "vreinterpretq_u32";
case ARM::BI__builtin_arm_mve_vreinterpretq_u32_u16:
  return AliasName == "vreinterpretq_u32_u16" || AliasName == "vreinterpretq_u32";
case ARM::BI__builtin_arm_mve_vreinterpretq_u32_u64:
  return AliasName == "vreinterpretq_u32_u64" || AliasName == "vreinterpretq_u32";
case ARM::BI__builtin_arm_mve_vreinterpretq_u32_u8:
  return AliasName == "vreinterpretq_u32_u8" || AliasName == "vreinterpretq_u32";
case ARM::BI__builtin_arm_mve_vreinterpretq_u64_f16:
  return AliasName == "vreinterpretq_u64_f16" || AliasName == "vreinterpretq_u64";
case ARM::BI__builtin_arm_mve_vreinterpretq_u64_f32:
  return AliasName == "vreinterpretq_u64_f32" || AliasName == "vreinterpretq_u64";
case ARM::BI__builtin_arm_mve_vreinterpretq_u64_s16:
  return AliasName == "vreinterpretq_u64_s16" || AliasName == "vreinterpretq_u64";
case ARM::BI__builtin_arm_mve_vreinterpretq_u64_s32:
  return AliasName == "vreinterpretq_u64_s32" || AliasName == "vreinterpretq_u64";
case ARM::BI__builtin_arm_mve_vreinterpretq_u64_s64:
  return AliasName == "vreinterpretq_u64_s64" || AliasName == "vreinterpretq_u64";
case ARM::BI__builtin_arm_mve_vreinterpretq_u64_s8:
  return AliasName == "vreinterpretq_u64_s8" || AliasName == "vreinterpretq_u64";
case ARM::BI__builtin_arm_mve_vreinterpretq_u64_u16:
  return AliasName == "vreinterpretq_u64_u16" || AliasName == "vreinterpretq_u64";
case ARM::BI__builtin_arm_mve_vreinterpretq_u64_u32:
  return AliasName == "vreinterpretq_u64_u32" || AliasName == "vreinterpretq_u64";
case ARM::BI__builtin_arm_mve_vreinterpretq_u64_u8:
  return AliasName == "vreinterpretq_u64_u8" || AliasName == "vreinterpretq_u64";
case ARM::BI__builtin_arm_mve_vreinterpretq_u8_f16:
  return AliasName == "vreinterpretq_u8_f16" || AliasName == "vreinterpretq_u8";
case ARM::BI__builtin_arm_mve_vreinterpretq_u8_f32:
  return AliasName == "vreinterpretq_u8_f32" || AliasName == "vreinterpretq_u8";
case ARM::BI__builtin_arm_mve_vreinterpretq_u8_s16:
  return AliasName == "vreinterpretq_u8_s16" || AliasName == "vreinterpretq_u8";
case ARM::BI__builtin_arm_mve_vreinterpretq_u8_s32:
  return AliasName == "vreinterpretq_u8_s32" || AliasName == "vreinterpretq_u8";
case ARM::BI__builtin_arm_mve_vreinterpretq_u8_s64:
  return AliasName == "vreinterpretq_u8_s64" || AliasName == "vreinterpretq_u8";
case ARM::BI__builtin_arm_mve_vreinterpretq_u8_s8:
  return AliasName == "vreinterpretq_u8_s8" || AliasName == "vreinterpretq_u8";
case ARM::BI__builtin_arm_mve_vreinterpretq_u8_u16:
  return AliasName == "vreinterpretq_u8_u16" || AliasName == "vreinterpretq_u8";
case ARM::BI__builtin_arm_mve_vreinterpretq_u8_u32:
  return AliasName == "vreinterpretq_u8_u32" || AliasName == "vreinterpretq_u8";
case ARM::BI__builtin_arm_mve_vreinterpretq_u8_u64:
  return AliasName == "vreinterpretq_u8_u64" || AliasName == "vreinterpretq_u8";
case ARM::BI__builtin_arm_mve_vsetq_lane_f16:
  return AliasName == "vsetq_lane_f16" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vsetq_lane_f32:
  return AliasName == "vsetq_lane_f32" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vsetq_lane_s16:
  return AliasName == "vsetq_lane_s16" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vsetq_lane_s32:
  return AliasName == "vsetq_lane_s32" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vsetq_lane_s64:
  return AliasName == "vsetq_lane_s64" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vsetq_lane_s8:
  return AliasName == "vsetq_lane_s8" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vsetq_lane_u16:
  return AliasName == "vsetq_lane_u16" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vsetq_lane_u32:
  return AliasName == "vsetq_lane_u32" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vsetq_lane_u64:
  return AliasName == "vsetq_lane_u64" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vsetq_lane_u8:
  return AliasName == "vsetq_lane_u8" || AliasName == "vsetq_lane";
case ARM::BI__builtin_arm_mve_vst1q_f16:
  return AliasName == "vst1q_f16" || AliasName == "vst1q";
case ARM::BI__builtin_arm_mve_vst1q_f32:
  return AliasName == "vst1q_f32" || AliasName == "vst1q";
case ARM::BI__builtin_arm_mve_vst1q_p_f16:
  return AliasName == "vst1q_p_f16" || AliasName == "vst1q_p";
case ARM::BI__builtin_arm_mve_vst1q_p_f32:
  return AliasName == "vst1q_p_f32" || AliasName == "vst1q_p";
case ARM::BI__builtin_arm_mve_vst1q_p_s16:
  return AliasName == "vst1q_p_s16" || AliasName == "vst1q_p";
case ARM::BI__builtin_arm_mve_vst1q_p_s32:
  return AliasName == "vst1q_p_s32" || AliasName == "vst1q_p";
case ARM::BI__builtin_arm_mve_vst1q_p_s8:
  return AliasName == "vst1q_p_s8" || AliasName == "vst1q_p";
case ARM::BI__builtin_arm_mve_vst1q_p_u16:
  return AliasName == "vst1q_p_u16" || AliasName == "vst1q_p";
case ARM::BI__builtin_arm_mve_vst1q_p_u32:
  return AliasName == "vst1q_p_u32" || AliasName == "vst1q_p";
case ARM::BI__builtin_arm_mve_vst1q_p_u8:
  return AliasName == "vst1q_p_u8" || AliasName == "vst1q_p";
case ARM::BI__builtin_arm_mve_vst1q_s16:
  return AliasName == "vst1q_s16" || AliasName == "vst1q";
case ARM::BI__builtin_arm_mve_vst1q_s32:
  return AliasName == "vst1q_s32" || AliasName == "vst1q";
case ARM::BI__builtin_arm_mve_vst1q_s8:
  return AliasName == "vst1q_s8" || AliasName == "vst1q";
case ARM::BI__builtin_arm_mve_vst1q_u16:
  return AliasName == "vst1q_u16" || AliasName == "vst1q";
case ARM::BI__builtin_arm_mve_vst1q_u32:
  return AliasName == "vst1q_u32" || AliasName == "vst1q";
case ARM::BI__builtin_arm_mve_vst1q_u8:
  return AliasName == "vst1q_u8" || AliasName == "vst1q";
case ARM::BI__builtin_arm_mve_vst2q_f16:
  return AliasName == "vst2q_f16" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_f32:
  return AliasName == "vst2q_f32" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_s16:
  return AliasName == "vst2q_s16" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_s32:
  return AliasName == "vst2q_s32" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_s8:
  return AliasName == "vst2q_s8" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_u16:
  return AliasName == "vst2q_u16" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_u32:
  return AliasName == "vst2q_u32" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_u8:
  return AliasName == "vst2q_u8" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst4q_f16:
  return AliasName == "vst4q_f16" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_f32:
  return AliasName == "vst4q_f32" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_s16:
  return AliasName == "vst4q_s16" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_s32:
  return AliasName == "vst4q_s32" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_s8:
  return AliasName == "vst4q_s8" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_u16:
  return AliasName == "vst4q_u16" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_u32:
  return AliasName == "vst4q_u32" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_u8:
  return AliasName == "vst4q_u8" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vstrbq_p_s16:
  return AliasName == "vstrbq_p_s16" || AliasName == "vstrbq_p";
case ARM::BI__builtin_arm_mve_vstrbq_p_s32:
  return AliasName == "vstrbq_p_s32" || AliasName == "vstrbq_p";
case ARM::BI__builtin_arm_mve_vstrbq_p_s8:
  return AliasName == "vstrbq_p_s8" || AliasName == "vstrbq_p";
case ARM::BI__builtin_arm_mve_vstrbq_p_u16:
  return AliasName == "vstrbq_p_u16" || AliasName == "vstrbq_p";
case ARM::BI__builtin_arm_mve_vstrbq_p_u32:
  return AliasName == "vstrbq_p_u32" || AliasName == "vstrbq_p";
case ARM::BI__builtin_arm_mve_vstrbq_p_u8:
  return AliasName == "vstrbq_p_u8" || AliasName == "vstrbq_p";
case ARM::BI__builtin_arm_mve_vstrbq_s16:
  return AliasName == "vstrbq_s16" || AliasName == "vstrbq";
case ARM::BI__builtin_arm_mve_vstrbq_s32:
  return AliasName == "vstrbq_s32" || AliasName == "vstrbq";
case ARM::BI__builtin_arm_mve_vstrbq_s8:
  return AliasName == "vstrbq_s8" || AliasName == "vstrbq";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s16:
  return AliasName == "vstrbq_scatter_offset_p_s16" || AliasName == "vstrbq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s32:
  return AliasName == "vstrbq_scatter_offset_p_s32" || AliasName == "vstrbq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s8:
  return AliasName == "vstrbq_scatter_offset_p_s8" || AliasName == "vstrbq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u16:
  return AliasName == "vstrbq_scatter_offset_p_u16" || AliasName == "vstrbq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u32:
  return AliasName == "vstrbq_scatter_offset_p_u32" || AliasName == "vstrbq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u8:
  return AliasName == "vstrbq_scatter_offset_p_u8" || AliasName == "vstrbq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s16:
  return AliasName == "vstrbq_scatter_offset_s16" || AliasName == "vstrbq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s32:
  return AliasName == "vstrbq_scatter_offset_s32" || AliasName == "vstrbq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s8:
  return AliasName == "vstrbq_scatter_offset_s8" || AliasName == "vstrbq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u16:
  return AliasName == "vstrbq_scatter_offset_u16" || AliasName == "vstrbq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u32:
  return AliasName == "vstrbq_scatter_offset_u32" || AliasName == "vstrbq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u8:
  return AliasName == "vstrbq_scatter_offset_u8" || AliasName == "vstrbq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrbq_u16:
  return AliasName == "vstrbq_u16" || AliasName == "vstrbq";
case ARM::BI__builtin_arm_mve_vstrbq_u32:
  return AliasName == "vstrbq_u32" || AliasName == "vstrbq";
case ARM::BI__builtin_arm_mve_vstrbq_u8:
  return AliasName == "vstrbq_u8" || AliasName == "vstrbq";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_s64:
  return AliasName == "vstrdq_scatter_base_p_s64" || AliasName == "vstrdq_scatter_base_p";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_u64:
  return AliasName == "vstrdq_scatter_base_p_u64" || AliasName == "vstrdq_scatter_base_p";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_s64:
  return AliasName == "vstrdq_scatter_base_s64" || AliasName == "vstrdq_scatter_base";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_u64:
  return AliasName == "vstrdq_scatter_base_u64" || AliasName == "vstrdq_scatter_base";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64:
  return AliasName == "vstrdq_scatter_base_wb_p_s64" || AliasName == "vstrdq_scatter_base_wb_p";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64:
  return AliasName == "vstrdq_scatter_base_wb_p_u64" || AliasName == "vstrdq_scatter_base_wb_p";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_s64:
  return AliasName == "vstrdq_scatter_base_wb_s64" || AliasName == "vstrdq_scatter_base_wb";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_u64:
  return AliasName == "vstrdq_scatter_base_wb_u64" || AliasName == "vstrdq_scatter_base_wb";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_s64:
  return AliasName == "vstrdq_scatter_offset_p_s64" || AliasName == "vstrdq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_u64:
  return AliasName == "vstrdq_scatter_offset_p_u64" || AliasName == "vstrdq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_s64:
  return AliasName == "vstrdq_scatter_offset_s64" || AliasName == "vstrdq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_u64:
  return AliasName == "vstrdq_scatter_offset_u64" || AliasName == "vstrdq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_s64:
  return AliasName == "vstrdq_scatter_shifted_offset_p_s64" || AliasName == "vstrdq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_u64:
  return AliasName == "vstrdq_scatter_shifted_offset_p_u64" || AliasName == "vstrdq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_s64:
  return AliasName == "vstrdq_scatter_shifted_offset_s64" || AliasName == "vstrdq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_u64:
  return AliasName == "vstrdq_scatter_shifted_offset_u64" || AliasName == "vstrdq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrhq_f16:
  return AliasName == "vstrhq_f16" || AliasName == "vstrhq";
case ARM::BI__builtin_arm_mve_vstrhq_p_f16:
  return AliasName == "vstrhq_p_f16" || AliasName == "vstrhq_p";
case ARM::BI__builtin_arm_mve_vstrhq_p_s16:
  return AliasName == "vstrhq_p_s16" || AliasName == "vstrhq_p";
case ARM::BI__builtin_arm_mve_vstrhq_p_s32:
  return AliasName == "vstrhq_p_s32" || AliasName == "vstrhq_p";
case ARM::BI__builtin_arm_mve_vstrhq_p_u16:
  return AliasName == "vstrhq_p_u16" || AliasName == "vstrhq_p";
case ARM::BI__builtin_arm_mve_vstrhq_p_u32:
  return AliasName == "vstrhq_p_u32" || AliasName == "vstrhq_p";
case ARM::BI__builtin_arm_mve_vstrhq_s16:
  return AliasName == "vstrhq_s16" || AliasName == "vstrhq";
case ARM::BI__builtin_arm_mve_vstrhq_s32:
  return AliasName == "vstrhq_s32" || AliasName == "vstrhq";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_f16:
  return AliasName == "vstrhq_scatter_offset_f16" || AliasName == "vstrhq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_f16:
  return AliasName == "vstrhq_scatter_offset_p_f16" || AliasName == "vstrhq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s16:
  return AliasName == "vstrhq_scatter_offset_p_s16" || AliasName == "vstrhq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s32:
  return AliasName == "vstrhq_scatter_offset_p_s32" || AliasName == "vstrhq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u16:
  return AliasName == "vstrhq_scatter_offset_p_u16" || AliasName == "vstrhq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u32:
  return AliasName == "vstrhq_scatter_offset_p_u32" || AliasName == "vstrhq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s16:
  return AliasName == "vstrhq_scatter_offset_s16" || AliasName == "vstrhq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s32:
  return AliasName == "vstrhq_scatter_offset_s32" || AliasName == "vstrhq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u16:
  return AliasName == "vstrhq_scatter_offset_u16" || AliasName == "vstrhq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u32:
  return AliasName == "vstrhq_scatter_offset_u32" || AliasName == "vstrhq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_f16:
  return AliasName == "vstrhq_scatter_shifted_offset_f16" || AliasName == "vstrhq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_f16:
  return AliasName == "vstrhq_scatter_shifted_offset_p_f16" || AliasName == "vstrhq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s16:
  return AliasName == "vstrhq_scatter_shifted_offset_p_s16" || AliasName == "vstrhq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s32:
  return AliasName == "vstrhq_scatter_shifted_offset_p_s32" || AliasName == "vstrhq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u16:
  return AliasName == "vstrhq_scatter_shifted_offset_p_u16" || AliasName == "vstrhq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u32:
  return AliasName == "vstrhq_scatter_shifted_offset_p_u32" || AliasName == "vstrhq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s16:
  return AliasName == "vstrhq_scatter_shifted_offset_s16" || AliasName == "vstrhq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s32:
  return AliasName == "vstrhq_scatter_shifted_offset_s32" || AliasName == "vstrhq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u16:
  return AliasName == "vstrhq_scatter_shifted_offset_u16" || AliasName == "vstrhq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u32:
  return AliasName == "vstrhq_scatter_shifted_offset_u32" || AliasName == "vstrhq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrhq_u16:
  return AliasName == "vstrhq_u16" || AliasName == "vstrhq";
case ARM::BI__builtin_arm_mve_vstrhq_u32:
  return AliasName == "vstrhq_u32" || AliasName == "vstrhq";
case ARM::BI__builtin_arm_mve_vstrwq_f32:
  return AliasName == "vstrwq_f32" || AliasName == "vstrwq";
case ARM::BI__builtin_arm_mve_vstrwq_p_f32:
  return AliasName == "vstrwq_p_f32" || AliasName == "vstrwq_p";
case ARM::BI__builtin_arm_mve_vstrwq_p_s32:
  return AliasName == "vstrwq_p_s32" || AliasName == "vstrwq_p";
case ARM::BI__builtin_arm_mve_vstrwq_p_u32:
  return AliasName == "vstrwq_p_u32" || AliasName == "vstrwq_p";
case ARM::BI__builtin_arm_mve_vstrwq_s32:
  return AliasName == "vstrwq_s32" || AliasName == "vstrwq";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_f32:
  return AliasName == "vstrwq_scatter_base_f32" || AliasName == "vstrwq_scatter_base";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_f32:
  return AliasName == "vstrwq_scatter_base_p_f32" || AliasName == "vstrwq_scatter_base_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_s32:
  return AliasName == "vstrwq_scatter_base_p_s32" || AliasName == "vstrwq_scatter_base_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_u32:
  return AliasName == "vstrwq_scatter_base_p_u32" || AliasName == "vstrwq_scatter_base_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_s32:
  return AliasName == "vstrwq_scatter_base_s32" || AliasName == "vstrwq_scatter_base";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_u32:
  return AliasName == "vstrwq_scatter_base_u32" || AliasName == "vstrwq_scatter_base";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_f32:
  return AliasName == "vstrwq_scatter_base_wb_f32" || AliasName == "vstrwq_scatter_base_wb";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32:
  return AliasName == "vstrwq_scatter_base_wb_p_f32" || AliasName == "vstrwq_scatter_base_wb_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32:
  return AliasName == "vstrwq_scatter_base_wb_p_s32" || AliasName == "vstrwq_scatter_base_wb_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32:
  return AliasName == "vstrwq_scatter_base_wb_p_u32" || AliasName == "vstrwq_scatter_base_wb_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_s32:
  return AliasName == "vstrwq_scatter_base_wb_s32" || AliasName == "vstrwq_scatter_base_wb";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_u32:
  return AliasName == "vstrwq_scatter_base_wb_u32" || AliasName == "vstrwq_scatter_base_wb";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_f32:
  return AliasName == "vstrwq_scatter_offset_f32" || AliasName == "vstrwq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_f32:
  return AliasName == "vstrwq_scatter_offset_p_f32" || AliasName == "vstrwq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_s32:
  return AliasName == "vstrwq_scatter_offset_p_s32" || AliasName == "vstrwq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_u32:
  return AliasName == "vstrwq_scatter_offset_p_u32" || AliasName == "vstrwq_scatter_offset_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_s32:
  return AliasName == "vstrwq_scatter_offset_s32" || AliasName == "vstrwq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_u32:
  return AliasName == "vstrwq_scatter_offset_u32" || AliasName == "vstrwq_scatter_offset";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_f32:
  return AliasName == "vstrwq_scatter_shifted_offset_f32" || AliasName == "vstrwq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_f32:
  return AliasName == "vstrwq_scatter_shifted_offset_p_f32" || AliasName == "vstrwq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_s32:
  return AliasName == "vstrwq_scatter_shifted_offset_p_s32" || AliasName == "vstrwq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_u32:
  return AliasName == "vstrwq_scatter_shifted_offset_p_u32" || AliasName == "vstrwq_scatter_shifted_offset_p";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_s32:
  return AliasName == "vstrwq_scatter_shifted_offset_s32" || AliasName == "vstrwq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_u32:
  return AliasName == "vstrwq_scatter_shifted_offset_u32" || AliasName == "vstrwq_scatter_shifted_offset";
case ARM::BI__builtin_arm_mve_vstrwq_u32:
  return AliasName == "vstrwq_u32" || AliasName == "vstrwq";
case ARM::BI__builtin_arm_mve_vsubq_f16:
  return AliasName == "vsubq_f16" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_f32:
  return AliasName == "vsubq_f32" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_m_f16:
  return AliasName == "vsubq_m_f16" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_f32:
  return AliasName == "vsubq_m_f32" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_s16:
  return AliasName == "vsubq_m_s16" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_s32:
  return AliasName == "vsubq_m_s32" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_s8:
  return AliasName == "vsubq_m_s8" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_u16:
  return AliasName == "vsubq_m_u16" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_u32:
  return AliasName == "vsubq_m_u32" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_u8:
  return AliasName == "vsubq_m_u8" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_s16:
  return AliasName == "vsubq_s16" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_s32:
  return AliasName == "vsubq_s32" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_s8:
  return AliasName == "vsubq_s8" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_u16:
  return AliasName == "vsubq_u16" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_u32:
  return AliasName == "vsubq_u32" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_u8:
  return AliasName == "vsubq_u8" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vuninitializedq_f16:
  return AliasName == "vuninitializedq_f16";
case ARM::BI__builtin_arm_mve_vuninitializedq_f32:
  return AliasName == "vuninitializedq_f32";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f16:
  return AliasName == "vuninitializedq_polymorphic_f16" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f32:
  return AliasName == "vuninitializedq_polymorphic_f32" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s16:
  return AliasName == "vuninitializedq_polymorphic_s16" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s32:
  return AliasName == "vuninitializedq_polymorphic_s32" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s64:
  return AliasName == "vuninitializedq_polymorphic_s64" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s8:
  return AliasName == "vuninitializedq_polymorphic_s8" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u16:
  return AliasName == "vuninitializedq_polymorphic_u16" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u32:
  return AliasName == "vuninitializedq_polymorphic_u32" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u64:
  return AliasName == "vuninitializedq_polymorphic_u64" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u8:
  return AliasName == "vuninitializedq_polymorphic_u8" || AliasName == "vuninitializedq";
case ARM::BI__builtin_arm_mve_vuninitializedq_s16:
  return AliasName == "vuninitializedq_s16";
case ARM::BI__builtin_arm_mve_vuninitializedq_s32:
  return AliasName == "vuninitializedq_s32";
case ARM::BI__builtin_arm_mve_vuninitializedq_s64:
  return AliasName == "vuninitializedq_s64";
case ARM::BI__builtin_arm_mve_vuninitializedq_s8:
  return AliasName == "vuninitializedq_s8";
case ARM::BI__builtin_arm_mve_vuninitializedq_u16:
  return AliasName == "vuninitializedq_u16";
case ARM::BI__builtin_arm_mve_vuninitializedq_u32:
  return AliasName == "vuninitializedq_u32";
case ARM::BI__builtin_arm_mve_vuninitializedq_u64:
  return AliasName == "vuninitializedq_u64";
case ARM::BI__builtin_arm_mve_vuninitializedq_u8:
  return AliasName == "vuninitializedq_u8";
