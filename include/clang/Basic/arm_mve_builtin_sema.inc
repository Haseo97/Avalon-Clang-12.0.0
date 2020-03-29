case ARM::BI__builtin_arm_mve_vgetq_lane_s64:
case ARM::BI__builtin_arm_mve_vgetq_lane_u64:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x1);
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_u32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_u32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_u32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_f32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_f32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_s32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_u32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_s32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_u32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_f32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_s32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_u32:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x1FC) ||
         SemaBuiltinConstantArgMultiple(TheCall, 1, 4);
case ARM::BI__builtin_arm_mve_vgetq_lane_f32:
case ARM::BI__builtin_arm_mve_vgetq_lane_s32:
case ARM::BI__builtin_arm_mve_vgetq_lane_u32:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x3);
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_u64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_u64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_u64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_s64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_u64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_s64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_u64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_s64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_u64:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x3F8) ||
         SemaBuiltinConstantArgMultiple(TheCall, 1, 8);
case ARM::BI__builtin_arm_mve_vgetq_lane_f16:
case ARM::BI__builtin_arm_mve_vgetq_lane_s16:
case ARM::BI__builtin_arm_mve_vgetq_lane_u16:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x7);
case ARM::BI__builtin_arm_mve_vgetq_lane_s8:
case ARM::BI__builtin_arm_mve_vgetq_lane_u8:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0xF);
case ARM::BI__builtin_arm_mve_sqshl:
case ARM::BI__builtin_arm_mve_sqshll:
case ARM::BI__builtin_arm_mve_srshr:
case ARM::BI__builtin_arm_mve_srshrl:
case ARM::BI__builtin_arm_mve_uqshl:
case ARM::BI__builtin_arm_mve_uqshll:
case ARM::BI__builtin_arm_mve_urshr:
case ARM::BI__builtin_arm_mve_urshrl:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x1, 0x20);
case ARM::BI__builtin_arm_mve_vsetq_lane_s64:
case ARM::BI__builtin_arm_mve_vsetq_lane_u64:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x0, 0x1);
case ARM::BI__builtin_arm_mve_vsetq_lane_f32:
case ARM::BI__builtin_arm_mve_vsetq_lane_s32:
case ARM::BI__builtin_arm_mve_vsetq_lane_u32:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x0, 0x3);
case ARM::BI__builtin_arm_mve_vsetq_lane_f16:
case ARM::BI__builtin_arm_mve_vsetq_lane_s16:
case ARM::BI__builtin_arm_mve_vsetq_lane_u16:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x0, 0x7);
case ARM::BI__builtin_arm_mve_vsetq_lane_s8:
case ARM::BI__builtin_arm_mve_vsetq_lane_u8:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x0, 0xF);
