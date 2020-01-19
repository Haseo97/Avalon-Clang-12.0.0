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
case ARM::BI__builtin_arm_mve_vabavq_p_s16:
  return AliasName == "vabavq_p_s16" || AliasName == "vabavq_p";
case ARM::BI__builtin_arm_mve_vabavq_p_s32:
  return AliasName == "vabavq_p_s32" || AliasName == "vabavq_p";
case ARM::BI__builtin_arm_mve_vabavq_p_s8:
  return AliasName == "vabavq_p_s8" || AliasName == "vabavq_p";
case ARM::BI__builtin_arm_mve_vabavq_p_u16:
  return AliasName == "vabavq_p_u16" || AliasName == "vabavq_p";
case ARM::BI__builtin_arm_mve_vabavq_p_u32:
  return AliasName == "vabavq_p_u32" || AliasName == "vabavq_p";
case ARM::BI__builtin_arm_mve_vabavq_p_u8:
  return AliasName == "vabavq_p_u8" || AliasName == "vabavq_p";
case ARM::BI__builtin_arm_mve_vabavq_s16:
  return AliasName == "vabavq_s16" || AliasName == "vabavq";
case ARM::BI__builtin_arm_mve_vabavq_s32:
  return AliasName == "vabavq_s32" || AliasName == "vabavq";
case ARM::BI__builtin_arm_mve_vabavq_s8:
  return AliasName == "vabavq_s8" || AliasName == "vabavq";
case ARM::BI__builtin_arm_mve_vabavq_u16:
  return AliasName == "vabavq_u16" || AliasName == "vabavq";
case ARM::BI__builtin_arm_mve_vabavq_u32:
  return AliasName == "vabavq_u32" || AliasName == "vabavq";
case ARM::BI__builtin_arm_mve_vabavq_u8:
  return AliasName == "vabavq_u8" || AliasName == "vabavq";
case ARM::BI__builtin_arm_mve_vabdq_f16:
  return AliasName == "vabdq_f16" || AliasName == "vabdq";
case ARM::BI__builtin_arm_mve_vabdq_f32:
  return AliasName == "vabdq_f32" || AliasName == "vabdq";
case ARM::BI__builtin_arm_mve_vabdq_m_f16:
  return AliasName == "vabdq_m_f16" || AliasName == "vabdq_m";
case ARM::BI__builtin_arm_mve_vabdq_m_f32:
  return AliasName == "vabdq_m_f32" || AliasName == "vabdq_m";
case ARM::BI__builtin_arm_mve_vabdq_m_s16:
  return AliasName == "vabdq_m_s16" || AliasName == "vabdq_m";
case ARM::BI__builtin_arm_mve_vabdq_m_s32:
  return AliasName == "vabdq_m_s32" || AliasName == "vabdq_m";
case ARM::BI__builtin_arm_mve_vabdq_m_s8:
  return AliasName == "vabdq_m_s8" || AliasName == "vabdq_m";
case ARM::BI__builtin_arm_mve_vabdq_m_u16:
  return AliasName == "vabdq_m_u16" || AliasName == "vabdq_m";
case ARM::BI__builtin_arm_mve_vabdq_m_u32:
  return AliasName == "vabdq_m_u32" || AliasName == "vabdq_m";
case ARM::BI__builtin_arm_mve_vabdq_m_u8:
  return AliasName == "vabdq_m_u8" || AliasName == "vabdq_m";
case ARM::BI__builtin_arm_mve_vabdq_s16:
  return AliasName == "vabdq_s16" || AliasName == "vabdq";
case ARM::BI__builtin_arm_mve_vabdq_s32:
  return AliasName == "vabdq_s32" || AliasName == "vabdq";
case ARM::BI__builtin_arm_mve_vabdq_s8:
  return AliasName == "vabdq_s8" || AliasName == "vabdq";
case ARM::BI__builtin_arm_mve_vabdq_u16:
  return AliasName == "vabdq_u16" || AliasName == "vabdq";
case ARM::BI__builtin_arm_mve_vabdq_u32:
  return AliasName == "vabdq_u32" || AliasName == "vabdq";
case ARM::BI__builtin_arm_mve_vabdq_u8:
  return AliasName == "vabdq_u8" || AliasName == "vabdq";
case ARM::BI__builtin_arm_mve_vabdq_x_f16:
  return AliasName == "vabdq_x_f16" || AliasName == "vabdq_x";
case ARM::BI__builtin_arm_mve_vabdq_x_f32:
  return AliasName == "vabdq_x_f32" || AliasName == "vabdq_x";
case ARM::BI__builtin_arm_mve_vabdq_x_s16:
  return AliasName == "vabdq_x_s16" || AliasName == "vabdq_x";
case ARM::BI__builtin_arm_mve_vabdq_x_s32:
  return AliasName == "vabdq_x_s32" || AliasName == "vabdq_x";
case ARM::BI__builtin_arm_mve_vabdq_x_s8:
  return AliasName == "vabdq_x_s8" || AliasName == "vabdq_x";
case ARM::BI__builtin_arm_mve_vabdq_x_u16:
  return AliasName == "vabdq_x_u16" || AliasName == "vabdq_x";
case ARM::BI__builtin_arm_mve_vabdq_x_u32:
  return AliasName == "vabdq_x_u32" || AliasName == "vabdq_x";
case ARM::BI__builtin_arm_mve_vabdq_x_u8:
  return AliasName == "vabdq_x_u8" || AliasName == "vabdq_x";
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
case ARM::BI__builtin_arm_mve_vaddq_x_f16:
  return AliasName == "vaddq_x_f16" || AliasName == "vaddq_x";
case ARM::BI__builtin_arm_mve_vaddq_x_f32:
  return AliasName == "vaddq_x_f32" || AliasName == "vaddq_x";
case ARM::BI__builtin_arm_mve_vaddq_x_s16:
  return AliasName == "vaddq_x_s16" || AliasName == "vaddq_x";
case ARM::BI__builtin_arm_mve_vaddq_x_s32:
  return AliasName == "vaddq_x_s32" || AliasName == "vaddq_x";
case ARM::BI__builtin_arm_mve_vaddq_x_s8:
  return AliasName == "vaddq_x_s8" || AliasName == "vaddq_x";
case ARM::BI__builtin_arm_mve_vaddq_x_u16:
  return AliasName == "vaddq_x_u16" || AliasName == "vaddq_x";
case ARM::BI__builtin_arm_mve_vaddq_x_u32:
  return AliasName == "vaddq_x_u32" || AliasName == "vaddq_x";
case ARM::BI__builtin_arm_mve_vaddq_x_u8:
  return AliasName == "vaddq_x_u8" || AliasName == "vaddq_x";
case ARM::BI__builtin_arm_mve_vandq_f16:
  return AliasName == "vandq_f16" || AliasName == "vandq";
case ARM::BI__builtin_arm_mve_vandq_f32:
  return AliasName == "vandq_f32" || AliasName == "vandq";
case ARM::BI__builtin_arm_mve_vandq_m_f16:
  return AliasName == "vandq_m_f16" || AliasName == "vandq_m";
case ARM::BI__builtin_arm_mve_vandq_m_f32:
  return AliasName == "vandq_m_f32" || AliasName == "vandq_m";
case ARM::BI__builtin_arm_mve_vandq_m_s16:
  return AliasName == "vandq_m_s16" || AliasName == "vandq_m";
case ARM::BI__builtin_arm_mve_vandq_m_s32:
  return AliasName == "vandq_m_s32" || AliasName == "vandq_m";
case ARM::BI__builtin_arm_mve_vandq_m_s8:
  return AliasName == "vandq_m_s8" || AliasName == "vandq_m";
case ARM::BI__builtin_arm_mve_vandq_m_u16:
  return AliasName == "vandq_m_u16" || AliasName == "vandq_m";
case ARM::BI__builtin_arm_mve_vandq_m_u32:
  return AliasName == "vandq_m_u32" || AliasName == "vandq_m";
case ARM::BI__builtin_arm_mve_vandq_m_u8:
  return AliasName == "vandq_m_u8" || AliasName == "vandq_m";
case ARM::BI__builtin_arm_mve_vandq_s16:
  return AliasName == "vandq_s16" || AliasName == "vandq";
case ARM::BI__builtin_arm_mve_vandq_s32:
  return AliasName == "vandq_s32" || AliasName == "vandq";
case ARM::BI__builtin_arm_mve_vandq_s8:
  return AliasName == "vandq_s8" || AliasName == "vandq";
case ARM::BI__builtin_arm_mve_vandq_u16:
  return AliasName == "vandq_u16" || AliasName == "vandq";
case ARM::BI__builtin_arm_mve_vandq_u32:
  return AliasName == "vandq_u32" || AliasName == "vandq";
case ARM::BI__builtin_arm_mve_vandq_u8:
  return AliasName == "vandq_u8" || AliasName == "vandq";
case ARM::BI__builtin_arm_mve_vandq_x_f16:
  return AliasName == "vandq_x_f16" || AliasName == "vandq_x";
case ARM::BI__builtin_arm_mve_vandq_x_f32:
  return AliasName == "vandq_x_f32" || AliasName == "vandq_x";
case ARM::BI__builtin_arm_mve_vandq_x_s16:
  return AliasName == "vandq_x_s16" || AliasName == "vandq_x";
case ARM::BI__builtin_arm_mve_vandq_x_s32:
  return AliasName == "vandq_x_s32" || AliasName == "vandq_x";
case ARM::BI__builtin_arm_mve_vandq_x_s8:
  return AliasName == "vandq_x_s8" || AliasName == "vandq_x";
case ARM::BI__builtin_arm_mve_vandq_x_u16:
  return AliasName == "vandq_x_u16" || AliasName == "vandq_x";
case ARM::BI__builtin_arm_mve_vandq_x_u32:
  return AliasName == "vandq_x_u32" || AliasName == "vandq_x";
case ARM::BI__builtin_arm_mve_vandq_x_u8:
  return AliasName == "vandq_x_u8" || AliasName == "vandq_x";
case ARM::BI__builtin_arm_mve_vbicq_f16:
  return AliasName == "vbicq_f16" || AliasName == "vbicq";
case ARM::BI__builtin_arm_mve_vbicq_f32:
  return AliasName == "vbicq_f32" || AliasName == "vbicq";
case ARM::BI__builtin_arm_mve_vbicq_m_f16:
  return AliasName == "vbicq_m_f16" || AliasName == "vbicq_m";
case ARM::BI__builtin_arm_mve_vbicq_m_f32:
  return AliasName == "vbicq_m_f32" || AliasName == "vbicq_m";
case ARM::BI__builtin_arm_mve_vbicq_m_s16:
  return AliasName == "vbicq_m_s16" || AliasName == "vbicq_m";
case ARM::BI__builtin_arm_mve_vbicq_m_s32:
  return AliasName == "vbicq_m_s32" || AliasName == "vbicq_m";
case ARM::BI__builtin_arm_mve_vbicq_m_s8:
  return AliasName == "vbicq_m_s8" || AliasName == "vbicq_m";
case ARM::BI__builtin_arm_mve_vbicq_m_u16:
  return AliasName == "vbicq_m_u16" || AliasName == "vbicq_m";
case ARM::BI__builtin_arm_mve_vbicq_m_u32:
  return AliasName == "vbicq_m_u32" || AliasName == "vbicq_m";
case ARM::BI__builtin_arm_mve_vbicq_m_u8:
  return AliasName == "vbicq_m_u8" || AliasName == "vbicq_m";
case ARM::BI__builtin_arm_mve_vbicq_s16:
  return AliasName == "vbicq_s16" || AliasName == "vbicq";
case ARM::BI__builtin_arm_mve_vbicq_s32:
  return AliasName == "vbicq_s32" || AliasName == "vbicq";
case ARM::BI__builtin_arm_mve_vbicq_s8:
  return AliasName == "vbicq_s8" || AliasName == "vbicq";
case ARM::BI__builtin_arm_mve_vbicq_u16:
  return AliasName == "vbicq_u16" || AliasName == "vbicq";
case ARM::BI__builtin_arm_mve_vbicq_u32:
  return AliasName == "vbicq_u32" || AliasName == "vbicq";
case ARM::BI__builtin_arm_mve_vbicq_u8:
  return AliasName == "vbicq_u8" || AliasName == "vbicq";
case ARM::BI__builtin_arm_mve_vbicq_x_f16:
  return AliasName == "vbicq_x_f16" || AliasName == "vbicq_x";
case ARM::BI__builtin_arm_mve_vbicq_x_f32:
  return AliasName == "vbicq_x_f32" || AliasName == "vbicq_x";
case ARM::BI__builtin_arm_mve_vbicq_x_s16:
  return AliasName == "vbicq_x_s16" || AliasName == "vbicq_x";
case ARM::BI__builtin_arm_mve_vbicq_x_s32:
  return AliasName == "vbicq_x_s32" || AliasName == "vbicq_x";
case ARM::BI__builtin_arm_mve_vbicq_x_s8:
  return AliasName == "vbicq_x_s8" || AliasName == "vbicq_x";
case ARM::BI__builtin_arm_mve_vbicq_x_u16:
  return AliasName == "vbicq_x_u16" || AliasName == "vbicq_x";
case ARM::BI__builtin_arm_mve_vbicq_x_u32:
  return AliasName == "vbicq_x_u32" || AliasName == "vbicq_x";
case ARM::BI__builtin_arm_mve_vbicq_x_u8:
  return AliasName == "vbicq_x_u8" || AliasName == "vbicq_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_f16:
  return AliasName == "vcaddq_rot270_f16" || AliasName == "vcaddq_rot270";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_f32:
  return AliasName == "vcaddq_rot270_f32" || AliasName == "vcaddq_rot270";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_m_f16:
  return AliasName == "vcaddq_rot270_m_f16" || AliasName == "vcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_m_f32:
  return AliasName == "vcaddq_rot270_m_f32" || AliasName == "vcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s16:
  return AliasName == "vcaddq_rot270_m_s16" || AliasName == "vcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s32:
  return AliasName == "vcaddq_rot270_m_s32" || AliasName == "vcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s8:
  return AliasName == "vcaddq_rot270_m_s8" || AliasName == "vcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u16:
  return AliasName == "vcaddq_rot270_m_u16" || AliasName == "vcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u32:
  return AliasName == "vcaddq_rot270_m_u32" || AliasName == "vcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u8:
  return AliasName == "vcaddq_rot270_m_u8" || AliasName == "vcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_s16:
  return AliasName == "vcaddq_rot270_s16" || AliasName == "vcaddq_rot270";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_s32:
  return AliasName == "vcaddq_rot270_s32" || AliasName == "vcaddq_rot270";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_s8:
  return AliasName == "vcaddq_rot270_s8" || AliasName == "vcaddq_rot270";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_u16:
  return AliasName == "vcaddq_rot270_u16" || AliasName == "vcaddq_rot270";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_u32:
  return AliasName == "vcaddq_rot270_u32" || AliasName == "vcaddq_rot270";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_u8:
  return AliasName == "vcaddq_rot270_u8" || AliasName == "vcaddq_rot270";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_x_f16:
  return AliasName == "vcaddq_rot270_x_f16" || AliasName == "vcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_x_f32:
  return AliasName == "vcaddq_rot270_x_f32" || AliasName == "vcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s16:
  return AliasName == "vcaddq_rot270_x_s16" || AliasName == "vcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s32:
  return AliasName == "vcaddq_rot270_x_s32" || AliasName == "vcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s8:
  return AliasName == "vcaddq_rot270_x_s8" || AliasName == "vcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u16:
  return AliasName == "vcaddq_rot270_x_u16" || AliasName == "vcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u32:
  return AliasName == "vcaddq_rot270_x_u32" || AliasName == "vcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u8:
  return AliasName == "vcaddq_rot270_x_u8" || AliasName == "vcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_f16:
  return AliasName == "vcaddq_rot90_f16" || AliasName == "vcaddq_rot90";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_f32:
  return AliasName == "vcaddq_rot90_f32" || AliasName == "vcaddq_rot90";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_m_f16:
  return AliasName == "vcaddq_rot90_m_f16" || AliasName == "vcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_m_f32:
  return AliasName == "vcaddq_rot90_m_f32" || AliasName == "vcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s16:
  return AliasName == "vcaddq_rot90_m_s16" || AliasName == "vcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s32:
  return AliasName == "vcaddq_rot90_m_s32" || AliasName == "vcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s8:
  return AliasName == "vcaddq_rot90_m_s8" || AliasName == "vcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u16:
  return AliasName == "vcaddq_rot90_m_u16" || AliasName == "vcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u32:
  return AliasName == "vcaddq_rot90_m_u32" || AliasName == "vcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u8:
  return AliasName == "vcaddq_rot90_m_u8" || AliasName == "vcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_s16:
  return AliasName == "vcaddq_rot90_s16" || AliasName == "vcaddq_rot90";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_s32:
  return AliasName == "vcaddq_rot90_s32" || AliasName == "vcaddq_rot90";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_s8:
  return AliasName == "vcaddq_rot90_s8" || AliasName == "vcaddq_rot90";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_u16:
  return AliasName == "vcaddq_rot90_u16" || AliasName == "vcaddq_rot90";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_u32:
  return AliasName == "vcaddq_rot90_u32" || AliasName == "vcaddq_rot90";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_u8:
  return AliasName == "vcaddq_rot90_u8" || AliasName == "vcaddq_rot90";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_x_f16:
  return AliasName == "vcaddq_rot90_x_f16" || AliasName == "vcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_x_f32:
  return AliasName == "vcaddq_rot90_x_f32" || AliasName == "vcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s16:
  return AliasName == "vcaddq_rot90_x_s16" || AliasName == "vcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s32:
  return AliasName == "vcaddq_rot90_x_s32" || AliasName == "vcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s8:
  return AliasName == "vcaddq_rot90_x_s8" || AliasName == "vcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u16:
  return AliasName == "vcaddq_rot90_x_u16" || AliasName == "vcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u32:
  return AliasName == "vcaddq_rot90_x_u32" || AliasName == "vcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u8:
  return AliasName == "vcaddq_rot90_x_u8" || AliasName == "vcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vcmlaq_f16:
  return AliasName == "vcmlaq_f16" || AliasName == "vcmlaq";
case ARM::BI__builtin_arm_mve_vcmlaq_f32:
  return AliasName == "vcmlaq_f32" || AliasName == "vcmlaq";
case ARM::BI__builtin_arm_mve_vcmlaq_m_f16:
  return AliasName == "vcmlaq_m_f16" || AliasName == "vcmlaq_m";
case ARM::BI__builtin_arm_mve_vcmlaq_m_f32:
  return AliasName == "vcmlaq_m_f32" || AliasName == "vcmlaq_m";
