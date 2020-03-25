static const IntrinToName MapData[] = {
  { ARM::BI__builtin_arm_cde_cx1, 0, -1},
  { ARM::BI__builtin_arm_cde_cx1a, 4, -1},
  { ARM::BI__builtin_arm_cde_cx1d, 9, -1},
  { ARM::BI__builtin_arm_cde_cx1da, 14, -1},
  { ARM::BI__builtin_arm_cde_cx2, 20, -1},
  { ARM::BI__builtin_arm_cde_cx2a, 24, -1},
  { ARM::BI__builtin_arm_cde_cx2d, 29, -1},
  { ARM::BI__builtin_arm_cde_cx2da, 34, -1},
  { ARM::BI__builtin_arm_cde_cx3, 40, -1},
  { ARM::BI__builtin_arm_cde_cx3a, 44, -1},
  { ARM::BI__builtin_arm_cde_cx3d, 49, -1},
  { ARM::BI__builtin_arm_cde_cx3da, 54, -1},
  { ARM::BI__builtin_arm_cde_vcx1_u32, 60, -1},
  { ARM::BI__builtin_arm_cde_vcx1a_u32, 69, -1},
  { ARM::BI__builtin_arm_cde_vcx1d_u64, 79, -1},
  { ARM::BI__builtin_arm_cde_vcx1da_u64, 89, -1},
  { ARM::BI__builtin_arm_cde_vcx1q_u8, 100, -1},
  { ARM::BI__builtin_arm_cde_vcx1qa_f16, 116, 109},
  { ARM::BI__builtin_arm_cde_vcx1qa_f32, 127, 109},
  { ARM::BI__builtin_arm_cde_vcx1qa_s16, 138, 109},
  { ARM::BI__builtin_arm_cde_vcx1qa_s32, 149, 109},
  { ARM::BI__builtin_arm_cde_vcx1qa_s64, 160, 109},
  { ARM::BI__builtin_arm_cde_vcx1qa_s8, 171, 109},
  { ARM::BI__builtin_arm_cde_vcx1qa_u16, 181, 109},
  { ARM::BI__builtin_arm_cde_vcx1qa_u32, 192, 109},
  { ARM::BI__builtin_arm_cde_vcx1qa_u64, 203, 109},
  { ARM::BI__builtin_arm_cde_vcx1qa_u8, 214, 109},
  { ARM::BI__builtin_arm_cde_vcx2_u32, 224, -1},
  { ARM::BI__builtin_arm_cde_vcx2a_u32, 233, -1},
  { ARM::BI__builtin_arm_cde_vcx2d_u64, 243, -1},
  { ARM::BI__builtin_arm_cde_vcx2da_u64, 253, -1},
  { ARM::BI__builtin_arm_cde_vcx2q_f16, 270, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_f32, 280, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_s16, 290, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_s32, 300, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_s64, 310, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_s8, 320, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_u16, 329, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_u32, 339, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_u64, 349, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_u8, 359, 264},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_f16, 368, 359},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_f32, 381, 359},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_s16, 394, 359},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_s32, 407, 359},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_s64, 420, 359},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_s8, 433, 359},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_u16, 445, 359},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_u32, 458, 359},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_u64, 471, 359},
  { ARM::BI__builtin_arm_cde_vcx2q_u8_u8, 484, 359},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_f16, 508, 496},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_f32, 524, 496},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_s16, 540, 496},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_s32, 556, 496},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_s64, 572, 496},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_s8, 588, 496},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_u16, 603, 496},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_u32, 619, 496},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_u64, 635, 496},
  { ARM::BI__builtin_arm_cde_vcx2qa_impl_u8, 651, 496},
  { ARM::BI__builtin_arm_cde_vcx3_u32, 666, -1},
  { ARM::BI__builtin_arm_cde_vcx3a_u32, 675, -1},
  { ARM::BI__builtin_arm_cde_vcx3d_u64, 685, -1},
  { ARM::BI__builtin_arm_cde_vcx3da_u64, 695, -1},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_f16, 717, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_f32, 732, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_s16, 747, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_s32, 762, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_s64, 777, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_s8, 792, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_u16, 806, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_u32, 821, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_u64, 836, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_impl_u8, 851, 706},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_f16, 879, 865},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_f32, 897, 865},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_s16, 915, 865},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_s32, 933, 865},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_s64, 951, 865},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_s8, 969, 865},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_u16, 986, 865},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_u32, 1004, 865},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_u64, 1022, 865},
  { ARM::BI__builtin_arm_cde_vcx3q_u8_impl_u8, 1040, 865},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_f16, 1069, 1057},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_f32, 1085, 1057},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_s16, 1101, 1057},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_s32, 1117, 1057},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_s64, 1133, 1057},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_s8, 1149, 1057},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_u16, 1164, 1057},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_u32, 1180, 1057},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_u64, 1196, 1057},
  { ARM::BI__builtin_arm_cde_vcx3qa_impl_u8, 1212, 1057},
  { ARM::BI__builtin_arm_cde_vreinterpretq_u8_u8, 1244, 1227},
};

