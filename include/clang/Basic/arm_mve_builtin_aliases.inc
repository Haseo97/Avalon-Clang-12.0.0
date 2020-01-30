struct IntrinToName {
  uint32_t Id;
  int32_t FullName;
  int32_t ShortName;
};
static const IntrinToName Map[] = {
  { ARM::BI__builtin_arm_mve_asrl, 0, -1},
  { ARM::BI__builtin_arm_mve_lsll, 5, -1},
  { ARM::BI__builtin_arm_mve_sqrshr, 10, -1},
  { ARM::BI__builtin_arm_mve_sqrshrl, 17, -1},
  { ARM::BI__builtin_arm_mve_sqrshrl_sat48, 25, -1},
  { ARM::BI__builtin_arm_mve_sqshl, 39, -1},
  { ARM::BI__builtin_arm_mve_sqshll, 45, -1},
  { ARM::BI__builtin_arm_mve_srshr, 52, -1},
  { ARM::BI__builtin_arm_mve_srshrl, 58, -1},
  { ARM::BI__builtin_arm_mve_uqrshl, 65, -1},
  { ARM::BI__builtin_arm_mve_uqrshll, 72, -1},
  { ARM::BI__builtin_arm_mve_uqrshll_sat48, 80, -1},
  { ARM::BI__builtin_arm_mve_uqshl, 94, -1},
  { ARM::BI__builtin_arm_mve_uqshll, 100, -1},
  { ARM::BI__builtin_arm_mve_urshr, 107, -1},
  { ARM::BI__builtin_arm_mve_urshrl, 113, -1},
  { ARM::BI__builtin_arm_mve_vabavq_p_s16, 129, 120},
  { ARM::BI__builtin_arm_mve_vabavq_p_s32, 142, 120},
  { ARM::BI__builtin_arm_mve_vabavq_p_s8, 155, 120},
  { ARM::BI__builtin_arm_mve_vabavq_p_u16, 167, 120},
  { ARM::BI__builtin_arm_mve_vabavq_p_u32, 180, 120},
  { ARM::BI__builtin_arm_mve_vabavq_p_u8, 193, 120},
  { ARM::BI__builtin_arm_mve_vabavq_s16, 212, 205},
  { ARM::BI__builtin_arm_mve_vabavq_s32, 223, 205},
  { ARM::BI__builtin_arm_mve_vabavq_s8, 234, 205},
  { ARM::BI__builtin_arm_mve_vabavq_u16, 244, 205},
  { ARM::BI__builtin_arm_mve_vabavq_u32, 255, 205},
  { ARM::BI__builtin_arm_mve_vabavq_u8, 266, 205},
  { ARM::BI__builtin_arm_mve_vabdq_f16, 282, 276},
  { ARM::BI__builtin_arm_mve_vabdq_f32, 292, 276},
  { ARM::BI__builtin_arm_mve_vabdq_m_f16, 310, 302},
  { ARM::BI__builtin_arm_mve_vabdq_m_f32, 322, 302},
  { ARM::BI__builtin_arm_mve_vabdq_m_s16, 334, 302},
  { ARM::BI__builtin_arm_mve_vabdq_m_s32, 346, 302},
  { ARM::BI__builtin_arm_mve_vabdq_m_s8, 358, 302},
  { ARM::BI__builtin_arm_mve_vabdq_m_u16, 369, 302},
  { ARM::BI__builtin_arm_mve_vabdq_m_u32, 381, 302},
  { ARM::BI__builtin_arm_mve_vabdq_m_u8, 393, 302},
  { ARM::BI__builtin_arm_mve_vabdq_s16, 404, 276},
  { ARM::BI__builtin_arm_mve_vabdq_s32, 414, 276},
  { ARM::BI__builtin_arm_mve_vabdq_s8, 424, 276},
  { ARM::BI__builtin_arm_mve_vabdq_u16, 433, 276},
  { ARM::BI__builtin_arm_mve_vabdq_u32, 443, 276},
  { ARM::BI__builtin_arm_mve_vabdq_u8, 453, 276},
  { ARM::BI__builtin_arm_mve_vabdq_x_f16, 470, 462},
  { ARM::BI__builtin_arm_mve_vabdq_x_f32, 482, 462},
  { ARM::BI__builtin_arm_mve_vabdq_x_s16, 494, 462},
  { ARM::BI__builtin_arm_mve_vabdq_x_s32, 506, 462},
  { ARM::BI__builtin_arm_mve_vabdq_x_s8, 518, 462},
  { ARM::BI__builtin_arm_mve_vabdq_x_u16, 529, 462},
  { ARM::BI__builtin_arm_mve_vabdq_x_u32, 541, 462},
  { ARM::BI__builtin_arm_mve_vabdq_x_u8, 553, 462},
  { ARM::BI__builtin_arm_mve_vadciq_m_s32, 573, 564},
  { ARM::BI__builtin_arm_mve_vadciq_m_u32, 586, 564},
  { ARM::BI__builtin_arm_mve_vadciq_s32, 606, 599},
  { ARM::BI__builtin_arm_mve_vadciq_u32, 617, 599},
  { ARM::BI__builtin_arm_mve_vadcq_m_s32, 636, 628},
  { ARM::BI__builtin_arm_mve_vadcq_m_u32, 648, 628},
  { ARM::BI__builtin_arm_mve_vadcq_s32, 666, 660},
  { ARM::BI__builtin_arm_mve_vadcq_u32, 676, 660},
  { ARM::BI__builtin_arm_mve_vaddq_f16, 692, 686},
  { ARM::BI__builtin_arm_mve_vaddq_f32, 702, 686},
  { ARM::BI__builtin_arm_mve_vaddq_m_f16, 720, 712},
  { ARM::BI__builtin_arm_mve_vaddq_m_f32, 732, 712},
  { ARM::BI__builtin_arm_mve_vaddq_m_s16, 744, 712},
  { ARM::BI__builtin_arm_mve_vaddq_m_s32, 756, 712},
  { ARM::BI__builtin_arm_mve_vaddq_m_s8, 768, 712},
  { ARM::BI__builtin_arm_mve_vaddq_m_u16, 779, 712},
  { ARM::BI__builtin_arm_mve_vaddq_m_u32, 791, 712},
  { ARM::BI__builtin_arm_mve_vaddq_m_u8, 803, 712},
  { ARM::BI__builtin_arm_mve_vaddq_s16, 814, 686},
  { ARM::BI__builtin_arm_mve_vaddq_s32, 824, 686},
  { ARM::BI__builtin_arm_mve_vaddq_s8, 834, 686},
  { ARM::BI__builtin_arm_mve_vaddq_u16, 843, 686},
  { ARM::BI__builtin_arm_mve_vaddq_u32, 853, 686},
  { ARM::BI__builtin_arm_mve_vaddq_u8, 863, 686},
  { ARM::BI__builtin_arm_mve_vaddq_x_f16, 880, 872},
  { ARM::BI__builtin_arm_mve_vaddq_x_f32, 892, 872},
  { ARM::BI__builtin_arm_mve_vaddq_x_s16, 904, 872},
  { ARM::BI__builtin_arm_mve_vaddq_x_s32, 916, 872},
  { ARM::BI__builtin_arm_mve_vaddq_x_s8, 928, 872},
  { ARM::BI__builtin_arm_mve_vaddq_x_u16, 939, 872},
  { ARM::BI__builtin_arm_mve_vaddq_x_u32, 951, 872},
  { ARM::BI__builtin_arm_mve_vaddq_x_u8, 963, 872},
  { ARM::BI__builtin_arm_mve_vandq_f16, 980, 974},
  { ARM::BI__builtin_arm_mve_vandq_f32, 990, 974},
  { ARM::BI__builtin_arm_mve_vandq_m_f16, 1008, 1000},
  { ARM::BI__builtin_arm_mve_vandq_m_f32, 1020, 1000},
  { ARM::BI__builtin_arm_mve_vandq_m_s16, 1032, 1000},
  { ARM::BI__builtin_arm_mve_vandq_m_s32, 1044, 1000},
  { ARM::BI__builtin_arm_mve_vandq_m_s8, 1056, 1000},
  { ARM::BI__builtin_arm_mve_vandq_m_u16, 1067, 1000},
  { ARM::BI__builtin_arm_mve_vandq_m_u32, 1079, 1000},
  { ARM::BI__builtin_arm_mve_vandq_m_u8, 1091, 1000},
  { ARM::BI__builtin_arm_mve_vandq_s16, 1102, 974},
  { ARM::BI__builtin_arm_mve_vandq_s32, 1112, 974},
  { ARM::BI__builtin_arm_mve_vandq_s8, 1122, 974},
  { ARM::BI__builtin_arm_mve_vandq_u16, 1131, 974},
  { ARM::BI__builtin_arm_mve_vandq_u32, 1141, 974},
  { ARM::BI__builtin_arm_mve_vandq_u8, 1151, 974},
  { ARM::BI__builtin_arm_mve_vandq_x_f16, 1168, 1160},
  { ARM::BI__builtin_arm_mve_vandq_x_f32, 1180, 1160},
  { ARM::BI__builtin_arm_mve_vandq_x_s16, 1192, 1160},
  { ARM::BI__builtin_arm_mve_vandq_x_s32, 1204, 1160},
  { ARM::BI__builtin_arm_mve_vandq_x_s8, 1216, 1160},
  { ARM::BI__builtin_arm_mve_vandq_x_u16, 1227, 1160},
  { ARM::BI__builtin_arm_mve_vandq_x_u32, 1239, 1160},
  { ARM::BI__builtin_arm_mve_vandq_x_u8, 1251, 1160},
  { ARM::BI__builtin_arm_mve_vbicq_f16, 1268, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_f32, 1278, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_m_f16, 1296, 1288},
  { ARM::BI__builtin_arm_mve_vbicq_m_f32, 1308, 1288},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_s16, 1330, 1320},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_s32, 1344, 1320},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_u16, 1358, 1320},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_u32, 1372, 1320},
  { ARM::BI__builtin_arm_mve_vbicq_m_s16, 1386, 1288},
  { ARM::BI__builtin_arm_mve_vbicq_m_s32, 1398, 1288},
  { ARM::BI__builtin_arm_mve_vbicq_m_s8, 1410, 1288},
  { ARM::BI__builtin_arm_mve_vbicq_m_u16, 1421, 1288},
  { ARM::BI__builtin_arm_mve_vbicq_m_u32, 1433, 1288},
  { ARM::BI__builtin_arm_mve_vbicq_m_u8, 1445, 1288},
  { ARM::BI__builtin_arm_mve_vbicq_n_s16, 1456, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_n_s32, 1468, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_n_u16, 1480, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_n_u32, 1492, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_s16, 1504, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_s32, 1514, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_s8, 1524, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_u16, 1533, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_u32, 1543, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_u8, 1553, 1262},
  { ARM::BI__builtin_arm_mve_vbicq_x_f16, 1570, 1562},
  { ARM::BI__builtin_arm_mve_vbicq_x_f32, 1582, 1562},
  { ARM::BI__builtin_arm_mve_vbicq_x_s16, 1594, 1562},
  { ARM::BI__builtin_arm_mve_vbicq_x_s32, 1606, 1562},
  { ARM::BI__builtin_arm_mve_vbicq_x_s8, 1618, 1562},
  { ARM::BI__builtin_arm_mve_vbicq_x_u16, 1629, 1562},
  { ARM::BI__builtin_arm_mve_vbicq_x_u32, 1641, 1562},
  { ARM::BI__builtin_arm_mve_vbicq_x_u8, 1653, 1562},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_f16, 1678, 1664},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_f32, 1696, 1664},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_f16, 1730, 1714},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_f32, 1750, 1714},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s16, 1770, 1714},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s32, 1790, 1714},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s8, 1810, 1714},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u16, 1829, 1714},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u32, 1849, 1714},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u8, 1869, 1714},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_s16, 1888, 1664},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_s32, 1906, 1664},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_s8, 1924, 1664},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_u16, 1941, 1664},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_u32, 1959, 1664},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_u8, 1977, 1664},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_f16, 2010, 1994},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_f32, 2030, 1994},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s16, 2050, 1994},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s32, 2070, 1994},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s8, 2090, 1994},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u16, 2109, 1994},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u32, 2129, 1994},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u8, 2149, 1994},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_f16, 2181, 2168},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_f32, 2198, 2168},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_f16, 2230, 2215},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_f32, 2249, 2215},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s16, 2268, 2215},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s32, 2287, 2215},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s8, 2306, 2215},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u16, 2324, 2215},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u32, 2343, 2215},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u8, 2362, 2215},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_s16, 2380, 2168},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_s32, 2397, 2168},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_s8, 2414, 2168},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_u16, 2430, 2168},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_u32, 2447, 2168},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_u8, 2464, 2168},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_f16, 2495, 2480},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_f32, 2514, 2480},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s16, 2533, 2480},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s32, 2552, 2480},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s8, 2571, 2480},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u16, 2589, 2480},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u32, 2608, 2480},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u8, 2627, 2480},
  { ARM::BI__builtin_arm_mve_vcmlaq_f16, 2652, 2645},
  { ARM::BI__builtin_arm_mve_vcmlaq_f32, 2663, 2645},
  { ARM::BI__builtin_arm_mve_vcmlaq_m_f16, 2683, 2674},
  { ARM::BI__builtin_arm_mve_vcmlaq_m_f32, 2696, 2674},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_f16, 2723, 2709},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_f32, 2741, 2709},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_m_f16, 2775, 2759},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_m_f32, 2795, 2759},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_f16, 2829, 2815},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_f32, 2847, 2815},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_m_f16, 2881, 2865},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_m_f32, 2901, 2865},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_f16, 2934, 2921},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_f32, 2951, 2921},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_m_f16, 2983, 2968},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_m_f32, 3002, 2968},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u16, 3031, 3021},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u32, 3047, 3021},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u8, 3063, 3021},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_u16, 3078, 3021},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_u32, 3092, 3021},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_u8, 3106, 3021},
  { ARM::BI__builtin_arm_mve_vcmpcsq_n_u16, 3127, 3119},
  { ARM::BI__builtin_arm_mve_vcmpcsq_n_u32, 3141, 3119},
  { ARM::BI__builtin_arm_mve_vcmpcsq_n_u8, 3155, 3119},
  { ARM::BI__builtin_arm_mve_vcmpcsq_u16, 3168, 3119},
  { ARM::BI__builtin_arm_mve_vcmpcsq_u32, 3180, 3119},
  { ARM::BI__builtin_arm_mve_vcmpcsq_u8, 3192, 3119},
  { ARM::BI__builtin_arm_mve_vcmpeqq_f16, 3211, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_f32, 3223, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_f16, 3245, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_f32, 3259, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_f16, 3273, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_f32, 3289, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s16, 3305, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s32, 3321, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s8, 3337, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u16, 3352, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u32, 3368, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u8, 3384, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_s16, 3399, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_s32, 3413, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_s8, 3427, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_u16, 3440, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_u32, 3454, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_u8, 3468, 3235},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_f16, 3481, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_f32, 3495, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_s16, 3509, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_s32, 3523, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_s8, 3537, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_u16, 3550, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_u32, 3564, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_u8, 3578, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_s16, 3591, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_s32, 3603, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_s8, 3615, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_u16, 3626, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_u32, 3638, 3203},
  { ARM::BI__builtin_arm_mve_vcmpeqq_u8, 3650, 3203},
  { ARM::BI__builtin_arm_mve_vcmpgeq_f16, 3669, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgeq_f32, 3681, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_f16, 3703, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_f32, 3717, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_f16, 3731, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_f32, 3747, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s16, 3763, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s32, 3779, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s8, 3795, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_s16, 3810, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_s32, 3824, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_s8, 3838, 3693},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_f16, 3851, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_f32, 3865, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_s16, 3879, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_s32, 3893, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_s8, 3907, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgeq_s16, 3920, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgeq_s32, 3932, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgeq_s8, 3944, 3661},
  { ARM::BI__builtin_arm_mve_vcmpgtq_f16, 3963, 3955},
  { ARM::BI__builtin_arm_mve_vcmpgtq_f32, 3975, 3955},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_f16, 3997, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_f32, 4011, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_f16, 4025, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_f32, 4041, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s16, 4057, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s32, 4073, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s8, 4089, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_s16, 4104, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_s32, 4118, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_s8, 4132, 3987},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_f16, 4145, 3955},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_f32, 4159, 3955},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_s16, 4173, 3955},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_s32, 4187, 3955},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_s8, 4201, 3955},
  { ARM::BI__builtin_arm_mve_vcmpgtq_s16, 4214, 3955},
  { ARM::BI__builtin_arm_mve_vcmpgtq_s32, 4226, 3955},
  { ARM::BI__builtin_arm_mve_vcmpgtq_s8, 4238, 3955},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_n_u16, 4259, 4249},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_n_u32, 4275, 4249},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_n_u8, 4291, 4249},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_u16, 4306, 4249},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_u32, 4320, 4249},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_u8, 4334, 4249},
  { ARM::BI__builtin_arm_mve_vcmphiq_n_u16, 4355, 4347},
  { ARM::BI__builtin_arm_mve_vcmphiq_n_u32, 4369, 4347},
  { ARM::BI__builtin_arm_mve_vcmphiq_n_u8, 4383, 4347},
  { ARM::BI__builtin_arm_mve_vcmphiq_u16, 4396, 4347},
  { ARM::BI__builtin_arm_mve_vcmphiq_u32, 4408, 4347},
  { ARM::BI__builtin_arm_mve_vcmphiq_u8, 4420, 4347},
  { ARM::BI__builtin_arm_mve_vcmpleq_f16, 4439, 4431},
  { ARM::BI__builtin_arm_mve_vcmpleq_f32, 4451, 4431},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_f16, 4473, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_f32, 4487, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_f16, 4501, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_f32, 4517, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_s16, 4533, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_s32, 4549, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_s8, 4565, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_s16, 4580, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_s32, 4594, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_s8, 4608, 4463},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_f16, 4621, 4431},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_f32, 4635, 4431},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_s16, 4649, 4431},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_s32, 4663, 4431},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_s8, 4677, 4431},
  { ARM::BI__builtin_arm_mve_vcmpleq_s16, 4690, 4431},
  { ARM::BI__builtin_arm_mve_vcmpleq_s32, 4702, 4431},
  { ARM::BI__builtin_arm_mve_vcmpleq_s8, 4714, 4431},
  { ARM::BI__builtin_arm_mve_vcmpltq_f16, 4733, 4725},
  { ARM::BI__builtin_arm_mve_vcmpltq_f32, 4745, 4725},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_f16, 4767, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_f32, 4781, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_f16, 4795, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_f32, 4811, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_s16, 4827, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_s32, 4843, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_s8, 4859, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_s16, 4874, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_s32, 4888, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_s8, 4902, 4757},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_f16, 4915, 4725},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_f32, 4929, 4725},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_s16, 4943, 4725},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_s32, 4957, 4725},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_s8, 4971, 4725},
  { ARM::BI__builtin_arm_mve_vcmpltq_s16, 4984, 4725},
  { ARM::BI__builtin_arm_mve_vcmpltq_s32, 4996, 4725},
  { ARM::BI__builtin_arm_mve_vcmpltq_s8, 5008, 4725},
  { ARM::BI__builtin_arm_mve_vcmpneq_f16, 5027, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_f32, 5039, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_f16, 5061, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_f32, 5075, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_f16, 5089, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_f32, 5105, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_s16, 5121, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_s32, 5137, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_s8, 5153, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_u16, 5168, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_u32, 5184, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_u8, 5200, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_s16, 5215, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_s32, 5229, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_s8, 5243, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_u16, 5256, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_u32, 5270, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_u8, 5284, 5051},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_f16, 5297, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_f32, 5311, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_s16, 5325, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_s32, 5339, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_s8, 5353, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_u16, 5366, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_u32, 5380, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_u8, 5394, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_s16, 5407, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_s32, 5419, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_s8, 5431, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_u16, 5442, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_u32, 5454, 5019},
  { ARM::BI__builtin_arm_mve_vcmpneq_u8, 5466, 5019},
  { ARM::BI__builtin_arm_mve_vcmulq_f16, 5484, 5477},
  { ARM::BI__builtin_arm_mve_vcmulq_f32, 5495, 5477},
  { ARM::BI__builtin_arm_mve_vcmulq_m_f16, 5515, 5506},
  { ARM::BI__builtin_arm_mve_vcmulq_m_f32, 5528, 5506},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_f16, 5555, 5541},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_f32, 5573, 5541},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_m_f16, 5607, 5591},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_m_f32, 5627, 5591},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_x_f16, 5663, 5647},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_x_f32, 5683, 5647},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_f16, 5717, 5703},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_f32, 5735, 5703},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_m_f16, 5769, 5753},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_m_f32, 5789, 5753},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_x_f16, 5825, 5809},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_x_f32, 5845, 5809},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_f16, 5878, 5865},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_f32, 5895, 5865},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_m_f16, 5927, 5912},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_m_f32, 5946, 5912},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_x_f16, 5980, 5965},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_x_f32, 5999, 5965},
  { ARM::BI__builtin_arm_mve_vcmulq_x_f16, 6027, 6018},
  { ARM::BI__builtin_arm_mve_vcmulq_x_f32, 6040, 6018},
  { ARM::BI__builtin_arm_mve_vcreateq_f16, 6053, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_f32, 6066, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s16, 6079, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s32, 6092, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s64, 6105, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s8, 6118, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u16, 6130, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u32, 6143, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u64, 6156, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u8, 6169, -1},
  { ARM::BI__builtin_arm_mve_vctp16q, 6181, -1},
  { ARM::BI__builtin_arm_mve_vctp16q_m, 6189, -1},
  { ARM::BI__builtin_arm_mve_vctp32q, 6199, -1},
  { ARM::BI__builtin_arm_mve_vctp32q_m, 6207, -1},
  { ARM::BI__builtin_arm_mve_vctp64q, 6217, -1},
  { ARM::BI__builtin_arm_mve_vctp64q_m, 6225, -1},
  { ARM::BI__builtin_arm_mve_vctp8q, 6235, -1},
  { ARM::BI__builtin_arm_mve_vctp8q_m, 6242, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_f16_f32, 6251, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_m_f16_f32, 6266, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_f16_f32, 6283, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_m_f16_f32, 6298, -1},
  { ARM::BI__builtin_arm_mve_veorq_f16, 6321, 6315},
  { ARM::BI__builtin_arm_mve_veorq_f32, 6331, 6315},
  { ARM::BI__builtin_arm_mve_veorq_m_f16, 6349, 6341},
  { ARM::BI__builtin_arm_mve_veorq_m_f32, 6361, 6341},
  { ARM::BI__builtin_arm_mve_veorq_m_s16, 6373, 6341},
  { ARM::BI__builtin_arm_mve_veorq_m_s32, 6385, 6341},
  { ARM::BI__builtin_arm_mve_veorq_m_s8, 6397, 6341},
  { ARM::BI__builtin_arm_mve_veorq_m_u16, 6408, 6341},
  { ARM::BI__builtin_arm_mve_veorq_m_u32, 6420, 6341},
  { ARM::BI__builtin_arm_mve_veorq_m_u8, 6432, 6341},
  { ARM::BI__builtin_arm_mve_veorq_s16, 6443, 6315},
  { ARM::BI__builtin_arm_mve_veorq_s32, 6453, 6315},
  { ARM::BI__builtin_arm_mve_veorq_s8, 6463, 6315},
  { ARM::BI__builtin_arm_mve_veorq_u16, 6472, 6315},
  { ARM::BI__builtin_arm_mve_veorq_u32, 6482, 6315},
  { ARM::BI__builtin_arm_mve_veorq_u8, 6492, 6315},
  { ARM::BI__builtin_arm_mve_veorq_x_f16, 6509, 6501},
  { ARM::BI__builtin_arm_mve_veorq_x_f32, 6521, 6501},
  { ARM::BI__builtin_arm_mve_veorq_x_s16, 6533, 6501},
  { ARM::BI__builtin_arm_mve_veorq_x_s32, 6545, 6501},
  { ARM::BI__builtin_arm_mve_veorq_x_s8, 6557, 6501},
  { ARM::BI__builtin_arm_mve_veorq_x_u16, 6568, 6501},
  { ARM::BI__builtin_arm_mve_veorq_x_u32, 6580, 6501},
  { ARM::BI__builtin_arm_mve_veorq_x_u8, 6592, 6501},
  { ARM::BI__builtin_arm_mve_vgetq_lane_f16, 6614, 6603},
  { ARM::BI__builtin_arm_mve_vgetq_lane_f32, 6629, 6603},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s16, 6644, 6603},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s32, 6659, 6603},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s64, 6674, 6603},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s8, 6689, 6603},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u16, 6703, 6603},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u32, 6718, 6603},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u64, 6733, 6603},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u8, 6748, 6603},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s16, 6771, 6762},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s32, 6784, 6762},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s8, 6797, 6762},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u16, 6809, 6762},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u32, 6822, 6762},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u8, 6835, 6762},
  { ARM::BI__builtin_arm_mve_vhaddq_s16, 6854, 6847},
  { ARM::BI__builtin_arm_mve_vhaddq_s32, 6865, 6847},
  { ARM::BI__builtin_arm_mve_vhaddq_s8, 6876, 6847},
  { ARM::BI__builtin_arm_mve_vhaddq_u16, 6886, 6847},
  { ARM::BI__builtin_arm_mve_vhaddq_u32, 6897, 6847},
  { ARM::BI__builtin_arm_mve_vhaddq_u8, 6908, 6847},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s16, 6927, 6918},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s32, 6940, 6918},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s8, 6953, 6918},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u16, 6965, 6918},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u32, 6978, 6918},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u8, 6991, 6918},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s16, 7020, 7003},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s32, 7041, 7003},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s8, 7062, 7003},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s16, 7097, 7082},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s32, 7116, 7082},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s8, 7135, 7082},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s16, 7170, 7153},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s32, 7191, 7153},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s8, 7212, 7153},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s16, 7248, 7232},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s32, 7268, 7232},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s8, 7288, 7232},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s16, 7321, 7307},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s32, 7339, 7307},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s8, 7357, 7307},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s16, 7390, 7374},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s32, 7410, 7374},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s8, 7430, 7374},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s16, 7458, 7449},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s32, 7471, 7449},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s8, 7484, 7449},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u16, 7496, 7449},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u32, 7509, 7449},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u8, 7522, 7449},
  { ARM::BI__builtin_arm_mve_vhsubq_s16, 7541, 7534},
  { ARM::BI__builtin_arm_mve_vhsubq_s32, 7552, 7534},
  { ARM::BI__builtin_arm_mve_vhsubq_s8, 7563, 7534},
  { ARM::BI__builtin_arm_mve_vhsubq_u16, 7573, 7534},
  { ARM::BI__builtin_arm_mve_vhsubq_u32, 7584, 7534},
  { ARM::BI__builtin_arm_mve_vhsubq_u8, 7595, 7534},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s16, 7614, 7605},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s32, 7627, 7605},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s8, 7640, 7605},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u16, 7652, 7605},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u32, 7665, 7605},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u8, 7678, 7605},
  { ARM::BI__builtin_arm_mve_vld1q_f16, 7696, 7690},
  { ARM::BI__builtin_arm_mve_vld1q_f32, 7706, 7690},
  { ARM::BI__builtin_arm_mve_vld1q_s16, 7716, 7690},
  { ARM::BI__builtin_arm_mve_vld1q_s32, 7726, 7690},
  { ARM::BI__builtin_arm_mve_vld1q_s8, 7736, 7690},
  { ARM::BI__builtin_arm_mve_vld1q_u16, 7745, 7690},
  { ARM::BI__builtin_arm_mve_vld1q_u32, 7755, 7690},
  { ARM::BI__builtin_arm_mve_vld1q_u8, 7765, 7690},
  { ARM::BI__builtin_arm_mve_vld1q_z_f16, 7782, 7774},
  { ARM::BI__builtin_arm_mve_vld1q_z_f32, 7794, 7774},
  { ARM::BI__builtin_arm_mve_vld1q_z_s16, 7806, 7774},
  { ARM::BI__builtin_arm_mve_vld1q_z_s32, 7818, 7774},
  { ARM::BI__builtin_arm_mve_vld1q_z_s8, 7830, 7774},
  { ARM::BI__builtin_arm_mve_vld1q_z_u16, 7841, 7774},
  { ARM::BI__builtin_arm_mve_vld1q_z_u32, 7853, 7774},
  { ARM::BI__builtin_arm_mve_vld1q_z_u8, 7865, 7774},
  { ARM::BI__builtin_arm_mve_vld2q_f16, 7882, 7876},
  { ARM::BI__builtin_arm_mve_vld2q_f32, 7892, 7876},
  { ARM::BI__builtin_arm_mve_vld2q_s16, 7902, 7876},
  { ARM::BI__builtin_arm_mve_vld2q_s32, 7912, 7876},
  { ARM::BI__builtin_arm_mve_vld2q_s8, 7922, 7876},
  { ARM::BI__builtin_arm_mve_vld2q_u16, 7931, 7876},
  { ARM::BI__builtin_arm_mve_vld2q_u32, 7941, 7876},
  { ARM::BI__builtin_arm_mve_vld2q_u8, 7951, 7876},
  { ARM::BI__builtin_arm_mve_vld4q_f16, 7966, 7960},
  { ARM::BI__builtin_arm_mve_vld4q_f32, 7976, 7960},
  { ARM::BI__builtin_arm_mve_vld4q_s16, 7986, 7960},
  { ARM::BI__builtin_arm_mve_vld4q_s32, 7996, 7960},
  { ARM::BI__builtin_arm_mve_vld4q_s8, 8006, 7960},
  { ARM::BI__builtin_arm_mve_vld4q_u16, 8015, 7960},
  { ARM::BI__builtin_arm_mve_vld4q_u32, 8025, 7960},
  { ARM::BI__builtin_arm_mve_vld4q_u8, 8035, 7960},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s16, 8065, 8044},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s32, 8090, 8044},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s8, 8115, 8044},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u16, 8139, 8044},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u32, 8164, 8044},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u8, 8189, 8044},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s16, 8236, 8213},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s32, 8263, 8213},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s8, 8290, 8213},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u16, 8316, 8213},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u32, 8343, 8213},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u8, 8370, 8213},
  { ARM::BI__builtin_arm_mve_vldrbq_s16, 8396, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_s32, 8407, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_s8, 8418, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u16, 8428, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u32, 8439, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u8, 8450, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s16, 8460, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s32, 8473, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s8, 8486, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u16, 8498, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u32, 8511, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u8, 8524, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_s64, 8536, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_u64, 8559, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_s64, 8582, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_u64, 8608, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64, 8634, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64, 8662, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_s64, 8690, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_u64, 8715, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_s64, 8761, 8740},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_u64, 8786, 8740},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_s64, 8834, 8811},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_u64, 8861, 8811},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_s64, 8917, 8888},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_u64, 8950, 8888},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_s64, 9014, 8983},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_u64, 9049, 8983},
  { ARM::BI__builtin_arm_mve_vldrhq_f16, 9084, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_f16, 9116, 9095},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s16, 9141, 9095},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s32, 9166, 9095},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u16, 9191, 9095},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u32, 9216, 9095},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_f16, 9264, 9241},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s16, 9291, 9241},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s32, 9318, 9241},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u16, 9345, 9241},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u32, 9372, 9241},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_f16, 9428, 9399},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s16, 9461, 9399},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s32, 9494, 9399},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u16, 9527, 9399},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u32, 9560, 9399},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_f16, 9624, 9593},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s16, 9659, 9593},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s32, 9694, 9593},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u16, 9729, 9593},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u32, 9764, 9593},
  { ARM::BI__builtin_arm_mve_vldrhq_s16, 9799, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_s32, 9810, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_u16, 9821, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_u32, 9832, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_f16, 9843, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_s16, 9856, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_s32, 9869, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_u16, 9882, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_u32, 9895, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_f32, 9908, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_f32, 9919, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_s32, 9942, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_u32, 9965, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32, 9988, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32, 10014, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32, 10040, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_f32, 10066, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_s32, 10094, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_u32, 10122, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_f32, 10150, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_s32, 10175, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_u32, 10200, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_f32, 10246, 10225},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_s32, 10271, 10225},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_u32, 10296, 10225},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_f32, 10344, 10321},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_s32, 10371, 10321},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_u32, 10398, 10321},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_f32, 10454, 10425},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_s32, 10487, 10425},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_u32, 10520, 10425},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_f32, 10584, 10553},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_s32, 10619, 10553},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_u32, 10654, 10553},
  { ARM::BI__builtin_arm_mve_vldrwq_s32, 10689, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_u32, 10700, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_f32, 10711, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_s32, 10724, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_u32, 10737, -1},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s16, 10759, 10750},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s32, 10772, 10750},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s8, 10785, 10750},
  { ARM::BI__builtin_arm_mve_vmaxaq_s16, 10804, 10797},
  { ARM::BI__builtin_arm_mve_vmaxaq_s32, 10815, 10797},
  { ARM::BI__builtin_arm_mve_vmaxaq_s8, 10826, 10797},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_f16, 10845, 10836},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_f32, 10858, 10836},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_m_f16, 10882, 10871},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_m_f32, 10897, 10871},
  { ARM::BI__builtin_arm_mve_vmaxnmq_f16, 10920, 10912},
  { ARM::BI__builtin_arm_mve_vmaxnmq_f32, 10932, 10912},
  { ARM::BI__builtin_arm_mve_vmaxnmq_m_f16, 10954, 10944},
  { ARM::BI__builtin_arm_mve_vmaxnmq_m_f32, 10968, 10944},
  { ARM::BI__builtin_arm_mve_vmaxnmq_x_f16, 10992, 10982},
  { ARM::BI__builtin_arm_mve_vmaxnmq_x_f32, 11006, 10982},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s16, 11028, 11020},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s32, 11040, 11020},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s8, 11052, 11020},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u16, 11063, 11020},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u32, 11075, 11020},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u8, 11087, 11020},
  { ARM::BI__builtin_arm_mve_vmaxq_s16, 11104, 11098},
  { ARM::BI__builtin_arm_mve_vmaxq_s32, 11114, 11098},
  { ARM::BI__builtin_arm_mve_vmaxq_s8, 11124, 11098},
  { ARM::BI__builtin_arm_mve_vmaxq_u16, 11133, 11098},
  { ARM::BI__builtin_arm_mve_vmaxq_u32, 11143, 11098},
  { ARM::BI__builtin_arm_mve_vmaxq_u8, 11153, 11098},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s16, 11170, 11162},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s32, 11182, 11162},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s8, 11194, 11162},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u16, 11205, 11162},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u32, 11217, 11162},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u8, 11229, 11162},
  { ARM::BI__builtin_arm_mve_vmaxvq_s16, 11247, 11240},
  { ARM::BI__builtin_arm_mve_vmaxvq_s32, 11258, 11240},
  { ARM::BI__builtin_arm_mve_vmaxvq_s8, 11269, 11240},
  { ARM::BI__builtin_arm_mve_vmaxvq_u16, 11279, 11240},
  { ARM::BI__builtin_arm_mve_vmaxvq_u32, 11290, 11240},
  { ARM::BI__builtin_arm_mve_vmaxvq_u8, 11301, 11240},
  { ARM::BI__builtin_arm_mve_vminaq_m_s16, 11320, 11311},
  { ARM::BI__builtin_arm_mve_vminaq_m_s32, 11333, 11311},
  { ARM::BI__builtin_arm_mve_vminaq_m_s8, 11346, 11311},
  { ARM::BI__builtin_arm_mve_vminaq_s16, 11365, 11358},
  { ARM::BI__builtin_arm_mve_vminaq_s32, 11376, 11358},
  { ARM::BI__builtin_arm_mve_vminaq_s8, 11387, 11358},
  { ARM::BI__builtin_arm_mve_vminnmaq_f16, 11406, 11397},
  { ARM::BI__builtin_arm_mve_vminnmaq_f32, 11419, 11397},
  { ARM::BI__builtin_arm_mve_vminnmaq_m_f16, 11443, 11432},
  { ARM::BI__builtin_arm_mve_vminnmaq_m_f32, 11458, 11432},
  { ARM::BI__builtin_arm_mve_vminnmq_f16, 11481, 11473},
  { ARM::BI__builtin_arm_mve_vminnmq_f32, 11493, 11473},
  { ARM::BI__builtin_arm_mve_vminnmq_m_f16, 11515, 11505},
  { ARM::BI__builtin_arm_mve_vminnmq_m_f32, 11529, 11505},
  { ARM::BI__builtin_arm_mve_vminnmq_x_f16, 11553, 11543},
  { ARM::BI__builtin_arm_mve_vminnmq_x_f32, 11567, 11543},
  { ARM::BI__builtin_arm_mve_vminq_m_s16, 11589, 11581},
  { ARM::BI__builtin_arm_mve_vminq_m_s32, 11601, 11581},
  { ARM::BI__builtin_arm_mve_vminq_m_s8, 11613, 11581},
  { ARM::BI__builtin_arm_mve_vminq_m_u16, 11624, 11581},
  { ARM::BI__builtin_arm_mve_vminq_m_u32, 11636, 11581},
  { ARM::BI__builtin_arm_mve_vminq_m_u8, 11648, 11581},
  { ARM::BI__builtin_arm_mve_vminq_s16, 11665, 11659},
  { ARM::BI__builtin_arm_mve_vminq_s32, 11675, 11659},
  { ARM::BI__builtin_arm_mve_vminq_s8, 11685, 11659},
  { ARM::BI__builtin_arm_mve_vminq_u16, 11694, 11659},
  { ARM::BI__builtin_arm_mve_vminq_u32, 11704, 11659},
  { ARM::BI__builtin_arm_mve_vminq_u8, 11714, 11659},
  { ARM::BI__builtin_arm_mve_vminq_x_s16, 11731, 11723},
  { ARM::BI__builtin_arm_mve_vminq_x_s32, 11743, 11723},
  { ARM::BI__builtin_arm_mve_vminq_x_s8, 11755, 11723},
  { ARM::BI__builtin_arm_mve_vminq_x_u16, 11766, 11723},
  { ARM::BI__builtin_arm_mve_vminq_x_u32, 11778, 11723},
  { ARM::BI__builtin_arm_mve_vminq_x_u8, 11790, 11723},
  { ARM::BI__builtin_arm_mve_vminvq_s16, 11808, 11801},
  { ARM::BI__builtin_arm_mve_vminvq_s32, 11819, 11801},
  { ARM::BI__builtin_arm_mve_vminvq_s8, 11830, 11801},
  { ARM::BI__builtin_arm_mve_vminvq_u16, 11840, 11801},
  { ARM::BI__builtin_arm_mve_vminvq_u32, 11851, 11801},
  { ARM::BI__builtin_arm_mve_vminvq_u8, 11862, 11801},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s16, 11884, 11872},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s32, 11900, 11872},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s8, 11916, 11872},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u16, 11931, 11872},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u32, 11947, 11872},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u8, 11963, 11872},
  { ARM::BI__builtin_arm_mve_vmladavaq_s16, 11988, 11978},
  { ARM::BI__builtin_arm_mve_vmladavaq_s32, 12002, 11978},
  { ARM::BI__builtin_arm_mve_vmladavaq_s8, 12016, 11978},
  { ARM::BI__builtin_arm_mve_vmladavaq_u16, 12029, 11978},
  { ARM::BI__builtin_arm_mve_vmladavaq_u32, 12043, 11978},
  { ARM::BI__builtin_arm_mve_vmladavaq_u8, 12057, 11978},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s16, 12083, 12070},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s32, 12100, 12070},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s8, 12117, 12070},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s16, 12144, 12133},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s32, 12159, 12133},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s8, 12174, 12133},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s16, 12199, 12188},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s32, 12214, 12188},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s8, 12229, 12188},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u16, 12243, 12188},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u32, 12258, 12188},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u8, 12273, 12188},
  { ARM::BI__builtin_arm_mve_vmladavq_s16, 12296, 12287},
  { ARM::BI__builtin_arm_mve_vmladavq_s32, 12309, 12287},
  { ARM::BI__builtin_arm_mve_vmladavq_s8, 12322, 12287},
  { ARM::BI__builtin_arm_mve_vmladavq_u16, 12334, 12287},
  { ARM::BI__builtin_arm_mve_vmladavq_u32, 12347, 12287},
  { ARM::BI__builtin_arm_mve_vmladavq_u8, 12360, 12287},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s16, 12384, 12372},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s32, 12400, 12372},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s8, 12416, 12372},
  { ARM::BI__builtin_arm_mve_vmladavxq_s16, 12441, 12431},
  { ARM::BI__builtin_arm_mve_vmladavxq_s32, 12455, 12431},
  { ARM::BI__builtin_arm_mve_vmladavxq_s8, 12469, 12431},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_s16, 12495, 12482},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_s32, 12512, 12482},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_u16, 12529, 12482},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_u32, 12546, 12482},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_s16, 12574, 12563},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_s32, 12589, 12563},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_u16, 12604, 12563},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_u32, 12619, 12563},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s16, 12648, 12634},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s32, 12666, 12634},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_s16, 12696, 12684},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_s32, 12712, 12684},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_s16, 12740, 12728},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_s32, 12756, 12728},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_u16, 12772, 12728},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_u32, 12788, 12728},
  { ARM::BI__builtin_arm_mve_vmlaldavq_s16, 12814, 12804},
  { ARM::BI__builtin_arm_mve_vmlaldavq_s32, 12828, 12804},
  { ARM::BI__builtin_arm_mve_vmlaldavq_u16, 12842, 12804},
  { ARM::BI__builtin_arm_mve_vmlaldavq_u32, 12856, 12804},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_p_s16, 12883, 12870},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_p_s32, 12900, 12870},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_s16, 12928, 12917},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_s32, 12943, 12917},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s16, 12970, 12958},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s32, 12986, 12958},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s8, 13002, 12958},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s16, 13027, 13017},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s32, 13041, 13017},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s8, 13055, 13017},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s16, 13081, 13068},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s32, 13098, 13068},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s8, 13115, 13068},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s16, 13142, 13131},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s32, 13157, 13131},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s8, 13172, 13131},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s16, 13197, 13186},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s32, 13212, 13186},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s8, 13227, 13186},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s16, 13250, 13241},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s32, 13263, 13241},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s8, 13276, 13241},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s16, 13300, 13288},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s32, 13316, 13288},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s8, 13332, 13288},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s16, 13357, 13347},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s32, 13371, 13347},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s8, 13385, 13347},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_p_s16, 13411, 13398},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_p_s32, 13428, 13398},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_s16, 13456, 13445},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_s32, 13471, 13445},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s16, 13500, 13486},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s32, 13518, 13486},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_s16, 13548, 13536},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_s32, 13564, 13536},
  { ARM::BI__builtin_arm_mve_vmlsldavq_p_s16, 13592, 13580},
  { ARM::BI__builtin_arm_mve_vmlsldavq_p_s32, 13608, 13580},
  { ARM::BI__builtin_arm_mve_vmlsldavq_s16, 13634, 13624},
  { ARM::BI__builtin_arm_mve_vmlsldavq_s32, 13648, 13624},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_p_s16, 13675, 13662},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_p_s32, 13692, 13662},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_s16, 13720, 13709},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_s32, 13735, 13709},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s16, 13759, 13750},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s32, 13772, 13750},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s8, 13785, 13750},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u16, 13797, 13750},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u32, 13810, 13750},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u8, 13823, 13750},
  { ARM::BI__builtin_arm_mve_vmulhq_s16, 13842, 13835},
  { ARM::BI__builtin_arm_mve_vmulhq_s32, 13853, 13835},
  { ARM::BI__builtin_arm_mve_vmulhq_s8, 13864, 13835},
  { ARM::BI__builtin_arm_mve_vmulhq_u16, 13874, 13835},
  { ARM::BI__builtin_arm_mve_vmulhq_u32, 13885, 13835},
  { ARM::BI__builtin_arm_mve_vmulhq_u8, 13896, 13835},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s16, 13915, 13906},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s32, 13928, 13906},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s8, 13941, 13906},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u16, 13953, 13906},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u32, 13966, 13906},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u8, 13979, 13906},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s16, 14005, 13991},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s32, 14023, 13991},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s8, 14041, 13991},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u16, 14058, 13991},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u32, 14076, 13991},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u8, 14094, 13991},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s16, 14123, 14111},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s32, 14139, 14111},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s8, 14155, 14111},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u16, 14170, 14111},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u32, 14186, 14111},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u8, 14202, 14111},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s16, 14231, 14217},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s32, 14249, 14217},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s8, 14267, 14217},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u16, 14284, 14217},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u32, 14302, 14217},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u8, 14320, 14217},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_m_p16, 14352, 14337},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_m_p8, 14371, 14337},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_p16, 14402, 14389},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_p8, 14419, 14389},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_x_p16, 14450, 14435},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_x_p8, 14469, 14435},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s16, 14501, 14487},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s32, 14519, 14487},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s8, 14537, 14487},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u16, 14554, 14487},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u32, 14572, 14487},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u8, 14590, 14487},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s16, 14619, 14607},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s32, 14635, 14607},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s8, 14651, 14607},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u16, 14666, 14607},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u32, 14682, 14607},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u8, 14698, 14607},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s16, 14727, 14713},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s32, 14745, 14713},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s8, 14763, 14713},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u16, 14780, 14713},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u32, 14798, 14713},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u8, 14816, 14713},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_m_p16, 14848, 14833},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_m_p8, 14867, 14833},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_p16, 14898, 14885},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_p8, 14915, 14885},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_x_p16, 14946, 14931},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_x_p8, 14965, 14931},
  { ARM::BI__builtin_arm_mve_vmulq_f16, 14989, 14983},
  { ARM::BI__builtin_arm_mve_vmulq_f32, 14999, 14983},
  { ARM::BI__builtin_arm_mve_vmulq_m_f16, 15017, 15009},
  { ARM::BI__builtin_arm_mve_vmulq_m_f32, 15029, 15009},
  { ARM::BI__builtin_arm_mve_vmulq_m_s16, 15041, 15009},
  { ARM::BI__builtin_arm_mve_vmulq_m_s32, 15053, 15009},
  { ARM::BI__builtin_arm_mve_vmulq_m_s8, 15065, 15009},
  { ARM::BI__builtin_arm_mve_vmulq_m_u16, 15076, 15009},
  { ARM::BI__builtin_arm_mve_vmulq_m_u32, 15088, 15009},
  { ARM::BI__builtin_arm_mve_vmulq_m_u8, 15100, 15009},
  { ARM::BI__builtin_arm_mve_vmulq_s16, 15111, 14983},
  { ARM::BI__builtin_arm_mve_vmulq_s32, 15121, 14983},
  { ARM::BI__builtin_arm_mve_vmulq_s8, 15131, 14983},
  { ARM::BI__builtin_arm_mve_vmulq_u16, 15140, 14983},
  { ARM::BI__builtin_arm_mve_vmulq_u32, 15150, 14983},
  { ARM::BI__builtin_arm_mve_vmulq_u8, 15160, 14983},
  { ARM::BI__builtin_arm_mve_vmulq_x_f16, 15177, 15169},
  { ARM::BI__builtin_arm_mve_vmulq_x_f32, 15189, 15169},
  { ARM::BI__builtin_arm_mve_vmulq_x_s16, 15201, 15169},
  { ARM::BI__builtin_arm_mve_vmulq_x_s32, 15213, 15169},
  { ARM::BI__builtin_arm_mve_vmulq_x_s8, 15225, 15169},
  { ARM::BI__builtin_arm_mve_vmulq_x_u16, 15236, 15169},
  { ARM::BI__builtin_arm_mve_vmulq_x_u32, 15248, 15169},
  { ARM::BI__builtin_arm_mve_vmulq_x_u8, 15260, 15169},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_s16, 15279, 15271},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_s32, 15293, 15271},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_u16, 15307, 15271},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_u32, 15321, 15271},
  { ARM::BI__builtin_arm_mve_vmvnq_n_s16, 15335, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_s32, 15347, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_u16, 15359, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_u32, 15371, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_s16, 15383, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_s32, 15397, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_u16, 15411, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_u32, 15425, -1},
  { ARM::BI__builtin_arm_mve_vornq_f16, 15445, 15439},
  { ARM::BI__builtin_arm_mve_vornq_f32, 15455, 15439},
  { ARM::BI__builtin_arm_mve_vornq_m_f16, 15473, 15465},
  { ARM::BI__builtin_arm_mve_vornq_m_f32, 15485, 15465},
  { ARM::BI__builtin_arm_mve_vornq_m_s16, 15497, 15465},
  { ARM::BI__builtin_arm_mve_vornq_m_s32, 15509, 15465},
  { ARM::BI__builtin_arm_mve_vornq_m_s8, 15521, 15465},
  { ARM::BI__builtin_arm_mve_vornq_m_u16, 15532, 15465},
  { ARM::BI__builtin_arm_mve_vornq_m_u32, 15544, 15465},
  { ARM::BI__builtin_arm_mve_vornq_m_u8, 15556, 15465},
  { ARM::BI__builtin_arm_mve_vornq_s16, 15567, 15439},
  { ARM::BI__builtin_arm_mve_vornq_s32, 15577, 15439},
  { ARM::BI__builtin_arm_mve_vornq_s8, 15587, 15439},
  { ARM::BI__builtin_arm_mve_vornq_u16, 15596, 15439},
  { ARM::BI__builtin_arm_mve_vornq_u32, 15606, 15439},
  { ARM::BI__builtin_arm_mve_vornq_u8, 15616, 15439},
  { ARM::BI__builtin_arm_mve_vornq_x_f16, 15633, 15625},
  { ARM::BI__builtin_arm_mve_vornq_x_f32, 15645, 15625},
  { ARM::BI__builtin_arm_mve_vornq_x_s16, 15657, 15625},
  { ARM::BI__builtin_arm_mve_vornq_x_s32, 15669, 15625},
  { ARM::BI__builtin_arm_mve_vornq_x_s8, 15681, 15625},
  { ARM::BI__builtin_arm_mve_vornq_x_u16, 15692, 15625},
  { ARM::BI__builtin_arm_mve_vornq_x_u32, 15704, 15625},
  { ARM::BI__builtin_arm_mve_vornq_x_u8, 15716, 15625},
  { ARM::BI__builtin_arm_mve_vorrq_f16, 15733, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_f32, 15743, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_m_f16, 15761, 15753},
  { ARM::BI__builtin_arm_mve_vorrq_m_f32, 15773, 15753},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_s16, 15795, 15785},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_s32, 15809, 15785},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_u16, 15823, 15785},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_u32, 15837, 15785},
  { ARM::BI__builtin_arm_mve_vorrq_m_s16, 15851, 15753},
  { ARM::BI__builtin_arm_mve_vorrq_m_s32, 15863, 15753},
  { ARM::BI__builtin_arm_mve_vorrq_m_s8, 15875, 15753},
  { ARM::BI__builtin_arm_mve_vorrq_m_u16, 15886, 15753},
  { ARM::BI__builtin_arm_mve_vorrq_m_u32, 15898, 15753},
  { ARM::BI__builtin_arm_mve_vorrq_m_u8, 15910, 15753},
  { ARM::BI__builtin_arm_mve_vorrq_n_s16, 15921, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_n_s32, 15933, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_n_u16, 15945, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_n_u32, 15957, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_s16, 15969, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_s32, 15979, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_s8, 15989, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_u16, 15998, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_u32, 16008, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_u8, 16018, 15727},
  { ARM::BI__builtin_arm_mve_vorrq_x_f16, 16035, 16027},
  { ARM::BI__builtin_arm_mve_vorrq_x_f32, 16047, 16027},
  { ARM::BI__builtin_arm_mve_vorrq_x_s16, 16059, 16027},
  { ARM::BI__builtin_arm_mve_vorrq_x_s32, 16071, 16027},
  { ARM::BI__builtin_arm_mve_vorrq_x_s8, 16083, 16027},
  { ARM::BI__builtin_arm_mve_vorrq_x_u16, 16094, 16027},
  { ARM::BI__builtin_arm_mve_vorrq_x_u32, 16106, 16027},
  { ARM::BI__builtin_arm_mve_vorrq_x_u8, 16118, 16027},
  { ARM::BI__builtin_arm_mve_vpnot, 16129, -1},
  { ARM::BI__builtin_arm_mve_vpselq_f16, 16142, 16135},
  { ARM::BI__builtin_arm_mve_vpselq_f32, 16153, 16135},
  { ARM::BI__builtin_arm_mve_vpselq_s16, 16164, 16135},
  { ARM::BI__builtin_arm_mve_vpselq_s32, 16175, 16135},
  { ARM::BI__builtin_arm_mve_vpselq_s64, 16186, 16135},
  { ARM::BI__builtin_arm_mve_vpselq_s8, 16197, 16135},
  { ARM::BI__builtin_arm_mve_vpselq_u16, 16207, 16135},
  { ARM::BI__builtin_arm_mve_vpselq_u32, 16218, 16135},
  { ARM::BI__builtin_arm_mve_vpselq_u64, 16229, 16135},
  { ARM::BI__builtin_arm_mve_vpselq_u8, 16240, 16135},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s16, 16259, 16250},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s32, 16272, 16250},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s8, 16285, 16250},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u16, 16297, 16250},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u32, 16310, 16250},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u8, 16323, 16250},
  { ARM::BI__builtin_arm_mve_vqaddq_s16, 16342, 16335},
  { ARM::BI__builtin_arm_mve_vqaddq_s32, 16353, 16335},
  { ARM::BI__builtin_arm_mve_vqaddq_s8, 16364, 16335},
  { ARM::BI__builtin_arm_mve_vqaddq_u16, 16374, 16335},
  { ARM::BI__builtin_arm_mve_vqaddq_u32, 16385, 16335},
  { ARM::BI__builtin_arm_mve_vqaddq_u8, 16396, 16335},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s16, 16417, 16406},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s32, 16432, 16406},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s8, 16447, 16406},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s16, 16470, 16461},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s32, 16483, 16461},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s8, 16496, 16461},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s16, 16520, 16508},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s32, 16536, 16508},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s8, 16552, 16508},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s16, 16577, 16567},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s32, 16591, 16567},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s8, 16605, 16567},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s16, 16630, 16618},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s32, 16646, 16618},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s8, 16662, 16618},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u16, 16677, 16618},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u32, 16693, 16618},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u8, 16709, 16618},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s16, 16734, 16724},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s32, 16748, 16724},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s8, 16762, 16724},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u16, 16775, 16724},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u32, 16789, 16724},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u8, 16803, 16724},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s16, 16824, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s32, 16838, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s8, 16852, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u16, 16865, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u32, 16879, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u8, 16893, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_s16, 16906, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_s32, 16918, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_s8, 16930, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_u16, 16941, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_u32, 16953, 16816},
  { ARM::BI__builtin_arm_mve_vqrshlq_u8, 16965, 16816},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s16, 16988, 16976},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s32, 17006, 16976},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u16, 17024, 16976},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u32, 17042, 16976},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_s16, 17070, 17060},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_s32, 17086, 17060},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_u16, 17102, 17060},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_u32, 17118, 17060},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s16, 17146, 17134},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s32, 17164, 17134},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u16, 17182, 17134},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u32, 17200, 17134},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_s16, 17228, 17218},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_s32, 17244, 17218},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_u16, 17260, 17218},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_u32, 17276, 17218},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s16, 17305, 17292},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s32, 17324, 17292},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_n_s16, 17354, 17343},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_n_s32, 17371, 17343},
  { ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s16, 17401, 17388},
  { ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s32, 17420, 17388},
  { ARM::BI__builtin_arm_mve_vqrshruntq_n_s16, 17450, 17439},
  { ARM::BI__builtin_arm_mve_vqrshruntq_n_s32, 17467, 17439},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s16, 17495, 17484},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s32, 17510, 17484},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s8, 17525, 17484},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u16, 17539, 17484},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u32, 17554, 17484},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u8, 17569, 17484},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s16, 17594, 17583},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s32, 17609, 17583},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s8, 17624, 17583},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u16, 17638, 17583},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u32, 17653, 17583},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u8, 17668, 17583},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s16, 17691, 17682},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s32, 17704, 17682},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s8, 17717, 17682},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u16, 17729, 17682},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u32, 17742, 17682},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u8, 17755, 17682},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s16, 17776, 17767},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s32, 17789, 17767},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s8, 17802, 17767},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u16, 17814, 17767},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u32, 17827, 17767},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u8, 17840, 17767},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s16, 17861, 17852},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s32, 17874, 17852},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s8, 17887, 17852},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u16, 17899, 17852},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u32, 17912, 17852},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u8, 17925, 17852},
  { ARM::BI__builtin_arm_mve_vqshlq_s16, 17944, 17937},
  { ARM::BI__builtin_arm_mve_vqshlq_s32, 17955, 17937},
  { ARM::BI__builtin_arm_mve_vqshlq_s8, 17966, 17937},
  { ARM::BI__builtin_arm_mve_vqshlq_u16, 17976, 17937},
  { ARM::BI__builtin_arm_mve_vqshlq_u32, 17987, 17937},
  { ARM::BI__builtin_arm_mve_vqshlq_u8, 17998, 17937},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s16, 18018, 18008},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s32, 18034, 18008},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s8, 18050, 18008},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s16, 18073, 18065},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s32, 18087, 18065},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s8, 18101, 18065},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s16, 18125, 18114},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s32, 18142, 18114},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u16, 18159, 18114},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u32, 18176, 18114},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_s16, 18202, 18193},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_s32, 18217, 18193},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_u16, 18232, 18193},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_u32, 18247, 18193},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_s16, 18273, 18262},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_s32, 18290, 18262},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_u16, 18307, 18262},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_u32, 18324, 18262},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_s16, 18350, 18341},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_s32, 18365, 18341},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_u16, 18380, 18341},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_u32, 18395, 18341},
  { ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s16, 18422, 18410},
  { ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s32, 18440, 18410},
  { ARM::BI__builtin_arm_mve_vqshrunbq_n_s16, 18468, 18458},
  { ARM::BI__builtin_arm_mve_vqshrunbq_n_s32, 18484, 18458},
  { ARM::BI__builtin_arm_mve_vqshruntq_m_n_s16, 18512, 18500},
  { ARM::BI__builtin_arm_mve_vqshruntq_m_n_s32, 18530, 18500},
  { ARM::BI__builtin_arm_mve_vqshruntq_n_s16, 18558, 18548},
  { ARM::BI__builtin_arm_mve_vqshruntq_n_s32, 18574, 18548},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s16, 18599, 18590},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s32, 18612, 18590},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s8, 18625, 18590},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u16, 18637, 18590},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u32, 18650, 18590},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u8, 18663, 18590},
  { ARM::BI__builtin_arm_mve_vqsubq_s16, 18682, 18675},
  { ARM::BI__builtin_arm_mve_vqsubq_s32, 18693, 18675},
  { ARM::BI__builtin_arm_mve_vqsubq_s8, 18704, 18675},
  { ARM::BI__builtin_arm_mve_vqsubq_u16, 18714, 18675},
  { ARM::BI__builtin_arm_mve_vqsubq_u32, 18725, 18675},
  { ARM::BI__builtin_arm_mve_vqsubq_u8, 18736, 18675},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_f32, 18764, 18746},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s16, 18786, 18746},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s32, 18808, 18746},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s64, 18830, 18746},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s8, 18852, 18746},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u16, 18873, 18746},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u32, 18895, 18746},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u64, 18917, 18746},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u8, 18939, 18746},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_f16, 18978, 18960},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s16, 19000, 18960},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s32, 19022, 18960},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s64, 19044, 18960},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s8, 19066, 18960},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u16, 19087, 18960},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u32, 19109, 18960},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u64, 19131, 18960},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u8, 19153, 18960},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_f16, 19192, 19174},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_f32, 19214, 19174},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s32, 19236, 19174},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s64, 19258, 19174},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s8, 19280, 19174},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u16, 19301, 19174},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u32, 19323, 19174},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u64, 19345, 19174},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u8, 19367, 19174},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_f16, 19406, 19388},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_f32, 19428, 19388},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s16, 19450, 19388},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s64, 19472, 19388},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s8, 19494, 19388},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u16, 19515, 19388},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u32, 19537, 19388},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u64, 19559, 19388},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u8, 19581, 19388},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_f16, 19620, 19602},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_f32, 19642, 19602},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s16, 19664, 19602},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s32, 19686, 19602},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s8, 19708, 19602},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u16, 19729, 19602},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u32, 19751, 19602},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u64, 19773, 19602},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u8, 19795, 19602},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_f16, 19833, 19816},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_f32, 19854, 19816},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s16, 19875, 19816},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s32, 19896, 19816},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s64, 19917, 19816},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u16, 19938, 19816},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u32, 19959, 19816},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u64, 19980, 19816},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u8, 20001, 19816},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_f16, 20039, 20021},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_f32, 20061, 20021},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s16, 20083, 20021},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s32, 20105, 20021},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s64, 20127, 20021},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s8, 20149, 20021},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u32, 20170, 20021},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u64, 20192, 20021},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u8, 20214, 20021},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_f16, 20253, 20235},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_f32, 20275, 20235},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s16, 20297, 20235},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s32, 20319, 20235},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s64, 20341, 20235},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s8, 20363, 20235},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u16, 20384, 20235},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u64, 20406, 20235},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u8, 20428, 20235},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_f16, 20467, 20449},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_f32, 20489, 20449},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s16, 20511, 20449},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s32, 20533, 20449},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s64, 20555, 20449},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s8, 20577, 20449},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u16, 20598, 20449},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u32, 20620, 20449},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u8, 20642, 20449},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_f16, 20680, 20663},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_f32, 20701, 20663},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s16, 20722, 20663},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s32, 20743, 20663},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s64, 20764, 20663},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s8, 20785, 20663},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u16, 20805, 20663},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u32, 20826, 20663},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u64, 20847, 20663},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s16, 20878, 20868},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s32, 20892, 20868},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s8, 20906, 20868},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u16, 20919, 20868},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u32, 20933, 20868},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u8, 20947, 20868},
  { ARM::BI__builtin_arm_mve_vrhaddq_s16, 20968, 20960},
  { ARM::BI__builtin_arm_mve_vrhaddq_s32, 20980, 20960},
  { ARM::BI__builtin_arm_mve_vrhaddq_s8, 20992, 20960},
  { ARM::BI__builtin_arm_mve_vrhaddq_u16, 21003, 20960},
  { ARM::BI__builtin_arm_mve_vrhaddq_u32, 21015, 20960},
  { ARM::BI__builtin_arm_mve_vrhaddq_u8, 21027, 20960},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s16, 21048, 21038},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s32, 21062, 21038},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s8, 21076, 21038},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u16, 21089, 21038},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u32, 21103, 21038},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u8, 21117, 21038},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_s32, 21145, 21130},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_u32, 21164, 21130},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_s32, 21196, 21183},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_u32, 21213, 21183},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaxq_p_s32, 21246, 21230},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaxq_s32, 21280, 21266},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_p_s32, 21312, 21298},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_p_u32, 21330, 21298},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_s32, 21360, 21348},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_u32, 21376, 21348},
  { ARM::BI__builtin_arm_mve_vrmlaldavhxq_p_s32, 21407, 21392},
  { ARM::BI__builtin_arm_mve_vrmlaldavhxq_s32, 21439, 21426},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaq_p_s32, 21471, 21456},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaq_s32, 21503, 21490},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaxq_p_s32, 21536, 21520},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaxq_s32, 21570, 21556},
  { ARM::BI__builtin_arm_mve_vrmlsldavhq_p_s32, 21602, 21588},
  { ARM::BI__builtin_arm_mve_vrmlsldavhq_s32, 21632, 21620},
  { ARM::BI__builtin_arm_mve_vrmlsldavhxq_p_s32, 21663, 21648},
  { ARM::BI__builtin_arm_mve_vrmlsldavhxq_s32, 21695, 21682},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s16, 21722, 21712},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s32, 21736, 21712},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s8, 21750, 21712},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u16, 21763, 21712},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u32, 21777, 21712},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u8, 21791, 21712},
  { ARM::BI__builtin_arm_mve_vrmulhq_s16, 21812, 21804},
  { ARM::BI__builtin_arm_mve_vrmulhq_s32, 21824, 21804},
  { ARM::BI__builtin_arm_mve_vrmulhq_s8, 21836, 21804},
  { ARM::BI__builtin_arm_mve_vrmulhq_u16, 21847, 21804},
  { ARM::BI__builtin_arm_mve_vrmulhq_u32, 21859, 21804},
  { ARM::BI__builtin_arm_mve_vrmulhq_u8, 21871, 21804},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s16, 21892, 21882},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s32, 21906, 21882},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s8, 21920, 21882},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u16, 21933, 21882},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u32, 21947, 21882},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u8, 21961, 21882},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s16, 21985, 21974},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s32, 22000, 21974},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s8, 22015, 21974},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u16, 22029, 21974},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u32, 22044, 21974},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u8, 22059, 21974},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s16, 22082, 22073},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s32, 22095, 22073},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s8, 22108, 22073},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u16, 22120, 22073},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u32, 22133, 22073},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u8, 22146, 22073},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s16, 22165, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s32, 22178, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s8, 22191, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u16, 22203, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u32, 22216, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u8, 22229, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_s16, 22241, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_s32, 22252, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_s8, 22263, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_u16, 22273, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_u32, 22284, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_u8, 22295, 22158},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s16, 22314, 22305},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s32, 22327, 22305},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s8, 22340, 22305},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u16, 22352, 22305},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u32, 22365, 22305},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u8, 22378, 22305},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s16, 22401, 22390},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s32, 22418, 22390},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u16, 22435, 22390},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u32, 22452, 22390},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_s16, 22478, 22469},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_s32, 22493, 22469},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_u16, 22508, 22469},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_u32, 22523, 22469},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_s16, 22549, 22538},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_s32, 22566, 22538},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_u16, 22583, 22538},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_u32, 22600, 22538},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_s16, 22626, 22617},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_s32, 22641, 22617},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_u16, 22656, 22617},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_u32, 22671, 22617},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s16, 22695, 22686},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s32, 22710, 22686},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s8, 22725, 22686},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u16, 22739, 22686},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u32, 22754, 22686},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u8, 22769, 22686},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s16, 22790, 22783},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s32, 22803, 22783},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s8, 22816, 22783},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u16, 22828, 22783},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u32, 22841, 22783},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u8, 22854, 22783},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s16, 22875, 22866},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s32, 22890, 22866},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s8, 22905, 22866},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u16, 22919, 22866},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u32, 22934, 22866},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u8, 22949, 22866},
  { ARM::BI__builtin_arm_mve_vsetq_lane_f16, 22974, 22963},
  { ARM::BI__builtin_arm_mve_vsetq_lane_f32, 22989, 22963},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s16, 23004, 22963},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s32, 23019, 22963},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s64, 23034, 22963},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s8, 23049, 22963},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u16, 23063, 22963},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u32, 23078, 22963},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u64, 23093, 22963},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u8, 23108, 22963},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_s16, 23132, 23122},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_s8, 23148, 23122},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_u16, 23163, 23122},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_u8, 23179, 23122},
  { ARM::BI__builtin_arm_mve_vshllbq_n_s16, 23202, 23194},
  { ARM::BI__builtin_arm_mve_vshllbq_n_s8, 23216, 23194},
  { ARM::BI__builtin_arm_mve_vshllbq_n_u16, 23229, 23194},
  { ARM::BI__builtin_arm_mve_vshllbq_n_u8, 23243, 23194},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_s16, 23266, 23256},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_s8, 23282, 23256},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_u16, 23297, 23256},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_u8, 23313, 23256},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_s16, 23338, 23328},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_s8, 23354, 23328},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_u16, 23369, 23328},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_u8, 23385, 23328},
  { ARM::BI__builtin_arm_mve_vshlltq_n_s16, 23408, 23400},
  { ARM::BI__builtin_arm_mve_vshlltq_n_s8, 23422, 23400},
  { ARM::BI__builtin_arm_mve_vshlltq_n_u16, 23435, 23400},
  { ARM::BI__builtin_arm_mve_vshlltq_n_u8, 23449, 23400},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_s16, 23472, 23462},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_s8, 23488, 23462},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_u16, 23503, 23462},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_u8, 23519, 23462},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s16, 23544, 23534},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s32, 23558, 23534},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s8, 23572, 23534},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u16, 23585, 23534},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u32, 23599, 23534},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u8, 23613, 23534},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s16, 23636, 23626},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s32, 23650, 23626},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s8, 23664, 23626},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u16, 23677, 23626},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u32, 23691, 23626},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u8, 23705, 23626},
  { ARM::BI__builtin_arm_mve_vshlq_m_s16, 23726, 23718},
  { ARM::BI__builtin_arm_mve_vshlq_m_s32, 23738, 23718},
  { ARM::BI__builtin_arm_mve_vshlq_m_s8, 23750, 23718},
  { ARM::BI__builtin_arm_mve_vshlq_m_u16, 23761, 23718},
  { ARM::BI__builtin_arm_mve_vshlq_m_u32, 23773, 23718},
  { ARM::BI__builtin_arm_mve_vshlq_m_u8, 23785, 23718},
  { ARM::BI__builtin_arm_mve_vshlq_n_s16, 23804, 23796},
  { ARM::BI__builtin_arm_mve_vshlq_n_s32, 23816, 23796},
  { ARM::BI__builtin_arm_mve_vshlq_n_s8, 23828, 23796},
  { ARM::BI__builtin_arm_mve_vshlq_n_u16, 23839, 23796},
  { ARM::BI__builtin_arm_mve_vshlq_n_u32, 23851, 23796},
  { ARM::BI__builtin_arm_mve_vshlq_n_u8, 23863, 23796},
  { ARM::BI__builtin_arm_mve_vshlq_r_s16, 23882, 23874},
  { ARM::BI__builtin_arm_mve_vshlq_r_s32, 23894, 23874},
  { ARM::BI__builtin_arm_mve_vshlq_r_s8, 23906, 23874},
  { ARM::BI__builtin_arm_mve_vshlq_r_u16, 23917, 23874},
  { ARM::BI__builtin_arm_mve_vshlq_r_u32, 23929, 23874},
  { ARM::BI__builtin_arm_mve_vshlq_r_u8, 23941, 23874},
  { ARM::BI__builtin_arm_mve_vshlq_s16, 23958, 23952},
  { ARM::BI__builtin_arm_mve_vshlq_s32, 23968, 23952},
  { ARM::BI__builtin_arm_mve_vshlq_s8, 23978, 23952},
  { ARM::BI__builtin_arm_mve_vshlq_u16, 23987, 23952},
  { ARM::BI__builtin_arm_mve_vshlq_u32, 23997, 23952},
  { ARM::BI__builtin_arm_mve_vshlq_u8, 24007, 23952},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s16, 24026, 24016},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s32, 24040, 24016},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s8, 24054, 24016},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u16, 24067, 24016},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u32, 24081, 24016},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u8, 24095, 24016},
  { ARM::BI__builtin_arm_mve_vshlq_x_s16, 24116, 24108},
  { ARM::BI__builtin_arm_mve_vshlq_x_s32, 24128, 24108},
  { ARM::BI__builtin_arm_mve_vshlq_x_s8, 24140, 24108},
  { ARM::BI__builtin_arm_mve_vshlq_x_u16, 24151, 24108},
  { ARM::BI__builtin_arm_mve_vshlq_x_u32, 24163, 24108},
  { ARM::BI__builtin_arm_mve_vshlq_x_u8, 24175, 24108},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_s16, 24196, 24186},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_s32, 24212, 24186},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_u16, 24228, 24186},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_u32, 24244, 24186},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_s16, 24268, 24260},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_s32, 24282, 24260},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_u16, 24296, 24260},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_u32, 24310, 24260},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_s16, 24334, 24324},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_s32, 24350, 24324},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_u16, 24366, 24324},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_u32, 24382, 24324},
  { ARM::BI__builtin_arm_mve_vshrntq_n_s16, 24406, 24398},
  { ARM::BI__builtin_arm_mve_vshrntq_n_s32, 24420, 24398},
  { ARM::BI__builtin_arm_mve_vshrntq_n_u16, 24434, 24398},
  { ARM::BI__builtin_arm_mve_vshrntq_n_u32, 24448, 24398},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s16, 24470, 24462},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s32, 24484, 24462},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s8, 24498, 24462},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u16, 24511, 24462},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u32, 24525, 24462},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u8, 24539, 24462},
  { ARM::BI__builtin_arm_mve_vshrq_n_s16, 24558, 24552},
  { ARM::BI__builtin_arm_mve_vshrq_n_s32, 24570, 24552},
  { ARM::BI__builtin_arm_mve_vshrq_n_s8, 24582, 24552},
  { ARM::BI__builtin_arm_mve_vshrq_n_u16, 24593, 24552},
  { ARM::BI__builtin_arm_mve_vshrq_n_u32, 24605, 24552},
  { ARM::BI__builtin_arm_mve_vshrq_n_u8, 24617, 24552},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s16, 24636, 24628},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s32, 24650, 24628},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s8, 24664, 24628},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u16, 24677, 24628},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u32, 24691, 24628},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u8, 24705, 24628},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s16, 24726, 24718},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s32, 24740, 24718},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s8, 24754, 24718},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u16, 24767, 24718},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u32, 24781, 24718},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u8, 24795, 24718},
  { ARM::BI__builtin_arm_mve_vsliq_n_s16, 24814, 24808},
  { ARM::BI__builtin_arm_mve_vsliq_n_s32, 24826, 24808},
  { ARM::BI__builtin_arm_mve_vsliq_n_s8, 24838, 24808},
  { ARM::BI__builtin_arm_mve_vsliq_n_u16, 24849, 24808},
  { ARM::BI__builtin_arm_mve_vsliq_n_u32, 24861, 24808},
  { ARM::BI__builtin_arm_mve_vsliq_n_u8, 24873, 24808},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s16, 24892, 24884},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s32, 24906, 24884},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s8, 24920, 24884},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u16, 24933, 24884},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u32, 24947, 24884},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u8, 24961, 24884},
  { ARM::BI__builtin_arm_mve_vsriq_n_s16, 24980, 24974},
  { ARM::BI__builtin_arm_mve_vsriq_n_s32, 24992, 24974},
  { ARM::BI__builtin_arm_mve_vsriq_n_s8, 25004, 24974},
  { ARM::BI__builtin_arm_mve_vsriq_n_u16, 25015, 24974},
  { ARM::BI__builtin_arm_mve_vsriq_n_u32, 25027, 24974},
  { ARM::BI__builtin_arm_mve_vsriq_n_u8, 25039, 24974},
  { ARM::BI__builtin_arm_mve_vst1q_f16, 25056, 25050},
  { ARM::BI__builtin_arm_mve_vst1q_f32, 25066, 25050},
  { ARM::BI__builtin_arm_mve_vst1q_p_f16, 25084, 25076},
  { ARM::BI__builtin_arm_mve_vst1q_p_f32, 25096, 25076},
  { ARM::BI__builtin_arm_mve_vst1q_p_s16, 25108, 25076},
  { ARM::BI__builtin_arm_mve_vst1q_p_s32, 25120, 25076},
  { ARM::BI__builtin_arm_mve_vst1q_p_s8, 25132, 25076},
  { ARM::BI__builtin_arm_mve_vst1q_p_u16, 25143, 25076},
  { ARM::BI__builtin_arm_mve_vst1q_p_u32, 25155, 25076},
  { ARM::BI__builtin_arm_mve_vst1q_p_u8, 25167, 25076},
  { ARM::BI__builtin_arm_mve_vst1q_s16, 25178, 25050},
  { ARM::BI__builtin_arm_mve_vst1q_s32, 25188, 25050},
  { ARM::BI__builtin_arm_mve_vst1q_s8, 25198, 25050},
  { ARM::BI__builtin_arm_mve_vst1q_u16, 25207, 25050},
  { ARM::BI__builtin_arm_mve_vst1q_u32, 25217, 25050},
  { ARM::BI__builtin_arm_mve_vst1q_u8, 25227, 25050},
  { ARM::BI__builtin_arm_mve_vst2q_f16, 25242, 25236},
  { ARM::BI__builtin_arm_mve_vst2q_f32, 25252, 25236},
  { ARM::BI__builtin_arm_mve_vst2q_s16, 25262, 25236},
  { ARM::BI__builtin_arm_mve_vst2q_s32, 25272, 25236},
  { ARM::BI__builtin_arm_mve_vst2q_s8, 25282, 25236},
  { ARM::BI__builtin_arm_mve_vst2q_u16, 25291, 25236},
  { ARM::BI__builtin_arm_mve_vst2q_u32, 25301, 25236},
  { ARM::BI__builtin_arm_mve_vst2q_u8, 25311, 25236},
  { ARM::BI__builtin_arm_mve_vst4q_f16, 25326, 25320},
  { ARM::BI__builtin_arm_mve_vst4q_f32, 25336, 25320},
  { ARM::BI__builtin_arm_mve_vst4q_s16, 25346, 25320},
  { ARM::BI__builtin_arm_mve_vst4q_s32, 25356, 25320},
  { ARM::BI__builtin_arm_mve_vst4q_s8, 25366, 25320},
  { ARM::BI__builtin_arm_mve_vst4q_u16, 25375, 25320},
  { ARM::BI__builtin_arm_mve_vst4q_u32, 25385, 25320},
  { ARM::BI__builtin_arm_mve_vst4q_u8, 25395, 25320},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s16, 25413, 25404},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s32, 25426, 25404},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s8, 25439, 25404},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u16, 25451, 25404},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u32, 25464, 25404},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u8, 25477, 25404},
  { ARM::BI__builtin_arm_mve_vstrbq_s16, 25496, 25489},
  { ARM::BI__builtin_arm_mve_vstrbq_s32, 25507, 25489},
  { ARM::BI__builtin_arm_mve_vstrbq_s8, 25518, 25489},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s16, 25552, 25528},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s32, 25580, 25528},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s8, 25608, 25528},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u16, 25635, 25528},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u32, 25663, 25528},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u8, 25691, 25528},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s16, 25740, 25718},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s32, 25766, 25718},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s8, 25792, 25718},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u16, 25817, 25718},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u32, 25843, 25718},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u8, 25869, 25718},
  { ARM::BI__builtin_arm_mve_vstrbq_u16, 25894, 25489},
  { ARM::BI__builtin_arm_mve_vstrbq_u32, 25905, 25489},
  { ARM::BI__builtin_arm_mve_vstrbq_u8, 25916, 25489},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_s64, 25948, 25926},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_u64, 25974, 25926},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_s64, 26020, 26000},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_u64, 26044, 26000},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64, 26093, 26068},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64, 26122, 26068},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_s64, 26174, 26151},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_u64, 26201, 26151},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_s64, 26252, 26228},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_u64, 26280, 26228},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_s64, 26330, 26308},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_u64, 26356, 26308},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_s64, 26414, 26382},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_u64, 26450, 26382},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_s64, 26516, 26486},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_u64, 26550, 26486},
  { ARM::BI__builtin_arm_mve_vstrhq_f16, 26591, 26584},
  { ARM::BI__builtin_arm_mve_vstrhq_p_f16, 26611, 26602},
  { ARM::BI__builtin_arm_mve_vstrhq_p_s16, 26624, 26602},
  { ARM::BI__builtin_arm_mve_vstrhq_p_s32, 26637, 26602},
  { ARM::BI__builtin_arm_mve_vstrhq_p_u16, 26650, 26602},
  { ARM::BI__builtin_arm_mve_vstrhq_p_u32, 26663, 26602},
  { ARM::BI__builtin_arm_mve_vstrhq_s16, 26676, 26584},
  { ARM::BI__builtin_arm_mve_vstrhq_s32, 26687, 26584},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_f16, 26720, 26698},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_f16, 26770, 26746},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s16, 26798, 26746},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s32, 26826, 26746},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u16, 26854, 26746},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u32, 26882, 26746},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s16, 26910, 26698},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s32, 26936, 26698},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u16, 26962, 26698},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u32, 26988, 26698},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_f16, 27044, 27014},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_f16, 27110, 27078},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s16, 27146, 27078},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s32, 27182, 27078},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u16, 27218, 27078},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u32, 27254, 27078},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s16, 27290, 27014},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s32, 27324, 27014},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u16, 27358, 27014},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u32, 27392, 27014},
  { ARM::BI__builtin_arm_mve_vstrhq_u16, 27426, 26584},
  { ARM::BI__builtin_arm_mve_vstrhq_u32, 27437, 26584},
  { ARM::BI__builtin_arm_mve_vstrwq_f32, 27455, 27448},
  { ARM::BI__builtin_arm_mve_vstrwq_p_f32, 27475, 27466},
  { ARM::BI__builtin_arm_mve_vstrwq_p_s32, 27488, 27466},
  { ARM::BI__builtin_arm_mve_vstrwq_p_u32, 27501, 27466},
  { ARM::BI__builtin_arm_mve_vstrwq_s32, 27514, 27448},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_f32, 27545, 27525},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_f32, 27591, 27569},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_s32, 27617, 27569},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_u32, 27643, 27569},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_s32, 27669, 27525},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_u32, 27693, 27525},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_f32, 27740, 27717},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32, 27792, 27767},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32, 27821, 27767},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32, 27850, 27767},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_s32, 27879, 27717},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_u32, 27906, 27717},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_f32, 27955, 27933},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_f32, 28005, 27981},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_s32, 28033, 27981},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_u32, 28061, 27981},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_s32, 28089, 27933},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_u32, 28115, 27933},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_f32, 28171, 28141},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_f32, 28237, 28205},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_s32, 28273, 28205},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_u32, 28309, 28205},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_s32, 28345, 28141},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_u32, 28379, 28141},
  { ARM::BI__builtin_arm_mve_vstrwq_u32, 28413, 27448},
  { ARM::BI__builtin_arm_mve_vsubq_f16, 28430, 28424},
  { ARM::BI__builtin_arm_mve_vsubq_f32, 28440, 28424},
  { ARM::BI__builtin_arm_mve_vsubq_m_f16, 28458, 28450},
  { ARM::BI__builtin_arm_mve_vsubq_m_f32, 28470, 28450},
  { ARM::BI__builtin_arm_mve_vsubq_m_s16, 28482, 28450},
  { ARM::BI__builtin_arm_mve_vsubq_m_s32, 28494, 28450},
  { ARM::BI__builtin_arm_mve_vsubq_m_s8, 28506, 28450},
  { ARM::BI__builtin_arm_mve_vsubq_m_u16, 28517, 28450},
  { ARM::BI__builtin_arm_mve_vsubq_m_u32, 28529, 28450},
  { ARM::BI__builtin_arm_mve_vsubq_m_u8, 28541, 28450},
  { ARM::BI__builtin_arm_mve_vsubq_s16, 28552, 28424},
  { ARM::BI__builtin_arm_mve_vsubq_s32, 28562, 28424},
  { ARM::BI__builtin_arm_mve_vsubq_s8, 28572, 28424},
  { ARM::BI__builtin_arm_mve_vsubq_u16, 28581, 28424},
  { ARM::BI__builtin_arm_mve_vsubq_u32, 28591, 28424},
  { ARM::BI__builtin_arm_mve_vsubq_u8, 28601, 28424},
  { ARM::BI__builtin_arm_mve_vsubq_x_f16, 28618, 28610},
  { ARM::BI__builtin_arm_mve_vsubq_x_f32, 28630, 28610},
  { ARM::BI__builtin_arm_mve_vsubq_x_s16, 28642, 28610},
  { ARM::BI__builtin_arm_mve_vsubq_x_s32, 28654, 28610},
  { ARM::BI__builtin_arm_mve_vsubq_x_s8, 28666, 28610},
  { ARM::BI__builtin_arm_mve_vsubq_x_u16, 28677, 28610},
  { ARM::BI__builtin_arm_mve_vsubq_x_u32, 28689, 28610},
  { ARM::BI__builtin_arm_mve_vsubq_x_u8, 28701, 28610},
  { ARM::BI__builtin_arm_mve_vuninitializedq_f16, 28712, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_f32, 28732, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f16, 28768, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f32, 28800, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s16, 28832, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s32, 28864, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s64, 28896, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s8, 28928, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u16, 28959, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u32, 28991, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u64, 29023, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u8, 29055, 28752},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s16, 29086, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s32, 29106, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s64, 29126, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s8, 29146, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u16, 29165, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u32, 29185, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u64, 29205, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u8, 29225, -1},
};