case ARM::BI__builtin_arm_mve_vcmlaq_rot180_f16:
  return AliasName == "vcmlaq_rot180_f16" || AliasName == "vcmlaq_rot180";
case ARM::BI__builtin_arm_mve_vcmlaq_rot180_f32:
  return AliasName == "vcmlaq_rot180_f32" || AliasName == "vcmlaq_rot180";
case ARM::BI__builtin_arm_mve_vcmlaq_rot180_m_f16:
  return AliasName == "vcmlaq_rot180_m_f16" || AliasName == "vcmlaq_rot180_m";
case ARM::BI__builtin_arm_mve_vcmlaq_rot180_m_f32:
  return AliasName == "vcmlaq_rot180_m_f32" || AliasName == "vcmlaq_rot180_m";
case ARM::BI__builtin_arm_mve_vcmlaq_rot270_f16:
  return AliasName == "vcmlaq_rot270_f16" || AliasName == "vcmlaq_rot270";
case ARM::BI__builtin_arm_mve_vcmlaq_rot270_f32:
  return AliasName == "vcmlaq_rot270_f32" || AliasName == "vcmlaq_rot270";
case ARM::BI__builtin_arm_mve_vcmlaq_rot270_m_f16:
  return AliasName == "vcmlaq_rot270_m_f16" || AliasName == "vcmlaq_rot270_m";
case ARM::BI__builtin_arm_mve_vcmlaq_rot270_m_f32:
  return AliasName == "vcmlaq_rot270_m_f32" || AliasName == "vcmlaq_rot270_m";
case ARM::BI__builtin_arm_mve_vcmlaq_rot90_f16:
  return AliasName == "vcmlaq_rot90_f16" || AliasName == "vcmlaq_rot90";
case ARM::BI__builtin_arm_mve_vcmlaq_rot90_f32:
  return AliasName == "vcmlaq_rot90_f32" || AliasName == "vcmlaq_rot90";
case ARM::BI__builtin_arm_mve_vcmlaq_rot90_m_f16:
  return AliasName == "vcmlaq_rot90_m_f16" || AliasName == "vcmlaq_rot90_m";
case ARM::BI__builtin_arm_mve_vcmlaq_rot90_m_f32:
  return AliasName == "vcmlaq_rot90_m_f32" || AliasName == "vcmlaq_rot90_m";
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
case ARM::BI__builtin_arm_mve_vcmulq_f16:
  return AliasName == "vcmulq_f16" || AliasName == "vcmulq";
case ARM::BI__builtin_arm_mve_vcmulq_f32:
  return AliasName == "vcmulq_f32" || AliasName == "vcmulq";
case ARM::BI__builtin_arm_mve_vcmulq_m_f16:
  return AliasName == "vcmulq_m_f16" || AliasName == "vcmulq_m";
case ARM::BI__builtin_arm_mve_vcmulq_m_f32:
  return AliasName == "vcmulq_m_f32" || AliasName == "vcmulq_m";
case ARM::BI__builtin_arm_mve_vcmulq_rot180_f16:
  return AliasName == "vcmulq_rot180_f16" || AliasName == "vcmulq_rot180";
case ARM::BI__builtin_arm_mve_vcmulq_rot180_f32:
  return AliasName == "vcmulq_rot180_f32" || AliasName == "vcmulq_rot180";
case ARM::BI__builtin_arm_mve_vcmulq_rot180_m_f16:
  return AliasName == "vcmulq_rot180_m_f16" || AliasName == "vcmulq_rot180_m";
case ARM::BI__builtin_arm_mve_vcmulq_rot180_m_f32:
  return AliasName == "vcmulq_rot180_m_f32" || AliasName == "vcmulq_rot180_m";
case ARM::BI__builtin_arm_mve_vcmulq_rot180_x_f16:
  return AliasName == "vcmulq_rot180_x_f16" || AliasName == "vcmulq_rot180_x";
case ARM::BI__builtin_arm_mve_vcmulq_rot180_x_f32:
  return AliasName == "vcmulq_rot180_x_f32" || AliasName == "vcmulq_rot180_x";
case ARM::BI__builtin_arm_mve_vcmulq_rot270_f16:
  return AliasName == "vcmulq_rot270_f16" || AliasName == "vcmulq_rot270";
case ARM::BI__builtin_arm_mve_vcmulq_rot270_f32:
  return AliasName == "vcmulq_rot270_f32" || AliasName == "vcmulq_rot270";
case ARM::BI__builtin_arm_mve_vcmulq_rot270_m_f16:
  return AliasName == "vcmulq_rot270_m_f16" || AliasName == "vcmulq_rot270_m";
case ARM::BI__builtin_arm_mve_vcmulq_rot270_m_f32:
  return AliasName == "vcmulq_rot270_m_f32" || AliasName == "vcmulq_rot270_m";
case ARM::BI__builtin_arm_mve_vcmulq_rot270_x_f16:
  return AliasName == "vcmulq_rot270_x_f16" || AliasName == "vcmulq_rot270_x";
case ARM::BI__builtin_arm_mve_vcmulq_rot270_x_f32:
  return AliasName == "vcmulq_rot270_x_f32" || AliasName == "vcmulq_rot270_x";
case ARM::BI__builtin_arm_mve_vcmulq_rot90_f16:
  return AliasName == "vcmulq_rot90_f16" || AliasName == "vcmulq_rot90";
case ARM::BI__builtin_arm_mve_vcmulq_rot90_f32:
  return AliasName == "vcmulq_rot90_f32" || AliasName == "vcmulq_rot90";
case ARM::BI__builtin_arm_mve_vcmulq_rot90_m_f16:
  return AliasName == "vcmulq_rot90_m_f16" || AliasName == "vcmulq_rot90_m";
case ARM::BI__builtin_arm_mve_vcmulq_rot90_m_f32:
  return AliasName == "vcmulq_rot90_m_f32" || AliasName == "vcmulq_rot90_m";
case ARM::BI__builtin_arm_mve_vcmulq_rot90_x_f16:
  return AliasName == "vcmulq_rot90_x_f16" || AliasName == "vcmulq_rot90_x";
case ARM::BI__builtin_arm_mve_vcmulq_rot90_x_f32:
  return AliasName == "vcmulq_rot90_x_f32" || AliasName == "vcmulq_rot90_x";
case ARM::BI__builtin_arm_mve_vcmulq_x_f16:
  return AliasName == "vcmulq_x_f16" || AliasName == "vcmulq_x";
case ARM::BI__builtin_arm_mve_vcmulq_x_f32:
  return AliasName == "vcmulq_x_f32" || AliasName == "vcmulq_x";
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
case ARM::BI__builtin_arm_mve_vctp16q:
  return AliasName == "vctp16q";
case ARM::BI__builtin_arm_mve_vctp16q_m:
  return AliasName == "vctp16q_m";
case ARM::BI__builtin_arm_mve_vctp32q:
  return AliasName == "vctp32q";
case ARM::BI__builtin_arm_mve_vctp32q_m:
  return AliasName == "vctp32q_m";
case ARM::BI__builtin_arm_mve_vctp64q:
  return AliasName == "vctp64q";
case ARM::BI__builtin_arm_mve_vctp64q_m:
  return AliasName == "vctp64q_m";
case ARM::BI__builtin_arm_mve_vctp8q:
  return AliasName == "vctp8q";
case ARM::BI__builtin_arm_mve_vctp8q_m:
  return AliasName == "vctp8q_m";
case ARM::BI__builtin_arm_mve_vcvtbq_f16_f32:
  return AliasName == "vcvtbq_f16_f32";
case ARM::BI__builtin_arm_mve_vcvtbq_m_f16_f32:
  return AliasName == "vcvtbq_m_f16_f32";
case ARM::BI__builtin_arm_mve_vcvttq_f16_f32:
  return AliasName == "vcvttq_f16_f32";
case ARM::BI__builtin_arm_mve_vcvttq_m_f16_f32:
  return AliasName == "vcvttq_m_f16_f32";
case ARM::BI__builtin_arm_mve_veorq_f16:
  return AliasName == "veorq_f16" || AliasName == "veorq";
case ARM::BI__builtin_arm_mve_veorq_f32:
  return AliasName == "veorq_f32" || AliasName == "veorq";
case ARM::BI__builtin_arm_mve_veorq_m_f16:
  return AliasName == "veorq_m_f16" || AliasName == "veorq_m";
case ARM::BI__builtin_arm_mve_veorq_m_f32:
  return AliasName == "veorq_m_f32" || AliasName == "veorq_m";
case ARM::BI__builtin_arm_mve_veorq_m_s16:
  return AliasName == "veorq_m_s16" || AliasName == "veorq_m";
case ARM::BI__builtin_arm_mve_veorq_m_s32:
  return AliasName == "veorq_m_s32" || AliasName == "veorq_m";
case ARM::BI__builtin_arm_mve_veorq_m_s8:
  return AliasName == "veorq_m_s8" || AliasName == "veorq_m";
case ARM::BI__builtin_arm_mve_veorq_m_u16:
  return AliasName == "veorq_m_u16" || AliasName == "veorq_m";
case ARM::BI__builtin_arm_mve_veorq_m_u32:
  return AliasName == "veorq_m_u32" || AliasName == "veorq_m";
case ARM::BI__builtin_arm_mve_veorq_m_u8:
  return AliasName == "veorq_m_u8" || AliasName == "veorq_m";
case ARM::BI__builtin_arm_mve_veorq_s16:
  return AliasName == "veorq_s16" || AliasName == "veorq";
case ARM::BI__builtin_arm_mve_veorq_s32:
  return AliasName == "veorq_s32" || AliasName == "veorq";
case ARM::BI__builtin_arm_mve_veorq_s8:
  return AliasName == "veorq_s8" || AliasName == "veorq";
case ARM::BI__builtin_arm_mve_veorq_u16:
  return AliasName == "veorq_u16" || AliasName == "veorq";
case ARM::BI__builtin_arm_mve_veorq_u32:
  return AliasName == "veorq_u32" || AliasName == "veorq";
case ARM::BI__builtin_arm_mve_veorq_u8:
  return AliasName == "veorq_u8" || AliasName == "veorq";
case ARM::BI__builtin_arm_mve_veorq_x_f16:
  return AliasName == "veorq_x_f16" || AliasName == "veorq_x";
case ARM::BI__builtin_arm_mve_veorq_x_f32:
  return AliasName == "veorq_x_f32" || AliasName == "veorq_x";
case ARM::BI__builtin_arm_mve_veorq_x_s16:
  return AliasName == "veorq_x_s16" || AliasName == "veorq_x";
case ARM::BI__builtin_arm_mve_veorq_x_s32:
  return AliasName == "veorq_x_s32" || AliasName == "veorq_x";
case ARM::BI__builtin_arm_mve_veorq_x_s8:
  return AliasName == "veorq_x_s8" || AliasName == "veorq_x";
case ARM::BI__builtin_arm_mve_veorq_x_u16:
  return AliasName == "veorq_x_u16" || AliasName == "veorq_x";
case ARM::BI__builtin_arm_mve_veorq_x_u32:
  return AliasName == "veorq_x_u32" || AliasName == "veorq_x";
case ARM::BI__builtin_arm_mve_veorq_x_u8:
  return AliasName == "veorq_x_u8" || AliasName == "veorq_x";
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
case ARM::BI__builtin_arm_mve_vhaddq_m_s16:
  return AliasName == "vhaddq_m_s16" || AliasName == "vhaddq_m";
case ARM::BI__builtin_arm_mve_vhaddq_m_s32:
  return AliasName == "vhaddq_m_s32" || AliasName == "vhaddq_m";
case ARM::BI__builtin_arm_mve_vhaddq_m_s8:
  return AliasName == "vhaddq_m_s8" || AliasName == "vhaddq_m";
case ARM::BI__builtin_arm_mve_vhaddq_m_u16:
  return AliasName == "vhaddq_m_u16" || AliasName == "vhaddq_m";
case ARM::BI__builtin_arm_mve_vhaddq_m_u32:
  return AliasName == "vhaddq_m_u32" || AliasName == "vhaddq_m";
case ARM::BI__builtin_arm_mve_vhaddq_m_u8:
  return AliasName == "vhaddq_m_u8" || AliasName == "vhaddq_m";
case ARM::BI__builtin_arm_mve_vhaddq_s16:
  return AliasName == "vhaddq_s16" || AliasName == "vhaddq";
case ARM::BI__builtin_arm_mve_vhaddq_s32:
  return AliasName == "vhaddq_s32" || AliasName == "vhaddq";
case ARM::BI__builtin_arm_mve_vhaddq_s8:
  return AliasName == "vhaddq_s8" || AliasName == "vhaddq";
case ARM::BI__builtin_arm_mve_vhaddq_u16:
  return AliasName == "vhaddq_u16" || AliasName == "vhaddq";
case ARM::BI__builtin_arm_mve_vhaddq_u32:
  return AliasName == "vhaddq_u32" || AliasName == "vhaddq";
case ARM::BI__builtin_arm_mve_vhaddq_u8:
  return AliasName == "vhaddq_u8" || AliasName == "vhaddq";
case ARM::BI__builtin_arm_mve_vhaddq_x_s16:
  return AliasName == "vhaddq_x_s16" || AliasName == "vhaddq_x";
case ARM::BI__builtin_arm_mve_vhaddq_x_s32:
  return AliasName == "vhaddq_x_s32" || AliasName == "vhaddq_x";
case ARM::BI__builtin_arm_mve_vhaddq_x_s8:
  return AliasName == "vhaddq_x_s8" || AliasName == "vhaddq_x";
case ARM::BI__builtin_arm_mve_vhaddq_x_u16:
  return AliasName == "vhaddq_x_u16" || AliasName == "vhaddq_x";
case ARM::BI__builtin_arm_mve_vhaddq_x_u32:
  return AliasName == "vhaddq_x_u32" || AliasName == "vhaddq_x";
case ARM::BI__builtin_arm_mve_vhaddq_x_u8:
  return AliasName == "vhaddq_x_u8" || AliasName == "vhaddq_x";
case ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s16:
  return AliasName == "vhcaddq_rot270_m_s16" || AliasName == "vhcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s32:
  return AliasName == "vhcaddq_rot270_m_s32" || AliasName == "vhcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s8:
  return AliasName == "vhcaddq_rot270_m_s8" || AliasName == "vhcaddq_rot270_m";
case ARM::BI__builtin_arm_mve_vhcaddq_rot270_s16:
  return AliasName == "vhcaddq_rot270_s16" || AliasName == "vhcaddq_rot270";
case ARM::BI__builtin_arm_mve_vhcaddq_rot270_s32:
  return AliasName == "vhcaddq_rot270_s32" || AliasName == "vhcaddq_rot270";
case ARM::BI__builtin_arm_mve_vhcaddq_rot270_s8:
  return AliasName == "vhcaddq_rot270_s8" || AliasName == "vhcaddq_rot270";
case ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s16:
  return AliasName == "vhcaddq_rot270_x_s16" || AliasName == "vhcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s32:
  return AliasName == "vhcaddq_rot270_x_s32" || AliasName == "vhcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s8:
  return AliasName == "vhcaddq_rot270_x_s8" || AliasName == "vhcaddq_rot270_x";
case ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s16:
  return AliasName == "vhcaddq_rot90_m_s16" || AliasName == "vhcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s32:
  return AliasName == "vhcaddq_rot90_m_s32" || AliasName == "vhcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s8:
  return AliasName == "vhcaddq_rot90_m_s8" || AliasName == "vhcaddq_rot90_m";
case ARM::BI__builtin_arm_mve_vhcaddq_rot90_s16:
  return AliasName == "vhcaddq_rot90_s16" || AliasName == "vhcaddq_rot90";
case ARM::BI__builtin_arm_mve_vhcaddq_rot90_s32:
  return AliasName == "vhcaddq_rot90_s32" || AliasName == "vhcaddq_rot90";
case ARM::BI__builtin_arm_mve_vhcaddq_rot90_s8:
  return AliasName == "vhcaddq_rot90_s8" || AliasName == "vhcaddq_rot90";
case ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s16:
  return AliasName == "vhcaddq_rot90_x_s16" || AliasName == "vhcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s32:
  return AliasName == "vhcaddq_rot90_x_s32" || AliasName == "vhcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s8:
  return AliasName == "vhcaddq_rot90_x_s8" || AliasName == "vhcaddq_rot90_x";
case ARM::BI__builtin_arm_mve_vhsubq_m_s16:
  return AliasName == "vhsubq_m_s16" || AliasName == "vhsubq_m";
case ARM::BI__builtin_arm_mve_vhsubq_m_s32:
  return AliasName == "vhsubq_m_s32" || AliasName == "vhsubq_m";
case ARM::BI__builtin_arm_mve_vhsubq_m_s8:
  return AliasName == "vhsubq_m_s8" || AliasName == "vhsubq_m";
case ARM::BI__builtin_arm_mve_vhsubq_m_u16:
  return AliasName == "vhsubq_m_u16" || AliasName == "vhsubq_m";
case ARM::BI__builtin_arm_mve_vhsubq_m_u32:
  return AliasName == "vhsubq_m_u32" || AliasName == "vhsubq_m";
case ARM::BI__builtin_arm_mve_vhsubq_m_u8:
  return AliasName == "vhsubq_m_u8" || AliasName == "vhsubq_m";
case ARM::BI__builtin_arm_mve_vhsubq_s16:
  return AliasName == "vhsubq_s16" || AliasName == "vhsubq";
case ARM::BI__builtin_arm_mve_vhsubq_s32:
  return AliasName == "vhsubq_s32" || AliasName == "vhsubq";
case ARM::BI__builtin_arm_mve_vhsubq_s8:
  return AliasName == "vhsubq_s8" || AliasName == "vhsubq";
case ARM::BI__builtin_arm_mve_vhsubq_u16:
  return AliasName == "vhsubq_u16" || AliasName == "vhsubq";
case ARM::BI__builtin_arm_mve_vhsubq_u32:
  return AliasName == "vhsubq_u32" || AliasName == "vhsubq";
case ARM::BI__builtin_arm_mve_vhsubq_u8:
  return AliasName == "vhsubq_u8" || AliasName == "vhsubq";
case ARM::BI__builtin_arm_mve_vhsubq_x_s16:
  return AliasName == "vhsubq_x_s16" || AliasName == "vhsubq_x";
case ARM::BI__builtin_arm_mve_vhsubq_x_s32:
  return AliasName == "vhsubq_x_s32" || AliasName == "vhsubq_x";
case ARM::BI__builtin_arm_mve_vhsubq_x_s8:
  return AliasName == "vhsubq_x_s8" || AliasName == "vhsubq_x";
case ARM::BI__builtin_arm_mve_vhsubq_x_u16:
  return AliasName == "vhsubq_x_u16" || AliasName == "vhsubq_x";