ArrayRef<IntrinToName> Map(MapData);

static const char IntrinNames[] = {
    "cx1\000cx1a\000cx1d\000cx1da\000cx2\000cx2a\000cx2d\000cx2da\000cx3\000"
    "cx3a\000cx3d\000cx3da\000vcx1_u32\000vcx1a_u32\000vcx1d_u64\000vcx1da_u"
    "64\000vcx1q_u8\000vcx1qa\000vcx1qa_f16\000vcx1qa_f32\000vcx1qa_s16\000v"
    "cx1qa_s32\000vcx1qa_s64\000vcx1qa_s8\000vcx1qa_u16\000vcx1qa_u32\000vcx"
    "1qa_u64\000vcx1qa_u8\000vcx2_u32\000vcx2a_u32\000vcx2d_u64\000vcx2da_u6"
    "4\000vcx2q\000vcx2q_f16\000vcx2q_f32\000vcx2q_s16\000vcx2q_s32\000vcx2q"
    "_s64\000vcx2q_s8\000vcx2q_u16\000vcx2q_u32\000vcx2q_u64\000vcx2q_u8\000"
    "vcx2q_u8_f16\000vcx2q_u8_f32\000vcx2q_u8_s16\000vcx2q_u8_s32\000vcx2q_u"
    "8_s64\000vcx2q_u8_s8\000vcx2q_u8_u16\000vcx2q_u8_u32\000vcx2q_u8_u64\000"
    "vcx2q_u8_u8\000vcx2qa_impl\000vcx2qa_impl_f16\000vcx2qa_impl_f32\000vcx"
    "2qa_impl_s16\000vcx2qa_impl_s32\000vcx2qa_impl_s64\000vcx2qa_impl_s8\000"
    "vcx2qa_impl_u16\000vcx2qa_impl_u32\000vcx2qa_impl_u64\000vcx2qa_impl_u8"
    "\000vcx3_u32\000vcx3a_u32\000vcx3d_u64\000vcx3da_u64\000vcx3q_impl\000v"
    "cx3q_impl_f16\000vcx3q_impl_f32\000vcx3q_impl_s16\000vcx3q_impl_s32\000"
    "vcx3q_impl_s64\000vcx3q_impl_s8\000vcx3q_impl_u16\000vcx3q_impl_u32\000"
    "vcx3q_impl_u64\000vcx3q_impl_u8\000vcx3q_u8_impl\000vcx3q_u8_impl_f16\000"
    "vcx3q_u8_impl_f32\000vcx3q_u8_impl_s16\000vcx3q_u8_impl_s32\000vcx3q_u8"
    "_impl_s64\000vcx3q_u8_impl_s8\000vcx3q_u8_impl_u16\000vcx3q_u8_impl_u32"
    "\000vcx3q_u8_impl_u64\000vcx3q_u8_impl_u8\000vcx3qa_impl\000vcx3qa_impl"
    "_f16\000vcx3qa_impl_f32\000vcx3qa_impl_s16\000vcx3qa_impl_s32\000vcx3qa"
    "_impl_s64\000vcx3qa_impl_s8\000vcx3qa_impl_u16\000vcx3qa_impl_u32\000vc"
    "x3qa_impl_u64\000vcx3qa_impl_u8\000vreinterpretq_u8\000vreinterpretq_u8"
    "_u8\000"};