static const char IntrinNames[] = {
    "asrl\000lsll\000sqrshr\000sqrshrl\000sqrshrl_sat48\000sqshl\000sqshll\000"
    "srshr\000srshrl\000uqrshl\000uqrshll\000uqrshll_sat48\000uqshl\000uqshl"
    "l\000urshr\000urshrl\000vabavq_p\000vabavq_p_s16\000vabavq_p_s32\000vab"
    "avq_p_s8\000vabavq_p_u16\000vabavq_p_u32\000vabavq_p_u8\000vabavq\000va"
    "bavq_s16\000vabavq_s32\000vabavq_s8\000vabavq_u16\000vabavq_u32\000vaba"
    "vq_u8\000vabdq\000vabdq_f16\000vabdq_f32\000vabdq_m\000vabdq_m_f16\000v"
    "abdq_m_f32\000vabdq_m_s16\000vabdq_m_s32\000vabdq_m_s8\000vabdq_m_u16\000"
    "vabdq_m_u32\000vabdq_m_u8\000vabdq_s16\000vabdq_s32\000vabdq_s8\000vabd"
    "q_u16\000vabdq_u32\000vabdq_u8\000vabdq_x\000vabdq_x_f16\000vabdq_x_f32"
    "\000vabdq_x_s16\000vabdq_x_s32\000vabdq_x_s8\000vabdq_x_u16\000vabdq_x_"
    "u32\000vabdq_x_u8\000vadciq_m\000vadciq_m_s32\000vadciq_m_u32\000vadciq"
    "\000vadciq_s32\000vadciq_u32\000vadcq_m\000vadcq_m_s32\000vadcq_m_u32\000"
    "vadcq\000vadcq_s32\000vadcq_u32\000vaddq\000vaddq_f16\000vaddq_f32\000v"
    "addq_m\000vaddq_m_f16\000vaddq_m_f32\000vaddq_m_s16\000vaddq_m_s32\000v"
    "addq_m_s8\000vaddq_m_u16\000vaddq_m_u32\000vaddq_m_u8\000vaddq_s16\000v"
    "addq_s32\000vaddq_s8\000vaddq_u16\000vaddq_u32\000vaddq_u8\000vaddq_x\000"
    "vaddq_x_f16\000vaddq_x_f32\000vaddq_x_s16\000vaddq_x_s32\000vaddq_x_s8\000"
    "vaddq_x_u16\000vaddq_x_u32\000vaddq_x_u8\000vandq\000vandq_f16\000vandq"
    "_f32\000vandq_m\000vandq_m_f16\000vandq_m_f32\000vandq_m_s16\000vandq_m"
    "_s32\000vandq_m_s8\000vandq_m_u16\000vandq_m_u32\000vandq_m_u8\000vandq"
    "_s16\000vandq_s32\000vandq_s8\000vandq_u16\000vandq_u32\000vandq_u8\000"
    "vandq_x\000vandq_x_f16\000vandq_x_f32\000vandq_x_s16\000vandq_x_s32\000"
    "vandq_x_s8\000vandq_x_u16\000vandq_x_u32\000vandq_x_u8\000vbicq\000vbic"
    "q_f16\000vbicq_f32\000vbicq_m\000vbicq_m_f16\000vbicq_m_f32\000vbicq_m_"
    "n\000vbicq_m_n_s16\000vbicq_m_n_s32\000vbicq_m_n_u16\000vbicq_m_n_u32\000"
    "vbicq_m_s16\000vbicq_m_s32\000vbicq_m_s8\000vbicq_m_u16\000vbicq_m_u32\000"
    "vbicq_m_u8\000vbicq_n_s16\000vbicq_n_s32\000vbicq_n_u16\000vbicq_n_u32\000"
    "vbicq_s16\000vbicq_s32\000vbicq_s8\000vbicq_u16\000vbicq_u32\000vbicq_u"
    "8\000vbicq_x\000vbicq_x_f16\000vbicq_x_f32\000vbicq_x_s16\000vbicq_x_s3"
    "2\000vbicq_x_s8\000vbicq_x_u16\000vbicq_x_u32\000vbicq_x_u8\000vcaddq_r"
    "ot270\000vcaddq_rot270_f16\000vcaddq_rot270_f32\000vcaddq_rot270_m\000v"
    "caddq_rot270_m_f16\000vcaddq_rot270_m_f32\000vcaddq_rot270_m_s16\000vca"
    "ddq_rot270_m_s32\000vcaddq_rot270_m_s8\000vcaddq_rot270_m_u16\000vcaddq"
    "_rot270_m_u32\000vcaddq_rot270_m_u8\000vcaddq_rot270_s16\000vcaddq_rot2"
    "70_s32\000vcaddq_rot270_s8\000vcaddq_rot270_u16\000vcaddq_rot270_u32\000"
    "vcaddq_rot270_u8\000vcaddq_rot270_x\000vcaddq_rot270_x_f16\000vcaddq_ro"
    "t270_x_f32\000vcaddq_rot270_x_s16\000vcaddq_rot270_x_s32\000vcaddq_rot2"
    "70_x_s8\000vcaddq_rot270_x_u16\000vcaddq_rot270_x_u32\000vcaddq_rot270_"
    "x_u8\000vcaddq_rot90\000vcaddq_rot90_f16\000vcaddq_rot90_f32\000vcaddq_"
    "rot90_m\000vcaddq_rot90_m_f16\000vcaddq_rot90_m_f32\000vcaddq_rot90_m_s"
    "16\000vcaddq_rot90_m_s32\000vcaddq_rot90_m_s8\000vcaddq_rot90_m_u16\000"
    "vcaddq_rot90_m_u32\000vcaddq_rot90_m_u8\000vcaddq_rot90_s16\000vcaddq_r"
    "ot90_s32\000vcaddq_rot90_s8\000vcaddq_rot90_u16\000vcaddq_rot90_u32\000"
    "vcaddq_rot90_u8\000vcaddq_rot90_x\000vcaddq_rot90_x_f16\000vcaddq_rot90"
    "_x_f32\000vcaddq_rot90_x_s16\000vcaddq_rot90_x_s32\000vcaddq_rot90_x_s8"
    "\000vcaddq_rot90_x_u16\000vcaddq_rot90_x_u32\000vcaddq_rot90_x_u8\000vc"
    "mlaq\000vcmlaq_f16\000vcmlaq_f32\000vcmlaq_m\000vcmlaq_m_f16\000vcmlaq_"
    "m_f32\000vcmlaq_rot180\000vcmlaq_rot180_f16\000vcmlaq_rot180_f32\000vcm"
    "laq_rot180_m\000vcmlaq_rot180_m_f16\000vcmlaq_rot180_m_f32\000vcmlaq_ro"
    "t270\000vcmlaq_rot270_f16\000vcmlaq_rot270_f32\000vcmlaq_rot270_m\000vc"
    "mlaq_rot270_m_f16\000vcmlaq_rot270_m_f32\000vcmlaq_rot90\000vcmlaq_rot9"
    "0_f16\000vcmlaq_rot90_f32\000vcmlaq_rot90_m\000vcmlaq_rot90_m_f16\000vc"
    "mlaq_rot90_m_f32\000vcmpcsq_m\000vcmpcsq_m_n_u16\000vcmpcsq_m_n_u32\000"
    "vcmpcsq_m_n_u8\000vcmpcsq_m_u16\000vcmpcsq_m_u32\000vcmpcsq_m_u8\000vcm"
    "pcsq\000vcmpcsq_n_u16\000vcmpcsq_n_u32\000vcmpcsq_n_u8\000vcmpcsq_u16\000"
    "vcmpcsq_u32\000vcmpcsq_u8\000vcmpeqq\000vcmpeqq_f16\000vcmpeqq_f32\000v"
    "cmpeqq_m\000vcmpeqq_m_f16\000vcmpeqq_m_f32\000vcmpeqq_m_n_f16\000vcmpeq"
    "q_m_n_f32\000vcmpeqq_m_n_s16\000vcmpeqq_m_n_s32\000vcmpeqq_m_n_s8\000vc"
    "mpeqq_m_n_u16\000vcmpeqq_m_n_u32\000vcmpeqq_m_n_u8\000vcmpeqq_m_s16\000"
    "vcmpeqq_m_s32\000vcmpeqq_m_s8\000vcmpeqq_m_u16\000vcmpeqq_m_u32\000vcmp"
    "eqq_m_u8\000vcmpeqq_n_f16\000vcmpeqq_n_f32\000vcmpeqq_n_s16\000vcmpeqq_"
    "n_s32\000vcmpeqq_n_s8\000vcmpeqq_n_u16\000vcmpeqq_n_u32\000vcmpeqq_n_u8"
    "\000vcmpeqq_s16\000vcmpeqq_s32\000vcmpeqq_s8\000vcmpeqq_u16\000vcmpeqq_"
    "u32\000vcmpeqq_u8\000vcmpgeq\000vcmpgeq_f16\000vcmpgeq_f32\000vcmpgeq_m"
    "\000vcmpgeq_m_f16\000vcmpgeq_m_f32\000vcmpgeq_m_n_f16\000vcmpgeq_m_n_f3"
    "2\000vcmpgeq_m_n_s16\000vcmpgeq_m_n_s32\000vcmpgeq_m_n_s8\000vcmpgeq_m_"
    "s16\000vcmpgeq_m_s32\000vcmpgeq_m_s8\000vcmpgeq_n_f16\000vcmpgeq_n_f32\000"
    "vcmpgeq_n_s16\000vcmpgeq_n_s32\000vcmpgeq_n_s8\000vcmpgeq_s16\000vcmpge"
    "q_s32\000vcmpgeq_s8\000vcmpgtq\000vcmpgtq_f16\000vcmpgtq_f32\000vcmpgtq"
    "_m\000vcmpgtq_m_f16\000vcmpgtq_m_f32\000vcmpgtq_m_n_f16\000vcmpgtq_m_n_"
    "f32\000vcmpgtq_m_n_s16\000vcmpgtq_m_n_s32\000vcmpgtq_m_n_s8\000vcmpgtq_"
    "m_s16\000vcmpgtq_m_s32\000vcmpgtq_m_s8\000vcmpgtq_n_f16\000vcmpgtq_n_f3"
    "2\000vcmpgtq_n_s16\000vcmpgtq_n_s32\000vcmpgtq_n_s8\000vcmpgtq_s16\000v"
    "cmpgtq_s32\000vcmpgtq_s8\000vcmphiq_m\000vcmphiq_m_n_u16\000vcmphiq_m_n"
    "_u32\000vcmphiq_m_n_u8\000vcmphiq_m_u16\000vcmphiq_m_u32\000vcmphiq_m_u"
    "8\000vcmphiq\000vcmphiq_n_u16\000vcmphiq_n_u32\000vcmphiq_n_u8\000vcmph"
    "iq_u16\000vcmphiq_u32\000vcmphiq_u8\000vcmpleq\000vcmpleq_f16\000vcmple"
    "q_f32\000vcmpleq_m\000vcmpleq_m_f16\000vcmpleq_m_f32\000vcmpleq_m_n_f16"
    "\000vcmpleq_m_n_f32\000vcmpleq_m_n_s16\000vcmpleq_m_n_s32\000vcmpleq_m_"
    "n_s8\000vcmpleq_m_s16\000vcmpleq_m_s32\000vcmpleq_m_s8\000vcmpleq_n_f16"
    "\000vcmpleq_n_f32\000vcmpleq_n_s16\000vcmpleq_n_s32\000vcmpleq_n_s8\000"
    "vcmpleq_s16\000vcmpleq_s32\000vcmpleq_s8\000vcmpltq\000vcmpltq_f16\000v"
    "cmpltq_f32\000vcmpltq_m\000vcmpltq_m_f16\000vcmpltq_m_f32\000vcmpltq_m_"
    "n_f16\000vcmpltq_m_n_f32\000vcmpltq_m_n_s16\000vcmpltq_m_n_s32\000vcmpl"
    "tq_m_n_s8\000vcmpltq_m_s16\000vcmpltq_m_s32\000vcmpltq_m_s8\000vcmpltq_"
    "n_f16\000vcmpltq_n_f32\000vcmpltq_n_s16\000vcmpltq_n_s32\000vcmpltq_n_s"
    "8\000vcmpltq_s16\000vcmpltq_s32\000vcmpltq_s8\000vcmpneq\000vcmpneq_f16"
    "\000vcmpneq_f32\000vcmpneq_m\000vcmpneq_m_f16\000vcmpneq_m_f32\000vcmpn"
    "eq_m_n_f16\000vcmpneq_m_n_f32\000vcmpneq_m_n_s16\000vcmpneq_m_n_s32\000"
    "vcmpneq_m_n_s8\000vcmpneq_m_n_u16\000vcmpneq_m_n_u32\000vcmpneq_m_n_u8\000"
    "vcmpneq_m_s16\000vcmpneq_m_s32\000vcmpneq_m_s8\000vcmpneq_m_u16\000vcmp"
    "neq_m_u32\000vcmpneq_m_u8\000vcmpneq_n_f16\000vcmpneq_n_f32\000vcmpneq_"
    "n_s16\000vcmpneq_n_s32\000vcmpneq_n_s8\000vcmpneq_n_u16\000vcmpneq_n_u3"
    "2\000vcmpneq_n_u8\000vcmpneq_s16\000vcmpneq_s32\000vcmpneq_s8\000vcmpne"
    "q_u16\000vcmpneq_u32\000vcmpneq_u8\000vcmulq\000vcmulq_f16\000vcmulq_f3"
    "2\000vcmulq_m\000vcmulq_m_f16\000vcmulq_m_f32\000vcmulq_rot180\000vcmul"
    "q_rot180_f16\000vcmulq_rot180_f32\000vcmulq_rot180_m\000vcmulq_rot180_m"
    "_f16\000vcmulq_rot180_m_f32\000vcmulq_rot180_x\000vcmulq_rot180_x_f16\000"
    "vcmulq_rot180_x_f32\000vcmulq_rot270\000vcmulq_rot270_f16\000vcmulq_rot"
    "270_f32\000vcmulq_rot270_m\000vcmulq_rot270_m_f16\000vcmulq_rot270_m_f3"
    "2\000vcmulq_rot270_x\000vcmulq_rot270_x_f16\000vcmulq_rot270_x_f32\000v"
    "cmulq_rot90\000vcmulq_rot90_f16\000vcmulq_rot90_f32\000vcmulq_rot90_m\000"
    "vcmulq_rot90_m_f16\000vcmulq_rot90_m_f32\000vcmulq_rot90_x\000vcmulq_ro"
    "t90_x_f16\000vcmulq_rot90_x_f32\000vcmulq_x\000vcmulq_x_f16\000vcmulq_x"
    "_f32\000vcreateq_f16\000vcreateq_f32\000vcreateq_s16\000vcreateq_s32\000"
    "vcreateq_s64\000vcreateq_s8\000vcreateq_u16\000vcreateq_u32\000vcreateq"
    "_u64\000vcreateq_u8\000vctp16q\000vctp16q_m\000vctp32q\000vctp32q_m\000"
    "vctp64q\000vctp64q_m\000vctp8q\000vctp8q_m\000vcvtbq_f16_f32\000vcvtbq_"
    "m_f16_f32\000vcvttq_f16_f32\000vcvttq_m_f16_f32\000veorq\000veorq_f16\000"
    "veorq_f32\000veorq_m\000veorq_m_f16\000veorq_m_f32\000veorq_m_s16\000ve"
    "orq_m_s32\000veorq_m_s8\000veorq_m_u16\000veorq_m_u32\000veorq_m_u8\000"
    "veorq_s16\000veorq_s32\000veorq_s8\000veorq_u16\000veorq_u32\000veorq_u"
    "8\000veorq_x\000veorq_x_f16\000veorq_x_f32\000veorq_x_s16\000veorq_x_s3"
    "2\000veorq_x_s8\000veorq_x_u16\000veorq_x_u32\000veorq_x_u8\000vgetq_la"
    "ne\000vgetq_lane_f16\000vgetq_lane_f32\000vgetq_lane_s16\000vgetq_lane_"
    "s32\000vgetq_lane_s64\000vgetq_lane_s8\000vgetq_lane_u16\000vgetq_lane_"
    "u32\000vgetq_lane_u64\000vgetq_lane_u8\000vhaddq_m\000vhaddq_m_s16\000v"
    "haddq_m_s32\000vhaddq_m_s8\000vhaddq_m_u16\000vhaddq_m_u32\000vhaddq_m_"
    "u8\000vhaddq\000vhaddq_s16\000vhaddq_s32\000vhaddq_s8\000vhaddq_u16\000"
    "vhaddq_u32\000vhaddq_u8\000vhaddq_x\000vhaddq_x_s16\000vhaddq_x_s32\000"
    "vhaddq_x_s8\000vhaddq_x_u16\000vhaddq_x_u32\000vhaddq_x_u8\000vhcaddq_r"
    "ot270_m\000vhcaddq_rot270_m_s16\000vhcaddq_rot270_m_s32\000vhcaddq_rot2"
    "70_m_s8\000vhcaddq_rot270\000vhcaddq_rot270_s16\000vhcaddq_rot270_s32\000"
    "vhcaddq_rot270_s8\000vhcaddq_rot270_x\000vhcaddq_rot270_x_s16\000vhcadd"
    "q_rot270_x_s32\000vhcaddq_rot270_x_s8\000vhcaddq_rot90_m\000vhcaddq_rot"
    "90_m_s16\000vhcaddq_rot90_m_s32\000vhcaddq_rot90_m_s8\000vhcaddq_rot90\000"
    "vhcaddq_rot90_s16\000vhcaddq_rot90_s32\000vhcaddq_rot90_s8\000vhcaddq_r"
    "ot90_x\000vhcaddq_rot90_x_s16\000vhcaddq_rot90_x_s32\000vhcaddq_rot90_x"
    "_s8\000vhsubq_m\000vhsubq_m_s16\000vhsubq_m_s32\000vhsubq_m_s8\000vhsub"
    "q_m_u16\000vhsubq_m_u32\000vhsubq_m_u8\000vhsubq\000vhsubq_s16\000vhsub"
    "q_s32\000vhsubq_s8\000vhsubq_u16\000vhsubq_u32\000vhsubq_u8\000vhsubq_x"
    "\000vhsubq_x_s16\000vhsubq_x_s32\000vhsubq_x_s8\000vhsubq_x_u16\000vhsu"
    "bq_x_u32\000vhsubq_x_u8\000vld1q\000vld1q_f16\000vld1q_f32\000vld1q_s16"
    "\000vld1q_s32\000vld1q_s8\000vld1q_u16\000vld1q_u32\000vld1q_u8\000vld1"
    "q_z\000vld1q_z_f16\000vld1q_z_f32\000vld1q_z_s16\000vld1q_z_s32\000vld1"
    "q_z_s8\000vld1q_z_u16\000vld1q_z_u32\000vld1q_z_u8\000vld2q\000vld2q_f1"
    "6\000vld2q_f32\000vld2q_s16\000vld2q_s32\000vld2q_s8\000vld2q_u16\000vl"
    "d2q_u32\000vld2q_u8\000vld4q\000vld4q_f16\000vld4q_f32\000vld4q_s16\000"
    "vld4q_s32\000vld4q_s8\000vld4q_u16\000vld4q_u32\000vld4q_u8\000vldrbq_g"
    "ather_offset\000vldrbq_gather_offset_s16\000vldrbq_gather_offset_s32\000"
    "vldrbq_gather_offset_s8\000vldrbq_gather_offset_u16\000vldrbq_gather_of"
    "fset_u32\000vldrbq_gather_offset_u8\000vldrbq_gather_offset_z\000vldrbq"
    "_gather_offset_z_s16\000vldrbq_gather_offset_z_s32\000vldrbq_gather_off"
    "set_z_s8\000vldrbq_gather_offset_z_u16\000vldrbq_gather_offset_z_u32\000"
    "vldrbq_gather_offset_z_u8\000vldrbq_s16\000vldrbq_s32\000vldrbq_s8\000v"
    "ldrbq_u16\000vldrbq_u32\000vldrbq_u8\000vldrbq_z_s16\000vldrbq_z_s32\000"
    "vldrbq_z_s8\000vldrbq_z_u16\000vldrbq_z_u32\000vldrbq_z_u8\000vldrdq_ga"
    "ther_base_s64\000vldrdq_gather_base_u64\000vldrdq_gather_base_wb_s64\000"
    "vldrdq_gather_base_wb_u64\000vldrdq_gather_base_wb_z_s64\000vldrdq_gath"
    "er_base_wb_z_u64\000vldrdq_gather_base_z_s64\000vldrdq_gather_base_z_u6"
    "4\000vldrdq_gather_offset\000vldrdq_gather_offset_s64\000vldrdq_gather_"
    "offset_u64\000vldrdq_gather_offset_z\000vldrdq_gather_offset_z_s64\000v"
    "ldrdq_gather_offset_z_u64\000vldrdq_gather_shifted_offset\000vldrdq_gat"
    "her_shifted_offset_s64\000vldrdq_gather_shifted_offset_u64\000vldrdq_ga"
    "ther_shifted_offset_z\000vldrdq_gather_shifted_offset_z_s64\000vldrdq_g"
    "ather_shifted_offset_z_u64\000vldrhq_f16\000vldrhq_gather_offset\000vld"
    "rhq_gather_offset_f16\000vldrhq_gather_offset_s16\000vldrhq_gather_offs"
    "et_s32\000vldrhq_gather_offset_u16\000vldrhq_gather_offset_u32\000vldrh"
    "q_gather_offset_z\000vldrhq_gather_offset_z_f16\000vldrhq_gather_offset"
    "_z_s16\000vldrhq_gather_offset_z_s32\000vldrhq_gather_offset_z_u16\000v"
    "ldrhq_gather_offset_z_u32\000vldrhq_gather_shifted_offset\000vldrhq_gat"
    "her_shifted_offset_f16\000vldrhq_gather_shifted_offset_s16\000vldrhq_ga"
    "ther_shifted_offset_s32\000vldrhq_gather_shifted_offset_u16\000vldrhq_g"
    "ather_shifted_offset_u32\000vldrhq_gather_shifted_offset_z\000vldrhq_ga"
    "ther_shifted_offset_z_f16\000vldrhq_gather_shifted_offset_z_s16\000vldr"
    "hq_gather_shifted_offset_z_s32\000vldrhq_gather_shifted_offset_z_u16\000"
    "vldrhq_gather_shifted_offset_z_u32\000vldrhq_s16\000vldrhq_s32\000vldrh"
    "q_u16\000vldrhq_u32\000vldrhq_z_f16\000vldrhq_z_s16\000vldrhq_z_s32\000"
    "vldrhq_z_u16\000vldrhq_z_u32\000vldrwq_f32\000vldrwq_gather_base_f32\000"
    "vldrwq_gather_base_s32\000vldrwq_gather_base_u32\000vldrwq_gather_base_"
    "wb_f32\000vldrwq_gather_base_wb_s32\000vldrwq_gather_base_wb_u32\000vld"
    "rwq_gather_base_wb_z_f32\000vldrwq_gather_base_wb_z_s32\000vldrwq_gathe"
    "r_base_wb_z_u32\000vldrwq_gather_base_z_f32\000vldrwq_gather_base_z_s32"
    "\000vldrwq_gather_base_z_u32\000vldrwq_gather_offset\000vldrwq_gather_o"
    "ffset_f32\000vldrwq_gather_offset_s32\000vldrwq_gather_offset_u32\000vl"
    "drwq_gather_offset_z\000vldrwq_gather_offset_z_f32\000vldrwq_gather_off"
    "set_z_s32\000vldrwq_gather_offset_z_u32\000vldrwq_gather_shifted_offset"
    "\000vldrwq_gather_shifted_offset_f32\000vldrwq_gather_shifted_offset_s3"
    "2\000vldrwq_gather_shifted_offset_u32\000vldrwq_gather_shifted_offset_z"
    "\000vldrwq_gather_shifted_offset_z_f32\000vldrwq_gather_shifted_offset_"
    "z_s32\000vldrwq_gather_shifted_offset_z_u32\000vldrwq_s32\000vldrwq_u32"
    "\000vldrwq_z_f32\000vldrwq_z_s32\000vldrwq_z_u32\000vmaxaq_m\000vmaxaq_"
    "m_s16\000vmaxaq_m_s32\000vmaxaq_m_s8\000vmaxaq\000vmaxaq_s16\000vmaxaq_"
    "s32\000vmaxaq_s8\000vmaxnmaq\000vmaxnmaq_f16\000vmaxnmaq_f32\000vmaxnma"
    "q_m\000vmaxnmaq_m_f16\000vmaxnmaq_m_f32\000vmaxnmq\000vmaxnmq_f16\000vm"
    "axnmq_f32\000vmaxnmq_m\000vmaxnmq_m_f16\000vmaxnmq_m_f32\000vmaxnmq_x\000"
    "vmaxnmq_x_f16\000vmaxnmq_x_f32\000vmaxq_m\000vmaxq_m_s16\000vmaxq_m_s32"
    "\000vmaxq_m_s8\000vmaxq_m_u16\000vmaxq_m_u32\000vmaxq_m_u8\000vmaxq\000"
    "vmaxq_s16\000vmaxq_s32\000vmaxq_s8\000vmaxq_u16\000vmaxq_u32\000vmaxq_u"
    "8\000vmaxq_x\000vmaxq_x_s16\000vmaxq_x_s32\000vmaxq_x_s8\000vmaxq_x_u16"
    "\000vmaxq_x_u32\000vmaxq_x_u8\000vmaxvq\000vmaxvq_s16\000vmaxvq_s32\000"
    "vmaxvq_s8\000vmaxvq_u16\000vmaxvq_u32\000vmaxvq_u8\000vminaq_m\000vmina"
    "q_m_s16\000vminaq_m_s32\000vminaq_m_s8\000vminaq\000vminaq_s16\000vmina"
    "q_s32\000vminaq_s8\000vminnmaq\000vminnmaq_f16\000vminnmaq_f32\000vminn"
    "maq_m\000vminnmaq_m_f16\000vminnmaq_m_f32\000vminnmq\000vminnmq_f16\000"
    "vminnmq_f32\000vminnmq_m\000vminnmq_m_f16\000vminnmq_m_f32\000vminnmq_x"
    "\000vminnmq_x_f16\000vminnmq_x_f32\000vminq_m\000vminq_m_s16\000vminq_m"
    "_s32\000vminq_m_s8\000vminq_m_u16\000vminq_m_u32\000vminq_m_u8\000vminq"
    "\000vminq_s16\000vminq_s32\000vminq_s8\000vminq_u16\000vminq_u32\000vmi"
    "nq_u8\000vminq_x\000vminq_x_s16\000vminq_x_s32\000vminq_x_s8\000vminq_x"
    "_u16\000vminq_x_u32\000vminq_x_u8\000vminvq\000vminvq_s16\000vminvq_s32"
    "\000vminvq_s8\000vminvq_u16\000vminvq_u32\000vminvq_u8\000vmladavaq_p\000"
    "vmladavaq_p_s16\000vmladavaq_p_s32\000vmladavaq_p_s8\000vmladavaq_p_u16"
    "\000vmladavaq_p_u32\000vmladavaq_p_u8\000vmladavaq\000vmladavaq_s16\000"
    "vmladavaq_s32\000vmladavaq_s8\000vmladavaq_u16\000vmladavaq_u32\000vmla"
    "davaq_u8\000vmladavaxq_p\000vmladavaxq_p_s16\000vmladavaxq_p_s32\000vml"
    "adavaxq_p_s8\000vmladavaxq\000vmladavaxq_s16\000vmladavaxq_s32\000vmlad"
    "avaxq_s8\000vmladavq_p\000vmladavq_p_s16\000vmladavq_p_s32\000vmladavq_"
    "p_s8\000vmladavq_p_u16\000vmladavq_p_u32\000vmladavq_p_u8\000vmladavq\000"
    "vmladavq_s16\000vmladavq_s32\000vmladavq_s8\000vmladavq_u16\000vmladavq"
    "_u32\000vmladavq_u8\000vmladavxq_p\000vmladavxq_p_s16\000vmladavxq_p_s3"
    "2\000vmladavxq_p_s8\000vmladavxq\000vmladavxq_s16\000vmladavxq_s32\000v"
    "mladavxq_s8\000vmlaldavaq_p\000vmlaldavaq_p_s16\000vmlaldavaq_p_s32\000"
    "vmlaldavaq_p_u16\000vmlaldavaq_p_u32\000vmlaldavaq\000vmlaldavaq_s16\000"
    "vmlaldavaq_s32\000vmlaldavaq_u16\000vmlaldavaq_u32\000vmlaldavaxq_p\000"
    "vmlaldavaxq_p_s16\000vmlaldavaxq_p_s32\000vmlaldavaxq\000vmlaldavaxq_s1"
    "6\000vmlaldavaxq_s32\000vmlaldavq_p\000vmlaldavq_p_s16\000vmlaldavq_p_s"
    "32\000vmlaldavq_p_u16\000vmlaldavq_p_u32\000vmlaldavq\000vmlaldavq_s16\000"
    "vmlaldavq_s32\000vmlaldavq_u16\000vmlaldavq_u32\000vmlaldavxq_p\000vmla"
    "ldavxq_p_s16\000vmlaldavxq_p_s32\000vmlaldavxq\000vmlaldavxq_s16\000vml"
    "aldavxq_s32\000vmlsdavaq_p\000vmlsdavaq_p_s16\000vmlsdavaq_p_s32\000vml"
    "sdavaq_p_s8\000vmlsdavaq\000vmlsdavaq_s16\000vmlsdavaq_s32\000vmlsdavaq"
    "_s8\000vmlsdavaxq_p\000vmlsdavaxq_p_s16\000vmlsdavaxq_p_s32\000vmlsdava"
    "xq_p_s8\000vmlsdavaxq\000vmlsdavaxq_s16\000vmlsdavaxq_s32\000vmlsdavaxq"
    "_s8\000vmlsdavq_p\000vmlsdavq_p_s16\000vmlsdavq_p_s32\000vmlsdavq_p_s8\000"
    "vmlsdavq\000vmlsdavq_s16\000vmlsdavq_s32\000vmlsdavq_s8\000vmlsdavxq_p\000"
    "vmlsdavxq_p_s16\000vmlsdavxq_p_s32\000vmlsdavxq_p_s8\000vmlsdavxq\000vm"
    "lsdavxq_s16\000vmlsdavxq_s32\000vmlsdavxq_s8\000vmlsldavaq_p\000vmlslda"
    "vaq_p_s16\000vmlsldavaq_p_s32\000vmlsldavaq\000vmlsldavaq_s16\000vmlsld"
    "avaq_s32\000vmlsldavaxq_p\000vmlsldavaxq_p_s16\000vmlsldavaxq_p_s32\000"
    "vmlsldavaxq\000vmlsldavaxq_s16\000vmlsldavaxq_s32\000vmlsldavq_p\000vml"
    "sldavq_p_s16\000vmlsldavq_p_s32\000vmlsldavq\000vmlsldavq_s16\000vmlsld"
    "avq_s32\000vmlsldavxq_p\000vmlsldavxq_p_s16\000vmlsldavxq_p_s32\000vmls"
    "ldavxq\000vmlsldavxq_s16\000vmlsldavxq_s32\000vmulhq_m\000vmulhq_m_s16\000"
    "vmulhq_m_s32\000vmulhq_m_s8\000vmulhq_m_u16\000vmulhq_m_u32\000vmulhq_m"
    "_u8\000vmulhq\000vmulhq_s16\000vmulhq_s32\000vmulhq_s8\000vmulhq_u16\000"
    "vmulhq_u32\000vmulhq_u8\000vmulhq_x\000vmulhq_x_s16\000vmulhq_x_s32\000"
    "vmulhq_x_s8\000vmulhq_x_u16\000vmulhq_x_u32\000vmulhq_x_u8\000vmullbq_i"
    "nt_m\000vmullbq_int_m_s16\000vmullbq_int_m_s32\000vmullbq_int_m_s8\000v"
    "mullbq_int_m_u16\000vmullbq_int_m_u32\000vmullbq_int_m_u8\000vmullbq_in"
    "t\000vmullbq_int_s16\000vmullbq_int_s32\000vmullbq_int_s8\000vmullbq_in"
    "t_u16\000vmullbq_int_u32\000vmullbq_int_u8\000vmullbq_int_x\000vmullbq_"
    "int_x_s16\000vmullbq_int_x_s32\000vmullbq_int_x_s8\000vmullbq_int_x_u16"
    "\000vmullbq_int_x_u32\000vmullbq_int_x_u8\000vmullbq_poly_m\000vmullbq_"
    "poly_m_p16\000vmullbq_poly_m_p8\000vmullbq_poly\000vmullbq_poly_p16\000"
    "vmullbq_poly_p8\000vmullbq_poly_x\000vmullbq_poly_x_p16\000vmullbq_poly"
    "_x_p8\000vmulltq_int_m\000vmulltq_int_m_s16\000vmulltq_int_m_s32\000vmu"
    "lltq_int_m_s8\000vmulltq_int_m_u16\000vmulltq_int_m_u32\000vmulltq_int_"
    "m_u8\000vmulltq_int\000vmulltq_int_s16\000vmulltq_int_s32\000vmulltq_in"
    "t_s8\000vmulltq_int_u16\000vmulltq_int_u32\000vmulltq_int_u8\000vmulltq"
    "_int_x\000vmulltq_int_x_s16\000vmulltq_int_x_s32\000vmulltq_int_x_s8\000"
    "vmulltq_int_x_u16\000vmulltq_int_x_u32\000vmulltq_int_x_u8\000vmulltq_p"
    "oly_m\000vmulltq_poly_m_p16\000vmulltq_poly_m_p8\000vmulltq_poly\000vmu"
    "lltq_poly_p16\000vmulltq_poly_p8\000vmulltq_poly_x\000vmulltq_poly_x_p1"
    "6\000vmulltq_poly_x_p8\000vmulq\000vmulq_f16\000vmulq_f32\000vmulq_m\000"
    "vmulq_m_f16\000vmulq_m_f32\000vmulq_m_s16\000vmulq_m_s32\000vmulq_m_s8\000"
    "vmulq_m_u16\000vmulq_m_u32\000vmulq_m_u8\000vmulq_s16\000vmulq_s32\000v"
    "mulq_s8\000vmulq_u16\000vmulq_u32\000vmulq_u8\000vmulq_x\000vmulq_x_f16"
    "\000vmulq_x_f32\000vmulq_x_s16\000vmulq_x_s32\000vmulq_x_s8\000vmulq_x_"
    "u16\000vmulq_x_u32\000vmulq_x_u8\000vmvnq_m\000vmvnq_m_n_s16\000vmvnq_m"
    "_n_s32\000vmvnq_m_n_u16\000vmvnq_m_n_u32\000vmvnq_n_s16\000vmvnq_n_s32\000"
    "vmvnq_n_u16\000vmvnq_n_u32\000vmvnq_x_n_s16\000vmvnq_x_n_s32\000vmvnq_x"
    "_n_u16\000vmvnq_x_n_u32\000vornq\000vornq_f16\000vornq_f32\000vornq_m\000"
    "vornq_m_f16\000vornq_m_f32\000vornq_m_s16\000vornq_m_s32\000vornq_m_s8\000"
    "vornq_m_u16\000vornq_m_u32\000vornq_m_u8\000vornq_s16\000vornq_s32\000v"
    "ornq_s8\000vornq_u16\000vornq_u32\000vornq_u8\000vornq_x\000vornq_x_f16"
    "\000vornq_x_f32\000vornq_x_s16\000vornq_x_s32\000vornq_x_s8\000vornq_x_"
    "u16\000vornq_x_u32\000vornq_x_u8\000vorrq\000vorrq_f16\000vorrq_f32\000"
    "vorrq_m\000vorrq_m_f16\000vorrq_m_f32\000vorrq_m_n\000vorrq_m_n_s16\000"
    "vorrq_m_n_s32\000vorrq_m_n_u16\000vorrq_m_n_u32\000vorrq_m_s16\000vorrq"
    "_m_s32\000vorrq_m_s8\000vorrq_m_u16\000vorrq_m_u32\000vorrq_m_u8\000vor"
    "rq_n_s16\000vorrq_n_s32\000vorrq_n_u16\000vorrq_n_u32\000vorrq_s16\000v"
    "orrq_s32\000vorrq_s8\000vorrq_u16\000vorrq_u32\000vorrq_u8\000vorrq_x\000"
    "vorrq_x_f16\000vorrq_x_f32\000vorrq_x_s16\000vorrq_x_s32\000vorrq_x_s8\000"
    "vorrq_x_u16\000vorrq_x_u32\000vorrq_x_u8\000vpnot\000vpselq\000vpselq_f"
    "16\000vpselq_f32\000vpselq_s16\000vpselq_s32\000vpselq_s64\000vpselq_s8"
    "\000vpselq_u16\000vpselq_u32\000vpselq_u64\000vpselq_u8\000vqaddq_m\000"
    "vqaddq_m_s16\000vqaddq_m_s32\000vqaddq_m_s8\000vqaddq_m_u16\000vqaddq_m"
    "_u32\000vqaddq_m_u8\000vqaddq\000vqaddq_s16\000vqaddq_s32\000vqaddq_s8\000"
    "vqaddq_u16\000vqaddq_u32\000vqaddq_u8\000vqdmulhq_m\000vqdmulhq_m_s16\000"
    "vqdmulhq_m_s32\000vqdmulhq_m_s8\000vqdmulhq\000vqdmulhq_s16\000vqdmulhq"
    "_s32\000vqdmulhq_s8\000vqrdmulhq_m\000vqrdmulhq_m_s16\000vqrdmulhq_m_s3"
    "2\000vqrdmulhq_m_s8\000vqrdmulhq\000vqrdmulhq_s16\000vqrdmulhq_s32\000v"
    "qrdmulhq_s8\000vqrshlq_m_n\000vqrshlq_m_n_s16\000vqrshlq_m_n_s32\000vqr"
    "shlq_m_n_s8\000vqrshlq_m_n_u16\000vqrshlq_m_n_u32\000vqrshlq_m_n_u8\000"
    "vqrshlq_m\000vqrshlq_m_s16\000vqrshlq_m_s32\000vqrshlq_m_s8\000vqrshlq_"
    "m_u16\000vqrshlq_m_u32\000vqrshlq_m_u8\000vqrshlq\000vqrshlq_n_s16\000v"
    "qrshlq_n_s32\000vqrshlq_n_s8\000vqrshlq_n_u16\000vqrshlq_n_u32\000vqrsh"
    "lq_n_u8\000vqrshlq_s16\000vqrshlq_s32\000vqrshlq_s8\000vqrshlq_u16\000v"
    "qrshlq_u32\000vqrshlq_u8\000vqrshrnbq_m\000vqrshrnbq_m_n_s16\000vqrshrn"
    "bq_m_n_s32\000vqrshrnbq_m_n_u16\000vqrshrnbq_m_n_u32\000vqrshrnbq\000vq"
    "rshrnbq_n_s16\000vqrshrnbq_n_s32\000vqrshrnbq_n_u16\000vqrshrnbq_n_u32\000"
    "vqrshrntq_m\000vqrshrntq_m_n_s16\000vqrshrntq_m_n_s32\000vqrshrntq_m_n_"
    "u16\000vqrshrntq_m_n_u32\000vqrshrntq\000vqrshrntq_n_s16\000vqrshrntq_n"
    "_s32\000vqrshrntq_n_u16\000vqrshrntq_n_u32\000vqrshrunbq_m\000vqrshrunb"
    "q_m_n_s16\000vqrshrunbq_m_n_s32\000vqrshrunbq\000vqrshrunbq_n_s16\000vq"
    "rshrunbq_n_s32\000vqrshruntq_m\000vqrshruntq_m_n_s16\000vqrshruntq_m_n_"
    "s32\000vqrshruntq\000vqrshruntq_n_s16\000vqrshruntq_n_s32\000vqshlq_m_n"
    "\000vqshlq_m_n_s16\000vqshlq_m_n_s32\000vqshlq_m_n_s8\000vqshlq_m_n_u16"
    "\000vqshlq_m_n_u32\000vqshlq_m_n_u8\000vqshlq_m_r\000vqshlq_m_r_s16\000"
    "vqshlq_m_r_s32\000vqshlq_m_r_s8\000vqshlq_m_r_u16\000vqshlq_m_r_u32\000"
    "vqshlq_m_r_u8\000vqshlq_m\000vqshlq_m_s16\000vqshlq_m_s32\000vqshlq_m_s"
    "8\000vqshlq_m_u16\000vqshlq_m_u32\000vqshlq_m_u8\000vqshlq_n\000vqshlq_"
    "n_s16\000vqshlq_n_s32\000vqshlq_n_s8\000vqshlq_n_u16\000vqshlq_n_u32\000"
    "vqshlq_n_u8\000vqshlq_r\000vqshlq_r_s16\000vqshlq_r_s32\000vqshlq_r_s8\000"
    "vqshlq_r_u16\000vqshlq_r_u32\000vqshlq_r_u8\000vqshlq\000vqshlq_s16\000"
    "vqshlq_s32\000vqshlq_s8\000vqshlq_u16\000vqshlq_u32\000vqshlq_u8\000vqs"
    "hluq_m\000vqshluq_m_n_s16\000vqshluq_m_n_s32\000vqshluq_m_n_s8\000vqshl"
    "uq\000vqshluq_n_s16\000vqshluq_n_s32\000vqshluq_n_s8\000vqshrnbq_m\000v"
    "qshrnbq_m_n_s16\000vqshrnbq_m_n_s32\000vqshrnbq_m_n_u16\000vqshrnbq_m_n"
    "_u32\000vqshrnbq\000vqshrnbq_n_s16\000vqshrnbq_n_s32\000vqshrnbq_n_u16\000"
    "vqshrnbq_n_u32\000vqshrntq_m\000vqshrntq_m_n_s16\000vqshrntq_m_n_s32\000"
    "vqshrntq_m_n_u16\000vqshrntq_m_n_u32\000vqshrntq\000vqshrntq_n_s16\000v"
    "qshrntq_n_s32\000vqshrntq_n_u16\000vqshrntq_n_u32\000vqshrunbq_m\000vqs"
    "hrunbq_m_n_s16\000vqshrunbq_m_n_s32\000vqshrunbq\000vqshrunbq_n_s16\000"
    "vqshrunbq_n_s32\000vqshruntq_m\000vqshruntq_m_n_s16\000vqshruntq_m_n_s3"
    "2\000vqshruntq\000vqshruntq_n_s16\000vqshruntq_n_s32\000vqsubq_m\000vqs"
    "ubq_m_s16\000vqsubq_m_s32\000vqsubq_m_s8\000vqsubq_m_u16\000vqsubq_m_u3"
    "2\000vqsubq_m_u8\000vqsubq\000vqsubq_s16\000vqsubq_s32\000vqsubq_s8\000"
    "vqsubq_u16\000vqsubq_u32\000vqsubq_u8\000vreinterpretq_f16\000vreinterp"
    "retq_f16_f32\000vreinterpretq_f16_s16\000vreinterpretq_f16_s32\000vrein"
    "terpretq_f16_s64\000vreinterpretq_f16_s8\000vreinterpretq_f16_u16\000vr"
    "einterpretq_f16_u32\000vreinterpretq_f16_u64\000vreinterpretq_f16_u8\000"
    "vreinterpretq_f32\000vreinterpretq_f32_f16\000vreinterpretq_f32_s16\000"
    "vreinterpretq_f32_s32\000vreinterpretq_f32_s64\000vreinterpretq_f32_s8\000"
    "vreinterpretq_f32_u16\000vreinterpretq_f32_u32\000vreinterpretq_f32_u64"
    "\000vreinterpretq_f32_u8\000vreinterpretq_s16\000vreinterpretq_s16_f16\000"
    "vreinterpretq_s16_f32\000vreinterpretq_s16_s32\000vreinterpretq_s16_s64"
    "\000vreinterpretq_s16_s8\000vreinterpretq_s16_u16\000vreinterpretq_s16_"
    "u32\000vreinterpretq_s16_u64\000vreinterpretq_s16_u8\000vreinterpretq_s"
    "32\000vreinterpretq_s32_f16\000vreinterpretq_s32_f32\000vreinterpretq_s"
    "32_s16\000vreinterpretq_s32_s64\000vreinterpretq_s32_s8\000vreinterpret"
    "q_s32_u16\000vreinterpretq_s32_u32\000vreinterpretq_s32_u64\000vreinter"
    "pretq_s32_u8\000vreinterpretq_s64\000vreinterpretq_s64_f16\000vreinterp"
    "retq_s64_f32\000vreinterpretq_s64_s16\000vreinterpretq_s64_s32\000vrein"
    "terpretq_s64_s8\000vreinterpretq_s64_u16\000vreinterpretq_s64_u32\000vr"
    "einterpretq_s64_u64\000vreinterpretq_s64_u8\000vreinterpretq_s8\000vrei"
    "nterpretq_s8_f16\000vreinterpretq_s8_f32\000vreinterpretq_s8_s16\000vre"
    "interpretq_s8_s32\000vreinterpretq_s8_s64\000vreinterpretq_s8_u16\000vr"
    "einterpretq_s8_u32\000vreinterpretq_s8_u64\000vreinterpretq_s8_u8\000vr"
    "einterpretq_u16\000vreinterpretq_u16_f16\000vreinterpretq_u16_f32\000vr"
    "einterpretq_u16_s16\000vreinterpretq_u16_s32\000vreinterpretq_u16_s64\000"
    "vreinterpretq_u16_s8\000vreinterpretq_u16_u32\000vreinterpretq_u16_u64\000"
    "vreinterpretq_u16_u8\000vreinterpretq_u32\000vreinterpretq_u32_f16\000v"
    "reinterpretq_u32_f32\000vreinterpretq_u32_s16\000vreinterpretq_u32_s32\000"
    "vreinterpretq_u32_s64\000vreinterpretq_u32_s8\000vreinterpretq_u32_u16\000"
    "vreinterpretq_u32_u64\000vreinterpretq_u32_u8\000vreinterpretq_u64\000v"
    "reinterpretq_u64_f16\000vreinterpretq_u64_f32\000vreinterpretq_u64_s16\000"
    "vreinterpretq_u64_s32\000vreinterpretq_u64_s64\000vreinterpretq_u64_s8\000"
    "vreinterpretq_u64_u16\000vreinterpretq_u64_u32\000vreinterpretq_u64_u8\000"
    "vreinterpretq_u8\000vreinterpretq_u8_f16\000vreinterpretq_u8_f32\000vre"
    "interpretq_u8_s16\000vreinterpretq_u8_s32\000vreinterpretq_u8_s64\000vr"
    "einterpretq_u8_s8\000vreinterpretq_u8_u16\000vreinterpretq_u8_u32\000vr"
    "einterpretq_u8_u64\000vrhaddq_m\000vrhaddq_m_s16\000vrhaddq_m_s32\000vr"
    "haddq_m_s8\000vrhaddq_m_u16\000vrhaddq_m_u32\000vrhaddq_m_u8\000vrhaddq"
    "\000vrhaddq_s16\000vrhaddq_s32\000vrhaddq_s8\000vrhaddq_u16\000vrhaddq_"
    "u32\000vrhaddq_u8\000vrhaddq_x\000vrhaddq_x_s16\000vrhaddq_x_s32\000vrh"
    "addq_x_s8\000vrhaddq_x_u16\000vrhaddq_x_u32\000vrhaddq_x_u8\000vrmlalda"
    "vhaq_p\000vrmlaldavhaq_p_s32\000vrmlaldavhaq_p_u32\000vrmlaldavhaq\000v"
    "rmlaldavhaq_s32\000vrmlaldavhaq_u32\000vrmlaldavhaxq_p\000vrmlaldavhaxq"
    "_p_s32\000vrmlaldavhaxq\000vrmlaldavhaxq_s32\000vrmlaldavhq_p\000vrmlal"
    "davhq_p_s32\000vrmlaldavhq_p_u32\000vrmlaldavhq\000vrmlaldavhq_s32\000v"
    "rmlaldavhq_u32\000vrmlaldavhxq_p\000vrmlaldavhxq_p_s32\000vrmlaldavhxq\000"
    "vrmlaldavhxq_s32\000vrmlsldavhaq_p\000vrmlsldavhaq_p_s32\000vrmlsldavha"
    "q\000vrmlsldavhaq_s32\000vrmlsldavhaxq_p\000vrmlsldavhaxq_p_s32\000vrml"
    "sldavhaxq\000vrmlsldavhaxq_s32\000vrmlsldavhq_p\000vrmlsldavhq_p_s32\000"
    "vrmlsldavhq\000vrmlsldavhq_s32\000vrmlsldavhxq_p\000vrmlsldavhxq_p_s32\000"
    "vrmlsldavhxq\000vrmlsldavhxq_s32\000vrmulhq_m\000vrmulhq_m_s16\000vrmul"
    "hq_m_s32\000vrmulhq_m_s8\000vrmulhq_m_u16\000vrmulhq_m_u32\000vrmulhq_m"
    "_u8\000vrmulhq\000vrmulhq_s16\000vrmulhq_s32\000vrmulhq_s8\000vrmulhq_u"
    "16\000vrmulhq_u32\000vrmulhq_u8\000vrmulhq_x\000vrmulhq_x_s16\000vrmulh"
    "q_x_s32\000vrmulhq_x_s8\000vrmulhq_x_u16\000vrmulhq_x_u32\000vrmulhq_x_"
    "u8\000vrshlq_m_n\000vrshlq_m_n_s16\000vrshlq_m_n_s32\000vrshlq_m_n_s8\000"
    "vrshlq_m_n_u16\000vrshlq_m_n_u32\000vrshlq_m_n_u8\000vrshlq_m\000vrshlq"
    "_m_s16\000vrshlq_m_s32\000vrshlq_m_s8\000vrshlq_m_u16\000vrshlq_m_u32\000"
    "vrshlq_m_u8\000vrshlq\000vrshlq_n_s16\000vrshlq_n_s32\000vrshlq_n_s8\000"
    "vrshlq_n_u16\000vrshlq_n_u32\000vrshlq_n_u8\000vrshlq_s16\000vrshlq_s32"
    "\000vrshlq_s8\000vrshlq_u16\000vrshlq_u32\000vrshlq_u8\000vrshlq_x\000v"
    "rshlq_x_s16\000vrshlq_x_s32\000vrshlq_x_s8\000vrshlq_x_u16\000vrshlq_x_"
    "u32\000vrshlq_x_u8\000vrshrnbq_m\000vrshrnbq_m_n_s16\000vrshrnbq_m_n_s3"
    "2\000vrshrnbq_m_n_u16\000vrshrnbq_m_n_u32\000vrshrnbq\000vrshrnbq_n_s16"
    "\000vrshrnbq_n_s32\000vrshrnbq_n_u16\000vrshrnbq_n_u32\000vrshrntq_m\000"
    "vrshrntq_m_n_s16\000vrshrntq_m_n_s32\000vrshrntq_m_n_u16\000vrshrntq_m_"
    "n_u32\000vrshrntq\000vrshrntq_n_s16\000vrshrntq_n_s32\000vrshrntq_n_u16"
    "\000vrshrntq_n_u32\000vrshrq_m\000vrshrq_m_n_s16\000vrshrq_m_n_s32\000v"
    "rshrq_m_n_s8\000vrshrq_m_n_u16\000vrshrq_m_n_u32\000vrshrq_m_n_u8\000vr"
    "shrq\000vrshrq_n_s16\000vrshrq_n_s32\000vrshrq_n_s8\000vrshrq_n_u16\000"
    "vrshrq_n_u32\000vrshrq_n_u8\000vrshrq_x\000vrshrq_x_n_s16\000vrshrq_x_n"
    "_s32\000vrshrq_x_n_s8\000vrshrq_x_n_u16\000vrshrq_x_n_u32\000vrshrq_x_n"
    "_u8\000vsetq_lane\000vsetq_lane_f16\000vsetq_lane_f32\000vsetq_lane_s16"
    "\000vsetq_lane_s32\000vsetq_lane_s64\000vsetq_lane_s8\000vsetq_lane_u16"
    "\000vsetq_lane_u32\000vsetq_lane_u64\000vsetq_lane_u8\000vshllbq_m\000v"
    "shllbq_m_n_s16\000vshllbq_m_n_s8\000vshllbq_m_n_u16\000vshllbq_m_n_u8\000"
    "vshllbq\000vshllbq_n_s16\000vshllbq_n_s8\000vshllbq_n_u16\000vshllbq_n_"
    "u8\000vshllbq_x\000vshllbq_x_n_s16\000vshllbq_x_n_s8\000vshllbq_x_n_u16"
    "\000vshllbq_x_n_u8\000vshlltq_m\000vshlltq_m_n_s16\000vshlltq_m_n_s8\000"
    "vshlltq_m_n_u16\000vshlltq_m_n_u8\000vshlltq\000vshlltq_n_s16\000vshllt"
    "q_n_s8\000vshlltq_n_u16\000vshlltq_n_u8\000vshlltq_x\000vshlltq_x_n_s16"
    "\000vshlltq_x_n_s8\000vshlltq_x_n_u16\000vshlltq_x_n_u8\000vshlq_m_n\000"
    "vshlq_m_n_s16\000vshlq_m_n_s32\000vshlq_m_n_s8\000vshlq_m_n_u16\000vshl"
    "q_m_n_u32\000vshlq_m_n_u8\000vshlq_m_r\000vshlq_m_r_s16\000vshlq_m_r_s3"
    "2\000vshlq_m_r_s8\000vshlq_m_r_u16\000vshlq_m_r_u32\000vshlq_m_r_u8\000"
    "vshlq_m\000vshlq_m_s16\000vshlq_m_s32\000vshlq_m_s8\000vshlq_m_u16\000v"
    "shlq_m_u32\000vshlq_m_u8\000vshlq_n\000vshlq_n_s16\000vshlq_n_s32\000vs"
    "hlq_n_s8\000vshlq_n_u16\000vshlq_n_u32\000vshlq_n_u8\000vshlq_r\000vshl"
    "q_r_s16\000vshlq_r_s32\000vshlq_r_s8\000vshlq_r_u16\000vshlq_r_u32\000v"
    "shlq_r_u8\000vshlq\000vshlq_s16\000vshlq_s32\000vshlq_s8\000vshlq_u16\000"
    "vshlq_u32\000vshlq_u8\000vshlq_x_n\000vshlq_x_n_s16\000vshlq_x_n_s32\000"
    "vshlq_x_n_s8\000vshlq_x_n_u16\000vshlq_x_n_u32\000vshlq_x_n_u8\000vshlq"
    "_x\000vshlq_x_s16\000vshlq_x_s32\000vshlq_x_s8\000vshlq_x_u16\000vshlq_"
    "x_u32\000vshlq_x_u8\000vshrnbq_m\000vshrnbq_m_n_s16\000vshrnbq_m_n_s32\000"
    "vshrnbq_m_n_u16\000vshrnbq_m_n_u32\000vshrnbq\000vshrnbq_n_s16\000vshrn"
    "bq_n_s32\000vshrnbq_n_u16\000vshrnbq_n_u32\000vshrntq_m\000vshrntq_m_n_"
    "s16\000vshrntq_m_n_s32\000vshrntq_m_n_u16\000vshrntq_m_n_u32\000vshrntq"
    "\000vshrntq_n_s16\000vshrntq_n_s32\000vshrntq_n_u16\000vshrntq_n_u32\000"
    "vshrq_m\000vshrq_m_n_s16\000vshrq_m_n_s32\000vshrq_m_n_s8\000vshrq_m_n_"
    "u16\000vshrq_m_n_u32\000vshrq_m_n_u8\000vshrq\000vshrq_n_s16\000vshrq_n"
    "_s32\000vshrq_n_s8\000vshrq_n_u16\000vshrq_n_u32\000vshrq_n_u8\000vshrq"
    "_x\000vshrq_x_n_s16\000vshrq_x_n_s32\000vshrq_x_n_s8\000vshrq_x_n_u16\000"
    "vshrq_x_n_u32\000vshrq_x_n_u8\000vsliq_m\000vsliq_m_n_s16\000vsliq_m_n_"
    "s32\000vsliq_m_n_s8\000vsliq_m_n_u16\000vsliq_m_n_u32\000vsliq_m_n_u8\000"
    "vsliq\000vsliq_n_s16\000vsliq_n_s32\000vsliq_n_s8\000vsliq_n_u16\000vsl"
    "iq_n_u32\000vsliq_n_u8\000vsriq_m\000vsriq_m_n_s16\000vsriq_m_n_s32\000"
    "vsriq_m_n_s8\000vsriq_m_n_u16\000vsriq_m_n_u32\000vsriq_m_n_u8\000vsriq"
    "\000vsriq_n_s16\000vsriq_n_s32\000vsriq_n_s8\000vsriq_n_u16\000vsriq_n_"
    "u32\000vsriq_n_u8\000vst1q\000vst1q_f16\000vst1q_f32\000vst1q_p\000vst1"
    "q_p_f16\000vst1q_p_f32\000vst1q_p_s16\000vst1q_p_s32\000vst1q_p_s8\000v"
    "st1q_p_u16\000vst1q_p_u32\000vst1q_p_u8\000vst1q_s16\000vst1q_s32\000vs"
    "t1q_s8\000vst1q_u16\000vst1q_u32\000vst1q_u8\000vst2q\000vst2q_f16\000v"
    "st2q_f32\000vst2q_s16\000vst2q_s32\000vst2q_s8\000vst2q_u16\000vst2q_u3"
    "2\000vst2q_u8\000vst4q\000vst4q_f16\000vst4q_f32\000vst4q_s16\000vst4q_"
    "s32\000vst4q_s8\000vst4q_u16\000vst4q_u32\000vst4q_u8\000vstrbq_p\000vs"
    "trbq_p_s16\000vstrbq_p_s32\000vstrbq_p_s8\000vstrbq_p_u16\000vstrbq_p_u"
    "32\000vstrbq_p_u8\000vstrbq\000vstrbq_s16\000vstrbq_s32\000vstrbq_s8\000"
    "vstrbq_scatter_offset_p\000vstrbq_scatter_offset_p_s16\000vstrbq_scatte"
    "r_offset_p_s32\000vstrbq_scatter_offset_p_s8\000vstrbq_scatter_offset_p"
    "_u16\000vstrbq_scatter_offset_p_u32\000vstrbq_scatter_offset_p_u8\000vs"
    "trbq_scatter_offset\000vstrbq_scatter_offset_s16\000vstrbq_scatter_offs"
    "et_s32\000vstrbq_scatter_offset_s8\000vstrbq_scatter_offset_u16\000vstr"
    "bq_scatter_offset_u32\000vstrbq_scatter_offset_u8\000vstrbq_u16\000vstr"
    "bq_u32\000vstrbq_u8\000vstrdq_scatter_base_p\000vstrdq_scatter_base_p_s"
    "64\000vstrdq_scatter_base_p_u64\000vstrdq_scatter_base\000vstrdq_scatte"
    "r_base_s64\000vstrdq_scatter_base_u64\000vstrdq_scatter_base_wb_p\000vs"
    "trdq_scatter_base_wb_p_s64\000vstrdq_scatter_base_wb_p_u64\000vstrdq_sc"
    "atter_base_wb\000vstrdq_scatter_base_wb_s64\000vstrdq_scatter_base_wb_u"
    "64\000vstrdq_scatter_offset_p\000vstrdq_scatter_offset_p_s64\000vstrdq_"
    "scatter_offset_p_u64\000vstrdq_scatter_offset\000vstrdq_scatter_offset_"
    "s64\000vstrdq_scatter_offset_u64\000vstrdq_scatter_shifted_offset_p\000"
    "vstrdq_scatter_shifted_offset_p_s64\000vstrdq_scatter_shifted_offset_p_"
    "u64\000vstrdq_scatter_shifted_offset\000vstrdq_scatter_shifted_offset_s"
    "64\000vstrdq_scatter_shifted_offset_u64\000vstrhq\000vstrhq_f16\000vstr"
    "hq_p\000vstrhq_p_f16\000vstrhq_p_s16\000vstrhq_p_s32\000vstrhq_p_u16\000"
    "vstrhq_p_u32\000vstrhq_s16\000vstrhq_s32\000vstrhq_scatter_offset\000vs"
    "trhq_scatter_offset_f16\000vstrhq_scatter_offset_p\000vstrhq_scatter_of"
    "fset_p_f16\000vstrhq_scatter_offset_p_s16\000vstrhq_scatter_offset_p_s3"
    "2\000vstrhq_scatter_offset_p_u16\000vstrhq_scatter_offset_p_u32\000vstr"
    "hq_scatter_offset_s16\000vstrhq_scatter_offset_s32\000vstrhq_scatter_of"
    "fset_u16\000vstrhq_scatter_offset_u32\000vstrhq_scatter_shifted_offset\000"
    "vstrhq_scatter_shifted_offset_f16\000vstrhq_scatter_shifted_offset_p\000"
    "vstrhq_scatter_shifted_offset_p_f16\000vstrhq_scatter_shifted_offset_p_"
    "s16\000vstrhq_scatter_shifted_offset_p_s32\000vstrhq_scatter_shifted_of"
    "fset_p_u16\000vstrhq_scatter_shifted_offset_p_u32\000vstrhq_scatter_shi"
    "fted_offset_s16\000vstrhq_scatter_shifted_offset_s32\000vstrhq_scatter_"
    "shifted_offset_u16\000vstrhq_scatter_shifted_offset_u32\000vstrhq_u16\000"
    "vstrhq_u32\000vstrwq\000vstrwq_f32\000vstrwq_p\000vstrwq_p_f32\000vstrw"
    "q_p_s32\000vstrwq_p_u32\000vstrwq_s32\000vstrwq_scatter_base\000vstrwq_"
    "scatter_base_f32\000vstrwq_scatter_base_p\000vstrwq_scatter_base_p_f32\000"
    "vstrwq_scatter_base_p_s32\000vstrwq_scatter_base_p_u32\000vstrwq_scatte"
    "r_base_s32\000vstrwq_scatter_base_u32\000vstrwq_scatter_base_wb\000vstr"
    "wq_scatter_base_wb_f32\000vstrwq_scatter_base_wb_p\000vstrwq_scatter_ba"
    "se_wb_p_f32\000vstrwq_scatter_base_wb_p_s32\000vstrwq_scatter_base_wb_p"
    "_u32\000vstrwq_scatter_base_wb_s32\000vstrwq_scatter_base_wb_u32\000vst"
    "rwq_scatter_offset\000vstrwq_scatter_offset_f32\000vstrwq_scatter_offse"
    "t_p\000vstrwq_scatter_offset_p_f32\000vstrwq_scatter_offset_p_s32\000vs"
    "trwq_scatter_offset_p_u32\000vstrwq_scatter_offset_s32\000vstrwq_scatte"
    "r_offset_u32\000vstrwq_scatter_shifted_offset\000vstrwq_scatter_shifted"
    "_offset_f32\000vstrwq_scatter_shifted_offset_p\000vstrwq_scatter_shifte"
    "d_offset_p_f32\000vstrwq_scatter_shifted_offset_p_s32\000vstrwq_scatter"
    "_shifted_offset_p_u32\000vstrwq_scatter_shifted_offset_s32\000vstrwq_sc"
    "atter_shifted_offset_u32\000vstrwq_u32\000vsubq\000vsubq_f16\000vsubq_f"
    "32\000vsubq_m\000vsubq_m_f16\000vsubq_m_f32\000vsubq_m_s16\000vsubq_m_s"
    "32\000vsubq_m_s8\000vsubq_m_u16\000vsubq_m_u32\000vsubq_m_u8\000vsubq_s"
    "16\000vsubq_s32\000vsubq_s8\000vsubq_u16\000vsubq_u32\000vsubq_u8\000vs"
    "ubq_x\000vsubq_x_f16\000vsubq_x_f32\000vsubq_x_s16\000vsubq_x_s32\000vs"
    "ubq_x_s8\000vsubq_x_u16\000vsubq_x_u32\000vsubq_x_u8\000vuninitializedq"
    "_f16\000vuninitializedq_f32\000vuninitializedq\000vuninitializedq_polym"
    "orphic_f16\000vuninitializedq_polymorphic_f32\000vuninitializedq_polymo"
    "rphic_s16\000vuninitializedq_polymorphic_s32\000vuninitializedq_polymor"
    "phic_s64\000vuninitializedq_polymorphic_s8\000vuninitializedq_polymorph"
    "ic_u16\000vuninitializedq_polymorphic_u32\000vuninitializedq_polymorphi"
    "c_u64\000vuninitializedq_polymorphic_u8\000vuninitializedq_s16\000vunin"
    "itializedq_s32\000vuninitializedq_s64\000vuninitializedq_s8\000vuniniti"
    "alizedq_u16\000vuninitializedq_u32\000vuninitializedq_u64\000vuninitial"
    "izedq_u8\000"};

auto It = std::lower_bound(std::begin(Map), std::end(Map), BuiltinID,
  [](const IntrinToName &L, unsigned Id) {
    return L.Id < Id;
  });
if (It == std::end(Map) || It->Id != BuiltinID)
  return false;
StringRef FullName(&IntrinNames[It->FullName]);
if (AliasName == FullName)
  return true;
if (It->ShortName == -1)
  return false;
StringRef ShortName(&IntrinNames[It->ShortName]);
return AliasName == ShortName;