case ARM::BI__builtin_arm_mve_vhsubq_x_u32:
  return AliasName == "vhsubq_x_u32" || AliasName == "vhsubq_x";
case ARM::BI__builtin_arm_mve_vhsubq_x_u8:
  return AliasName == "vhsubq_x_u8" || AliasName == "vhsubq_x";
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
case ARM::BI__builtin_arm_mve_vmaxaq_m_s16:
  return AliasName == "vmaxaq_m_s16" || AliasName == "vmaxaq_m";
case ARM::BI__builtin_arm_mve_vmaxaq_m_s32:
  return AliasName == "vmaxaq_m_s32" || AliasName == "vmaxaq_m";
case ARM::BI__builtin_arm_mve_vmaxaq_m_s8:
  return AliasName == "vmaxaq_m_s8" || AliasName == "vmaxaq_m";
case ARM::BI__builtin_arm_mve_vmaxaq_s16:
  return AliasName == "vmaxaq_s16" || AliasName == "vmaxaq";
case ARM::BI__builtin_arm_mve_vmaxaq_s32:
  return AliasName == "vmaxaq_s32" || AliasName == "vmaxaq";
case ARM::BI__builtin_arm_mve_vmaxaq_s8:
  return AliasName == "vmaxaq_s8" || AliasName == "vmaxaq";
case ARM::BI__builtin_arm_mve_vmaxnmaq_f16:
  return AliasName == "vmaxnmaq_f16" || AliasName == "vmaxnmaq";
case ARM::BI__builtin_arm_mve_vmaxnmaq_f32:
  return AliasName == "vmaxnmaq_f32" || AliasName == "vmaxnmaq";
case ARM::BI__builtin_arm_mve_vmaxnmaq_m_f16:
  return AliasName == "vmaxnmaq_m_f16" || AliasName == "vmaxnmaq_m";
case ARM::BI__builtin_arm_mve_vmaxnmaq_m_f32:
  return AliasName == "vmaxnmaq_m_f32" || AliasName == "vmaxnmaq_m";
case ARM::BI__builtin_arm_mve_vmaxnmq_f16:
  return AliasName == "vmaxnmq_f16" || AliasName == "vmaxnmq";
case ARM::BI__builtin_arm_mve_vmaxnmq_f32:
  return AliasName == "vmaxnmq_f32" || AliasName == "vmaxnmq";
case ARM::BI__builtin_arm_mve_vmaxnmq_m_f16:
  return AliasName == "vmaxnmq_m_f16" || AliasName == "vmaxnmq_m";
case ARM::BI__builtin_arm_mve_vmaxnmq_m_f32:
  return AliasName == "vmaxnmq_m_f32" || AliasName == "vmaxnmq_m";
case ARM::BI__builtin_arm_mve_vmaxnmq_x_f16:
  return AliasName == "vmaxnmq_x_f16" || AliasName == "vmaxnmq_x";
case ARM::BI__builtin_arm_mve_vmaxnmq_x_f32:
  return AliasName == "vmaxnmq_x_f32" || AliasName == "vmaxnmq_x";
case ARM::BI__builtin_arm_mve_vmaxq_m_s16:
  return AliasName == "vmaxq_m_s16" || AliasName == "vmaxq_m";
case ARM::BI__builtin_arm_mve_vmaxq_m_s32:
  return AliasName == "vmaxq_m_s32" || AliasName == "vmaxq_m";
case ARM::BI__builtin_arm_mve_vmaxq_m_s8:
  return AliasName == "vmaxq_m_s8" || AliasName == "vmaxq_m";
case ARM::BI__builtin_arm_mve_vmaxq_m_u16:
  return AliasName == "vmaxq_m_u16" || AliasName == "vmaxq_m";
case ARM::BI__builtin_arm_mve_vmaxq_m_u32:
  return AliasName == "vmaxq_m_u32" || AliasName == "vmaxq_m";
case ARM::BI__builtin_arm_mve_vmaxq_m_u8:
  return AliasName == "vmaxq_m_u8" || AliasName == "vmaxq_m";
case ARM::BI__builtin_arm_mve_vmaxq_s16:
  return AliasName == "vmaxq_s16" || AliasName == "vmaxq";
case ARM::BI__builtin_arm_mve_vmaxq_s32:
  return AliasName == "vmaxq_s32" || AliasName == "vmaxq";
case ARM::BI__builtin_arm_mve_vmaxq_s8:
  return AliasName == "vmaxq_s8" || AliasName == "vmaxq";
case ARM::BI__builtin_arm_mve_vmaxq_u16:
  return AliasName == "vmaxq_u16" || AliasName == "vmaxq";
case ARM::BI__builtin_arm_mve_vmaxq_u32:
  return AliasName == "vmaxq_u32" || AliasName == "vmaxq";
case ARM::BI__builtin_arm_mve_vmaxq_u8:
  return AliasName == "vmaxq_u8" || AliasName == "vmaxq";
case ARM::BI__builtin_arm_mve_vmaxq_x_s16:
  return AliasName == "vmaxq_x_s16" || AliasName == "vmaxq_x";
case ARM::BI__builtin_arm_mve_vmaxq_x_s32:
  return AliasName == "vmaxq_x_s32" || AliasName == "vmaxq_x";
case ARM::BI__builtin_arm_mve_vmaxq_x_s8:
  return AliasName == "vmaxq_x_s8" || AliasName == "vmaxq_x";
case ARM::BI__builtin_arm_mve_vmaxq_x_u16:
  return AliasName == "vmaxq_x_u16" || AliasName == "vmaxq_x";
case ARM::BI__builtin_arm_mve_vmaxq_x_u32:
  return AliasName == "vmaxq_x_u32" || AliasName == "vmaxq_x";
case ARM::BI__builtin_arm_mve_vmaxq_x_u8:
  return AliasName == "vmaxq_x_u8" || AliasName == "vmaxq_x";
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
case ARM::BI__builtin_arm_mve_vminaq_m_s16:
  return AliasName == "vminaq_m_s16" || AliasName == "vminaq_m";
case ARM::BI__builtin_arm_mve_vminaq_m_s32:
  return AliasName == "vminaq_m_s32" || AliasName == "vminaq_m";
case ARM::BI__builtin_arm_mve_vminaq_m_s8:
  return AliasName == "vminaq_m_s8" || AliasName == "vminaq_m";
case ARM::BI__builtin_arm_mve_vminaq_s16:
  return AliasName == "vminaq_s16" || AliasName == "vminaq";
case ARM::BI__builtin_arm_mve_vminaq_s32:
  return AliasName == "vminaq_s32" || AliasName == "vminaq";
case ARM::BI__builtin_arm_mve_vminaq_s8:
  return AliasName == "vminaq_s8" || AliasName == "vminaq";
case ARM::BI__builtin_arm_mve_vminnmaq_f16:
  return AliasName == "vminnmaq_f16" || AliasName == "vminnmaq";
case ARM::BI__builtin_arm_mve_vminnmaq_f32:
  return AliasName == "vminnmaq_f32" || AliasName == "vminnmaq";
case ARM::BI__builtin_arm_mve_vminnmaq_m_f16:
  return AliasName == "vminnmaq_m_f16" || AliasName == "vminnmaq_m";
case ARM::BI__builtin_arm_mve_vminnmaq_m_f32:
  return AliasName == "vminnmaq_m_f32" || AliasName == "vminnmaq_m";
case ARM::BI__builtin_arm_mve_vminnmq_f16:
  return AliasName == "vminnmq_f16" || AliasName == "vminnmq";
case ARM::BI__builtin_arm_mve_vminnmq_f32:
  return AliasName == "vminnmq_f32" || AliasName == "vminnmq";
case ARM::BI__builtin_arm_mve_vminnmq_m_f16:
  return AliasName == "vminnmq_m_f16" || AliasName == "vminnmq_m";
case ARM::BI__builtin_arm_mve_vminnmq_m_f32:
  return AliasName == "vminnmq_m_f32" || AliasName == "vminnmq_m";
case ARM::BI__builtin_arm_mve_vminnmq_x_f16:
  return AliasName == "vminnmq_x_f16" || AliasName == "vminnmq_x";
case ARM::BI__builtin_arm_mve_vminnmq_x_f32:
  return AliasName == "vminnmq_x_f32" || AliasName == "vminnmq_x";
case ARM::BI__builtin_arm_mve_vminq_m_s16:
  return AliasName == "vminq_m_s16" || AliasName == "vminq_m";
case ARM::BI__builtin_arm_mve_vminq_m_s32:
  return AliasName == "vminq_m_s32" || AliasName == "vminq_m";
case ARM::BI__builtin_arm_mve_vminq_m_s8:
  return AliasName == "vminq_m_s8" || AliasName == "vminq_m";
case ARM::BI__builtin_arm_mve_vminq_m_u16:
  return AliasName == "vminq_m_u16" || AliasName == "vminq_m";
case ARM::BI__builtin_arm_mve_vminq_m_u32:
  return AliasName == "vminq_m_u32" || AliasName == "vminq_m";
case ARM::BI__builtin_arm_mve_vminq_m_u8:
  return AliasName == "vminq_m_u8" || AliasName == "vminq_m";
case ARM::BI__builtin_arm_mve_vminq_s16:
  return AliasName == "vminq_s16" || AliasName == "vminq";
case ARM::BI__builtin_arm_mve_vminq_s32:
  return AliasName == "vminq_s32" || AliasName == "vminq";
case ARM::BI__builtin_arm_mve_vminq_s8:
  return AliasName == "vminq_s8" || AliasName == "vminq";
case ARM::BI__builtin_arm_mve_vminq_u16:
  return AliasName == "vminq_u16" || AliasName == "vminq";
case ARM::BI__builtin_arm_mve_vminq_u32:
  return AliasName == "vminq_u32" || AliasName == "vminq";
case ARM::BI__builtin_arm_mve_vminq_u8:
  return AliasName == "vminq_u8" || AliasName == "vminq";
case ARM::BI__builtin_arm_mve_vminq_x_s16:
  return AliasName == "vminq_x_s16" || AliasName == "vminq_x";
case ARM::BI__builtin_arm_mve_vminq_x_s32:
  return AliasName == "vminq_x_s32" || AliasName == "vminq_x";
case ARM::BI__builtin_arm_mve_vminq_x_s8:
  return AliasName == "vminq_x_s8" || AliasName == "vminq_x";
case ARM::BI__builtin_arm_mve_vminq_x_u16:
  return AliasName == "vminq_x_u16" || AliasName == "vminq_x";
case ARM::BI__builtin_arm_mve_vminq_x_u32:
  return AliasName == "vminq_x_u32" || AliasName == "vminq_x";
case ARM::BI__builtin_arm_mve_vminq_x_u8:
  return AliasName == "vminq_x_u8" || AliasName == "vminq_x";
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
case ARM::BI__builtin_arm_mve_vmladavaq_p_s16:
  return AliasName == "vmladavaq_p_s16" || AliasName == "vmladavaq_p";
case ARM::BI__builtin_arm_mve_vmladavaq_p_s32:
  return AliasName == "vmladavaq_p_s32" || AliasName == "vmladavaq_p";
case ARM::BI__builtin_arm_mve_vmladavaq_p_s8:
  return AliasName == "vmladavaq_p_s8" || AliasName == "vmladavaq_p";
case ARM::BI__builtin_arm_mve_vmladavaq_p_u16:
  return AliasName == "vmladavaq_p_u16" || AliasName == "vmladavaq_p";
case ARM::BI__builtin_arm_mve_vmladavaq_p_u32:
  return AliasName == "vmladavaq_p_u32" || AliasName == "vmladavaq_p";
case ARM::BI__builtin_arm_mve_vmladavaq_p_u8:
  return AliasName == "vmladavaq_p_u8" || AliasName == "vmladavaq_p";
case ARM::BI__builtin_arm_mve_vmladavaq_s16:
  return AliasName == "vmladavaq_s16" || AliasName == "vmladavaq";
case ARM::BI__builtin_arm_mve_vmladavaq_s32:
  return AliasName == "vmladavaq_s32" || AliasName == "vmladavaq";
case ARM::BI__builtin_arm_mve_vmladavaq_s8:
  return AliasName == "vmladavaq_s8" || AliasName == "vmladavaq";
case ARM::BI__builtin_arm_mve_vmladavaq_u16:
  return AliasName == "vmladavaq_u16" || AliasName == "vmladavaq";
case ARM::BI__builtin_arm_mve_vmladavaq_u32:
  return AliasName == "vmladavaq_u32" || AliasName == "vmladavaq";
case ARM::BI__builtin_arm_mve_vmladavaq_u8:
  return AliasName == "vmladavaq_u8" || AliasName == "vmladavaq";
case ARM::BI__builtin_arm_mve_vmladavaxq_p_s16:
  return AliasName == "vmladavaxq_p_s16" || AliasName == "vmladavaxq_p";
case ARM::BI__builtin_arm_mve_vmladavaxq_p_s32:
  return AliasName == "vmladavaxq_p_s32" || AliasName == "vmladavaxq_p";
case ARM::BI__builtin_arm_mve_vmladavaxq_p_s8:
  return AliasName == "vmladavaxq_p_s8" || AliasName == "vmladavaxq_p";
case ARM::BI__builtin_arm_mve_vmladavaxq_s16:
  return AliasName == "vmladavaxq_s16" || AliasName == "vmladavaxq";
case ARM::BI__builtin_arm_mve_vmladavaxq_s32:
  return AliasName == "vmladavaxq_s32" || AliasName == "vmladavaxq";
case ARM::BI__builtin_arm_mve_vmladavaxq_s8:
  return AliasName == "vmladavaxq_s8" || AliasName == "vmladavaxq";
case ARM::BI__builtin_arm_mve_vmladavq_p_s16:
  return AliasName == "vmladavq_p_s16" || AliasName == "vmladavq_p";
case ARM::BI__builtin_arm_mve_vmladavq_p_s32:
  return AliasName == "vmladavq_p_s32" || AliasName == "vmladavq_p";
case ARM::BI__builtin_arm_mve_vmladavq_p_s8:
  return AliasName == "vmladavq_p_s8" || AliasName == "vmladavq_p";
case ARM::BI__builtin_arm_mve_vmladavq_p_u16:
  return AliasName == "vmladavq_p_u16" || AliasName == "vmladavq_p";
case ARM::BI__builtin_arm_mve_vmladavq_p_u32:
  return AliasName == "vmladavq_p_u32" || AliasName == "vmladavq_p";
case ARM::BI__builtin_arm_mve_vmladavq_p_u8:
  return AliasName == "vmladavq_p_u8" || AliasName == "vmladavq_p";
case ARM::BI__builtin_arm_mve_vmladavq_s16:
  return AliasName == "vmladavq_s16" || AliasName == "vmladavq";
case ARM::BI__builtin_arm_mve_vmladavq_s32:
  return AliasName == "vmladavq_s32" || AliasName == "vmladavq";
case ARM::BI__builtin_arm_mve_vmladavq_s8:
  return AliasName == "vmladavq_s8" || AliasName == "vmladavq";
case ARM::BI__builtin_arm_mve_vmladavq_u16:
  return AliasName == "vmladavq_u16" || AliasName == "vmladavq";
case ARM::BI__builtin_arm_mve_vmladavq_u32:
  return AliasName == "vmladavq_u32" || AliasName == "vmladavq";
case ARM::BI__builtin_arm_mve_vmladavq_u8:
  return AliasName == "vmladavq_u8" || AliasName == "vmladavq";
case ARM::BI__builtin_arm_mve_vmladavxq_p_s16:
  return AliasName == "vmladavxq_p_s16" || AliasName == "vmladavxq_p";
case ARM::BI__builtin_arm_mve_vmladavxq_p_s32:
  return AliasName == "vmladavxq_p_s32" || AliasName == "vmladavxq_p";
case ARM::BI__builtin_arm_mve_vmladavxq_p_s8:
  return AliasName == "vmladavxq_p_s8" || AliasName == "vmladavxq_p";
case ARM::BI__builtin_arm_mve_vmladavxq_s16:
  return AliasName == "vmladavxq_s16" || AliasName == "vmladavxq";
case ARM::BI__builtin_arm_mve_vmladavxq_s32:
  return AliasName == "vmladavxq_s32" || AliasName == "vmladavxq";
case ARM::BI__builtin_arm_mve_vmladavxq_s8:
  return AliasName == "vmladavxq_s8" || AliasName == "vmladavxq";
case ARM::BI__builtin_arm_mve_vmlaldavaq_p_s16:
  return AliasName == "vmlaldavaq_p_s16" || AliasName == "vmlaldavaq_p";
case ARM::BI__builtin_arm_mve_vmlaldavaq_p_s32:
  return AliasName == "vmlaldavaq_p_s32" || AliasName == "vmlaldavaq_p";
case ARM::BI__builtin_arm_mve_vmlaldavaq_p_u16:
  return AliasName == "vmlaldavaq_p_u16" || AliasName == "vmlaldavaq_p";
case ARM::BI__builtin_arm_mve_vmlaldavaq_p_u32:
  return AliasName == "vmlaldavaq_p_u32" || AliasName == "vmlaldavaq_p";
case ARM::BI__builtin_arm_mve_vmlaldavaq_s16:
  return AliasName == "vmlaldavaq_s16" || AliasName == "vmlaldavaq";
case ARM::BI__builtin_arm_mve_vmlaldavaq_s32:
  return AliasName == "vmlaldavaq_s32" || AliasName == "vmlaldavaq";
case ARM::BI__builtin_arm_mve_vmlaldavaq_u16:
  return AliasName == "vmlaldavaq_u16" || AliasName == "vmlaldavaq";
case ARM::BI__builtin_arm_mve_vmlaldavaq_u32:
  return AliasName == "vmlaldavaq_u32" || AliasName == "vmlaldavaq";
case ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s16:
  return AliasName == "vmlaldavaxq_p_s16" || AliasName == "vmlaldavaxq_p";
case ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s32:
  return AliasName == "vmlaldavaxq_p_s32" || AliasName == "vmlaldavaxq_p";
case ARM::BI__builtin_arm_mve_vmlaldavaxq_s16:
  return AliasName == "vmlaldavaxq_s16" || AliasName == "vmlaldavaxq";
case ARM::BI__builtin_arm_mve_vmlaldavaxq_s32:
  return AliasName == "vmlaldavaxq_s32" || AliasName == "vmlaldavaxq";
case ARM::BI__builtin_arm_mve_vmlaldavq_p_s16:
  return AliasName == "vmlaldavq_p_s16" || AliasName == "vmlaldavq_p";
case ARM::BI__builtin_arm_mve_vmlaldavq_p_s32:
  return AliasName == "vmlaldavq_p_s32" || AliasName == "vmlaldavq_p";
case ARM::BI__builtin_arm_mve_vmlaldavq_p_u16:
  return AliasName == "vmlaldavq_p_u16" || AliasName == "vmlaldavq_p";
case ARM::BI__builtin_arm_mve_vmlaldavq_p_u32:
  return AliasName == "vmlaldavq_p_u32" || AliasName == "vmlaldavq_p";
case ARM::BI__builtin_arm_mve_vmlaldavq_s16:
  return AliasName == "vmlaldavq_s16" || AliasName == "vmlaldavq";
case ARM::BI__builtin_arm_mve_vmlaldavq_s32:
  return AliasName == "vmlaldavq_s32" || AliasName == "vmlaldavq";
case ARM::BI__builtin_arm_mve_vmlaldavq_u16:
  return AliasName == "vmlaldavq_u16" || AliasName == "vmlaldavq";
case ARM::BI__builtin_arm_mve_vmlaldavq_u32:
  return AliasName == "vmlaldavq_u32" || AliasName == "vmlaldavq";
case ARM::BI__builtin_arm_mve_vmlaldavxq_p_s16:
  return AliasName == "vmlaldavxq_p_s16" || AliasName == "vmlaldavxq_p";
case ARM::BI__builtin_arm_mve_vmlaldavxq_p_s32:
  return AliasName == "vmlaldavxq_p_s32" || AliasName == "vmlaldavxq_p";
case ARM::BI__builtin_arm_mve_vmlaldavxq_s16:
  return AliasName == "vmlaldavxq_s16" || AliasName == "vmlaldavxq";
case ARM::BI__builtin_arm_mve_vmlaldavxq_s32:
  return AliasName == "vmlaldavxq_s32" || AliasName == "vmlaldavxq";
case ARM::BI__builtin_arm_mve_vmlsdavaq_p_s16:
  return AliasName == "vmlsdavaq_p_s16" || AliasName == "vmlsdavaq_p";
case ARM::BI__builtin_arm_mve_vmlsdavaq_p_s32:
  return AliasName == "vmlsdavaq_p_s32" || AliasName == "vmlsdavaq_p";
case ARM::BI__builtin_arm_mve_vmlsdavaq_p_s8:
  return AliasName == "vmlsdavaq_p_s8" || AliasName == "vmlsdavaq_p";
case ARM::BI__builtin_arm_mve_vmlsdavaq_s16:
  return AliasName == "vmlsdavaq_s16" || AliasName == "vmlsdavaq";
case ARM::BI__builtin_arm_mve_vmlsdavaq_s32:
  return AliasName == "vmlsdavaq_s32" || AliasName == "vmlsdavaq";
case ARM::BI__builtin_arm_mve_vmlsdavaq_s8:
  return AliasName == "vmlsdavaq_s8" || AliasName == "vmlsdavaq";
case ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s16:
  return AliasName == "vmlsdavaxq_p_s16" || AliasName == "vmlsdavaxq_p";
case ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s32:
  return AliasName == "vmlsdavaxq_p_s32" || AliasName == "vmlsdavaxq_p";
case ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s8:
  return AliasName == "vmlsdavaxq_p_s8" || AliasName == "vmlsdavaxq_p";
case ARM::BI__builtin_arm_mve_vmlsdavaxq_s16:
  return AliasName == "vmlsdavaxq_s16" || AliasName == "vmlsdavaxq";
case ARM::BI__builtin_arm_mve_vmlsdavaxq_s32:
  return AliasName == "vmlsdavaxq_s32" || AliasName == "vmlsdavaxq";
case ARM::BI__builtin_arm_mve_vmlsdavaxq_s8:
  return AliasName == "vmlsdavaxq_s8" || AliasName == "vmlsdavaxq";
case ARM::BI__builtin_arm_mve_vmlsdavq_p_s16:
  return AliasName == "vmlsdavq_p_s16" || AliasName == "vmlsdavq_p";
case ARM::BI__builtin_arm_mve_vmlsdavq_p_s32:
  return AliasName == "vmlsdavq_p_s32" || AliasName == "vmlsdavq_p";
case ARM::BI__builtin_arm_mve_vmlsdavq_p_s8:
  return AliasName == "vmlsdavq_p_s8" || AliasName == "vmlsdavq_p";
case ARM::BI__builtin_arm_mve_vmlsdavq_s16:
  return AliasName == "vmlsdavq_s16" || AliasName == "vmlsdavq";
case ARM::BI__builtin_arm_mve_vmlsdavq_s32:
  return AliasName == "vmlsdavq_s32" || AliasName == "vmlsdavq";
case ARM::BI__builtin_arm_mve_vmlsdavq_s8:
  return AliasName == "vmlsdavq_s8" || AliasName == "vmlsdavq";
case ARM::BI__builtin_arm_mve_vmlsdavxq_p_s16:
  return AliasName == "vmlsdavxq_p_s16" || AliasName == "vmlsdavxq_p";
case ARM::BI__builtin_arm_mve_vmlsdavxq_p_s32:
  return AliasName == "vmlsdavxq_p_s32" || AliasName == "vmlsdavxq_p";
case ARM::BI__builtin_arm_mve_vmlsdavxq_p_s8:
  return AliasName == "vmlsdavxq_p_s8" || AliasName == "vmlsdavxq_p";
case ARM::BI__builtin_arm_mve_vmlsdavxq_s16:
  return AliasName == "vmlsdavxq_s16" || AliasName == "vmlsdavxq";
case ARM::BI__builtin_arm_mve_vmlsdavxq_s32:
  return AliasName == "vmlsdavxq_s32" || AliasName == "vmlsdavxq";
case ARM::BI__builtin_arm_mve_vmlsdavxq_s8:
  return AliasName == "vmlsdavxq_s8" || AliasName == "vmlsdavxq";
case ARM::BI__builtin_arm_mve_vmlsldavaq_p_s16:
  return AliasName == "vmlsldavaq_p_s16" || AliasName == "vmlsldavaq_p";
case ARM::BI__builtin_arm_mve_vmlsldavaq_p_s32:
  return AliasName == "vmlsldavaq_p_s32" || AliasName == "vmlsldavaq_p";
case ARM::BI__builtin_arm_mve_vmlsldavaq_s16:
  return AliasName == "vmlsldavaq_s16" || AliasName == "vmlsldavaq";
case ARM::BI__builtin_arm_mve_vmlsldavaq_s32:
  return AliasName == "vmlsldavaq_s32" || AliasName == "vmlsldavaq";
case ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s16:
  return AliasName == "vmlsldavaxq_p_s16" || AliasName == "vmlsldavaxq_p";
case ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s32:
  return AliasName == "vmlsldavaxq_p_s32" || AliasName == "vmlsldavaxq_p";
case ARM::BI__builtin_arm_mve_vmlsldavaxq_s16:
  return AliasName == "vmlsldavaxq_s16" || AliasName == "vmlsldavaxq";
case ARM::BI__builtin_arm_mve_vmlsldavaxq_s32:
  return AliasName == "vmlsldavaxq_s32" || AliasName == "vmlsldavaxq";
case ARM::BI__builtin_arm_mve_vmlsldavq_p_s16:
  return AliasName == "vmlsldavq_p_s16" || AliasName == "vmlsldavq_p";
case ARM::BI__builtin_arm_mve_vmlsldavq_p_s32:
  return AliasName == "vmlsldavq_p_s32" || AliasName == "vmlsldavq_p";
case ARM::BI__builtin_arm_mve_vmlsldavq_s16:
  return AliasName == "vmlsldavq_s16" || AliasName == "vmlsldavq";
case ARM::BI__builtin_arm_mve_vmlsldavq_s32:
  return AliasName == "vmlsldavq_s32" || AliasName == "vmlsldavq";
case ARM::BI__builtin_arm_mve_vmlsldavxq_p_s16:
  return AliasName == "vmlsldavxq_p_s16" || AliasName == "vmlsldavxq_p";
case ARM::BI__builtin_arm_mve_vmlsldavxq_p_s32:
  return AliasName == "vmlsldavxq_p_s32" || AliasName == "vmlsldavxq_p";
case ARM::BI__builtin_arm_mve_vmlsldavxq_s16:
  return AliasName == "vmlsldavxq_s16" || AliasName == "vmlsldavxq";
case ARM::BI__builtin_arm_mve_vmlsldavxq_s32:
  return AliasName == "vmlsldavxq_s32" || AliasName == "vmlsldavxq";
case ARM::BI__builtin_arm_mve_vmulhq_m_s16:
  return AliasName == "vmulhq_m_s16" || AliasName == "vmulhq_m";
case ARM::BI__builtin_arm_mve_vmulhq_m_s32:
  return AliasName == "vmulhq_m_s32" || AliasName == "vmulhq_m";
case ARM::BI__builtin_arm_mve_vmulhq_m_s8:
  return AliasName == "vmulhq_m_s8" || AliasName == "vmulhq_m";
case ARM::BI__builtin_arm_mve_vmulhq_m_u16:
  return AliasName == "vmulhq_m_u16" || AliasName == "vmulhq_m";
case ARM::BI__builtin_arm_mve_vmulhq_m_u32:
  return AliasName == "vmulhq_m_u32" || AliasName == "vmulhq_m";
case ARM::BI__builtin_arm_mve_vmulhq_m_u8:
  return AliasName == "vmulhq_m_u8" || AliasName == "vmulhq_m";
case ARM::BI__builtin_arm_mve_vmulhq_s16:
  return AliasName == "vmulhq_s16" || AliasName == "vmulhq";
case ARM::BI__builtin_arm_mve_vmulhq_s32:
  return AliasName == "vmulhq_s32" || AliasName == "vmulhq";
case ARM::BI__builtin_arm_mve_vmulhq_s8:
  return AliasName == "vmulhq_s8" || AliasName == "vmulhq";
case ARM::BI__builtin_arm_mve_vmulhq_u16:
  return AliasName == "vmulhq_u16" || AliasName == "vmulhq";
case ARM::BI__builtin_arm_mve_vmulhq_u32:
  return AliasName == "vmulhq_u32" || AliasName == "vmulhq";
case ARM::BI__builtin_arm_mve_vmulhq_u8:
  return AliasName == "vmulhq_u8" || AliasName == "vmulhq";
case ARM::BI__builtin_arm_mve_vmulhq_x_s16:
  return AliasName == "vmulhq_x_s16" || AliasName == "vmulhq_x";
case ARM::BI__builtin_arm_mve_vmulhq_x_s32:
  return AliasName == "vmulhq_x_s32" || AliasName == "vmulhq_x";
case ARM::BI__builtin_arm_mve_vmulhq_x_s8:
  return AliasName == "vmulhq_x_s8" || AliasName == "vmulhq_x";
case ARM::BI__builtin_arm_mve_vmulhq_x_u16:
  return AliasName == "vmulhq_x_u16" || AliasName == "vmulhq_x";
case ARM::BI__builtin_arm_mve_vmulhq_x_u32:
  return AliasName == "vmulhq_x_u32" || AliasName == "vmulhq_x";
case ARM::BI__builtin_arm_mve_vmulhq_x_u8:
  return AliasName == "vmulhq_x_u8" || AliasName == "vmulhq_x";
case ARM::BI__builtin_arm_mve_vmullbq_int_m_s16:
  return AliasName == "vmullbq_int_m_s16" || AliasName == "vmullbq_int_m";
case ARM::BI__builtin_arm_mve_vmullbq_int_m_s32:
  return AliasName == "vmullbq_int_m_s32" || AliasName == "vmullbq_int_m";
case ARM::BI__builtin_arm_mve_vmullbq_int_m_s8:
  return AliasName == "vmullbq_int_m_s8" || AliasName == "vmullbq_int_m";
case ARM::BI__builtin_arm_mve_vmullbq_int_m_u16:
  return AliasName == "vmullbq_int_m_u16" || AliasName == "vmullbq_int_m";
case ARM::BI__builtin_arm_mve_vmullbq_int_m_u32:
  return AliasName == "vmullbq_int_m_u32" || AliasName == "vmullbq_int_m";
case ARM::BI__builtin_arm_mve_vmullbq_int_m_u8:
  return AliasName == "vmullbq_int_m_u8" || AliasName == "vmullbq_int_m";
case ARM::BI__builtin_arm_mve_vmullbq_int_s16:
  return AliasName == "vmullbq_int_s16" || AliasName == "vmullbq_int";
case ARM::BI__builtin_arm_mve_vmullbq_int_s32:
  return AliasName == "vmullbq_int_s32" || AliasName == "vmullbq_int";
case ARM::BI__builtin_arm_mve_vmullbq_int_s8:
  return AliasName == "vmullbq_int_s8" || AliasName == "vmullbq_int";
case ARM::BI__builtin_arm_mve_vmullbq_int_u16:
  return AliasName == "vmullbq_int_u16" || AliasName == "vmullbq_int";
case ARM::BI__builtin_arm_mve_vmullbq_int_u32:
  return AliasName == "vmullbq_int_u32" || AliasName == "vmullbq_int";
case ARM::BI__builtin_arm_mve_vmullbq_int_u8:
  return AliasName == "vmullbq_int_u8" || AliasName == "vmullbq_int";
case ARM::BI__builtin_arm_mve_vmullbq_int_x_s16:
  return AliasName == "vmullbq_int_x_s16" || AliasName == "vmullbq_int_x";
case ARM::BI__builtin_arm_mve_vmullbq_int_x_s32:
  return AliasName == "vmullbq_int_x_s32" || AliasName == "vmullbq_int_x";
case ARM::BI__builtin_arm_mve_vmullbq_int_x_s8:
  return AliasName == "vmullbq_int_x_s8" || AliasName == "vmullbq_int_x";
case ARM::BI__builtin_arm_mve_vmullbq_int_x_u16:
  return AliasName == "vmullbq_int_x_u16" || AliasName == "vmullbq_int_x";
case ARM::BI__builtin_arm_mve_vmullbq_int_x_u32:
  return AliasName == "vmullbq_int_x_u32" || AliasName == "vmullbq_int_x";
case ARM::BI__builtin_arm_mve_vmullbq_int_x_u8:
  return AliasName == "vmullbq_int_x_u8" || AliasName == "vmullbq_int_x";
case ARM::BI__builtin_arm_mve_vmullbq_poly_m_p16:
  return AliasName == "vmullbq_poly_m_p16" || AliasName == "vmullbq_poly_m";
case ARM::BI__builtin_arm_mve_vmullbq_poly_m_p8:
  return AliasName == "vmullbq_poly_m_p8" || AliasName == "vmullbq_poly_m";
case ARM::BI__builtin_arm_mve_vmullbq_poly_p16:
  return AliasName == "vmullbq_poly_p16" || AliasName == "vmullbq_poly";
case ARM::BI__builtin_arm_mve_vmullbq_poly_p8:
  return AliasName == "vmullbq_poly_p8" || AliasName == "vmullbq_poly";
case ARM::BI__builtin_arm_mve_vmullbq_poly_x_p16:
  return AliasName == "vmullbq_poly_x_p16" || AliasName == "vmullbq_poly_x";
case ARM::BI__builtin_arm_mve_vmullbq_poly_x_p8:
  return AliasName == "vmullbq_poly_x_p8" || AliasName == "vmullbq_poly_x";
case ARM::BI__builtin_arm_mve_vmulltq_int_m_s16:
  return AliasName == "vmulltq_int_m_s16" || AliasName == "vmulltq_int_m";
case ARM::BI__builtin_arm_mve_vmulltq_int_m_s32:
  return AliasName == "vmulltq_int_m_s32" || AliasName == "vmulltq_int_m";
case ARM::BI__builtin_arm_mve_vmulltq_int_m_s8:
  return AliasName == "vmulltq_int_m_s8" || AliasName == "vmulltq_int_m";
case ARM::BI__builtin_arm_mve_vmulltq_int_m_u16:
  return AliasName == "vmulltq_int_m_u16" || AliasName == "vmulltq_int_m";
case ARM::BI__builtin_arm_mve_vmulltq_int_m_u32:
  return AliasName == "vmulltq_int_m_u32" || AliasName == "vmulltq_int_m";
case ARM::BI__builtin_arm_mve_vmulltq_int_m_u8:
  return AliasName == "vmulltq_int_m_u8" || AliasName == "vmulltq_int_m";
case ARM::BI__builtin_arm_mve_vmulltq_int_s16:
  return AliasName == "vmulltq_int_s16" || AliasName == "vmulltq_int";
case ARM::BI__builtin_arm_mve_vmulltq_int_s32:
  return AliasName == "vmulltq_int_s32" || AliasName == "vmulltq_int";
case ARM::BI__builtin_arm_mve_vmulltq_int_s8:
  return AliasName == "vmulltq_int_s8" || AliasName == "vmulltq_int";
case ARM::BI__builtin_arm_mve_vmulltq_int_u16:
  return AliasName == "vmulltq_int_u16" || AliasName == "vmulltq_int";
case ARM::BI__builtin_arm_mve_vmulltq_int_u32:
  return AliasName == "vmulltq_int_u32" || AliasName == "vmulltq_int";
case ARM::BI__builtin_arm_mve_vmulltq_int_u8:
  return AliasName == "vmulltq_int_u8" || AliasName == "vmulltq_int";
case ARM::BI__builtin_arm_mve_vmulltq_int_x_s16:
  return AliasName == "vmulltq_int_x_s16" || AliasName == "vmulltq_int_x";
case ARM::BI__builtin_arm_mve_vmulltq_int_x_s32:
  return AliasName == "vmulltq_int_x_s32" || AliasName == "vmulltq_int_x";
case ARM::BI__builtin_arm_mve_vmulltq_int_x_s8:
  return AliasName == "vmulltq_int_x_s8" || AliasName == "vmulltq_int_x";
case ARM::BI__builtin_arm_mve_vmulltq_int_x_u16:
  return AliasName == "vmulltq_int_x_u16" || AliasName == "vmulltq_int_x";
case ARM::BI__builtin_arm_mve_vmulltq_int_x_u32:
  return AliasName == "vmulltq_int_x_u32" || AliasName == "vmulltq_int_x";
case ARM::BI__builtin_arm_mve_vmulltq_int_x_u8:
  return AliasName == "vmulltq_int_x_u8" || AliasName == "vmulltq_int_x";
case ARM::BI__builtin_arm_mve_vmulltq_poly_m_p16:
  return AliasName == "vmulltq_poly_m_p16" || AliasName == "vmulltq_poly_m";
case ARM::BI__builtin_arm_mve_vmulltq_poly_m_p8:
  return AliasName == "vmulltq_poly_m_p8" || AliasName == "vmulltq_poly_m";
case ARM::BI__builtin_arm_mve_vmulltq_poly_p16:
  return AliasName == "vmulltq_poly_p16" || AliasName == "vmulltq_poly";
case ARM::BI__builtin_arm_mve_vmulltq_poly_p8:
  return AliasName == "vmulltq_poly_p8" || AliasName == "vmulltq_poly";
case ARM::BI__builtin_arm_mve_vmulltq_poly_x_p16:
  return AliasName == "vmulltq_poly_x_p16" || AliasName == "vmulltq_poly_x";
case ARM::BI__builtin_arm_mve_vmulltq_poly_x_p8:
  return AliasName == "vmulltq_poly_x_p8" || AliasName == "vmulltq_poly_x";
case ARM::BI__builtin_arm_mve_vmulq_f16:
  return AliasName == "vmulq_f16" || AliasName == "vmulq";
case ARM::BI__builtin_arm_mve_vmulq_f32:
  return AliasName == "vmulq_f32" || AliasName == "vmulq";
case ARM::BI__builtin_arm_mve_vmulq_m_f16:
  return AliasName == "vmulq_m_f16" || AliasName == "vmulq_m";
case ARM::BI__builtin_arm_mve_vmulq_m_f32:
  return AliasName == "vmulq_m_f32" || AliasName == "vmulq_m";
case ARM::BI__builtin_arm_mve_vmulq_m_s16:
  return AliasName == "vmulq_m_s16" || AliasName == "vmulq_m";
case ARM::BI__builtin_arm_mve_vmulq_m_s32:
  return AliasName == "vmulq_m_s32" || AliasName == "vmulq_m";
case ARM::BI__builtin_arm_mve_vmulq_m_s8:
  return AliasName == "vmulq_m_s8" || AliasName == "vmulq_m";
case ARM::BI__builtin_arm_mve_vmulq_m_u16:
  return AliasName == "vmulq_m_u16" || AliasName == "vmulq_m";
case ARM::BI__builtin_arm_mve_vmulq_m_u32:
  return AliasName == "vmulq_m_u32" || AliasName == "vmulq_m";
case ARM::BI__builtin_arm_mve_vmulq_m_u8:
  return AliasName == "vmulq_m_u8" || AliasName == "vmulq_m";
case ARM::BI__builtin_arm_mve_vmulq_s16:
  return AliasName == "vmulq_s16" || AliasName == "vmulq";
case ARM::BI__builtin_arm_mve_vmulq_s32:
  return AliasName == "vmulq_s32" || AliasName == "vmulq";
case ARM::BI__builtin_arm_mve_vmulq_s8:
  return AliasName == "vmulq_s8" || AliasName == "vmulq";
case ARM::BI__builtin_arm_mve_vmulq_u16:
  return AliasName == "vmulq_u16" || AliasName == "vmulq";
case ARM::BI__builtin_arm_mve_vmulq_u32:
  return AliasName == "vmulq_u32" || AliasName == "vmulq";
case ARM::BI__builtin_arm_mve_vmulq_u8:
  return AliasName == "vmulq_u8" || AliasName == "vmulq";
case ARM::BI__builtin_arm_mve_vmulq_x_f16:
  return AliasName == "vmulq_x_f16" || AliasName == "vmulq_x";
case ARM::BI__builtin_arm_mve_vmulq_x_f32:
  return AliasName == "vmulq_x_f32" || AliasName == "vmulq_x";
case ARM::BI__builtin_arm_mve_vmulq_x_s16:
  return AliasName == "vmulq_x_s16" || AliasName == "vmulq_x";
case ARM::BI__builtin_arm_mve_vmulq_x_s32:
  return AliasName == "vmulq_x_s32" || AliasName == "vmulq_x";
case ARM::BI__builtin_arm_mve_vmulq_x_s8:
  return AliasName == "vmulq_x_s8" || AliasName == "vmulq_x";
case ARM::BI__builtin_arm_mve_vmulq_x_u16:
  return AliasName == "vmulq_x_u16" || AliasName == "vmulq_x";
case ARM::BI__builtin_arm_mve_vmulq_x_u32:
  return AliasName == "vmulq_x_u32" || AliasName == "vmulq_x";
case ARM::BI__builtin_arm_mve_vmulq_x_u8:
  return AliasName == "vmulq_x_u8" || AliasName == "vmulq_x";
case ARM::BI__builtin_arm_mve_vornq_f16:
  return AliasName == "vornq_f16" || AliasName == "vornq";
case ARM::BI__builtin_arm_mve_vornq_f32:
  return AliasName == "vornq_f32" || AliasName == "vornq";
case ARM::BI__builtin_arm_mve_vornq_m_f16:
  return AliasName == "vornq_m_f16" || AliasName == "vornq_m";
case ARM::BI__builtin_arm_mve_vornq_m_f32:
  return AliasName == "vornq_m_f32" || AliasName == "vornq_m";
case ARM::BI__builtin_arm_mve_vornq_m_s16:
  return AliasName == "vornq_m_s16" || AliasName == "vornq_m";
case ARM::BI__builtin_arm_mve_vornq_m_s32:
  return AliasName == "vornq_m_s32" || AliasName == "vornq_m";
case ARM::BI__builtin_arm_mve_vornq_m_s8:
  return AliasName == "vornq_m_s8" || AliasName == "vornq_m";
case ARM::BI__builtin_arm_mve_vornq_m_u16:
  return AliasName == "vornq_m_u16" || AliasName == "vornq_m";
case ARM::BI__builtin_arm_mve_vornq_m_u32:
  return AliasName == "vornq_m_u32" || AliasName == "vornq_m";
case ARM::BI__builtin_arm_mve_vornq_m_u8:
  return AliasName == "vornq_m_u8" || AliasName == "vornq_m";
case ARM::BI__builtin_arm_mve_vornq_s16:
  return AliasName == "vornq_s16" || AliasName == "vornq";
case ARM::BI__builtin_arm_mve_vornq_s32:
  return AliasName == "vornq_s32" || AliasName == "vornq";
case ARM::BI__builtin_arm_mve_vornq_s8:
  return AliasName == "vornq_s8" || AliasName == "vornq";
case ARM::BI__builtin_arm_mve_vornq_u16:
  return AliasName == "vornq_u16" || AliasName == "vornq";
case ARM::BI__builtin_arm_mve_vornq_u32:
  return AliasName == "vornq_u32" || AliasName == "vornq";
case ARM::BI__builtin_arm_mve_vornq_u8:
  return AliasName == "vornq_u8" || AliasName == "vornq";
case ARM::BI__builtin_arm_mve_vornq_x_f16:
  return AliasName == "vornq_x_f16" || AliasName == "vornq_x";
case ARM::BI__builtin_arm_mve_vornq_x_f32:
  return AliasName == "vornq_x_f32" || AliasName == "vornq_x";
case ARM::BI__builtin_arm_mve_vornq_x_s16:
  return AliasName == "vornq_x_s16" || AliasName == "vornq_x";
case ARM::BI__builtin_arm_mve_vornq_x_s32:
  return AliasName == "vornq_x_s32" || AliasName == "vornq_x";
case ARM::BI__builtin_arm_mve_vornq_x_s8:
  return AliasName == "vornq_x_s8" || AliasName == "vornq_x";
case ARM::BI__builtin_arm_mve_vornq_x_u16:
  return AliasName == "vornq_x_u16" || AliasName == "vornq_x";
case ARM::BI__builtin_arm_mve_vornq_x_u32:
  return AliasName == "vornq_x_u32" || AliasName == "vornq_x";
case ARM::BI__builtin_arm_mve_vornq_x_u8:
  return AliasName == "vornq_x_u8" || AliasName == "vornq_x";
case ARM::BI__builtin_arm_mve_vorrq_f16:
  return AliasName == "vorrq_f16" || AliasName == "vorrq";
case ARM::BI__builtin_arm_mve_vorrq_f32:
  return AliasName == "vorrq_f32" || AliasName == "vorrq";
case ARM::BI__builtin_arm_mve_vorrq_m_f16:
  return AliasName == "vorrq_m_f16" || AliasName == "vorrq_m";
case ARM::BI__builtin_arm_mve_vorrq_m_f32:
  return AliasName == "vorrq_m_f32" || AliasName == "vorrq_m";
case ARM::BI__builtin_arm_mve_vorrq_m_s16:
  return AliasName == "vorrq_m_s16" || AliasName == "vorrq_m";
case ARM::BI__builtin_arm_mve_vorrq_m_s32:
  return AliasName == "vorrq_m_s32" || AliasName == "vorrq_m";
case ARM::BI__builtin_arm_mve_vorrq_m_s8:
  return AliasName == "vorrq_m_s8" || AliasName == "vorrq_m";
case ARM::BI__builtin_arm_mve_vorrq_m_u16:
  return AliasName == "vorrq_m_u16" || AliasName == "vorrq_m";
case ARM::BI__builtin_arm_mve_vorrq_m_u32:
  return AliasName == "vorrq_m_u32" || AliasName == "vorrq_m";
case ARM::BI__builtin_arm_mve_vorrq_m_u8:
  return AliasName == "vorrq_m_u8" || AliasName == "vorrq_m";
case ARM::BI__builtin_arm_mve_vorrq_s16:
  return AliasName == "vorrq_s16" || AliasName == "vorrq";
case ARM::BI__builtin_arm_mve_vorrq_s32:
  return AliasName == "vorrq_s32" || AliasName == "vorrq";
case ARM::BI__builtin_arm_mve_vorrq_s8:
  return AliasName == "vorrq_s8" || AliasName == "vorrq";
case ARM::BI__builtin_arm_mve_vorrq_u16:
  return AliasName == "vorrq_u16" || AliasName == "vorrq";
case ARM::BI__builtin_arm_mve_vorrq_u32:
  return AliasName == "vorrq_u32" || AliasName == "vorrq";
case ARM::BI__builtin_arm_mve_vorrq_u8:
  return AliasName == "vorrq_u8" || AliasName == "vorrq";
case ARM::BI__builtin_arm_mve_vorrq_x_f16:
  return AliasName == "vorrq_x_f16" || AliasName == "vorrq_x";
case ARM::BI__builtin_arm_mve_vorrq_x_f32:
  return AliasName == "vorrq_x_f32" || AliasName == "vorrq_x";
case ARM::BI__builtin_arm_mve_vorrq_x_s16:
  return AliasName == "vorrq_x_s16" || AliasName == "vorrq_x";
case ARM::BI__builtin_arm_mve_vorrq_x_s32:
  return AliasName == "vorrq_x_s32" || AliasName == "vorrq_x";
case ARM::BI__builtin_arm_mve_vorrq_x_s8:
  return AliasName == "vorrq_x_s8" || AliasName == "vorrq_x";
case ARM::BI__builtin_arm_mve_vorrq_x_u16:
  return AliasName == "vorrq_x_u16" || AliasName == "vorrq_x";
case ARM::BI__builtin_arm_mve_vorrq_x_u32:
  return AliasName == "vorrq_x_u32" || AliasName == "vorrq_x";
case ARM::BI__builtin_arm_mve_vorrq_x_u8:
  return AliasName == "vorrq_x_u8" || AliasName == "vorrq_x";
case ARM::BI__builtin_arm_mve_vpnot:
  return AliasName == "vpnot";
case ARM::BI__builtin_arm_mve_vpselq_f16:
  return AliasName == "vpselq_f16" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vpselq_f32:
  return AliasName == "vpselq_f32" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vpselq_s16:
  return AliasName == "vpselq_s16" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vpselq_s32:
  return AliasName == "vpselq_s32" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vpselq_s64:
  return AliasName == "vpselq_s64" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vpselq_s8:
  return AliasName == "vpselq_s8" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vpselq_u16:
  return AliasName == "vpselq_u16" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vpselq_u32:
  return AliasName == "vpselq_u32" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vpselq_u64:
  return AliasName == "vpselq_u64" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vpselq_u8:
  return AliasName == "vpselq_u8" || AliasName == "vpselq";
case ARM::BI__builtin_arm_mve_vqaddq_m_s16:
  return AliasName == "vqaddq_m_s16" || AliasName == "vqaddq_m";
case ARM::BI__builtin_arm_mve_vqaddq_m_s32:
  return AliasName == "vqaddq_m_s32" || AliasName == "vqaddq_m";
case ARM::BI__builtin_arm_mve_vqaddq_m_s8:
  return AliasName == "vqaddq_m_s8" || AliasName == "vqaddq_m";
case ARM::BI__builtin_arm_mve_vqaddq_m_u16:
  return AliasName == "vqaddq_m_u16" || AliasName == "vqaddq_m";
case ARM::BI__builtin_arm_mve_vqaddq_m_u32:
  return AliasName == "vqaddq_m_u32" || AliasName == "vqaddq_m";
case ARM::BI__builtin_arm_mve_vqaddq_m_u8:
  return AliasName == "vqaddq_m_u8" || AliasName == "vqaddq_m";
case ARM::BI__builtin_arm_mve_vqaddq_s16:
  return AliasName == "vqaddq_s16" || AliasName == "vqaddq";
case ARM::BI__builtin_arm_mve_vqaddq_s32:
  return AliasName == "vqaddq_s32" || AliasName == "vqaddq";
case ARM::BI__builtin_arm_mve_vqaddq_s8:
  return AliasName == "vqaddq_s8" || AliasName == "vqaddq";
case ARM::BI__builtin_arm_mve_vqaddq_u16:
  return AliasName == "vqaddq_u16" || AliasName == "vqaddq";
case ARM::BI__builtin_arm_mve_vqaddq_u32:
  return AliasName == "vqaddq_u32" || AliasName == "vqaddq";
case ARM::BI__builtin_arm_mve_vqaddq_u8:
  return AliasName == "vqaddq_u8" || AliasName == "vqaddq";
case ARM::BI__builtin_arm_mve_vqdmulhq_m_s16:
  return AliasName == "vqdmulhq_m_s16" || AliasName == "vqdmulhq_m";
case ARM::BI__builtin_arm_mve_vqdmulhq_m_s32:
  return AliasName == "vqdmulhq_m_s32" || AliasName == "vqdmulhq_m";
case ARM::BI__builtin_arm_mve_vqdmulhq_m_s8:
  return AliasName == "vqdmulhq_m_s8" || AliasName == "vqdmulhq_m";
case ARM::BI__builtin_arm_mve_vqdmulhq_s16:
  return AliasName == "vqdmulhq_s16" || AliasName == "vqdmulhq";
case ARM::BI__builtin_arm_mve_vqdmulhq_s32:
  return AliasName == "vqdmulhq_s32" || AliasName == "vqdmulhq";
case ARM::BI__builtin_arm_mve_vqdmulhq_s8:
  return AliasName == "vqdmulhq_s8" || AliasName == "vqdmulhq";
case ARM::BI__builtin_arm_mve_vqrdmulhq_m_s16:
  return AliasName == "vqrdmulhq_m_s16" || AliasName == "vqrdmulhq_m";
case ARM::BI__builtin_arm_mve_vqrdmulhq_m_s32:
  return AliasName == "vqrdmulhq_m_s32" || AliasName == "vqrdmulhq_m";
case ARM::BI__builtin_arm_mve_vqrdmulhq_m_s8:
  return AliasName == "vqrdmulhq_m_s8" || AliasName == "vqrdmulhq_m";
case ARM::BI__builtin_arm_mve_vqrdmulhq_s16:
  return AliasName == "vqrdmulhq_s16" || AliasName == "vqrdmulhq";
case ARM::BI__builtin_arm_mve_vqrdmulhq_s32:
  return AliasName == "vqrdmulhq_s32" || AliasName == "vqrdmulhq";
case ARM::BI__builtin_arm_mve_vqrdmulhq_s8:
  return AliasName == "vqrdmulhq_s8" || AliasName == "vqrdmulhq";
case ARM::BI__builtin_arm_mve_vqrshlq_m_n_s16:
  return AliasName == "vqrshlq_m_n_s16" || AliasName == "vqrshlq_m_n";
case ARM::BI__builtin_arm_mve_vqrshlq_m_n_s32:
  return AliasName == "vqrshlq_m_n_s32" || AliasName == "vqrshlq_m_n";
case ARM::BI__builtin_arm_mve_vqrshlq_m_n_s8:
  return AliasName == "vqrshlq_m_n_s8" || AliasName == "vqrshlq_m_n";
case ARM::BI__builtin_arm_mve_vqrshlq_m_n_u16:
  return AliasName == "vqrshlq_m_n_u16" || AliasName == "vqrshlq_m_n";
case ARM::BI__builtin_arm_mve_vqrshlq_m_n_u32:
  return AliasName == "vqrshlq_m_n_u32" || AliasName == "vqrshlq_m_n";
case ARM::BI__builtin_arm_mve_vqrshlq_m_n_u8:
  return AliasName == "vqrshlq_m_n_u8" || AliasName == "vqrshlq_m_n";
case ARM::BI__builtin_arm_mve_vqrshlq_m_s16:
  return AliasName == "vqrshlq_m_s16" || AliasName == "vqrshlq_m";
case ARM::BI__builtin_arm_mve_vqrshlq_m_s32:
  return AliasName == "vqrshlq_m_s32" || AliasName == "vqrshlq_m";
case ARM::BI__builtin_arm_mve_vqrshlq_m_s8:
  return AliasName == "vqrshlq_m_s8" || AliasName == "vqrshlq_m";
case ARM::BI__builtin_arm_mve_vqrshlq_m_u16:
  return AliasName == "vqrshlq_m_u16" || AliasName == "vqrshlq_m";
case ARM::BI__builtin_arm_mve_vqrshlq_m_u32:
  return AliasName == "vqrshlq_m_u32" || AliasName == "vqrshlq_m";
case ARM::BI__builtin_arm_mve_vqrshlq_m_u8:
  return AliasName == "vqrshlq_m_u8" || AliasName == "vqrshlq_m";
case ARM::BI__builtin_arm_mve_vqrshlq_n_s16:
  return AliasName == "vqrshlq_n_s16" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_n_s32:
  return AliasName == "vqrshlq_n_s32" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_n_s8:
  return AliasName == "vqrshlq_n_s8" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_n_u16:
  return AliasName == "vqrshlq_n_u16" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_n_u32:
  return AliasName == "vqrshlq_n_u32" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_n_u8:
  return AliasName == "vqrshlq_n_u8" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_s16:
  return AliasName == "vqrshlq_s16" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_s32:
  return AliasName == "vqrshlq_s32" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_s8:
  return AliasName == "vqrshlq_s8" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_u16:
  return AliasName == "vqrshlq_u16" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_u32:
  return AliasName == "vqrshlq_u32" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshlq_u8:
  return AliasName == "vqrshlq_u8" || AliasName == "vqrshlq";
case ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s16:
  return AliasName == "vqrshrnbq_m_n_s16" || AliasName == "vqrshrnbq_m";
case ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s32:
  return AliasName == "vqrshrnbq_m_n_s32" || AliasName == "vqrshrnbq_m";
case ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u16:
  return AliasName == "vqrshrnbq_m_n_u16" || AliasName == "vqrshrnbq_m";
case ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u32:
  return AliasName == "vqrshrnbq_m_n_u32" || AliasName == "vqrshrnbq_m";
case ARM::BI__builtin_arm_mve_vqrshrnbq_n_s16:
  return AliasName == "vqrshrnbq_n_s16" || AliasName == "vqrshrnbq";
case ARM::BI__builtin_arm_mve_vqrshrnbq_n_s32:
  return AliasName == "vqrshrnbq_n_s32" || AliasName == "vqrshrnbq";
case ARM::BI__builtin_arm_mve_vqrshrnbq_n_u16:
  return AliasName == "vqrshrnbq_n_u16" || AliasName == "vqrshrnbq";
case ARM::BI__builtin_arm_mve_vqrshrnbq_n_u32:
  return AliasName == "vqrshrnbq_n_u32" || AliasName == "vqrshrnbq";
case ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s16:
  return AliasName == "vqrshrntq_m_n_s16" || AliasName == "vqrshrntq_m";
case ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s32:
  return AliasName == "vqrshrntq_m_n_s32" || AliasName == "vqrshrntq_m";
case ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u16:
  return AliasName == "vqrshrntq_m_n_u16" || AliasName == "vqrshrntq_m";
case ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u32:
  return AliasName == "vqrshrntq_m_n_u32" || AliasName == "vqrshrntq_m";
case ARM::BI__builtin_arm_mve_vqrshrntq_n_s16:
  return AliasName == "vqrshrntq_n_s16" || AliasName == "vqrshrntq";
case ARM::BI__builtin_arm_mve_vqrshrntq_n_s32:
  return AliasName == "vqrshrntq_n_s32" || AliasName == "vqrshrntq";
case ARM::BI__builtin_arm_mve_vqrshrntq_n_u16:
  return AliasName == "vqrshrntq_n_u16" || AliasName == "vqrshrntq";
case ARM::BI__builtin_arm_mve_vqrshrntq_n_u32:
  return AliasName == "vqrshrntq_n_u32" || AliasName == "vqrshrntq";
case ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s16:
  return AliasName == "vqrshrunbq_m_n_s16" || AliasName == "vqrshrunbq_m";
case ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s32:
  return AliasName == "vqrshrunbq_m_n_s32" || AliasName == "vqrshrunbq_m";
case ARM::BI__builtin_arm_mve_vqrshrunbq_n_s16:
  return AliasName == "vqrshrunbq_n_s16" || AliasName == "vqrshrunbq";
case ARM::BI__builtin_arm_mve_vqrshrunbq_n_s32:
  return AliasName == "vqrshrunbq_n_s32" || AliasName == "vqrshrunbq";
case ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s16:
  return AliasName == "vqrshruntq_m_n_s16" || AliasName == "vqrshruntq_m";
case ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s32:
  return AliasName == "vqrshruntq_m_n_s32" || AliasName == "vqrshruntq_m";
case ARM::BI__builtin_arm_mve_vqrshruntq_n_s16:
  return AliasName == "vqrshruntq_n_s16" || AliasName == "vqrshruntq";
case ARM::BI__builtin_arm_mve_vqrshruntq_n_s32:
  return AliasName == "vqrshruntq_n_s32" || AliasName == "vqrshruntq";
case ARM::BI__builtin_arm_mve_vqshlq_m_n_s16:
  return AliasName == "vqshlq_m_n_s16" || AliasName == "vqshlq_m_n";
case ARM::BI__builtin_arm_mve_vqshlq_m_n_s32:
  return AliasName == "vqshlq_m_n_s32" || AliasName == "vqshlq_m_n";
case ARM::BI__builtin_arm_mve_vqshlq_m_n_s8:
  return AliasName == "vqshlq_m_n_s8" || AliasName == "vqshlq_m_n";
case ARM::BI__builtin_arm_mve_vqshlq_m_n_u16:
  return AliasName == "vqshlq_m_n_u16" || AliasName == "vqshlq_m_n";
case ARM::BI__builtin_arm_mve_vqshlq_m_n_u32:
  return AliasName == "vqshlq_m_n_u32" || AliasName == "vqshlq_m_n";
case ARM::BI__builtin_arm_mve_vqshlq_m_n_u8:
  return AliasName == "vqshlq_m_n_u8" || AliasName == "vqshlq_m_n";
case ARM::BI__builtin_arm_mve_vqshlq_m_r_s16:
  return AliasName == "vqshlq_m_r_s16" || AliasName == "vqshlq_m_r";
case ARM::BI__builtin_arm_mve_vqshlq_m_r_s32:
  return AliasName == "vqshlq_m_r_s32" || AliasName == "vqshlq_m_r";
case ARM::BI__builtin_arm_mve_vqshlq_m_r_s8:
  return AliasName == "vqshlq_m_r_s8" || AliasName == "vqshlq_m_r";
case ARM::BI__builtin_arm_mve_vqshlq_m_r_u16:
  return AliasName == "vqshlq_m_r_u16" || AliasName == "vqshlq_m_r";
case ARM::BI__builtin_arm_mve_vqshlq_m_r_u32:
  return AliasName == "vqshlq_m_r_u32" || AliasName == "vqshlq_m_r";
case ARM::BI__builtin_arm_mve_vqshlq_m_r_u8:
  return AliasName == "vqshlq_m_r_u8" || AliasName == "vqshlq_m_r";
case ARM::BI__builtin_arm_mve_vqshlq_m_s16:
  return AliasName == "vqshlq_m_s16" || AliasName == "vqshlq_m";
case ARM::BI__builtin_arm_mve_vqshlq_m_s32:
  return AliasName == "vqshlq_m_s32" || AliasName == "vqshlq_m";
case ARM::BI__builtin_arm_mve_vqshlq_m_s8:
  return AliasName == "vqshlq_m_s8" || AliasName == "vqshlq_m";
case ARM::BI__builtin_arm_mve_vqshlq_m_u16:
  return AliasName == "vqshlq_m_u16" || AliasName == "vqshlq_m";
case ARM::BI__builtin_arm_mve_vqshlq_m_u32:
  return AliasName == "vqshlq_m_u32" || AliasName == "vqshlq_m";
case ARM::BI__builtin_arm_mve_vqshlq_m_u8:
  return AliasName == "vqshlq_m_u8" || AliasName == "vqshlq_m";
case ARM::BI__builtin_arm_mve_vqshlq_n_s16:
  return AliasName == "vqshlq_n_s16" || AliasName == "vqshlq_n";
case ARM::BI__builtin_arm_mve_vqshlq_n_s32:
  return AliasName == "vqshlq_n_s32" || AliasName == "vqshlq_n";
case ARM::BI__builtin_arm_mve_vqshlq_n_s8:
  return AliasName == "vqshlq_n_s8" || AliasName == "vqshlq_n";
case ARM::BI__builtin_arm_mve_vqshlq_n_u16:
  return AliasName == "vqshlq_n_u16" || AliasName == "vqshlq_n";
case ARM::BI__builtin_arm_mve_vqshlq_n_u32:
  return AliasName == "vqshlq_n_u32" || AliasName == "vqshlq_n";
case ARM::BI__builtin_arm_mve_vqshlq_n_u8:
  return AliasName == "vqshlq_n_u8" || AliasName == "vqshlq_n";
case ARM::BI__builtin_arm_mve_vqshlq_r_s16:
  return AliasName == "vqshlq_r_s16" || AliasName == "vqshlq_r";
case ARM::BI__builtin_arm_mve_vqshlq_r_s32:
  return AliasName == "vqshlq_r_s32" || AliasName == "vqshlq_r";
case ARM::BI__builtin_arm_mve_vqshlq_r_s8:
  return AliasName == "vqshlq_r_s8" || AliasName == "vqshlq_r";
case ARM::BI__builtin_arm_mve_vqshlq_r_u16:
  return AliasName == "vqshlq_r_u16" || AliasName == "vqshlq_r";
case ARM::BI__builtin_arm_mve_vqshlq_r_u32:
  return AliasName == "vqshlq_r_u32" || AliasName == "vqshlq_r";
case ARM::BI__builtin_arm_mve_vqshlq_r_u8:
  return AliasName == "vqshlq_r_u8" || AliasName == "vqshlq_r";
case ARM::BI__builtin_arm_mve_vqshlq_s16:
  return AliasName == "vqshlq_s16" || AliasName == "vqshlq";
case ARM::BI__builtin_arm_mve_vqshlq_s32:
  return AliasName == "vqshlq_s32" || AliasName == "vqshlq";
case ARM::BI__builtin_arm_mve_vqshlq_s8:
  return AliasName == "vqshlq_s8" || AliasName == "vqshlq";
case ARM::BI__builtin_arm_mve_vqshlq_u16:
  return AliasName == "vqshlq_u16" || AliasName == "vqshlq";
case ARM::BI__builtin_arm_mve_vqshlq_u32:
  return AliasName == "vqshlq_u32" || AliasName == "vqshlq";
case ARM::BI__builtin_arm_mve_vqshlq_u8:
  return AliasName == "vqshlq_u8" || AliasName == "vqshlq";
case ARM::BI__builtin_arm_mve_vqshluq_m_n_s16:
  return AliasName == "vqshluq_m_n_s16" || AliasName == "vqshluq_m";
case ARM::BI__builtin_arm_mve_vqshluq_m_n_s32:
  return AliasName == "vqshluq_m_n_s32" || AliasName == "vqshluq_m";
case ARM::BI__builtin_arm_mve_vqshluq_m_n_s8:
  return AliasName == "vqshluq_m_n_s8" || AliasName == "vqshluq_m";
case ARM::BI__builtin_arm_mve_vqshluq_n_s16:
  return AliasName == "vqshluq_n_s16" || AliasName == "vqshluq";
case ARM::BI__builtin_arm_mve_vqshluq_n_s32:
  return AliasName == "vqshluq_n_s32" || AliasName == "vqshluq";
case ARM::BI__builtin_arm_mve_vqshluq_n_s8:
  return AliasName == "vqshluq_n_s8" || AliasName == "vqshluq";
case ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s16:
  return AliasName == "vqshrnbq_m_n_s16" || AliasName == "vqshrnbq_m";
case ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s32:
  return AliasName == "vqshrnbq_m_n_s32" || AliasName == "vqshrnbq_m";
case ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u16:
  return AliasName == "vqshrnbq_m_n_u16" || AliasName == "vqshrnbq_m";
case ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u32:
  return AliasName == "vqshrnbq_m_n_u32" || AliasName == "vqshrnbq_m";
case ARM::BI__builtin_arm_mve_vqshrnbq_n_s16:
  return AliasName == "vqshrnbq_n_s16" || AliasName == "vqshrnbq";
case ARM::BI__builtin_arm_mve_vqshrnbq_n_s32:
  return AliasName == "vqshrnbq_n_s32" || AliasName == "vqshrnbq";
case ARM::BI__builtin_arm_mve_vqshrnbq_n_u16:
  return AliasName == "vqshrnbq_n_u16" || AliasName == "vqshrnbq";
case ARM::BI__builtin_arm_mve_vqshrnbq_n_u32:
  return AliasName == "vqshrnbq_n_u32" || AliasName == "vqshrnbq";
case ARM::BI__builtin_arm_mve_vqshrntq_m_n_s16:
  return AliasName == "vqshrntq_m_n_s16" || AliasName == "vqshrntq_m";
case ARM::BI__builtin_arm_mve_vqshrntq_m_n_s32:
  return AliasName == "vqshrntq_m_n_s32" || AliasName == "vqshrntq_m";
case ARM::BI__builtin_arm_mve_vqshrntq_m_n_u16:
  return AliasName == "vqshrntq_m_n_u16" || AliasName == "vqshrntq_m";
case ARM::BI__builtin_arm_mve_vqshrntq_m_n_u32:
  return AliasName == "vqshrntq_m_n_u32" || AliasName == "vqshrntq_m";
case ARM::BI__builtin_arm_mve_vqshrntq_n_s16:
  return AliasName == "vqshrntq_n_s16" || AliasName == "vqshrntq";
case ARM::BI__builtin_arm_mve_vqshrntq_n_s32:
  return AliasName == "vqshrntq_n_s32" || AliasName == "vqshrntq";
case ARM::BI__builtin_arm_mve_vqshrntq_n_u16:
  return AliasName == "vqshrntq_n_u16" || AliasName == "vqshrntq";
case ARM::BI__builtin_arm_mve_vqshrntq_n_u32:
  return AliasName == "vqshrntq_n_u32" || AliasName == "vqshrntq";
case ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s16:
  return AliasName == "vqshrunbq_m_n_s16" || AliasName == "vqshrunbq_m";
case ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s32:
  return AliasName == "vqshrunbq_m_n_s32" || AliasName == "vqshrunbq_m";
case ARM::BI__builtin_arm_mve_vqshrunbq_n_s16:
  return AliasName == "vqshrunbq_n_s16" || AliasName == "vqshrunbq";
case ARM::BI__builtin_arm_mve_vqshrunbq_n_s32:
  return AliasName == "vqshrunbq_n_s32" || AliasName == "vqshrunbq";
case ARM::BI__builtin_arm_mve_vqshruntq_m_n_s16:
  return AliasName == "vqshruntq_m_n_s16" || AliasName == "vqshruntq_m";
case ARM::BI__builtin_arm_mve_vqshruntq_m_n_s32:
  return AliasName == "vqshruntq_m_n_s32" || AliasName == "vqshruntq_m";
case ARM::BI__builtin_arm_mve_vqshruntq_n_s16:
  return AliasName == "vqshruntq_n_s16" || AliasName == "vqshruntq";
case ARM::BI__builtin_arm_mve_vqshruntq_n_s32:
  return AliasName == "vqshruntq_n_s32" || AliasName == "vqshruntq";
case ARM::BI__builtin_arm_mve_vqsubq_m_s16:
  return AliasName == "vqsubq_m_s16" || AliasName == "vqsubq_m";
case ARM::BI__builtin_arm_mve_vqsubq_m_s32:
  return AliasName == "vqsubq_m_s32" || AliasName == "vqsubq_m";
case ARM::BI__builtin_arm_mve_vqsubq_m_s8:
  return AliasName == "vqsubq_m_s8" || AliasName == "vqsubq_m";
case ARM::BI__builtin_arm_mve_vqsubq_m_u16:
  return AliasName == "vqsubq_m_u16" || AliasName == "vqsubq_m";
case ARM::BI__builtin_arm_mve_vqsubq_m_u32:
  return AliasName == "vqsubq_m_u32" || AliasName == "vqsubq_m";
case ARM::BI__builtin_arm_mve_vqsubq_m_u8:
  return AliasName == "vqsubq_m_u8" || AliasName == "vqsubq_m";
case ARM::BI__builtin_arm_mve_vqsubq_s16:
  return AliasName == "vqsubq_s16" || AliasName == "vqsubq";
case ARM::BI__builtin_arm_mve_vqsubq_s32:
  return AliasName == "vqsubq_s32" || AliasName == "vqsubq";
case ARM::BI__builtin_arm_mve_vqsubq_s8:
  return AliasName == "vqsubq_s8" || AliasName == "vqsubq";
case ARM::BI__builtin_arm_mve_vqsubq_u16:
  return AliasName == "vqsubq_u16" || AliasName == "vqsubq";
case ARM::BI__builtin_arm_mve_vqsubq_u32:
  return AliasName == "vqsubq_u32" || AliasName == "vqsubq";
case ARM::BI__builtin_arm_mve_vqsubq_u8:
  return AliasName == "vqsubq_u8" || AliasName == "vqsubq";
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
case ARM::BI__builtin_arm_mve_vrhaddq_m_s16:
  return AliasName == "vrhaddq_m_s16" || AliasName == "vrhaddq_m";
case ARM::BI__builtin_arm_mve_vrhaddq_m_s32:
  return AliasName == "vrhaddq_m_s32" || AliasName == "vrhaddq_m";
case ARM::BI__builtin_arm_mve_vrhaddq_m_s8:
  return AliasName == "vrhaddq_m_s8" || AliasName == "vrhaddq_m";
case ARM::BI__builtin_arm_mve_vrhaddq_m_u16:
  return AliasName == "vrhaddq_m_u16" || AliasName == "vrhaddq_m";
case ARM::BI__builtin_arm_mve_vrhaddq_m_u32:
  return AliasName == "vrhaddq_m_u32" || AliasName == "vrhaddq_m";
case ARM::BI__builtin_arm_mve_vrhaddq_m_u8:
  return AliasName == "vrhaddq_m_u8" || AliasName == "vrhaddq_m";
case ARM::BI__builtin_arm_mve_vrhaddq_s16:
  return AliasName == "vrhaddq_s16" || AliasName == "vrhaddq";
case ARM::BI__builtin_arm_mve_vrhaddq_s32:
  return AliasName == "vrhaddq_s32" || AliasName == "vrhaddq";
case ARM::BI__builtin_arm_mve_vrhaddq_s8:
  return AliasName == "vrhaddq_s8" || AliasName == "vrhaddq";
case ARM::BI__builtin_arm_mve_vrhaddq_u16:
  return AliasName == "vrhaddq_u16" || AliasName == "vrhaddq";
case ARM::BI__builtin_arm_mve_vrhaddq_u32:
  return AliasName == "vrhaddq_u32" || AliasName == "vrhaddq";
case ARM::BI__builtin_arm_mve_vrhaddq_u8:
  return AliasName == "vrhaddq_u8" || AliasName == "vrhaddq";
case ARM::BI__builtin_arm_mve_vrhaddq_x_s16:
  return AliasName == "vrhaddq_x_s16" || AliasName == "vrhaddq_x";
case ARM::BI__builtin_arm_mve_vrhaddq_x_s32:
  return AliasName == "vrhaddq_x_s32" || AliasName == "vrhaddq_x";
case ARM::BI__builtin_arm_mve_vrhaddq_x_s8:
  return AliasName == "vrhaddq_x_s8" || AliasName == "vrhaddq_x";
case ARM::BI__builtin_arm_mve_vrhaddq_x_u16:
  return AliasName == "vrhaddq_x_u16" || AliasName == "vrhaddq_x";
case ARM::BI__builtin_arm_mve_vrhaddq_x_u32:
  return AliasName == "vrhaddq_x_u32" || AliasName == "vrhaddq_x";
case ARM::BI__builtin_arm_mve_vrhaddq_x_u8:
  return AliasName == "vrhaddq_x_u8" || AliasName == "vrhaddq_x";
case ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_s32:
  return AliasName == "vrmlaldavhaq_p_s32" || AliasName == "vrmlaldavhaq_p";
case ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_u32:
  return AliasName == "vrmlaldavhaq_p_u32" || AliasName == "vrmlaldavhaq_p";
case ARM::BI__builtin_arm_mve_vrmlaldavhaq_s32:
  return AliasName == "vrmlaldavhaq_s32" || AliasName == "vrmlaldavhaq";
case ARM::BI__builtin_arm_mve_vrmlaldavhaq_u32:
  return AliasName == "vrmlaldavhaq_u32" || AliasName == "vrmlaldavhaq";
case ARM::BI__builtin_arm_mve_vrmlaldavhaxq_p_s32:
  return AliasName == "vrmlaldavhaxq_p_s32" || AliasName == "vrmlaldavhaxq_p";
case ARM::BI__builtin_arm_mve_vrmlaldavhaxq_s32:
  return AliasName == "vrmlaldavhaxq_s32" || AliasName == "vrmlaldavhaxq";
case ARM::BI__builtin_arm_mve_vrmlaldavhq_p_s32:
  return AliasName == "vrmlaldavhq_p_s32" || AliasName == "vrmlaldavhq_p";
case ARM::BI__builtin_arm_mve_vrmlaldavhq_p_u32:
  return AliasName == "vrmlaldavhq_p_u32" || AliasName == "vrmlaldavhq_p";
case ARM::BI__builtin_arm_mve_vrmlaldavhq_s32:
  return AliasName == "vrmlaldavhq_s32" || AliasName == "vrmlaldavhq";
case ARM::BI__builtin_arm_mve_vrmlaldavhq_u32:
  return AliasName == "vrmlaldavhq_u32" || AliasName == "vrmlaldavhq";
case ARM::BI__builtin_arm_mve_vrmlaldavhxq_p_s32:
  return AliasName == "vrmlaldavhxq_p_s32" || AliasName == "vrmlaldavhxq_p";
case ARM::BI__builtin_arm_mve_vrmlaldavhxq_s32:
  return AliasName == "vrmlaldavhxq_s32" || AliasName == "vrmlaldavhxq";
case ARM::BI__builtin_arm_mve_vrmlsldavhaq_p_s32:
  return AliasName == "vrmlsldavhaq_p_s32" || AliasName == "vrmlsldavhaq_p";
case ARM::BI__builtin_arm_mve_vrmlsldavhaq_s32:
  return AliasName == "vrmlsldavhaq_s32" || AliasName == "vrmlsldavhaq";
case ARM::BI__builtin_arm_mve_vrmlsldavhaxq_p_s32:
  return AliasName == "vrmlsldavhaxq_p_s32" || AliasName == "vrmlsldavhaxq_p";
case ARM::BI__builtin_arm_mve_vrmlsldavhaxq_s32:
  return AliasName == "vrmlsldavhaxq_s32" || AliasName == "vrmlsldavhaxq";
case ARM::BI__builtin_arm_mve_vrmlsldavhq_p_s32:
  return AliasName == "vrmlsldavhq_p_s32" || AliasName == "vrmlsldavhq_p";
case ARM::BI__builtin_arm_mve_vrmlsldavhq_s32:
  return AliasName == "vrmlsldavhq_s32" || AliasName == "vrmlsldavhq";
case ARM::BI__builtin_arm_mve_vrmlsldavhxq_p_s32:
  return AliasName == "vrmlsldavhxq_p_s32" || AliasName == "vrmlsldavhxq_p";
case ARM::BI__builtin_arm_mve_vrmlsldavhxq_s32:
  return AliasName == "vrmlsldavhxq_s32" || AliasName == "vrmlsldavhxq";
case ARM::BI__builtin_arm_mve_vrmulhq_m_s16:
  return AliasName == "vrmulhq_m_s16" || AliasName == "vrmulhq_m";
case ARM::BI__builtin_arm_mve_vrmulhq_m_s32:
  return AliasName == "vrmulhq_m_s32" || AliasName == "vrmulhq_m";
case ARM::BI__builtin_arm_mve_vrmulhq_m_s8:
  return AliasName == "vrmulhq_m_s8" || AliasName == "vrmulhq_m";
case ARM::BI__builtin_arm_mve_vrmulhq_m_u16:
  return AliasName == "vrmulhq_m_u16" || AliasName == "vrmulhq_m";
case ARM::BI__builtin_arm_mve_vrmulhq_m_u32:
  return AliasName == "vrmulhq_m_u32" || AliasName == "vrmulhq_m";
case ARM::BI__builtin_arm_mve_vrmulhq_m_u8:
  return AliasName == "vrmulhq_m_u8" || AliasName == "vrmulhq_m";
case ARM::BI__builtin_arm_mve_vrmulhq_s16:
  return AliasName == "vrmulhq_s16" || AliasName == "vrmulhq";
case ARM::BI__builtin_arm_mve_vrmulhq_s32:
  return AliasName == "vrmulhq_s32" || AliasName == "vrmulhq";
case ARM::BI__builtin_arm_mve_vrmulhq_s8:
  return AliasName == "vrmulhq_s8" || AliasName == "vrmulhq";
case ARM::BI__builtin_arm_mve_vrmulhq_u16:
  return AliasName == "vrmulhq_u16" || AliasName == "vrmulhq";
case ARM::BI__builtin_arm_mve_vrmulhq_u32:
  return AliasName == "vrmulhq_u32" || AliasName == "vrmulhq";
case ARM::BI__builtin_arm_mve_vrmulhq_u8:
  return AliasName == "vrmulhq_u8" || AliasName == "vrmulhq";
case ARM::BI__builtin_arm_mve_vrmulhq_x_s16:
  return AliasName == "vrmulhq_x_s16" || AliasName == "vrmulhq_x";
case ARM::BI__builtin_arm_mve_vrmulhq_x_s32:
  return AliasName == "vrmulhq_x_s32" || AliasName == "vrmulhq_x";
case ARM::BI__builtin_arm_mve_vrmulhq_x_s8:
  return AliasName == "vrmulhq_x_s8" || AliasName == "vrmulhq_x";
case ARM::BI__builtin_arm_mve_vrmulhq_x_u16:
  return AliasName == "vrmulhq_x_u16" || AliasName == "vrmulhq_x";
case ARM::BI__builtin_arm_mve_vrmulhq_x_u32:
  return AliasName == "vrmulhq_x_u32" || AliasName == "vrmulhq_x";
case ARM::BI__builtin_arm_mve_vrmulhq_x_u8:
  return AliasName == "vrmulhq_x_u8" || AliasName == "vrmulhq_x";
case ARM::BI__builtin_arm_mve_vrshlq_m_n_s16:
  return AliasName == "vrshlq_m_n_s16" || AliasName == "vrshlq_m_n";
case ARM::BI__builtin_arm_mve_vrshlq_m_n_s32:
  return AliasName == "vrshlq_m_n_s32" || AliasName == "vrshlq_m_n";
case ARM::BI__builtin_arm_mve_vrshlq_m_n_s8:
  return AliasName == "vrshlq_m_n_s8" || AliasName == "vrshlq_m_n";
case ARM::BI__builtin_arm_mve_vrshlq_m_n_u16:
  return AliasName == "vrshlq_m_n_u16" || AliasName == "vrshlq_m_n";
case ARM::BI__builtin_arm_mve_vrshlq_m_n_u32:
  return AliasName == "vrshlq_m_n_u32" || AliasName == "vrshlq_m_n";
case ARM::BI__builtin_arm_mve_vrshlq_m_n_u8:
  return AliasName == "vrshlq_m_n_u8" || AliasName == "vrshlq_m_n";
case ARM::BI__builtin_arm_mve_vrshlq_m_s16:
  return AliasName == "vrshlq_m_s16" || AliasName == "vrshlq_m";
case ARM::BI__builtin_arm_mve_vrshlq_m_s32:
  return AliasName == "vrshlq_m_s32" || AliasName == "vrshlq_m";
case ARM::BI__builtin_arm_mve_vrshlq_m_s8:
  return AliasName == "vrshlq_m_s8" || AliasName == "vrshlq_m";
case ARM::BI__builtin_arm_mve_vrshlq_m_u16:
  return AliasName == "vrshlq_m_u16" || AliasName == "vrshlq_m";
case ARM::BI__builtin_arm_mve_vrshlq_m_u32:
  return AliasName == "vrshlq_m_u32" || AliasName == "vrshlq_m";
case ARM::BI__builtin_arm_mve_vrshlq_m_u8:
  return AliasName == "vrshlq_m_u8" || AliasName == "vrshlq_m";
case ARM::BI__builtin_arm_mve_vrshlq_n_s16:
  return AliasName == "vrshlq_n_s16" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_n_s32:
  return AliasName == "vrshlq_n_s32" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_n_s8:
  return AliasName == "vrshlq_n_s8" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_n_u16:
  return AliasName == "vrshlq_n_u16" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_n_u32:
  return AliasName == "vrshlq_n_u32" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_n_u8:
  return AliasName == "vrshlq_n_u8" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_s16:
  return AliasName == "vrshlq_s16" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_s32:
  return AliasName == "vrshlq_s32" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_s8:
  return AliasName == "vrshlq_s8" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_u16:
  return AliasName == "vrshlq_u16" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_u32:
  return AliasName == "vrshlq_u32" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_u8:
  return AliasName == "vrshlq_u8" || AliasName == "vrshlq";
case ARM::BI__builtin_arm_mve_vrshlq_x_s16:
  return AliasName == "vrshlq_x_s16" || AliasName == "vrshlq_x";
case ARM::BI__builtin_arm_mve_vrshlq_x_s32:
  return AliasName == "vrshlq_x_s32" || AliasName == "vrshlq_x";
case ARM::BI__builtin_arm_mve_vrshlq_x_s8:
  return AliasName == "vrshlq_x_s8" || AliasName == "vrshlq_x";
case ARM::BI__builtin_arm_mve_vrshlq_x_u16:
  return AliasName == "vrshlq_x_u16" || AliasName == "vrshlq_x";
case ARM::BI__builtin_arm_mve_vrshlq_x_u32:
  return AliasName == "vrshlq_x_u32" || AliasName == "vrshlq_x";
case ARM::BI__builtin_arm_mve_vrshlq_x_u8:
  return AliasName == "vrshlq_x_u8" || AliasName == "vrshlq_x";
case ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s16:
  return AliasName == "vrshrnbq_m_n_s16" || AliasName == "vrshrnbq_m";
case ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s32:
  return AliasName == "vrshrnbq_m_n_s32" || AliasName == "vrshrnbq_m";
case ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u16:
  return AliasName == "vrshrnbq_m_n_u16" || AliasName == "vrshrnbq_m";
case ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u32:
  return AliasName == "vrshrnbq_m_n_u32" || AliasName == "vrshrnbq_m";
case ARM::BI__builtin_arm_mve_vrshrnbq_n_s16:
  return AliasName == "vrshrnbq_n_s16" || AliasName == "vrshrnbq";
case ARM::BI__builtin_arm_mve_vrshrnbq_n_s32:
  return AliasName == "vrshrnbq_n_s32" || AliasName == "vrshrnbq";
case ARM::BI__builtin_arm_mve_vrshrnbq_n_u16:
  return AliasName == "vrshrnbq_n_u16" || AliasName == "vrshrnbq";
case ARM::BI__builtin_arm_mve_vrshrnbq_n_u32:
  return AliasName == "vrshrnbq_n_u32" || AliasName == "vrshrnbq";
case ARM::BI__builtin_arm_mve_vrshrntq_m_n_s16:
  return AliasName == "vrshrntq_m_n_s16" || AliasName == "vrshrntq_m";
case ARM::BI__builtin_arm_mve_vrshrntq_m_n_s32:
  return AliasName == "vrshrntq_m_n_s32" || AliasName == "vrshrntq_m";
case ARM::BI__builtin_arm_mve_vrshrntq_m_n_u16:
  return AliasName == "vrshrntq_m_n_u16" || AliasName == "vrshrntq_m";
case ARM::BI__builtin_arm_mve_vrshrntq_m_n_u32:
  return AliasName == "vrshrntq_m_n_u32" || AliasName == "vrshrntq_m";
case ARM::BI__builtin_arm_mve_vrshrntq_n_s16:
  return AliasName == "vrshrntq_n_s16" || AliasName == "vrshrntq";
case ARM::BI__builtin_arm_mve_vrshrntq_n_s32:
  return AliasName == "vrshrntq_n_s32" || AliasName == "vrshrntq";
case ARM::BI__builtin_arm_mve_vrshrntq_n_u16:
  return AliasName == "vrshrntq_n_u16" || AliasName == "vrshrntq";
case ARM::BI__builtin_arm_mve_vrshrntq_n_u32:
  return AliasName == "vrshrntq_n_u32" || AliasName == "vrshrntq";
case ARM::BI__builtin_arm_mve_vrshrq_m_n_s16:
  return AliasName == "vrshrq_m_n_s16" || AliasName == "vrshrq_m";
case ARM::BI__builtin_arm_mve_vrshrq_m_n_s32:
  return AliasName == "vrshrq_m_n_s32" || AliasName == "vrshrq_m";
case ARM::BI__builtin_arm_mve_vrshrq_m_n_s8:
  return AliasName == "vrshrq_m_n_s8" || AliasName == "vrshrq_m";
case ARM::BI__builtin_arm_mve_vrshrq_m_n_u16:
  return AliasName == "vrshrq_m_n_u16" || AliasName == "vrshrq_m";
case ARM::BI__builtin_arm_mve_vrshrq_m_n_u32:
  return AliasName == "vrshrq_m_n_u32" || AliasName == "vrshrq_m";
case ARM::BI__builtin_arm_mve_vrshrq_m_n_u8:
  return AliasName == "vrshrq_m_n_u8" || AliasName == "vrshrq_m";
case ARM::BI__builtin_arm_mve_vrshrq_n_s16:
  return AliasName == "vrshrq_n_s16" || AliasName == "vrshrq";
case ARM::BI__builtin_arm_mve_vrshrq_n_s32:
  return AliasName == "vrshrq_n_s32" || AliasName == "vrshrq";
case ARM::BI__builtin_arm_mve_vrshrq_n_s8:
  return AliasName == "vrshrq_n_s8" || AliasName == "vrshrq";
case ARM::BI__builtin_arm_mve_vrshrq_n_u16:
  return AliasName == "vrshrq_n_u16" || AliasName == "vrshrq";
case ARM::BI__builtin_arm_mve_vrshrq_n_u32:
  return AliasName == "vrshrq_n_u32" || AliasName == "vrshrq";
case ARM::BI__builtin_arm_mve_vrshrq_n_u8:
  return AliasName == "vrshrq_n_u8" || AliasName == "vrshrq";
case ARM::BI__builtin_arm_mve_vrshrq_x_n_s16:
  return AliasName == "vrshrq_x_n_s16" || AliasName == "vrshrq_x";
case ARM::BI__builtin_arm_mve_vrshrq_x_n_s32:
  return AliasName == "vrshrq_x_n_s32" || AliasName == "vrshrq_x";
case ARM::BI__builtin_arm_mve_vrshrq_x_n_s8:
  return AliasName == "vrshrq_x_n_s8" || AliasName == "vrshrq_x";
case ARM::BI__builtin_arm_mve_vrshrq_x_n_u16:
  return AliasName == "vrshrq_x_n_u16" || AliasName == "vrshrq_x";
case ARM::BI__builtin_arm_mve_vrshrq_x_n_u32:
  return AliasName == "vrshrq_x_n_u32" || AliasName == "vrshrq_x";
case ARM::BI__builtin_arm_mve_vrshrq_x_n_u8:
  return AliasName == "vrshrq_x_n_u8" || AliasName == "vrshrq_x";
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
case ARM::BI__builtin_arm_mve_vshllbq_m_n_s16:
  return AliasName == "vshllbq_m_n_s16" || AliasName == "vshllbq_m";
case ARM::BI__builtin_arm_mve_vshllbq_m_n_s8:
  return AliasName == "vshllbq_m_n_s8" || AliasName == "vshllbq_m";
case ARM::BI__builtin_arm_mve_vshllbq_m_n_u16:
  return AliasName == "vshllbq_m_n_u16" || AliasName == "vshllbq_m";
case ARM::BI__builtin_arm_mve_vshllbq_m_n_u8:
  return AliasName == "vshllbq_m_n_u8" || AliasName == "vshllbq_m";
case ARM::BI__builtin_arm_mve_vshllbq_n_s16:
  return AliasName == "vshllbq_n_s16" || AliasName == "vshllbq";
case ARM::BI__builtin_arm_mve_vshllbq_n_s8:
  return AliasName == "vshllbq_n_s8" || AliasName == "vshllbq";
case ARM::BI__builtin_arm_mve_vshllbq_n_u16:
  return AliasName == "vshllbq_n_u16" || AliasName == "vshllbq";
case ARM::BI__builtin_arm_mve_vshllbq_n_u8:
  return AliasName == "vshllbq_n_u8" || AliasName == "vshllbq";
case ARM::BI__builtin_arm_mve_vshllbq_x_n_s16:
  return AliasName == "vshllbq_x_n_s16" || AliasName == "vshllbq_x";
case ARM::BI__builtin_arm_mve_vshllbq_x_n_s8:
  return AliasName == "vshllbq_x_n_s8" || AliasName == "vshllbq_x";
case ARM::BI__builtin_arm_mve_vshllbq_x_n_u16:
  return AliasName == "vshllbq_x_n_u16" || AliasName == "vshllbq_x";
case ARM::BI__builtin_arm_mve_vshllbq_x_n_u8:
  return AliasName == "vshllbq_x_n_u8" || AliasName == "vshllbq_x";
case ARM::BI__builtin_arm_mve_vshlltq_m_n_s16:
  return AliasName == "vshlltq_m_n_s16" || AliasName == "vshlltq_m";
case ARM::BI__builtin_arm_mve_vshlltq_m_n_s8:
  return AliasName == "vshlltq_m_n_s8" || AliasName == "vshlltq_m";
case ARM::BI__builtin_arm_mve_vshlltq_m_n_u16:
  return AliasName == "vshlltq_m_n_u16" || AliasName == "vshlltq_m";
case ARM::BI__builtin_arm_mve_vshlltq_m_n_u8:
  return AliasName == "vshlltq_m_n_u8" || AliasName == "vshlltq_m";
case ARM::BI__builtin_arm_mve_vshlltq_n_s16:
  return AliasName == "vshlltq_n_s16" || AliasName == "vshlltq";
case ARM::BI__builtin_arm_mve_vshlltq_n_s8:
  return AliasName == "vshlltq_n_s8" || AliasName == "vshlltq";
case ARM::BI__builtin_arm_mve_vshlltq_n_u16:
  return AliasName == "vshlltq_n_u16" || AliasName == "vshlltq";
case ARM::BI__builtin_arm_mve_vshlltq_n_u8:
  return AliasName == "vshlltq_n_u8" || AliasName == "vshlltq";
case ARM::BI__builtin_arm_mve_vshlltq_x_n_s16:
  return AliasName == "vshlltq_x_n_s16" || AliasName == "vshlltq_x";
case ARM::BI__builtin_arm_mve_vshlltq_x_n_s8:
  return AliasName == "vshlltq_x_n_s8" || AliasName == "vshlltq_x";
case ARM::BI__builtin_arm_mve_vshlltq_x_n_u16:
  return AliasName == "vshlltq_x_n_u16" || AliasName == "vshlltq_x";
case ARM::BI__builtin_arm_mve_vshlltq_x_n_u8:
  return AliasName == "vshlltq_x_n_u8" || AliasName == "vshlltq_x";
case ARM::BI__builtin_arm_mve_vshlq_m_n_s16:
  return AliasName == "vshlq_m_n_s16" || AliasName == "vshlq_m_n";
case ARM::BI__builtin_arm_mve_vshlq_m_n_s32:
  return AliasName == "vshlq_m_n_s32" || AliasName == "vshlq_m_n";
case ARM::BI__builtin_arm_mve_vshlq_m_n_s8:
  return AliasName == "vshlq_m_n_s8" || AliasName == "vshlq_m_n";
case ARM::BI__builtin_arm_mve_vshlq_m_n_u16:
  return AliasName == "vshlq_m_n_u16" || AliasName == "vshlq_m_n";
case ARM::BI__builtin_arm_mve_vshlq_m_n_u32:
  return AliasName == "vshlq_m_n_u32" || AliasName == "vshlq_m_n";
case ARM::BI__builtin_arm_mve_vshlq_m_n_u8:
  return AliasName == "vshlq_m_n_u8" || AliasName == "vshlq_m_n";
case ARM::BI__builtin_arm_mve_vshlq_m_r_s16:
  return AliasName == "vshlq_m_r_s16" || AliasName == "vshlq_m_r";
case ARM::BI__builtin_arm_mve_vshlq_m_r_s32:
  return AliasName == "vshlq_m_r_s32" || AliasName == "vshlq_m_r";
case ARM::BI__builtin_arm_mve_vshlq_m_r_s8:
  return AliasName == "vshlq_m_r_s8" || AliasName == "vshlq_m_r";
case ARM::BI__builtin_arm_mve_vshlq_m_r_u16:
  return AliasName == "vshlq_m_r_u16" || AliasName == "vshlq_m_r";
case ARM::BI__builtin_arm_mve_vshlq_m_r_u32:
  return AliasName == "vshlq_m_r_u32" || AliasName == "vshlq_m_r";
case ARM::BI__builtin_arm_mve_vshlq_m_r_u8:
  return AliasName == "vshlq_m_r_u8" || AliasName == "vshlq_m_r";
case ARM::BI__builtin_arm_mve_vshlq_m_s16:
  return AliasName == "vshlq_m_s16" || AliasName == "vshlq_m";
case ARM::BI__builtin_arm_mve_vshlq_m_s32:
  return AliasName == "vshlq_m_s32" || AliasName == "vshlq_m";
case ARM::BI__builtin_arm_mve_vshlq_m_s8:
  return AliasName == "vshlq_m_s8" || AliasName == "vshlq_m";
case ARM::BI__builtin_arm_mve_vshlq_m_u16:
  return AliasName == "vshlq_m_u16" || AliasName == "vshlq_m";
case ARM::BI__builtin_arm_mve_vshlq_m_u32:
  return AliasName == "vshlq_m_u32" || AliasName == "vshlq_m";
case ARM::BI__builtin_arm_mve_vshlq_m_u8:
  return AliasName == "vshlq_m_u8" || AliasName == "vshlq_m";
case ARM::BI__builtin_arm_mve_vshlq_n_s16:
  return AliasName == "vshlq_n_s16" || AliasName == "vshlq_n";
case ARM::BI__builtin_arm_mve_vshlq_n_s32:
  return AliasName == "vshlq_n_s32" || AliasName == "vshlq_n";
case ARM::BI__builtin_arm_mve_vshlq_n_s8:
  return AliasName == "vshlq_n_s8" || AliasName == "vshlq_n";
case ARM::BI__builtin_arm_mve_vshlq_n_u16:
  return AliasName == "vshlq_n_u16" || AliasName == "vshlq_n";
case ARM::BI__builtin_arm_mve_vshlq_n_u32:
  return AliasName == "vshlq_n_u32" || AliasName == "vshlq_n";
case ARM::BI__builtin_arm_mve_vshlq_n_u8:
  return AliasName == "vshlq_n_u8" || AliasName == "vshlq_n";
case ARM::BI__builtin_arm_mve_vshlq_r_s16:
  return AliasName == "vshlq_r_s16" || AliasName == "vshlq_r";
case ARM::BI__builtin_arm_mve_vshlq_r_s32:
  return AliasName == "vshlq_r_s32" || AliasName == "vshlq_r";
case ARM::BI__builtin_arm_mve_vshlq_r_s8:
  return AliasName == "vshlq_r_s8" || AliasName == "vshlq_r";
case ARM::BI__builtin_arm_mve_vshlq_r_u16:
  return AliasName == "vshlq_r_u16" || AliasName == "vshlq_r";
case ARM::BI__builtin_arm_mve_vshlq_r_u32:
  return AliasName == "vshlq_r_u32" || AliasName == "vshlq_r";
case ARM::BI__builtin_arm_mve_vshlq_r_u8:
  return AliasName == "vshlq_r_u8" || AliasName == "vshlq_r";
case ARM::BI__builtin_arm_mve_vshlq_s16:
  return AliasName == "vshlq_s16" || AliasName == "vshlq";
case ARM::BI__builtin_arm_mve_vshlq_s32:
  return AliasName == "vshlq_s32" || AliasName == "vshlq";
case ARM::BI__builtin_arm_mve_vshlq_s8:
  return AliasName == "vshlq_s8" || AliasName == "vshlq";
case ARM::BI__builtin_arm_mve_vshlq_u16:
  return AliasName == "vshlq_u16" || AliasName == "vshlq";
case ARM::BI__builtin_arm_mve_vshlq_u32:
  return AliasName == "vshlq_u32" || AliasName == "vshlq";
case ARM::BI__builtin_arm_mve_vshlq_u8:
  return AliasName == "vshlq_u8" || AliasName == "vshlq";
case ARM::BI__builtin_arm_mve_vshlq_x_n_s16:
  return AliasName == "vshlq_x_n_s16" || AliasName == "vshlq_x_n";
case ARM::BI__builtin_arm_mve_vshlq_x_n_s32:
  return AliasName == "vshlq_x_n_s32" || AliasName == "vshlq_x_n";
case ARM::BI__builtin_arm_mve_vshlq_x_n_s8:
  return AliasName == "vshlq_x_n_s8" || AliasName == "vshlq_x_n";
case ARM::BI__builtin_arm_mve_vshlq_x_n_u16:
  return AliasName == "vshlq_x_n_u16" || AliasName == "vshlq_x_n";
case ARM::BI__builtin_arm_mve_vshlq_x_n_u32:
  return AliasName == "vshlq_x_n_u32" || AliasName == "vshlq_x_n";
case ARM::BI__builtin_arm_mve_vshlq_x_n_u8:
  return AliasName == "vshlq_x_n_u8" || AliasName == "vshlq_x_n";
case ARM::BI__builtin_arm_mve_vshlq_x_s16:
  return AliasName == "vshlq_x_s16" || AliasName == "vshlq_x";
case ARM::BI__builtin_arm_mve_vshlq_x_s32:
  return AliasName == "vshlq_x_s32" || AliasName == "vshlq_x";
case ARM::BI__builtin_arm_mve_vshlq_x_s8:
  return AliasName == "vshlq_x_s8" || AliasName == "vshlq_x";
case ARM::BI__builtin_arm_mve_vshlq_x_u16:
  return AliasName == "vshlq_x_u16" || AliasName == "vshlq_x";
case ARM::BI__builtin_arm_mve_vshlq_x_u32:
  return AliasName == "vshlq_x_u32" || AliasName == "vshlq_x";
case ARM::BI__builtin_arm_mve_vshlq_x_u8:
  return AliasName == "vshlq_x_u8" || AliasName == "vshlq_x";
case ARM::BI__builtin_arm_mve_vshrnbq_m_n_s16:
  return AliasName == "vshrnbq_m_n_s16" || AliasName == "vshrnbq_m";
case ARM::BI__builtin_arm_mve_vshrnbq_m_n_s32:
  return AliasName == "vshrnbq_m_n_s32" || AliasName == "vshrnbq_m";
case ARM::BI__builtin_arm_mve_vshrnbq_m_n_u16:
  return AliasName == "vshrnbq_m_n_u16" || AliasName == "vshrnbq_m";
case ARM::BI__builtin_arm_mve_vshrnbq_m_n_u32:
  return AliasName == "vshrnbq_m_n_u32" || AliasName == "vshrnbq_m";
case ARM::BI__builtin_arm_mve_vshrnbq_n_s16:
  return AliasName == "vshrnbq_n_s16" || AliasName == "vshrnbq";
case ARM::BI__builtin_arm_mve_vshrnbq_n_s32:
  return AliasName == "vshrnbq_n_s32" || AliasName == "vshrnbq";
case ARM::BI__builtin_arm_mve_vshrnbq_n_u16:
  return AliasName == "vshrnbq_n_u16" || AliasName == "vshrnbq";
case ARM::BI__builtin_arm_mve_vshrnbq_n_u32:
  return AliasName == "vshrnbq_n_u32" || AliasName == "vshrnbq";
case ARM::BI__builtin_arm_mve_vshrntq_m_n_s16:
  return AliasName == "vshrntq_m_n_s16" || AliasName == "vshrntq_m";
case ARM::BI__builtin_arm_mve_vshrntq_m_n_s32:
  return AliasName == "vshrntq_m_n_s32" || AliasName == "vshrntq_m";
case ARM::BI__builtin_arm_mve_vshrntq_m_n_u16:
  return AliasName == "vshrntq_m_n_u16" || AliasName == "vshrntq_m";
case ARM::BI__builtin_arm_mve_vshrntq_m_n_u32:
  return AliasName == "vshrntq_m_n_u32" || AliasName == "vshrntq_m";
case ARM::BI__builtin_arm_mve_vshrntq_n_s16:
  return AliasName == "vshrntq_n_s16" || AliasName == "vshrntq";
case ARM::BI__builtin_arm_mve_vshrntq_n_s32:
  return AliasName == "vshrntq_n_s32" || AliasName == "vshrntq";
case ARM::BI__builtin_arm_mve_vshrntq_n_u16:
  return AliasName == "vshrntq_n_u16" || AliasName == "vshrntq";
case ARM::BI__builtin_arm_mve_vshrntq_n_u32:
  return AliasName == "vshrntq_n_u32" || AliasName == "vshrntq";
case ARM::BI__builtin_arm_mve_vshrq_m_n_s16:
  return AliasName == "vshrq_m_n_s16" || AliasName == "vshrq_m";
case ARM::BI__builtin_arm_mve_vshrq_m_n_s32:
  return AliasName == "vshrq_m_n_s32" || AliasName == "vshrq_m";
case ARM::BI__builtin_arm_mve_vshrq_m_n_s8:
  return AliasName == "vshrq_m_n_s8" || AliasName == "vshrq_m";
case ARM::BI__builtin_arm_mve_vshrq_m_n_u16:
  return AliasName == "vshrq_m_n_u16" || AliasName == "vshrq_m";
case ARM::BI__builtin_arm_mve_vshrq_m_n_u32:
  return AliasName == "vshrq_m_n_u32" || AliasName == "vshrq_m";
case ARM::BI__builtin_arm_mve_vshrq_m_n_u8:
  return AliasName == "vshrq_m_n_u8" || AliasName == "vshrq_m";
case ARM::BI__builtin_arm_mve_vshrq_n_s16:
  return AliasName == "vshrq_n_s16" || AliasName == "vshrq";
case ARM::BI__builtin_arm_mve_vshrq_n_s32:
  return AliasName == "vshrq_n_s32" || AliasName == "vshrq";
case ARM::BI__builtin_arm_mve_vshrq_n_s8:
  return AliasName == "vshrq_n_s8" || AliasName == "vshrq";
case ARM::BI__builtin_arm_mve_vshrq_n_u16:
  return AliasName == "vshrq_n_u16" || AliasName == "vshrq";
case ARM::BI__builtin_arm_mve_vshrq_n_u32:
  return AliasName == "vshrq_n_u32" || AliasName == "vshrq";
case ARM::BI__builtin_arm_mve_vshrq_n_u8:
  return AliasName == "vshrq_n_u8" || AliasName == "vshrq";
case ARM::BI__builtin_arm_mve_vshrq_x_n_s16:
  return AliasName == "vshrq_x_n_s16" || AliasName == "vshrq_x";
case ARM::BI__builtin_arm_mve_vshrq_x_n_s32:
  return AliasName == "vshrq_x_n_s32" || AliasName == "vshrq_x";
case ARM::BI__builtin_arm_mve_vshrq_x_n_s8:
  return AliasName == "vshrq_x_n_s8" || AliasName == "vshrq_x";
case ARM::BI__builtin_arm_mve_vshrq_x_n_u16:
  return AliasName == "vshrq_x_n_u16" || AliasName == "vshrq_x";
case ARM::BI__builtin_arm_mve_vshrq_x_n_u32:
  return AliasName == "vshrq_x_n_u32" || AliasName == "vshrq_x";
case ARM::BI__builtin_arm_mve_vshrq_x_n_u8:
  return AliasName == "vshrq_x_n_u8" || AliasName == "vshrq_x";
case ARM::BI__builtin_arm_mve_vsliq_m_n_s16:
  return AliasName == "vsliq_m_n_s16" || AliasName == "vsliq_m";
case ARM::BI__builtin_arm_mve_vsliq_m_n_s32:
  return AliasName == "vsliq_m_n_s32" || AliasName == "vsliq_m";
case ARM::BI__builtin_arm_mve_vsliq_m_n_s8:
  return AliasName == "vsliq_m_n_s8" || AliasName == "vsliq_m";
case ARM::BI__builtin_arm_mve_vsliq_m_n_u16:
  return AliasName == "vsliq_m_n_u16" || AliasName == "vsliq_m";
case ARM::BI__builtin_arm_mve_vsliq_m_n_u32:
  return AliasName == "vsliq_m_n_u32" || AliasName == "vsliq_m";
case ARM::BI__builtin_arm_mve_vsliq_m_n_u8:
  return AliasName == "vsliq_m_n_u8" || AliasName == "vsliq_m";
case ARM::BI__builtin_arm_mve_vsliq_n_s16:
  return AliasName == "vsliq_n_s16" || AliasName == "vsliq";
case ARM::BI__builtin_arm_mve_vsliq_n_s32:
  return AliasName == "vsliq_n_s32" || AliasName == "vsliq";
case ARM::BI__builtin_arm_mve_vsliq_n_s8:
  return AliasName == "vsliq_n_s8" || AliasName == "vsliq";
case ARM::BI__builtin_arm_mve_vsliq_n_u16:
  return AliasName == "vsliq_n_u16" || AliasName == "vsliq";
case ARM::BI__builtin_arm_mve_vsliq_n_u32:
  return AliasName == "vsliq_n_u32" || AliasName == "vsliq";
case ARM::BI__builtin_arm_mve_vsliq_n_u8:
  return AliasName == "vsliq_n_u8" || AliasName == "vsliq";
case ARM::BI__builtin_arm_mve_vsriq_m_n_s16:
  return AliasName == "vsriq_m_n_s16" || AliasName == "vsriq_m";
case ARM::BI__builtin_arm_mve_vsriq_m_n_s32:
  return AliasName == "vsriq_m_n_s32" || AliasName == "vsriq_m";
case ARM::BI__builtin_arm_mve_vsriq_m_n_s8:
  return AliasName == "vsriq_m_n_s8" || AliasName == "vsriq_m";
case ARM::BI__builtin_arm_mve_vsriq_m_n_u16:
  return AliasName == "vsriq_m_n_u16" || AliasName == "vsriq_m";
case ARM::BI__builtin_arm_mve_vsriq_m_n_u32:
  return AliasName == "vsriq_m_n_u32" || AliasName == "vsriq_m";
case ARM::BI__builtin_arm_mve_vsriq_m_n_u8:
  return AliasName == "vsriq_m_n_u8" || AliasName == "vsriq_m";
case ARM::BI__builtin_arm_mve_vsriq_n_s16:
  return AliasName == "vsriq_n_s16" || AliasName == "vsriq";
case ARM::BI__builtin_arm_mve_vsriq_n_s32:
  return AliasName == "vsriq_n_s32" || AliasName == "vsriq";
case ARM::BI__builtin_arm_mve_vsriq_n_s8:
  return AliasName == "vsriq_n_s8" || AliasName == "vsriq";
case ARM::BI__builtin_arm_mve_vsriq_n_u16:
  return AliasName == "vsriq_n_u16" || AliasName == "vsriq";
case ARM::BI__builtin_arm_mve_vsriq_n_u32:
  return AliasName == "vsriq_n_u32" || AliasName == "vsriq";
case ARM::BI__builtin_arm_mve_vsriq_n_u8:
  return AliasName == "vsriq_n_u8" || AliasName == "vsriq";
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
case ARM::BI__builtin_arm_mve_vsubq_x_f16:
  return AliasName == "vsubq_x_f16" || AliasName == "vsubq_x";
case ARM::BI__builtin_arm_mve_vsubq_x_f32:
  return AliasName == "vsubq_x_f32" || AliasName == "vsubq_x";
case ARM::BI__builtin_arm_mve_vsubq_x_s16:
  return AliasName == "vsubq_x_s16" || AliasName == "vsubq_x";
case ARM::BI__builtin_arm_mve_vsubq_x_s32:
  return AliasName == "vsubq_x_s32" || AliasName == "vsubq_x";
case ARM::BI__builtin_arm_mve_vsubq_x_s8:
  return AliasName == "vsubq_x_s8" || AliasName == "vsubq_x";
case ARM::BI__builtin_arm_mve_vsubq_x_u16:
  return AliasName == "vsubq_x_u16" || AliasName == "vsubq_x";
case ARM::BI__builtin_arm_mve_vsubq_x_u32:
  return AliasName == "vsubq_x_u32" || AliasName == "vsubq_x";
case ARM::BI__builtin_arm_mve_vsubq_x_u8:
  return AliasName == "vsubq_x_u8" || AliasName == "vsubq_x";
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
