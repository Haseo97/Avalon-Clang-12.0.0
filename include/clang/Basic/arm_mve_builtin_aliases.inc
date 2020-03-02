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
  { ARM::BI__builtin_arm_mve_vabsq_f16, 570, 564},
  { ARM::BI__builtin_arm_mve_vabsq_f32, 580, 564},
  { ARM::BI__builtin_arm_mve_vabsq_m_f16, 598, 590},
  { ARM::BI__builtin_arm_mve_vabsq_m_f32, 610, 590},
  { ARM::BI__builtin_arm_mve_vabsq_m_s16, 622, 590},
  { ARM::BI__builtin_arm_mve_vabsq_m_s32, 634, 590},
  { ARM::BI__builtin_arm_mve_vabsq_m_s8, 646, 590},
  { ARM::BI__builtin_arm_mve_vabsq_s16, 657, 564},
  { ARM::BI__builtin_arm_mve_vabsq_s32, 667, 564},
  { ARM::BI__builtin_arm_mve_vabsq_s8, 677, 564},
  { ARM::BI__builtin_arm_mve_vabsq_x_f16, 694, 686},
  { ARM::BI__builtin_arm_mve_vabsq_x_f32, 706, 686},
  { ARM::BI__builtin_arm_mve_vabsq_x_s16, 718, 686},
  { ARM::BI__builtin_arm_mve_vabsq_x_s32, 730, 686},
  { ARM::BI__builtin_arm_mve_vabsq_x_s8, 742, 686},
  { ARM::BI__builtin_arm_mve_vadciq_m_s32, 762, 753},
  { ARM::BI__builtin_arm_mve_vadciq_m_u32, 775, 753},
  { ARM::BI__builtin_arm_mve_vadciq_s32, 795, 788},
  { ARM::BI__builtin_arm_mve_vadciq_u32, 806, 788},
  { ARM::BI__builtin_arm_mve_vadcq_m_s32, 825, 817},
  { ARM::BI__builtin_arm_mve_vadcq_m_u32, 837, 817},
  { ARM::BI__builtin_arm_mve_vadcq_s32, 855, 849},
  { ARM::BI__builtin_arm_mve_vadcq_u32, 865, 849},
  { ARM::BI__builtin_arm_mve_vaddq_f16, 881, 875},
  { ARM::BI__builtin_arm_mve_vaddq_f32, 891, 875},
  { ARM::BI__builtin_arm_mve_vaddq_m_f16, 909, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_f32, 921, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_f16, 933, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_f32, 947, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_s16, 961, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_s32, 975, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_s8, 989, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_u16, 1002, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_u32, 1016, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_u8, 1030, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_s16, 1043, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_s32, 1055, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_s8, 1067, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_u16, 1078, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_u32, 1090, 901},
  { ARM::BI__builtin_arm_mve_vaddq_m_u8, 1102, 901},
  { ARM::BI__builtin_arm_mve_vaddq_n_f16, 1113, 875},
  { ARM::BI__builtin_arm_mve_vaddq_n_f32, 1125, 875},
  { ARM::BI__builtin_arm_mve_vaddq_n_s16, 1137, 875},
  { ARM::BI__builtin_arm_mve_vaddq_n_s32, 1149, 875},
  { ARM::BI__builtin_arm_mve_vaddq_n_s8, 1161, 875},
  { ARM::BI__builtin_arm_mve_vaddq_n_u16, 1172, 875},
  { ARM::BI__builtin_arm_mve_vaddq_n_u32, 1184, 875},
  { ARM::BI__builtin_arm_mve_vaddq_n_u8, 1196, 875},
  { ARM::BI__builtin_arm_mve_vaddq_s16, 1207, 875},
  { ARM::BI__builtin_arm_mve_vaddq_s32, 1217, 875},
  { ARM::BI__builtin_arm_mve_vaddq_s8, 1227, 875},
  { ARM::BI__builtin_arm_mve_vaddq_u16, 1236, 875},
  { ARM::BI__builtin_arm_mve_vaddq_u32, 1246, 875},
  { ARM::BI__builtin_arm_mve_vaddq_u8, 1256, 875},
  { ARM::BI__builtin_arm_mve_vaddq_x_f16, 1273, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_f32, 1285, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_f16, 1297, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_f32, 1311, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_s16, 1325, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_s32, 1339, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_s8, 1353, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_u16, 1366, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_u32, 1380, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_u8, 1394, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_s16, 1407, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_s32, 1419, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_s8, 1431, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_u16, 1442, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_u32, 1454, 1265},
  { ARM::BI__builtin_arm_mve_vaddq_x_u8, 1466, 1265},
  { ARM::BI__builtin_arm_mve_vandq_f16, 1483, 1477},
  { ARM::BI__builtin_arm_mve_vandq_f32, 1493, 1477},
  { ARM::BI__builtin_arm_mve_vandq_m_f16, 1511, 1503},
  { ARM::BI__builtin_arm_mve_vandq_m_f32, 1523, 1503},
  { ARM::BI__builtin_arm_mve_vandq_m_s16, 1535, 1503},
  { ARM::BI__builtin_arm_mve_vandq_m_s32, 1547, 1503},
  { ARM::BI__builtin_arm_mve_vandq_m_s8, 1559, 1503},
  { ARM::BI__builtin_arm_mve_vandq_m_u16, 1570, 1503},
  { ARM::BI__builtin_arm_mve_vandq_m_u32, 1582, 1503},
  { ARM::BI__builtin_arm_mve_vandq_m_u8, 1594, 1503},
  { ARM::BI__builtin_arm_mve_vandq_s16, 1605, 1477},
  { ARM::BI__builtin_arm_mve_vandq_s32, 1615, 1477},
  { ARM::BI__builtin_arm_mve_vandq_s8, 1625, 1477},
  { ARM::BI__builtin_arm_mve_vandq_u16, 1634, 1477},
  { ARM::BI__builtin_arm_mve_vandq_u32, 1644, 1477},
  { ARM::BI__builtin_arm_mve_vandq_u8, 1654, 1477},
  { ARM::BI__builtin_arm_mve_vandq_x_f16, 1671, 1663},
  { ARM::BI__builtin_arm_mve_vandq_x_f32, 1683, 1663},
  { ARM::BI__builtin_arm_mve_vandq_x_s16, 1695, 1663},
  { ARM::BI__builtin_arm_mve_vandq_x_s32, 1707, 1663},
  { ARM::BI__builtin_arm_mve_vandq_x_s8, 1719, 1663},
  { ARM::BI__builtin_arm_mve_vandq_x_u16, 1730, 1663},
  { ARM::BI__builtin_arm_mve_vandq_x_u32, 1742, 1663},
  { ARM::BI__builtin_arm_mve_vandq_x_u8, 1754, 1663},
  { ARM::BI__builtin_arm_mve_vbicq_f16, 1771, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_f32, 1781, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_m_f16, 1799, 1791},
  { ARM::BI__builtin_arm_mve_vbicq_m_f32, 1811, 1791},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_s16, 1833, 1823},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_s32, 1847, 1823},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_u16, 1861, 1823},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_u32, 1875, 1823},
  { ARM::BI__builtin_arm_mve_vbicq_m_s16, 1889, 1791},
  { ARM::BI__builtin_arm_mve_vbicq_m_s32, 1901, 1791},
  { ARM::BI__builtin_arm_mve_vbicq_m_s8, 1913, 1791},
  { ARM::BI__builtin_arm_mve_vbicq_m_u16, 1924, 1791},
  { ARM::BI__builtin_arm_mve_vbicq_m_u32, 1936, 1791},
  { ARM::BI__builtin_arm_mve_vbicq_m_u8, 1948, 1791},
  { ARM::BI__builtin_arm_mve_vbicq_n_s16, 1959, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_n_s32, 1971, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_n_u16, 1983, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_n_u32, 1995, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_s16, 2007, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_s32, 2017, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_s8, 2027, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_u16, 2036, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_u32, 2046, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_u8, 2056, 1765},
  { ARM::BI__builtin_arm_mve_vbicq_x_f16, 2073, 2065},
  { ARM::BI__builtin_arm_mve_vbicq_x_f32, 2085, 2065},
  { ARM::BI__builtin_arm_mve_vbicq_x_s16, 2097, 2065},
  { ARM::BI__builtin_arm_mve_vbicq_x_s32, 2109, 2065},
  { ARM::BI__builtin_arm_mve_vbicq_x_s8, 2121, 2065},
  { ARM::BI__builtin_arm_mve_vbicq_x_u16, 2132, 2065},
  { ARM::BI__builtin_arm_mve_vbicq_x_u32, 2144, 2065},
  { ARM::BI__builtin_arm_mve_vbicq_x_u8, 2156, 2065},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_f16, 2176, 2167},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_f32, 2191, 2167},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_s16, 2206, 2167},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_s32, 2221, 2167},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_s8, 2236, 2167},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_u16, 2250, 2167},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_u32, 2265, 2167},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_u8, 2280, 2167},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_f16, 2301, 2294},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_f32, 2314, 2294},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_s16, 2327, 2294},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_s32, 2340, 2294},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_s8, 2353, 2294},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_u16, 2365, 2294},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_u32, 2378, 2294},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_u8, 2391, 2294},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_f16, 2412, 2403},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_f32, 2427, 2403},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_s16, 2442, 2403},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_s32, 2457, 2403},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_s8, 2472, 2403},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_u16, 2486, 2403},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_u32, 2501, 2403},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_u8, 2516, 2403},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_f16, 2544, 2530},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_f32, 2562, 2530},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_f16, 2596, 2580},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_f32, 2616, 2580},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s16, 2636, 2580},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s32, 2656, 2580},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s8, 2676, 2580},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u16, 2695, 2580},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u32, 2715, 2580},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u8, 2735, 2580},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_s16, 2754, 2530},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_s32, 2772, 2530},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_s8, 2790, 2530},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_u16, 2807, 2530},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_u32, 2825, 2530},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_u8, 2843, 2530},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_f16, 2876, 2860},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_f32, 2896, 2860},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s16, 2916, 2860},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s32, 2936, 2860},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s8, 2956, 2860},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u16, 2975, 2860},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u32, 2995, 2860},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u8, 3015, 2860},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_f16, 3047, 3034},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_f32, 3064, 3034},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_f16, 3096, 3081},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_f32, 3115, 3081},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s16, 3134, 3081},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s32, 3153, 3081},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s8, 3172, 3081},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u16, 3190, 3081},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u32, 3209, 3081},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u8, 3228, 3081},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_s16, 3246, 3034},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_s32, 3263, 3034},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_s8, 3280, 3034},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_u16, 3296, 3034},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_u32, 3313, 3034},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_u8, 3330, 3034},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_f16, 3361, 3346},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_f32, 3380, 3346},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s16, 3399, 3346},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s32, 3418, 3346},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s8, 3437, 3346},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u16, 3455, 3346},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u32, 3474, 3346},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u8, 3493, 3346},
  { ARM::BI__builtin_arm_mve_vclsq_m_s16, 3519, 3511},
  { ARM::BI__builtin_arm_mve_vclsq_m_s32, 3531, 3511},
  { ARM::BI__builtin_arm_mve_vclsq_m_s8, 3543, 3511},
  { ARM::BI__builtin_arm_mve_vclsq_s16, 3560, 3554},
  { ARM::BI__builtin_arm_mve_vclsq_s32, 3570, 3554},
  { ARM::BI__builtin_arm_mve_vclsq_s8, 3580, 3554},
  { ARM::BI__builtin_arm_mve_vclsq_x_s16, 3597, 3589},
  { ARM::BI__builtin_arm_mve_vclsq_x_s32, 3609, 3589},
  { ARM::BI__builtin_arm_mve_vclsq_x_s8, 3621, 3589},
  { ARM::BI__builtin_arm_mve_vclzq_m_s16, 3640, 3632},
  { ARM::BI__builtin_arm_mve_vclzq_m_s32, 3652, 3632},
  { ARM::BI__builtin_arm_mve_vclzq_m_s8, 3664, 3632},
  { ARM::BI__builtin_arm_mve_vclzq_m_u16, 3675, 3632},
  { ARM::BI__builtin_arm_mve_vclzq_m_u32, 3687, 3632},
  { ARM::BI__builtin_arm_mve_vclzq_m_u8, 3699, 3632},
  { ARM::BI__builtin_arm_mve_vclzq_s16, 3716, 3710},
  { ARM::BI__builtin_arm_mve_vclzq_s32, 3726, 3710},
  { ARM::BI__builtin_arm_mve_vclzq_s8, 3736, 3710},
  { ARM::BI__builtin_arm_mve_vclzq_u16, 3745, 3710},
  { ARM::BI__builtin_arm_mve_vclzq_u32, 3755, 3710},
  { ARM::BI__builtin_arm_mve_vclzq_u8, 3765, 3710},
  { ARM::BI__builtin_arm_mve_vclzq_x_s16, 3782, 3774},
  { ARM::BI__builtin_arm_mve_vclzq_x_s32, 3794, 3774},
  { ARM::BI__builtin_arm_mve_vclzq_x_s8, 3806, 3774},
  { ARM::BI__builtin_arm_mve_vclzq_x_u16, 3817, 3774},
  { ARM::BI__builtin_arm_mve_vclzq_x_u32, 3829, 3774},
  { ARM::BI__builtin_arm_mve_vclzq_x_u8, 3841, 3774},
  { ARM::BI__builtin_arm_mve_vcmlaq_f16, 3859, 3852},
  { ARM::BI__builtin_arm_mve_vcmlaq_f32, 3870, 3852},
  { ARM::BI__builtin_arm_mve_vcmlaq_m_f16, 3890, 3881},
  { ARM::BI__builtin_arm_mve_vcmlaq_m_f32, 3903, 3881},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_f16, 3930, 3916},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_f32, 3948, 3916},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_m_f16, 3982, 3966},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_m_f32, 4002, 3966},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_f16, 4036, 4022},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_f32, 4054, 4022},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_m_f16, 4088, 4072},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_m_f32, 4108, 4072},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_f16, 4141, 4128},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_f32, 4158, 4128},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_m_f16, 4190, 4175},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_m_f32, 4209, 4175},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u16, 4238, 4228},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u32, 4254, 4228},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u8, 4270, 4228},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_u16, 4285, 4228},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_u32, 4299, 4228},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_u8, 4313, 4228},
  { ARM::BI__builtin_arm_mve_vcmpcsq_n_u16, 4334, 4326},
  { ARM::BI__builtin_arm_mve_vcmpcsq_n_u32, 4348, 4326},
  { ARM::BI__builtin_arm_mve_vcmpcsq_n_u8, 4362, 4326},
  { ARM::BI__builtin_arm_mve_vcmpcsq_u16, 4375, 4326},
  { ARM::BI__builtin_arm_mve_vcmpcsq_u32, 4387, 4326},
  { ARM::BI__builtin_arm_mve_vcmpcsq_u8, 4399, 4326},
  { ARM::BI__builtin_arm_mve_vcmpeqq_f16, 4418, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_f32, 4430, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_f16, 4452, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_f32, 4466, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_f16, 4480, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_f32, 4496, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s16, 4512, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s32, 4528, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s8, 4544, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u16, 4559, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u32, 4575, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u8, 4591, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_s16, 4606, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_s32, 4620, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_s8, 4634, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_u16, 4647, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_u32, 4661, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_u8, 4675, 4442},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_f16, 4688, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_f32, 4702, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_s16, 4716, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_s32, 4730, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_s8, 4744, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_u16, 4757, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_u32, 4771, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_u8, 4785, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_s16, 4798, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_s32, 4810, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_s8, 4822, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_u16, 4833, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_u32, 4845, 4410},
  { ARM::BI__builtin_arm_mve_vcmpeqq_u8, 4857, 4410},
  { ARM::BI__builtin_arm_mve_vcmpgeq_f16, 4876, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgeq_f32, 4888, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_f16, 4910, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_f32, 4924, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_f16, 4938, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_f32, 4954, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s16, 4970, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s32, 4986, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s8, 5002, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_s16, 5017, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_s32, 5031, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_s8, 5045, 4900},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_f16, 5058, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_f32, 5072, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_s16, 5086, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_s32, 5100, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_s8, 5114, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgeq_s16, 5127, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgeq_s32, 5139, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgeq_s8, 5151, 4868},
  { ARM::BI__builtin_arm_mve_vcmpgtq_f16, 5170, 5162},
  { ARM::BI__builtin_arm_mve_vcmpgtq_f32, 5182, 5162},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_f16, 5204, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_f32, 5218, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_f16, 5232, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_f32, 5248, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s16, 5264, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s32, 5280, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s8, 5296, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_s16, 5311, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_s32, 5325, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_s8, 5339, 5194},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_f16, 5352, 5162},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_f32, 5366, 5162},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_s16, 5380, 5162},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_s32, 5394, 5162},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_s8, 5408, 5162},
  { ARM::BI__builtin_arm_mve_vcmpgtq_s16, 5421, 5162},
  { ARM::BI__builtin_arm_mve_vcmpgtq_s32, 5433, 5162},
  { ARM::BI__builtin_arm_mve_vcmpgtq_s8, 5445, 5162},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_n_u16, 5466, 5456},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_n_u32, 5482, 5456},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_n_u8, 5498, 5456},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_u16, 5513, 5456},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_u32, 5527, 5456},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_u8, 5541, 5456},
  { ARM::BI__builtin_arm_mve_vcmphiq_n_u16, 5562, 5554},
  { ARM::BI__builtin_arm_mve_vcmphiq_n_u32, 5576, 5554},
  { ARM::BI__builtin_arm_mve_vcmphiq_n_u8, 5590, 5554},
  { ARM::BI__builtin_arm_mve_vcmphiq_u16, 5603, 5554},
  { ARM::BI__builtin_arm_mve_vcmphiq_u32, 5615, 5554},
  { ARM::BI__builtin_arm_mve_vcmphiq_u8, 5627, 5554},
  { ARM::BI__builtin_arm_mve_vcmpleq_f16, 5646, 5638},
  { ARM::BI__builtin_arm_mve_vcmpleq_f32, 5658, 5638},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_f16, 5680, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_f32, 5694, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_f16, 5708, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_f32, 5724, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_s16, 5740, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_s32, 5756, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_s8, 5772, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_s16, 5787, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_s32, 5801, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_s8, 5815, 5670},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_f16, 5828, 5638},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_f32, 5842, 5638},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_s16, 5856, 5638},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_s32, 5870, 5638},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_s8, 5884, 5638},
  { ARM::BI__builtin_arm_mve_vcmpleq_s16, 5897, 5638},
  { ARM::BI__builtin_arm_mve_vcmpleq_s32, 5909, 5638},
  { ARM::BI__builtin_arm_mve_vcmpleq_s8, 5921, 5638},
  { ARM::BI__builtin_arm_mve_vcmpltq_f16, 5940, 5932},
  { ARM::BI__builtin_arm_mve_vcmpltq_f32, 5952, 5932},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_f16, 5974, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_f32, 5988, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_f16, 6002, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_f32, 6018, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_s16, 6034, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_s32, 6050, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_s8, 6066, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_s16, 6081, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_s32, 6095, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_s8, 6109, 5964},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_f16, 6122, 5932},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_f32, 6136, 5932},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_s16, 6150, 5932},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_s32, 6164, 5932},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_s8, 6178, 5932},
  { ARM::BI__builtin_arm_mve_vcmpltq_s16, 6191, 5932},
  { ARM::BI__builtin_arm_mve_vcmpltq_s32, 6203, 5932},
  { ARM::BI__builtin_arm_mve_vcmpltq_s8, 6215, 5932},
  { ARM::BI__builtin_arm_mve_vcmpneq_f16, 6234, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_f32, 6246, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_f16, 6268, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_f32, 6282, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_f16, 6296, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_f32, 6312, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_s16, 6328, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_s32, 6344, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_s8, 6360, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_u16, 6375, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_u32, 6391, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_u8, 6407, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_s16, 6422, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_s32, 6436, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_s8, 6450, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_u16, 6463, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_u32, 6477, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_u8, 6491, 6258},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_f16, 6504, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_f32, 6518, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_s16, 6532, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_s32, 6546, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_s8, 6560, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_u16, 6573, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_u32, 6587, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_u8, 6601, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_s16, 6614, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_s32, 6626, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_s8, 6638, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_u16, 6649, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_u32, 6661, 6226},
  { ARM::BI__builtin_arm_mve_vcmpneq_u8, 6673, 6226},
  { ARM::BI__builtin_arm_mve_vcmulq_f16, 6691, 6684},
  { ARM::BI__builtin_arm_mve_vcmulq_f32, 6702, 6684},
  { ARM::BI__builtin_arm_mve_vcmulq_m_f16, 6722, 6713},
  { ARM::BI__builtin_arm_mve_vcmulq_m_f32, 6735, 6713},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_f16, 6762, 6748},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_f32, 6780, 6748},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_m_f16, 6814, 6798},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_m_f32, 6834, 6798},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_x_f16, 6870, 6854},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_x_f32, 6890, 6854},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_f16, 6924, 6910},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_f32, 6942, 6910},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_m_f16, 6976, 6960},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_m_f32, 6996, 6960},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_x_f16, 7032, 7016},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_x_f32, 7052, 7016},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_f16, 7085, 7072},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_f32, 7102, 7072},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_m_f16, 7134, 7119},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_m_f32, 7153, 7119},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_x_f16, 7187, 7172},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_x_f32, 7206, 7172},
  { ARM::BI__builtin_arm_mve_vcmulq_x_f16, 7234, 7225},
  { ARM::BI__builtin_arm_mve_vcmulq_x_f32, 7247, 7225},
  { ARM::BI__builtin_arm_mve_vcreateq_f16, 7260, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_f32, 7273, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s16, 7286, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s32, 7299, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s64, 7312, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s8, 7325, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u16, 7337, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u32, 7350, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u64, 7363, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u8, 7376, -1},
  { ARM::BI__builtin_arm_mve_vctp16q, 7388, -1},
  { ARM::BI__builtin_arm_mve_vctp16q_m, 7396, -1},
  { ARM::BI__builtin_arm_mve_vctp32q, 7406, -1},
  { ARM::BI__builtin_arm_mve_vctp32q_m, 7414, -1},
  { ARM::BI__builtin_arm_mve_vctp64q, 7424, -1},
  { ARM::BI__builtin_arm_mve_vctp64q_m, 7432, -1},
  { ARM::BI__builtin_arm_mve_vctp8q, 7442, -1},
  { ARM::BI__builtin_arm_mve_vctp8q_m, 7449, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_f16_f32, 7458, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_m_f16_f32, 7473, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_f16_s16, 7496, 7490},
  { ARM::BI__builtin_arm_mve_vcvtq_f16_u16, 7510, 7490},
  { ARM::BI__builtin_arm_mve_vcvtq_f32_s32, 7524, 7490},
  { ARM::BI__builtin_arm_mve_vcvtq_f32_u32, 7538, 7490},
  { ARM::BI__builtin_arm_mve_vcvtq_m_f16_s16, 7560, 7552},
  { ARM::BI__builtin_arm_mve_vcvtq_m_f16_u16, 7576, 7552},
  { ARM::BI__builtin_arm_mve_vcvtq_m_f32_s32, 7592, 7552},
  { ARM::BI__builtin_arm_mve_vcvtq_m_f32_u32, 7608, 7552},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f16_s16, 7634, 7624},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f16_u16, 7652, 7624},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f32_s32, 7670, 7624},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f32_u32, 7688, 7624},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_s16_f16, 7706, 7624},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_s32_f32, 7724, 7624},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_u16_f16, 7742, 7624},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_u32_f32, 7760, 7624},
  { ARM::BI__builtin_arm_mve_vcvtq_m_s16_f16, 7778, 7552},
  { ARM::BI__builtin_arm_mve_vcvtq_m_s32_f32, 7794, 7552},
  { ARM::BI__builtin_arm_mve_vcvtq_m_u16_f16, 7810, 7552},
  { ARM::BI__builtin_arm_mve_vcvtq_m_u32_f32, 7826, 7552},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f16_s16, 7850, 7842},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f16_u16, 7866, 7842},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f32_s32, 7882, 7842},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f32_u32, 7898, 7842},
  { ARM::BI__builtin_arm_mve_vcvtq_n_s16_f16, 7914, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_n_s32_f32, 7930, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_n_u16_f16, 7946, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_n_u32_f32, 7962, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_s16_f16, 7978, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_s32_f32, 7992, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_u16_f16, 8006, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_u32_f32, 8020, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_f16_s16, 8042, 8034},
  { ARM::BI__builtin_arm_mve_vcvtq_x_f16_u16, 8058, 8034},
  { ARM::BI__builtin_arm_mve_vcvtq_x_f32_s32, 8074, 8034},
  { ARM::BI__builtin_arm_mve_vcvtq_x_f32_u32, 8090, 8034},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f16_s16, 8116, 8106},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f16_u16, 8134, 8106},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f32_s32, 8152, 8106},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f32_u32, 8170, 8106},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_s16_f16, 8188, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_s32_f32, 8206, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_u16_f16, 8224, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_u32_f32, 8242, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_s16_f16, 8260, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_s32_f32, 8276, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_u16_f16, 8292, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_u32_f32, 8308, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_f16_f32, 8324, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_m_f16_f32, 8339, -1},
  { ARM::BI__builtin_arm_mve_vddupq_m_n_u16, 8365, 8356},
  { ARM::BI__builtin_arm_mve_vddupq_m_n_u32, 8380, 8356},
  { ARM::BI__builtin_arm_mve_vddupq_m_n_u8, 8395, 8356},
  { ARM::BI__builtin_arm_mve_vddupq_m_wb_u16, 8409, 8356},
  { ARM::BI__builtin_arm_mve_vddupq_m_wb_u32, 8425, 8356},
  { ARM::BI__builtin_arm_mve_vddupq_m_wb_u8, 8441, 8356},
  { ARM::BI__builtin_arm_mve_vddupq_n_u16, 8467, 8456},
  { ARM::BI__builtin_arm_mve_vddupq_n_u32, 8491, 8480},
  { ARM::BI__builtin_arm_mve_vddupq_n_u8, 8514, 8504},
  { ARM::BI__builtin_arm_mve_vddupq_wb_u16, 8526, 8456},
  { ARM::BI__builtin_arm_mve_vddupq_wb_u32, 8540, 8480},
  { ARM::BI__builtin_arm_mve_vddupq_wb_u8, 8554, 8504},
  { ARM::BI__builtin_arm_mve_vddupq_x_n_u16, 8580, 8567},
  { ARM::BI__builtin_arm_mve_vddupq_x_n_u32, 8608, 8595},
  { ARM::BI__builtin_arm_mve_vddupq_x_n_u8, 8635, 8623},
  { ARM::BI__builtin_arm_mve_vddupq_x_wb_u16, 8649, 8567},
  { ARM::BI__builtin_arm_mve_vddupq_x_wb_u32, 8665, 8595},
  { ARM::BI__builtin_arm_mve_vddupq_x_wb_u8, 8681, 8623},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_f16, 8704, 8696},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_f32, 8718, 8696},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_s16, 8732, 8696},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_s32, 8746, 8696},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_s8, 8760, 8696},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_u16, 8773, 8696},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_u32, 8787, 8696},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_u8, 8801, 8696},
  { ARM::BI__builtin_arm_mve_vdupq_n_f16, 8814, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_f32, 8826, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_s16, 8838, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_s32, 8850, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_s8, 8862, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_u16, 8873, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_u32, 8885, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_u8, 8897, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_f16, 8908, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_f32, 8922, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_s16, 8936, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_s32, 8950, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_s8, 8964, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_u16, 8977, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_u32, 8991, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_u8, 9005, -1},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_n_u16, 9028, 9018},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_n_u32, 9044, 9018},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_n_u8, 9060, 9018},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_wb_u16, 9075, 9018},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_wb_u32, 9092, 9018},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_wb_u8, 9109, 9018},
  { ARM::BI__builtin_arm_mve_vdwdupq_n_u16, 9137, 9125},
  { ARM::BI__builtin_arm_mve_vdwdupq_n_u32, 9163, 9151},
  { ARM::BI__builtin_arm_mve_vdwdupq_n_u8, 9188, 9177},
  { ARM::BI__builtin_arm_mve_vdwdupq_wb_u16, 9201, 9125},
  { ARM::BI__builtin_arm_mve_vdwdupq_wb_u32, 9216, 9151},
  { ARM::BI__builtin_arm_mve_vdwdupq_wb_u8, 9231, 9177},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_n_u16, 9259, 9245},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_n_u32, 9289, 9275},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_n_u8, 9318, 9305},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_wb_u16, 9333, 9245},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_wb_u32, 9350, 9275},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_wb_u8, 9367, 9305},
  { ARM::BI__builtin_arm_mve_veorq_f16, 9389, 9383},
  { ARM::BI__builtin_arm_mve_veorq_f32, 9399, 9383},
  { ARM::BI__builtin_arm_mve_veorq_m_f16, 9417, 9409},
  { ARM::BI__builtin_arm_mve_veorq_m_f32, 9429, 9409},
  { ARM::BI__builtin_arm_mve_veorq_m_s16, 9441, 9409},
  { ARM::BI__builtin_arm_mve_veorq_m_s32, 9453, 9409},
  { ARM::BI__builtin_arm_mve_veorq_m_s8, 9465, 9409},
  { ARM::BI__builtin_arm_mve_veorq_m_u16, 9476, 9409},
  { ARM::BI__builtin_arm_mve_veorq_m_u32, 9488, 9409},
  { ARM::BI__builtin_arm_mve_veorq_m_u8, 9500, 9409},
  { ARM::BI__builtin_arm_mve_veorq_s16, 9511, 9383},
  { ARM::BI__builtin_arm_mve_veorq_s32, 9521, 9383},
  { ARM::BI__builtin_arm_mve_veorq_s8, 9531, 9383},
  { ARM::BI__builtin_arm_mve_veorq_u16, 9540, 9383},
  { ARM::BI__builtin_arm_mve_veorq_u32, 9550, 9383},
  { ARM::BI__builtin_arm_mve_veorq_u8, 9560, 9383},
  { ARM::BI__builtin_arm_mve_veorq_x_f16, 9577, 9569},
  { ARM::BI__builtin_arm_mve_veorq_x_f32, 9589, 9569},
  { ARM::BI__builtin_arm_mve_veorq_x_s16, 9601, 9569},
  { ARM::BI__builtin_arm_mve_veorq_x_s32, 9613, 9569},
  { ARM::BI__builtin_arm_mve_veorq_x_s8, 9625, 9569},
  { ARM::BI__builtin_arm_mve_veorq_x_u16, 9636, 9569},
  { ARM::BI__builtin_arm_mve_veorq_x_u32, 9648, 9569},
  { ARM::BI__builtin_arm_mve_veorq_x_u8, 9660, 9569},
  { ARM::BI__builtin_arm_mve_vgetq_lane_f16, 9682, 9671},
  { ARM::BI__builtin_arm_mve_vgetq_lane_f32, 9697, 9671},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s16, 9712, 9671},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s32, 9727, 9671},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s64, 9742, 9671},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s8, 9757, 9671},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u16, 9771, 9671},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u32, 9786, 9671},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u64, 9801, 9671},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u8, 9816, 9671},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_s16, 9839, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_s32, 9854, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_s8, 9869, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_u16, 9883, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_u32, 9898, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_u8, 9913, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s16, 9927, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s32, 9940, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s8, 9953, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u16, 9965, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u32, 9978, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u8, 9991, 9830},
  { ARM::BI__builtin_arm_mve_vhaddq_n_s16, 10010, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_n_s32, 10023, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_n_s8, 10036, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_n_u16, 10048, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_n_u32, 10061, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_n_u8, 10074, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_s16, 10086, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_s32, 10097, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_s8, 10108, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_u16, 10118, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_u32, 10129, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_u8, 10140, 10003},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_s16, 10159, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_s32, 10174, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_s8, 10189, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_u16, 10203, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_u32, 10218, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_u8, 10233, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s16, 10247, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s32, 10260, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s8, 10273, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u16, 10285, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u32, 10298, 10150},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u8, 10311, 10150},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s16, 10340, 10323},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s32, 10361, 10323},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s8, 10382, 10323},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s16, 10417, 10402},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s32, 10436, 10402},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s8, 10455, 10402},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s16, 10490, 10473},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s32, 10511, 10473},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s8, 10532, 10473},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s16, 10568, 10552},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s32, 10588, 10552},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s8, 10608, 10552},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s16, 10641, 10627},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s32, 10659, 10627},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s8, 10677, 10627},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s16, 10710, 10694},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s32, 10730, 10694},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s8, 10750, 10694},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_s16, 10778, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_s32, 10793, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_s8, 10808, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_u16, 10822, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_u32, 10837, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_u8, 10852, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s16, 10866, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s32, 10879, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s8, 10892, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u16, 10904, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u32, 10917, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u8, 10930, 10769},
  { ARM::BI__builtin_arm_mve_vhsubq_n_s16, 10949, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_n_s32, 10962, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_n_s8, 10975, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_n_u16, 10987, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_n_u32, 11000, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_n_u8, 11013, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_s16, 11025, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_s32, 11036, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_s8, 11047, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_u16, 11057, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_u32, 11068, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_u8, 11079, 10942},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_s16, 11098, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_s32, 11113, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_s8, 11128, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_u16, 11142, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_u32, 11157, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_u8, 11172, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s16, 11186, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s32, 11199, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s8, 11212, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u16, 11224, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u32, 11237, 11089},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u8, 11250, 11089},
  { ARM::BI__builtin_arm_mve_vidupq_m_n_u16, 11271, 11262},
  { ARM::BI__builtin_arm_mve_vidupq_m_n_u32, 11286, 11262},
  { ARM::BI__builtin_arm_mve_vidupq_m_n_u8, 11301, 11262},
  { ARM::BI__builtin_arm_mve_vidupq_m_wb_u16, 11315, 11262},
  { ARM::BI__builtin_arm_mve_vidupq_m_wb_u32, 11331, 11262},
  { ARM::BI__builtin_arm_mve_vidupq_m_wb_u8, 11347, 11262},
  { ARM::BI__builtin_arm_mve_vidupq_n_u16, 11373, 11362},
  { ARM::BI__builtin_arm_mve_vidupq_n_u32, 11397, 11386},
  { ARM::BI__builtin_arm_mve_vidupq_n_u8, 11420, 11410},
  { ARM::BI__builtin_arm_mve_vidupq_wb_u16, 11432, 11362},
  { ARM::BI__builtin_arm_mve_vidupq_wb_u32, 11446, 11386},
  { ARM::BI__builtin_arm_mve_vidupq_wb_u8, 11460, 11410},
  { ARM::BI__builtin_arm_mve_vidupq_x_n_u16, 11486, 11473},
  { ARM::BI__builtin_arm_mve_vidupq_x_n_u32, 11514, 11501},
  { ARM::BI__builtin_arm_mve_vidupq_x_n_u8, 11541, 11529},
  { ARM::BI__builtin_arm_mve_vidupq_x_wb_u16, 11555, 11473},
  { ARM::BI__builtin_arm_mve_vidupq_x_wb_u32, 11571, 11501},
  { ARM::BI__builtin_arm_mve_vidupq_x_wb_u8, 11587, 11529},
  { ARM::BI__builtin_arm_mve_viwdupq_m_n_u16, 11612, 11602},
  { ARM::BI__builtin_arm_mve_viwdupq_m_n_u32, 11628, 11602},
  { ARM::BI__builtin_arm_mve_viwdupq_m_n_u8, 11644, 11602},
  { ARM::BI__builtin_arm_mve_viwdupq_m_wb_u16, 11659, 11602},
  { ARM::BI__builtin_arm_mve_viwdupq_m_wb_u32, 11676, 11602},
  { ARM::BI__builtin_arm_mve_viwdupq_m_wb_u8, 11693, 11602},
  { ARM::BI__builtin_arm_mve_viwdupq_n_u16, 11721, 11709},
  { ARM::BI__builtin_arm_mve_viwdupq_n_u32, 11747, 11735},
  { ARM::BI__builtin_arm_mve_viwdupq_n_u8, 11772, 11761},
  { ARM::BI__builtin_arm_mve_viwdupq_wb_u16, 11785, 11709},
  { ARM::BI__builtin_arm_mve_viwdupq_wb_u32, 11800, 11735},
  { ARM::BI__builtin_arm_mve_viwdupq_wb_u8, 11815, 11761},
  { ARM::BI__builtin_arm_mve_viwdupq_x_n_u16, 11843, 11829},
  { ARM::BI__builtin_arm_mve_viwdupq_x_n_u32, 11873, 11859},
  { ARM::BI__builtin_arm_mve_viwdupq_x_n_u8, 11902, 11889},
  { ARM::BI__builtin_arm_mve_viwdupq_x_wb_u16, 11917, 11829},
  { ARM::BI__builtin_arm_mve_viwdupq_x_wb_u32, 11934, 11859},
  { ARM::BI__builtin_arm_mve_viwdupq_x_wb_u8, 11951, 11889},
  { ARM::BI__builtin_arm_mve_vld1q_f16, 11973, 11967},
  { ARM::BI__builtin_arm_mve_vld1q_f32, 11983, 11967},
  { ARM::BI__builtin_arm_mve_vld1q_s16, 11993, 11967},
  { ARM::BI__builtin_arm_mve_vld1q_s32, 12003, 11967},
  { ARM::BI__builtin_arm_mve_vld1q_s8, 12013, 11967},
  { ARM::BI__builtin_arm_mve_vld1q_u16, 12022, 11967},
  { ARM::BI__builtin_arm_mve_vld1q_u32, 12032, 11967},
  { ARM::BI__builtin_arm_mve_vld1q_u8, 12042, 11967},
  { ARM::BI__builtin_arm_mve_vld1q_z_f16, 12059, 12051},
  { ARM::BI__builtin_arm_mve_vld1q_z_f32, 12071, 12051},
  { ARM::BI__builtin_arm_mve_vld1q_z_s16, 12083, 12051},
  { ARM::BI__builtin_arm_mve_vld1q_z_s32, 12095, 12051},
  { ARM::BI__builtin_arm_mve_vld1q_z_s8, 12107, 12051},
  { ARM::BI__builtin_arm_mve_vld1q_z_u16, 12118, 12051},
  { ARM::BI__builtin_arm_mve_vld1q_z_u32, 12130, 12051},
  { ARM::BI__builtin_arm_mve_vld1q_z_u8, 12142, 12051},
  { ARM::BI__builtin_arm_mve_vld2q_f16, 12159, 12153},
  { ARM::BI__builtin_arm_mve_vld2q_f32, 12169, 12153},
  { ARM::BI__builtin_arm_mve_vld2q_s16, 12179, 12153},
  { ARM::BI__builtin_arm_mve_vld2q_s32, 12189, 12153},
  { ARM::BI__builtin_arm_mve_vld2q_s8, 12199, 12153},
  { ARM::BI__builtin_arm_mve_vld2q_u16, 12208, 12153},
  { ARM::BI__builtin_arm_mve_vld2q_u32, 12218, 12153},
  { ARM::BI__builtin_arm_mve_vld2q_u8, 12228, 12153},
  { ARM::BI__builtin_arm_mve_vld4q_f16, 12243, 12237},
  { ARM::BI__builtin_arm_mve_vld4q_f32, 12253, 12237},
  { ARM::BI__builtin_arm_mve_vld4q_s16, 12263, 12237},
  { ARM::BI__builtin_arm_mve_vld4q_s32, 12273, 12237},
  { ARM::BI__builtin_arm_mve_vld4q_s8, 12283, 12237},
  { ARM::BI__builtin_arm_mve_vld4q_u16, 12292, 12237},
  { ARM::BI__builtin_arm_mve_vld4q_u32, 12302, 12237},
  { ARM::BI__builtin_arm_mve_vld4q_u8, 12312, 12237},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s16, 12342, 12321},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s32, 12367, 12321},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s8, 12392, 12321},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u16, 12416, 12321},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u32, 12441, 12321},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u8, 12466, 12321},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s16, 12513, 12490},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s32, 12540, 12490},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s8, 12567, 12490},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u16, 12593, 12490},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u32, 12620, 12490},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u8, 12647, 12490},
  { ARM::BI__builtin_arm_mve_vldrbq_s16, 12673, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_s32, 12684, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_s8, 12695, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u16, 12705, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u32, 12716, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u8, 12727, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s16, 12737, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s32, 12750, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s8, 12763, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u16, 12775, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u32, 12788, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u8, 12801, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_s64, 12813, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_u64, 12836, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_s64, 12859, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_u64, 12885, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64, 12911, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64, 12939, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_s64, 12967, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_u64, 12992, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_s64, 13038, 13017},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_u64, 13063, 13017},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_s64, 13111, 13088},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_u64, 13138, 13088},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_s64, 13194, 13165},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_u64, 13227, 13165},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_s64, 13291, 13260},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_u64, 13326, 13260},
  { ARM::BI__builtin_arm_mve_vldrhq_f16, 13361, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_f16, 13393, 13372},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s16, 13418, 13372},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s32, 13443, 13372},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u16, 13468, 13372},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u32, 13493, 13372},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_f16, 13541, 13518},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s16, 13568, 13518},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s32, 13595, 13518},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u16, 13622, 13518},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u32, 13649, 13518},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_f16, 13705, 13676},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s16, 13738, 13676},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s32, 13771, 13676},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u16, 13804, 13676},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u32, 13837, 13676},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_f16, 13901, 13870},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s16, 13936, 13870},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s32, 13971, 13870},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u16, 14006, 13870},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u32, 14041, 13870},
  { ARM::BI__builtin_arm_mve_vldrhq_s16, 14076, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_s32, 14087, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_u16, 14098, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_u32, 14109, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_f16, 14120, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_s16, 14133, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_s32, 14146, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_u16, 14159, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_u32, 14172, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_f32, 14185, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_f32, 14196, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_s32, 14219, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_u32, 14242, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32, 14265, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32, 14291, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32, 14317, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_f32, 14343, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_s32, 14371, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_u32, 14399, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_f32, 14427, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_s32, 14452, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_u32, 14477, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_f32, 14523, 14502},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_s32, 14548, 14502},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_u32, 14573, 14502},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_f32, 14621, 14598},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_s32, 14648, 14598},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_u32, 14675, 14598},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_f32, 14731, 14702},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_s32, 14764, 14702},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_u32, 14797, 14702},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_f32, 14861, 14830},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_s32, 14896, 14830},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_u32, 14931, 14830},
  { ARM::BI__builtin_arm_mve_vldrwq_s32, 14966, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_u32, 14977, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_f32, 14988, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_s32, 15001, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_u32, 15014, -1},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s16, 15036, 15027},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s32, 15049, 15027},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s8, 15062, 15027},
  { ARM::BI__builtin_arm_mve_vmaxaq_s16, 15081, 15074},
  { ARM::BI__builtin_arm_mve_vmaxaq_s32, 15092, 15074},
  { ARM::BI__builtin_arm_mve_vmaxaq_s8, 15103, 15074},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_f16, 15122, 15113},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_f32, 15135, 15113},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_m_f16, 15159, 15148},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_m_f32, 15174, 15148},
  { ARM::BI__builtin_arm_mve_vmaxnmq_f16, 15197, 15189},
  { ARM::BI__builtin_arm_mve_vmaxnmq_f32, 15209, 15189},
  { ARM::BI__builtin_arm_mve_vmaxnmq_m_f16, 15231, 15221},
  { ARM::BI__builtin_arm_mve_vmaxnmq_m_f32, 15245, 15221},
  { ARM::BI__builtin_arm_mve_vmaxnmq_x_f16, 15269, 15259},
  { ARM::BI__builtin_arm_mve_vmaxnmq_x_f32, 15283, 15259},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s16, 15305, 15297},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s32, 15317, 15297},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s8, 15329, 15297},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u16, 15340, 15297},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u32, 15352, 15297},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u8, 15364, 15297},
  { ARM::BI__builtin_arm_mve_vmaxq_s16, 15381, 15375},
  { ARM::BI__builtin_arm_mve_vmaxq_s32, 15391, 15375},
  { ARM::BI__builtin_arm_mve_vmaxq_s8, 15401, 15375},
  { ARM::BI__builtin_arm_mve_vmaxq_u16, 15410, 15375},
  { ARM::BI__builtin_arm_mve_vmaxq_u32, 15420, 15375},
  { ARM::BI__builtin_arm_mve_vmaxq_u8, 15430, 15375},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s16, 15447, 15439},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s32, 15459, 15439},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s8, 15471, 15439},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u16, 15482, 15439},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u32, 15494, 15439},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u8, 15506, 15439},
  { ARM::BI__builtin_arm_mve_vmaxvq_s16, 15524, 15517},
  { ARM::BI__builtin_arm_mve_vmaxvq_s32, 15535, 15517},
  { ARM::BI__builtin_arm_mve_vmaxvq_s8, 15546, 15517},
  { ARM::BI__builtin_arm_mve_vmaxvq_u16, 15556, 15517},
  { ARM::BI__builtin_arm_mve_vmaxvq_u32, 15567, 15517},
  { ARM::BI__builtin_arm_mve_vmaxvq_u8, 15578, 15517},
  { ARM::BI__builtin_arm_mve_vminaq_m_s16, 15597, 15588},
  { ARM::BI__builtin_arm_mve_vminaq_m_s32, 15610, 15588},
  { ARM::BI__builtin_arm_mve_vminaq_m_s8, 15623, 15588},
  { ARM::BI__builtin_arm_mve_vminaq_s16, 15642, 15635},
  { ARM::BI__builtin_arm_mve_vminaq_s32, 15653, 15635},
  { ARM::BI__builtin_arm_mve_vminaq_s8, 15664, 15635},
  { ARM::BI__builtin_arm_mve_vminnmaq_f16, 15683, 15674},
  { ARM::BI__builtin_arm_mve_vminnmaq_f32, 15696, 15674},
  { ARM::BI__builtin_arm_mve_vminnmaq_m_f16, 15720, 15709},
  { ARM::BI__builtin_arm_mve_vminnmaq_m_f32, 15735, 15709},
  { ARM::BI__builtin_arm_mve_vminnmq_f16, 15758, 15750},
  { ARM::BI__builtin_arm_mve_vminnmq_f32, 15770, 15750},
  { ARM::BI__builtin_arm_mve_vminnmq_m_f16, 15792, 15782},
  { ARM::BI__builtin_arm_mve_vminnmq_m_f32, 15806, 15782},
  { ARM::BI__builtin_arm_mve_vminnmq_x_f16, 15830, 15820},
  { ARM::BI__builtin_arm_mve_vminnmq_x_f32, 15844, 15820},
  { ARM::BI__builtin_arm_mve_vminq_m_s16, 15866, 15858},
  { ARM::BI__builtin_arm_mve_vminq_m_s32, 15878, 15858},
  { ARM::BI__builtin_arm_mve_vminq_m_s8, 15890, 15858},
  { ARM::BI__builtin_arm_mve_vminq_m_u16, 15901, 15858},
  { ARM::BI__builtin_arm_mve_vminq_m_u32, 15913, 15858},
  { ARM::BI__builtin_arm_mve_vminq_m_u8, 15925, 15858},
  { ARM::BI__builtin_arm_mve_vminq_s16, 15942, 15936},
  { ARM::BI__builtin_arm_mve_vminq_s32, 15952, 15936},
  { ARM::BI__builtin_arm_mve_vminq_s8, 15962, 15936},
  { ARM::BI__builtin_arm_mve_vminq_u16, 15971, 15936},
  { ARM::BI__builtin_arm_mve_vminq_u32, 15981, 15936},
  { ARM::BI__builtin_arm_mve_vminq_u8, 15991, 15936},
  { ARM::BI__builtin_arm_mve_vminq_x_s16, 16008, 16000},
  { ARM::BI__builtin_arm_mve_vminq_x_s32, 16020, 16000},
  { ARM::BI__builtin_arm_mve_vminq_x_s8, 16032, 16000},
  { ARM::BI__builtin_arm_mve_vminq_x_u16, 16043, 16000},
  { ARM::BI__builtin_arm_mve_vminq_x_u32, 16055, 16000},
  { ARM::BI__builtin_arm_mve_vminq_x_u8, 16067, 16000},
  { ARM::BI__builtin_arm_mve_vminvq_s16, 16085, 16078},
  { ARM::BI__builtin_arm_mve_vminvq_s32, 16096, 16078},
  { ARM::BI__builtin_arm_mve_vminvq_s8, 16107, 16078},
  { ARM::BI__builtin_arm_mve_vminvq_u16, 16117, 16078},
  { ARM::BI__builtin_arm_mve_vminvq_u32, 16128, 16078},
  { ARM::BI__builtin_arm_mve_vminvq_u8, 16139, 16078},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s16, 16161, 16149},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s32, 16177, 16149},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s8, 16193, 16149},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u16, 16208, 16149},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u32, 16224, 16149},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u8, 16240, 16149},
  { ARM::BI__builtin_arm_mve_vmladavaq_s16, 16265, 16255},
  { ARM::BI__builtin_arm_mve_vmladavaq_s32, 16279, 16255},
  { ARM::BI__builtin_arm_mve_vmladavaq_s8, 16293, 16255},
  { ARM::BI__builtin_arm_mve_vmladavaq_u16, 16306, 16255},
  { ARM::BI__builtin_arm_mve_vmladavaq_u32, 16320, 16255},
  { ARM::BI__builtin_arm_mve_vmladavaq_u8, 16334, 16255},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s16, 16360, 16347},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s32, 16377, 16347},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s8, 16394, 16347},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s16, 16421, 16410},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s32, 16436, 16410},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s8, 16451, 16410},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s16, 16476, 16465},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s32, 16491, 16465},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s8, 16506, 16465},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u16, 16520, 16465},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u32, 16535, 16465},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u8, 16550, 16465},
  { ARM::BI__builtin_arm_mve_vmladavq_s16, 16573, 16564},
  { ARM::BI__builtin_arm_mve_vmladavq_s32, 16586, 16564},
  { ARM::BI__builtin_arm_mve_vmladavq_s8, 16599, 16564},
  { ARM::BI__builtin_arm_mve_vmladavq_u16, 16611, 16564},
  { ARM::BI__builtin_arm_mve_vmladavq_u32, 16624, 16564},
  { ARM::BI__builtin_arm_mve_vmladavq_u8, 16637, 16564},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s16, 16661, 16649},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s32, 16677, 16649},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s8, 16693, 16649},
  { ARM::BI__builtin_arm_mve_vmladavxq_s16, 16718, 16708},
  { ARM::BI__builtin_arm_mve_vmladavxq_s32, 16732, 16708},
  { ARM::BI__builtin_arm_mve_vmladavxq_s8, 16746, 16708},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_s16, 16772, 16759},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_s32, 16789, 16759},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_u16, 16806, 16759},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_u32, 16823, 16759},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_s16, 16851, 16840},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_s32, 16866, 16840},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_u16, 16881, 16840},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_u32, 16896, 16840},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s16, 16925, 16911},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s32, 16943, 16911},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_s16, 16973, 16961},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_s32, 16989, 16961},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_s16, 17017, 17005},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_s32, 17033, 17005},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_u16, 17049, 17005},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_u32, 17065, 17005},
  { ARM::BI__builtin_arm_mve_vmlaldavq_s16, 17091, 17081},
  { ARM::BI__builtin_arm_mve_vmlaldavq_s32, 17105, 17081},
  { ARM::BI__builtin_arm_mve_vmlaldavq_u16, 17119, 17081},
  { ARM::BI__builtin_arm_mve_vmlaldavq_u32, 17133, 17081},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_p_s16, 17160, 17147},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_p_s32, 17177, 17147},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_s16, 17205, 17194},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_s32, 17220, 17194},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s16, 17247, 17235},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s32, 17263, 17235},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s8, 17279, 17235},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s16, 17304, 17294},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s32, 17318, 17294},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s8, 17332, 17294},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s16, 17358, 17345},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s32, 17375, 17345},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s8, 17392, 17345},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s16, 17419, 17408},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s32, 17434, 17408},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s8, 17449, 17408},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s16, 17474, 17463},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s32, 17489, 17463},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s8, 17504, 17463},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s16, 17527, 17518},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s32, 17540, 17518},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s8, 17553, 17518},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s16, 17577, 17565},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s32, 17593, 17565},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s8, 17609, 17565},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s16, 17634, 17624},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s32, 17648, 17624},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s8, 17662, 17624},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_p_s16, 17688, 17675},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_p_s32, 17705, 17675},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_s16, 17733, 17722},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_s32, 17748, 17722},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s16, 17777, 17763},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s32, 17795, 17763},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_s16, 17825, 17813},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_s32, 17841, 17813},
  { ARM::BI__builtin_arm_mve_vmlsldavq_p_s16, 17869, 17857},
  { ARM::BI__builtin_arm_mve_vmlsldavq_p_s32, 17885, 17857},
  { ARM::BI__builtin_arm_mve_vmlsldavq_s16, 17911, 17901},
  { ARM::BI__builtin_arm_mve_vmlsldavq_s32, 17925, 17901},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_p_s16, 17952, 17939},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_p_s32, 17969, 17939},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_s16, 17997, 17986},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_s32, 18012, 17986},
  { ARM::BI__builtin_arm_mve_vmovlbq_m_s16, 18037, 18027},
  { ARM::BI__builtin_arm_mve_vmovlbq_m_s8, 18051, 18027},
  { ARM::BI__builtin_arm_mve_vmovlbq_m_u16, 18064, 18027},
  { ARM::BI__builtin_arm_mve_vmovlbq_m_u8, 18078, 18027},
  { ARM::BI__builtin_arm_mve_vmovlbq_s16, 18099, 18091},
  { ARM::BI__builtin_arm_mve_vmovlbq_s8, 18111, 18091},
  { ARM::BI__builtin_arm_mve_vmovlbq_u16, 18122, 18091},
  { ARM::BI__builtin_arm_mve_vmovlbq_u8, 18134, 18091},
  { ARM::BI__builtin_arm_mve_vmovlbq_x_s16, 18155, 18145},
  { ARM::BI__builtin_arm_mve_vmovlbq_x_s8, 18169, 18145},
  { ARM::BI__builtin_arm_mve_vmovlbq_x_u16, 18182, 18145},
  { ARM::BI__builtin_arm_mve_vmovlbq_x_u8, 18196, 18145},
  { ARM::BI__builtin_arm_mve_vmovltq_m_s16, 18219, 18209},
  { ARM::BI__builtin_arm_mve_vmovltq_m_s8, 18233, 18209},
  { ARM::BI__builtin_arm_mve_vmovltq_m_u16, 18246, 18209},
  { ARM::BI__builtin_arm_mve_vmovltq_m_u8, 18260, 18209},
  { ARM::BI__builtin_arm_mve_vmovltq_s16, 18281, 18273},
  { ARM::BI__builtin_arm_mve_vmovltq_s8, 18293, 18273},
  { ARM::BI__builtin_arm_mve_vmovltq_u16, 18304, 18273},
  { ARM::BI__builtin_arm_mve_vmovltq_u8, 18316, 18273},
  { ARM::BI__builtin_arm_mve_vmovltq_x_s16, 18337, 18327},
  { ARM::BI__builtin_arm_mve_vmovltq_x_s8, 18351, 18327},
  { ARM::BI__builtin_arm_mve_vmovltq_x_u16, 18364, 18327},
  { ARM::BI__builtin_arm_mve_vmovltq_x_u8, 18378, 18327},
  { ARM::BI__builtin_arm_mve_vmovnbq_m_s16, 18401, 18391},
  { ARM::BI__builtin_arm_mve_vmovnbq_m_s32, 18415, 18391},
  { ARM::BI__builtin_arm_mve_vmovnbq_m_u16, 18429, 18391},
  { ARM::BI__builtin_arm_mve_vmovnbq_m_u32, 18443, 18391},
  { ARM::BI__builtin_arm_mve_vmovnbq_s16, 18465, 18457},
  { ARM::BI__builtin_arm_mve_vmovnbq_s32, 18477, 18457},
  { ARM::BI__builtin_arm_mve_vmovnbq_u16, 18489, 18457},
  { ARM::BI__builtin_arm_mve_vmovnbq_u32, 18501, 18457},
  { ARM::BI__builtin_arm_mve_vmovntq_m_s16, 18523, 18513},
  { ARM::BI__builtin_arm_mve_vmovntq_m_s32, 18537, 18513},
  { ARM::BI__builtin_arm_mve_vmovntq_m_u16, 18551, 18513},
  { ARM::BI__builtin_arm_mve_vmovntq_m_u32, 18565, 18513},
  { ARM::BI__builtin_arm_mve_vmovntq_s16, 18587, 18579},
  { ARM::BI__builtin_arm_mve_vmovntq_s32, 18599, 18579},
  { ARM::BI__builtin_arm_mve_vmovntq_u16, 18611, 18579},
  { ARM::BI__builtin_arm_mve_vmovntq_u32, 18623, 18579},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s16, 18644, 18635},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s32, 18657, 18635},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s8, 18670, 18635},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u16, 18682, 18635},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u32, 18695, 18635},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u8, 18708, 18635},
  { ARM::BI__builtin_arm_mve_vmulhq_s16, 18727, 18720},
  { ARM::BI__builtin_arm_mve_vmulhq_s32, 18738, 18720},
  { ARM::BI__builtin_arm_mve_vmulhq_s8, 18749, 18720},
  { ARM::BI__builtin_arm_mve_vmulhq_u16, 18759, 18720},
  { ARM::BI__builtin_arm_mve_vmulhq_u32, 18770, 18720},
  { ARM::BI__builtin_arm_mve_vmulhq_u8, 18781, 18720},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s16, 18800, 18791},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s32, 18813, 18791},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s8, 18826, 18791},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u16, 18838, 18791},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u32, 18851, 18791},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u8, 18864, 18791},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s16, 18890, 18876},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s32, 18908, 18876},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s8, 18926, 18876},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u16, 18943, 18876},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u32, 18961, 18876},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u8, 18979, 18876},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s16, 19008, 18996},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s32, 19024, 18996},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s8, 19040, 18996},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u16, 19055, 18996},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u32, 19071, 18996},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u8, 19087, 18996},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s16, 19116, 19102},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s32, 19134, 19102},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s8, 19152, 19102},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u16, 19169, 19102},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u32, 19187, 19102},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u8, 19205, 19102},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_m_p16, 19237, 19222},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_m_p8, 19256, 19222},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_p16, 19287, 19274},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_p8, 19304, 19274},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_x_p16, 19335, 19320},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_x_p8, 19354, 19320},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s16, 19386, 19372},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s32, 19404, 19372},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s8, 19422, 19372},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u16, 19439, 19372},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u32, 19457, 19372},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u8, 19475, 19372},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s16, 19504, 19492},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s32, 19520, 19492},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s8, 19536, 19492},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u16, 19551, 19492},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u32, 19567, 19492},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u8, 19583, 19492},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s16, 19612, 19598},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s32, 19630, 19598},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s8, 19648, 19598},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u16, 19665, 19598},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u32, 19683, 19598},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u8, 19701, 19598},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_m_p16, 19733, 19718},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_m_p8, 19752, 19718},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_p16, 19783, 19770},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_p8, 19800, 19770},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_x_p16, 19831, 19816},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_x_p8, 19850, 19816},
  { ARM::BI__builtin_arm_mve_vmulq_f16, 19874, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_f32, 19884, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_m_f16, 19902, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_f32, 19914, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_f16, 19926, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_f32, 19940, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_s16, 19954, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_s32, 19968, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_s8, 19982, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_u16, 19995, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_u32, 20009, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_u8, 20023, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_s16, 20036, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_s32, 20048, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_s8, 20060, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_u16, 20071, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_u32, 20083, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_m_u8, 20095, 19894},
  { ARM::BI__builtin_arm_mve_vmulq_n_f16, 20106, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_n_f32, 20118, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_n_s16, 20130, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_n_s32, 20142, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_n_s8, 20154, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_n_u16, 20165, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_n_u32, 20177, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_n_u8, 20189, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_s16, 20200, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_s32, 20210, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_s8, 20220, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_u16, 20229, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_u32, 20239, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_u8, 20249, 19868},
  { ARM::BI__builtin_arm_mve_vmulq_x_f16, 20266, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_f32, 20278, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_f16, 20290, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_f32, 20304, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_s16, 20318, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_s32, 20332, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_s8, 20346, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_u16, 20359, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_u32, 20373, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_u8, 20387, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_s16, 20400, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_s32, 20412, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_s8, 20424, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_u16, 20435, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_u32, 20447, 20258},
  { ARM::BI__builtin_arm_mve_vmulq_x_u8, 20459, 20258},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_s16, 20478, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_s32, 20492, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_u16, 20506, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_u32, 20520, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_m_s16, 20534, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_m_s32, 20546, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_m_s8, 20558, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_m_u16, 20569, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_m_u32, 20581, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_m_u8, 20593, 20470},
  { ARM::BI__builtin_arm_mve_vmvnq_n_s16, 20604, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_s32, 20616, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_u16, 20628, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_u32, 20640, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_s16, 20658, 20652},
  { ARM::BI__builtin_arm_mve_vmvnq_s32, 20668, 20652},
  { ARM::BI__builtin_arm_mve_vmvnq_s8, 20678, 20652},
  { ARM::BI__builtin_arm_mve_vmvnq_u16, 20687, 20652},
  { ARM::BI__builtin_arm_mve_vmvnq_u32, 20697, 20652},
  { ARM::BI__builtin_arm_mve_vmvnq_u8, 20707, 20652},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_s16, 20716, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_s32, 20730, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_u16, 20744, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_u32, 20758, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_s16, 20780, 20772},
  { ARM::BI__builtin_arm_mve_vmvnq_x_s32, 20792, 20772},
  { ARM::BI__builtin_arm_mve_vmvnq_x_s8, 20804, 20772},
  { ARM::BI__builtin_arm_mve_vmvnq_x_u16, 20815, 20772},
  { ARM::BI__builtin_arm_mve_vmvnq_x_u32, 20827, 20772},
  { ARM::BI__builtin_arm_mve_vmvnq_x_u8, 20839, 20772},
  { ARM::BI__builtin_arm_mve_vnegq_f16, 20856, 20850},
  { ARM::BI__builtin_arm_mve_vnegq_f32, 20866, 20850},
  { ARM::BI__builtin_arm_mve_vnegq_m_f16, 20884, 20876},
  { ARM::BI__builtin_arm_mve_vnegq_m_f32, 20896, 20876},
  { ARM::BI__builtin_arm_mve_vnegq_m_s16, 20908, 20876},
  { ARM::BI__builtin_arm_mve_vnegq_m_s32, 20920, 20876},
  { ARM::BI__builtin_arm_mve_vnegq_m_s8, 20932, 20876},
  { ARM::BI__builtin_arm_mve_vnegq_s16, 20943, 20850},
  { ARM::BI__builtin_arm_mve_vnegq_s32, 20953, 20850},
  { ARM::BI__builtin_arm_mve_vnegq_s8, 20963, 20850},
  { ARM::BI__builtin_arm_mve_vnegq_x_f16, 20980, 20972},
  { ARM::BI__builtin_arm_mve_vnegq_x_f32, 20992, 20972},
  { ARM::BI__builtin_arm_mve_vnegq_x_s16, 21004, 20972},
  { ARM::BI__builtin_arm_mve_vnegq_x_s32, 21016, 20972},
  { ARM::BI__builtin_arm_mve_vnegq_x_s8, 21028, 20972},
  { ARM::BI__builtin_arm_mve_vornq_f16, 21045, 21039},
  { ARM::BI__builtin_arm_mve_vornq_f32, 21055, 21039},
  { ARM::BI__builtin_arm_mve_vornq_m_f16, 21073, 21065},
  { ARM::BI__builtin_arm_mve_vornq_m_f32, 21085, 21065},
  { ARM::BI__builtin_arm_mve_vornq_m_s16, 21097, 21065},
  { ARM::BI__builtin_arm_mve_vornq_m_s32, 21109, 21065},
  { ARM::BI__builtin_arm_mve_vornq_m_s8, 21121, 21065},
  { ARM::BI__builtin_arm_mve_vornq_m_u16, 21132, 21065},
  { ARM::BI__builtin_arm_mve_vornq_m_u32, 21144, 21065},
  { ARM::BI__builtin_arm_mve_vornq_m_u8, 21156, 21065},
  { ARM::BI__builtin_arm_mve_vornq_s16, 21167, 21039},
  { ARM::BI__builtin_arm_mve_vornq_s32, 21177, 21039},
  { ARM::BI__builtin_arm_mve_vornq_s8, 21187, 21039},
  { ARM::BI__builtin_arm_mve_vornq_u16, 21196, 21039},
  { ARM::BI__builtin_arm_mve_vornq_u32, 21206, 21039},
  { ARM::BI__builtin_arm_mve_vornq_u8, 21216, 21039},
  { ARM::BI__builtin_arm_mve_vornq_x_f16, 21233, 21225},
  { ARM::BI__builtin_arm_mve_vornq_x_f32, 21245, 21225},
  { ARM::BI__builtin_arm_mve_vornq_x_s16, 21257, 21225},
  { ARM::BI__builtin_arm_mve_vornq_x_s32, 21269, 21225},
  { ARM::BI__builtin_arm_mve_vornq_x_s8, 21281, 21225},
  { ARM::BI__builtin_arm_mve_vornq_x_u16, 21292, 21225},
  { ARM::BI__builtin_arm_mve_vornq_x_u32, 21304, 21225},
  { ARM::BI__builtin_arm_mve_vornq_x_u8, 21316, 21225},
  { ARM::BI__builtin_arm_mve_vorrq_f16, 21333, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_f32, 21343, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_m_f16, 21361, 21353},
  { ARM::BI__builtin_arm_mve_vorrq_m_f32, 21373, 21353},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_s16, 21395, 21385},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_s32, 21409, 21385},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_u16, 21423, 21385},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_u32, 21437, 21385},
  { ARM::BI__builtin_arm_mve_vorrq_m_s16, 21451, 21353},
  { ARM::BI__builtin_arm_mve_vorrq_m_s32, 21463, 21353},
  { ARM::BI__builtin_arm_mve_vorrq_m_s8, 21475, 21353},
  { ARM::BI__builtin_arm_mve_vorrq_m_u16, 21486, 21353},
  { ARM::BI__builtin_arm_mve_vorrq_m_u32, 21498, 21353},
  { ARM::BI__builtin_arm_mve_vorrq_m_u8, 21510, 21353},
  { ARM::BI__builtin_arm_mve_vorrq_n_s16, 21521, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_n_s32, 21533, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_n_u16, 21545, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_n_u32, 21557, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_s16, 21569, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_s32, 21579, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_s8, 21589, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_u16, 21598, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_u32, 21608, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_u8, 21618, 21327},
  { ARM::BI__builtin_arm_mve_vorrq_x_f16, 21635, 21627},
  { ARM::BI__builtin_arm_mve_vorrq_x_f32, 21647, 21627},
  { ARM::BI__builtin_arm_mve_vorrq_x_s16, 21659, 21627},
  { ARM::BI__builtin_arm_mve_vorrq_x_s32, 21671, 21627},
  { ARM::BI__builtin_arm_mve_vorrq_x_s8, 21683, 21627},
  { ARM::BI__builtin_arm_mve_vorrq_x_u16, 21694, 21627},
  { ARM::BI__builtin_arm_mve_vorrq_x_u32, 21706, 21627},
  { ARM::BI__builtin_arm_mve_vorrq_x_u8, 21718, 21627},
  { ARM::BI__builtin_arm_mve_vpnot, 21729, -1},
  { ARM::BI__builtin_arm_mve_vpselq_f16, 21742, 21735},
  { ARM::BI__builtin_arm_mve_vpselq_f32, 21753, 21735},
  { ARM::BI__builtin_arm_mve_vpselq_s16, 21764, 21735},
  { ARM::BI__builtin_arm_mve_vpselq_s32, 21775, 21735},
  { ARM::BI__builtin_arm_mve_vpselq_s64, 21786, 21735},
  { ARM::BI__builtin_arm_mve_vpselq_s8, 21797, 21735},
  { ARM::BI__builtin_arm_mve_vpselq_u16, 21807, 21735},
  { ARM::BI__builtin_arm_mve_vpselq_u32, 21818, 21735},
  { ARM::BI__builtin_arm_mve_vpselq_u64, 21829, 21735},
  { ARM::BI__builtin_arm_mve_vpselq_u8, 21840, 21735},
  { ARM::BI__builtin_arm_mve_vqabsq_m_s16, 21859, 21850},
  { ARM::BI__builtin_arm_mve_vqabsq_m_s32, 21872, 21850},
  { ARM::BI__builtin_arm_mve_vqabsq_m_s8, 21885, 21850},
  { ARM::BI__builtin_arm_mve_vqabsq_s16, 21904, 21897},
  { ARM::BI__builtin_arm_mve_vqabsq_s32, 21915, 21897},
  { ARM::BI__builtin_arm_mve_vqabsq_s8, 21926, 21897},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_s16, 21945, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_s32, 21960, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_s8, 21975, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_u16, 21989, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_u32, 22004, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_u8, 22019, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s16, 22033, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s32, 22046, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s8, 22059, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u16, 22071, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u32, 22084, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u8, 22097, 21936},
  { ARM::BI__builtin_arm_mve_vqaddq_n_s16, 22116, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_n_s32, 22129, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_n_s8, 22142, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_n_u16, 22154, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_n_u32, 22167, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_n_u8, 22180, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_s16, 22192, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_s32, 22203, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_s8, 22214, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_u16, 22224, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_u32, 22235, 22109},
  { ARM::BI__builtin_arm_mve_vqaddq_u8, 22246, 22109},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_n_s16, 22267, 22256},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_n_s32, 22284, 22256},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_n_s8, 22301, 22256},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s16, 22317, 22256},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s32, 22332, 22256},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s8, 22347, 22256},
  { ARM::BI__builtin_arm_mve_vqdmulhq_n_s16, 22370, 22361},
  { ARM::BI__builtin_arm_mve_vqdmulhq_n_s32, 22385, 22361},
  { ARM::BI__builtin_arm_mve_vqdmulhq_n_s8, 22400, 22361},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s16, 22414, 22361},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s32, 22427, 22361},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s8, 22440, 22361},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_n_s16, 22464, 22452},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_n_s32, 22482, 22452},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_s16, 22500, 22452},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_s32, 22516, 22452},
  { ARM::BI__builtin_arm_mve_vqdmullbq_n_s16, 22542, 22532},
  { ARM::BI__builtin_arm_mve_vqdmullbq_n_s32, 22558, 22532},
  { ARM::BI__builtin_arm_mve_vqdmullbq_s16, 22574, 22532},
  { ARM::BI__builtin_arm_mve_vqdmullbq_s32, 22588, 22532},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_n_s16, 22614, 22602},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_n_s32, 22632, 22602},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_s16, 22650, 22602},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_s32, 22666, 22602},
  { ARM::BI__builtin_arm_mve_vqdmulltq_n_s16, 22692, 22682},
  { ARM::BI__builtin_arm_mve_vqdmulltq_n_s32, 22708, 22682},
  { ARM::BI__builtin_arm_mve_vqdmulltq_s16, 22724, 22682},
  { ARM::BI__builtin_arm_mve_vqdmulltq_s32, 22738, 22682},
  { ARM::BI__builtin_arm_mve_vqnegq_m_s16, 22761, 22752},
  { ARM::BI__builtin_arm_mve_vqnegq_m_s32, 22774, 22752},
  { ARM::BI__builtin_arm_mve_vqnegq_m_s8, 22787, 22752},
  { ARM::BI__builtin_arm_mve_vqnegq_s16, 22806, 22799},
  { ARM::BI__builtin_arm_mve_vqnegq_s32, 22817, 22799},
  { ARM::BI__builtin_arm_mve_vqnegq_s8, 22828, 22799},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_n_s16, 22850, 22838},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_n_s32, 22868, 22838},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_n_s8, 22886, 22838},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s16, 22903, 22838},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s32, 22919, 22838},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s8, 22935, 22838},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_n_s16, 22960, 22950},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_n_s32, 22976, 22950},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_n_s8, 22992, 22950},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s16, 23007, 22950},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s32, 23021, 22950},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s8, 23035, 22950},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s16, 23060, 23048},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s32, 23076, 23048},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s8, 23092, 23048},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u16, 23107, 23048},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u32, 23123, 23048},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u8, 23139, 23048},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s16, 23164, 23154},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s32, 23178, 23154},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s8, 23192, 23154},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u16, 23205, 23154},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u32, 23219, 23154},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u8, 23233, 23154},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s16, 23254, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s32, 23268, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s8, 23282, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u16, 23295, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u32, 23309, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u8, 23323, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_s16, 23336, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_s32, 23348, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_s8, 23360, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_u16, 23371, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_u32, 23383, 23246},
  { ARM::BI__builtin_arm_mve_vqrshlq_u8, 23395, 23246},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s16, 23418, 23406},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s32, 23436, 23406},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u16, 23454, 23406},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u32, 23472, 23406},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_s16, 23500, 23490},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_s32, 23516, 23490},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_u16, 23532, 23490},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_u32, 23548, 23490},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s16, 23576, 23564},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s32, 23594, 23564},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u16, 23612, 23564},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u32, 23630, 23564},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_s16, 23658, 23648},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_s32, 23674, 23648},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_u16, 23690, 23648},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_u32, 23706, 23648},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s16, 23735, 23722},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s32, 23754, 23722},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_n_s16, 23784, 23773},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_n_s32, 23801, 23773},
  { ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s16, 23831, 23818},
  { ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s32, 23850, 23818},
  { ARM::BI__builtin_arm_mve_vqrshruntq_n_s16, 23880, 23869},
  { ARM::BI__builtin_arm_mve_vqrshruntq_n_s32, 23897, 23869},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s16, 23925, 23914},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s32, 23940, 23914},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s8, 23955, 23914},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u16, 23969, 23914},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u32, 23984, 23914},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u8, 23999, 23914},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s16, 24024, 24013},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s32, 24039, 24013},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s8, 24054, 24013},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u16, 24068, 24013},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u32, 24083, 24013},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u8, 24098, 24013},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s16, 24121, 24112},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s32, 24134, 24112},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s8, 24147, 24112},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u16, 24159, 24112},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u32, 24172, 24112},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u8, 24185, 24112},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s16, 24206, 24197},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s32, 24219, 24197},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s8, 24232, 24197},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u16, 24244, 24197},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u32, 24257, 24197},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u8, 24270, 24197},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s16, 24291, 24282},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s32, 24304, 24282},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s8, 24317, 24282},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u16, 24329, 24282},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u32, 24342, 24282},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u8, 24355, 24282},
  { ARM::BI__builtin_arm_mve_vqshlq_s16, 24374, 24367},
  { ARM::BI__builtin_arm_mve_vqshlq_s32, 24385, 24367},
  { ARM::BI__builtin_arm_mve_vqshlq_s8, 24396, 24367},
  { ARM::BI__builtin_arm_mve_vqshlq_u16, 24406, 24367},
  { ARM::BI__builtin_arm_mve_vqshlq_u32, 24417, 24367},
  { ARM::BI__builtin_arm_mve_vqshlq_u8, 24428, 24367},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s16, 24448, 24438},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s32, 24464, 24438},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s8, 24480, 24438},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s16, 24503, 24495},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s32, 24517, 24495},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s8, 24531, 24495},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s16, 24555, 24544},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s32, 24572, 24544},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u16, 24589, 24544},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u32, 24606, 24544},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_s16, 24632, 24623},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_s32, 24647, 24623},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_u16, 24662, 24623},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_u32, 24677, 24623},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_s16, 24703, 24692},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_s32, 24720, 24692},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_u16, 24737, 24692},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_u32, 24754, 24692},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_s16, 24780, 24771},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_s32, 24795, 24771},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_u16, 24810, 24771},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_u32, 24825, 24771},
  { ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s16, 24852, 24840},
  { ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s32, 24870, 24840},
  { ARM::BI__builtin_arm_mve_vqshrunbq_n_s16, 24898, 24888},
  { ARM::BI__builtin_arm_mve_vqshrunbq_n_s32, 24914, 24888},
  { ARM::BI__builtin_arm_mve_vqshruntq_m_n_s16, 24942, 24930},
  { ARM::BI__builtin_arm_mve_vqshruntq_m_n_s32, 24960, 24930},
  { ARM::BI__builtin_arm_mve_vqshruntq_n_s16, 24988, 24978},
  { ARM::BI__builtin_arm_mve_vqshruntq_n_s32, 25004, 24978},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_s16, 25029, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_s32, 25044, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_s8, 25059, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_u16, 25073, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_u32, 25088, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_u8, 25103, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s16, 25117, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s32, 25130, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s8, 25143, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u16, 25155, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u32, 25168, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u8, 25181, 25020},
  { ARM::BI__builtin_arm_mve_vqsubq_n_s16, 25200, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_n_s32, 25213, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_n_s8, 25226, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_n_u16, 25238, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_n_u32, 25251, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_n_u8, 25264, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_s16, 25276, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_s32, 25287, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_s8, 25298, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_u16, 25308, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_u32, 25319, 25193},
  { ARM::BI__builtin_arm_mve_vqsubq_u8, 25330, 25193},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_f32, 25358, 25340},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s16, 25380, 25340},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s32, 25402, 25340},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s64, 25424, 25340},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s8, 25446, 25340},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u16, 25467, 25340},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u32, 25489, 25340},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u64, 25511, 25340},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u8, 25533, 25340},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_f16, 25572, 25554},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s16, 25594, 25554},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s32, 25616, 25554},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s64, 25638, 25554},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s8, 25660, 25554},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u16, 25681, 25554},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u32, 25703, 25554},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u64, 25725, 25554},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u8, 25747, 25554},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_f16, 25786, 25768},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_f32, 25808, 25768},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s32, 25830, 25768},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s64, 25852, 25768},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s8, 25874, 25768},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u16, 25895, 25768},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u32, 25917, 25768},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u64, 25939, 25768},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u8, 25961, 25768},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_f16, 26000, 25982},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_f32, 26022, 25982},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s16, 26044, 25982},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s64, 26066, 25982},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s8, 26088, 25982},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u16, 26109, 25982},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u32, 26131, 25982},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u64, 26153, 25982},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u8, 26175, 25982},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_f16, 26214, 26196},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_f32, 26236, 26196},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s16, 26258, 26196},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s32, 26280, 26196},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s8, 26302, 26196},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u16, 26323, 26196},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u32, 26345, 26196},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u64, 26367, 26196},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u8, 26389, 26196},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_f16, 26427, 26410},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_f32, 26448, 26410},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s16, 26469, 26410},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s32, 26490, 26410},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s64, 26511, 26410},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u16, 26532, 26410},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u32, 26553, 26410},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u64, 26574, 26410},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u8, 26595, 26410},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_f16, 26633, 26615},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_f32, 26655, 26615},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s16, 26677, 26615},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s32, 26699, 26615},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s64, 26721, 26615},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s8, 26743, 26615},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u32, 26764, 26615},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u64, 26786, 26615},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u8, 26808, 26615},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_f16, 26847, 26829},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_f32, 26869, 26829},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s16, 26891, 26829},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s32, 26913, 26829},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s64, 26935, 26829},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s8, 26957, 26829},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u16, 26978, 26829},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u64, 27000, 26829},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u8, 27022, 26829},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_f16, 27061, 27043},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_f32, 27083, 27043},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s16, 27105, 27043},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s32, 27127, 27043},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s64, 27149, 27043},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s8, 27171, 27043},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u16, 27192, 27043},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u32, 27214, 27043},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u8, 27236, 27043},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_f16, 27274, 27257},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_f32, 27295, 27257},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s16, 27316, 27257},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s32, 27337, 27257},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s64, 27358, 27257},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s8, 27379, 27257},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u16, 27399, 27257},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u32, 27420, 27257},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u64, 27441, 27257},
  { ARM::BI__builtin_arm_mve_vrev16q_m_s8, 27472, 27462},
  { ARM::BI__builtin_arm_mve_vrev16q_m_u8, 27485, 27462},
  { ARM::BI__builtin_arm_mve_vrev16q_s8, 27506, 27498},
  { ARM::BI__builtin_arm_mve_vrev16q_u8, 27517, 27498},
  { ARM::BI__builtin_arm_mve_vrev16q_x_s8, 27538, 27528},
  { ARM::BI__builtin_arm_mve_vrev16q_x_u8, 27551, 27528},
  { ARM::BI__builtin_arm_mve_vrev32q_f16, 27572, 27564},
  { ARM::BI__builtin_arm_mve_vrev32q_m_f16, 27594, 27584},
  { ARM::BI__builtin_arm_mve_vrev32q_m_s16, 27608, 27584},
  { ARM::BI__builtin_arm_mve_vrev32q_m_s8, 27622, 27584},
  { ARM::BI__builtin_arm_mve_vrev32q_m_u16, 27635, 27584},
  { ARM::BI__builtin_arm_mve_vrev32q_m_u8, 27649, 27584},
  { ARM::BI__builtin_arm_mve_vrev32q_s16, 27662, 27564},
  { ARM::BI__builtin_arm_mve_vrev32q_s8, 27674, 27564},
  { ARM::BI__builtin_arm_mve_vrev32q_u16, 27685, 27564},
  { ARM::BI__builtin_arm_mve_vrev32q_u8, 27697, 27564},
  { ARM::BI__builtin_arm_mve_vrev32q_x_f16, 27718, 27708},
  { ARM::BI__builtin_arm_mve_vrev32q_x_s16, 27732, 27708},
  { ARM::BI__builtin_arm_mve_vrev32q_x_s8, 27746, 27708},
  { ARM::BI__builtin_arm_mve_vrev32q_x_u16, 27759, 27708},
  { ARM::BI__builtin_arm_mve_vrev32q_x_u8, 27773, 27708},
  { ARM::BI__builtin_arm_mve_vrev64q_f16, 27794, 27786},
  { ARM::BI__builtin_arm_mve_vrev64q_f32, 27806, 27786},
  { ARM::BI__builtin_arm_mve_vrev64q_m_f16, 27828, 27818},
  { ARM::BI__builtin_arm_mve_vrev64q_m_f32, 27842, 27818},
  { ARM::BI__builtin_arm_mve_vrev64q_m_s16, 27856, 27818},
  { ARM::BI__builtin_arm_mve_vrev64q_m_s32, 27870, 27818},
  { ARM::BI__builtin_arm_mve_vrev64q_m_s8, 27884, 27818},
  { ARM::BI__builtin_arm_mve_vrev64q_m_u16, 27897, 27818},
  { ARM::BI__builtin_arm_mve_vrev64q_m_u32, 27911, 27818},
  { ARM::BI__builtin_arm_mve_vrev64q_m_u8, 27925, 27818},
  { ARM::BI__builtin_arm_mve_vrev64q_s16, 27938, 27786},
  { ARM::BI__builtin_arm_mve_vrev64q_s32, 27950, 27786},
  { ARM::BI__builtin_arm_mve_vrev64q_s8, 27962, 27786},
  { ARM::BI__builtin_arm_mve_vrev64q_u16, 27973, 27786},
  { ARM::BI__builtin_arm_mve_vrev64q_u32, 27985, 27786},
  { ARM::BI__builtin_arm_mve_vrev64q_u8, 27997, 27786},
  { ARM::BI__builtin_arm_mve_vrev64q_x_f16, 28018, 28008},
  { ARM::BI__builtin_arm_mve_vrev64q_x_f32, 28032, 28008},
  { ARM::BI__builtin_arm_mve_vrev64q_x_s16, 28046, 28008},
  { ARM::BI__builtin_arm_mve_vrev64q_x_s32, 28060, 28008},
  { ARM::BI__builtin_arm_mve_vrev64q_x_s8, 28074, 28008},
  { ARM::BI__builtin_arm_mve_vrev64q_x_u16, 28087, 28008},
  { ARM::BI__builtin_arm_mve_vrev64q_x_u32, 28101, 28008},
  { ARM::BI__builtin_arm_mve_vrev64q_x_u8, 28115, 28008},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s16, 28138, 28128},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s32, 28152, 28128},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s8, 28166, 28128},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u16, 28179, 28128},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u32, 28193, 28128},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u8, 28207, 28128},
  { ARM::BI__builtin_arm_mve_vrhaddq_s16, 28228, 28220},
  { ARM::BI__builtin_arm_mve_vrhaddq_s32, 28240, 28220},
  { ARM::BI__builtin_arm_mve_vrhaddq_s8, 28252, 28220},
  { ARM::BI__builtin_arm_mve_vrhaddq_u16, 28263, 28220},
  { ARM::BI__builtin_arm_mve_vrhaddq_u32, 28275, 28220},
  { ARM::BI__builtin_arm_mve_vrhaddq_u8, 28287, 28220},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s16, 28308, 28298},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s32, 28322, 28298},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s8, 28336, 28298},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u16, 28349, 28298},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u32, 28363, 28298},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u8, 28377, 28298},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_s32, 28405, 28390},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_u32, 28424, 28390},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_s32, 28456, 28443},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_u32, 28473, 28443},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaxq_p_s32, 28506, 28490},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaxq_s32, 28540, 28526},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_p_s32, 28572, 28558},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_p_u32, 28590, 28558},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_s32, 28620, 28608},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_u32, 28636, 28608},
  { ARM::BI__builtin_arm_mve_vrmlaldavhxq_p_s32, 28667, 28652},
  { ARM::BI__builtin_arm_mve_vrmlaldavhxq_s32, 28699, 28686},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaq_p_s32, 28731, 28716},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaq_s32, 28763, 28750},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaxq_p_s32, 28796, 28780},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaxq_s32, 28830, 28816},
  { ARM::BI__builtin_arm_mve_vrmlsldavhq_p_s32, 28862, 28848},
  { ARM::BI__builtin_arm_mve_vrmlsldavhq_s32, 28892, 28880},
  { ARM::BI__builtin_arm_mve_vrmlsldavhxq_p_s32, 28923, 28908},
  { ARM::BI__builtin_arm_mve_vrmlsldavhxq_s32, 28955, 28942},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s16, 28982, 28972},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s32, 28996, 28972},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s8, 29010, 28972},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u16, 29023, 28972},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u32, 29037, 28972},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u8, 29051, 28972},
  { ARM::BI__builtin_arm_mve_vrmulhq_s16, 29072, 29064},
  { ARM::BI__builtin_arm_mve_vrmulhq_s32, 29084, 29064},
  { ARM::BI__builtin_arm_mve_vrmulhq_s8, 29096, 29064},
  { ARM::BI__builtin_arm_mve_vrmulhq_u16, 29107, 29064},
  { ARM::BI__builtin_arm_mve_vrmulhq_u32, 29119, 29064},
  { ARM::BI__builtin_arm_mve_vrmulhq_u8, 29131, 29064},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s16, 29152, 29142},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s32, 29166, 29142},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s8, 29180, 29142},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u16, 29193, 29142},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u32, 29207, 29142},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u8, 29221, 29142},
  { ARM::BI__builtin_arm_mve_vrndaq_f16, 29241, 29234},
  { ARM::BI__builtin_arm_mve_vrndaq_f32, 29252, 29234},
  { ARM::BI__builtin_arm_mve_vrndaq_m_f16, 29272, 29263},
  { ARM::BI__builtin_arm_mve_vrndaq_m_f32, 29285, 29263},
  { ARM::BI__builtin_arm_mve_vrndaq_x_f16, 29307, 29298},
  { ARM::BI__builtin_arm_mve_vrndaq_x_f32, 29320, 29298},
  { ARM::BI__builtin_arm_mve_vrndmq_f16, 29340, 29333},
  { ARM::BI__builtin_arm_mve_vrndmq_f32, 29351, 29333},
  { ARM::BI__builtin_arm_mve_vrndmq_m_f16, 29371, 29362},
  { ARM::BI__builtin_arm_mve_vrndmq_m_f32, 29384, 29362},
  { ARM::BI__builtin_arm_mve_vrndmq_x_f16, 29406, 29397},
  { ARM::BI__builtin_arm_mve_vrndmq_x_f32, 29419, 29397},
  { ARM::BI__builtin_arm_mve_vrndnq_f16, 29439, 29432},
  { ARM::BI__builtin_arm_mve_vrndnq_f32, 29450, 29432},
  { ARM::BI__builtin_arm_mve_vrndnq_m_f16, 29470, 29461},
  { ARM::BI__builtin_arm_mve_vrndnq_m_f32, 29483, 29461},
  { ARM::BI__builtin_arm_mve_vrndnq_x_f16, 29505, 29496},
  { ARM::BI__builtin_arm_mve_vrndnq_x_f32, 29518, 29496},
  { ARM::BI__builtin_arm_mve_vrndpq_f16, 29538, 29531},
  { ARM::BI__builtin_arm_mve_vrndpq_f32, 29549, 29531},
  { ARM::BI__builtin_arm_mve_vrndpq_m_f16, 29569, 29560},
  { ARM::BI__builtin_arm_mve_vrndpq_m_f32, 29582, 29560},
  { ARM::BI__builtin_arm_mve_vrndpq_x_f16, 29604, 29595},
  { ARM::BI__builtin_arm_mve_vrndpq_x_f32, 29617, 29595},
  { ARM::BI__builtin_arm_mve_vrndq_f16, 29636, 29630},
  { ARM::BI__builtin_arm_mve_vrndq_f32, 29646, 29630},
  { ARM::BI__builtin_arm_mve_vrndq_m_f16, 29664, 29656},
  { ARM::BI__builtin_arm_mve_vrndq_m_f32, 29676, 29656},
  { ARM::BI__builtin_arm_mve_vrndq_x_f16, 29696, 29688},
  { ARM::BI__builtin_arm_mve_vrndq_x_f32, 29708, 29688},
  { ARM::BI__builtin_arm_mve_vrndxq_f16, 29727, 29720},
  { ARM::BI__builtin_arm_mve_vrndxq_f32, 29738, 29720},
  { ARM::BI__builtin_arm_mve_vrndxq_m_f16, 29758, 29749},
  { ARM::BI__builtin_arm_mve_vrndxq_m_f32, 29771, 29749},
  { ARM::BI__builtin_arm_mve_vrndxq_x_f16, 29793, 29784},
  { ARM::BI__builtin_arm_mve_vrndxq_x_f32, 29806, 29784},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s16, 29830, 29819},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s32, 29845, 29819},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s8, 29860, 29819},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u16, 29874, 29819},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u32, 29889, 29819},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u8, 29904, 29819},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s16, 29927, 29918},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s32, 29940, 29918},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s8, 29953, 29918},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u16, 29965, 29918},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u32, 29978, 29918},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u8, 29991, 29918},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s16, 30010, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s32, 30023, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s8, 30036, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u16, 30048, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u32, 30061, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u8, 30074, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_s16, 30086, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_s32, 30097, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_s8, 30108, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_u16, 30118, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_u32, 30129, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_u8, 30140, 30003},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s16, 30159, 30150},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s32, 30172, 30150},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s8, 30185, 30150},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u16, 30197, 30150},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u32, 30210, 30150},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u8, 30223, 30150},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s16, 30246, 30235},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s32, 30263, 30235},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u16, 30280, 30235},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u32, 30297, 30235},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_s16, 30323, 30314},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_s32, 30338, 30314},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_u16, 30353, 30314},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_u32, 30368, 30314},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_s16, 30394, 30383},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_s32, 30411, 30383},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_u16, 30428, 30383},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_u32, 30445, 30383},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_s16, 30471, 30462},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_s32, 30486, 30462},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_u16, 30501, 30462},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_u32, 30516, 30462},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s16, 30540, 30531},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s32, 30555, 30531},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s8, 30570, 30531},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u16, 30584, 30531},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u32, 30599, 30531},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u8, 30614, 30531},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s16, 30635, 30628},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s32, 30648, 30628},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s8, 30661, 30628},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u16, 30673, 30628},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u32, 30686, 30628},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u8, 30699, 30628},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s16, 30720, 30711},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s32, 30735, 30711},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s8, 30750, 30711},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u16, 30764, 30711},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u32, 30779, 30711},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u8, 30794, 30711},
  { ARM::BI__builtin_arm_mve_vsetq_lane_f16, 30819, 30808},
  { ARM::BI__builtin_arm_mve_vsetq_lane_f32, 30834, 30808},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s16, 30849, 30808},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s32, 30864, 30808},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s64, 30879, 30808},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s8, 30894, 30808},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u16, 30908, 30808},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u32, 30923, 30808},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u64, 30938, 30808},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u8, 30953, 30808},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_s16, 30977, 30967},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_s8, 30993, 30967},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_u16, 31008, 30967},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_u8, 31024, 30967},
  { ARM::BI__builtin_arm_mve_vshllbq_n_s16, 31047, 31039},
  { ARM::BI__builtin_arm_mve_vshllbq_n_s8, 31061, 31039},
  { ARM::BI__builtin_arm_mve_vshllbq_n_u16, 31074, 31039},
  { ARM::BI__builtin_arm_mve_vshllbq_n_u8, 31088, 31039},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_s16, 31111, 31101},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_s8, 31127, 31101},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_u16, 31142, 31101},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_u8, 31158, 31101},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_s16, 31183, 31173},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_s8, 31199, 31173},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_u16, 31214, 31173},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_u8, 31230, 31173},
  { ARM::BI__builtin_arm_mve_vshlltq_n_s16, 31253, 31245},
  { ARM::BI__builtin_arm_mve_vshlltq_n_s8, 31267, 31245},
  { ARM::BI__builtin_arm_mve_vshlltq_n_u16, 31280, 31245},
  { ARM::BI__builtin_arm_mve_vshlltq_n_u8, 31294, 31245},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_s16, 31317, 31307},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_s8, 31333, 31307},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_u16, 31348, 31307},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_u8, 31364, 31307},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s16, 31389, 31379},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s32, 31403, 31379},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s8, 31417, 31379},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u16, 31430, 31379},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u32, 31444, 31379},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u8, 31458, 31379},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s16, 31481, 31471},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s32, 31495, 31471},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s8, 31509, 31471},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u16, 31522, 31471},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u32, 31536, 31471},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u8, 31550, 31471},
  { ARM::BI__builtin_arm_mve_vshlq_m_s16, 31571, 31563},
  { ARM::BI__builtin_arm_mve_vshlq_m_s32, 31583, 31563},
  { ARM::BI__builtin_arm_mve_vshlq_m_s8, 31595, 31563},
  { ARM::BI__builtin_arm_mve_vshlq_m_u16, 31606, 31563},
  { ARM::BI__builtin_arm_mve_vshlq_m_u32, 31618, 31563},
  { ARM::BI__builtin_arm_mve_vshlq_m_u8, 31630, 31563},
  { ARM::BI__builtin_arm_mve_vshlq_n_s16, 31649, 31641},
  { ARM::BI__builtin_arm_mve_vshlq_n_s32, 31661, 31641},
  { ARM::BI__builtin_arm_mve_vshlq_n_s8, 31673, 31641},
  { ARM::BI__builtin_arm_mve_vshlq_n_u16, 31684, 31641},
  { ARM::BI__builtin_arm_mve_vshlq_n_u32, 31696, 31641},
  { ARM::BI__builtin_arm_mve_vshlq_n_u8, 31708, 31641},
  { ARM::BI__builtin_arm_mve_vshlq_r_s16, 31727, 31719},
  { ARM::BI__builtin_arm_mve_vshlq_r_s32, 31739, 31719},
  { ARM::BI__builtin_arm_mve_vshlq_r_s8, 31751, 31719},
  { ARM::BI__builtin_arm_mve_vshlq_r_u16, 31762, 31719},
  { ARM::BI__builtin_arm_mve_vshlq_r_u32, 31774, 31719},
  { ARM::BI__builtin_arm_mve_vshlq_r_u8, 31786, 31719},
  { ARM::BI__builtin_arm_mve_vshlq_s16, 31803, 31797},
  { ARM::BI__builtin_arm_mve_vshlq_s32, 31813, 31797},
  { ARM::BI__builtin_arm_mve_vshlq_s8, 31823, 31797},
  { ARM::BI__builtin_arm_mve_vshlq_u16, 31832, 31797},
  { ARM::BI__builtin_arm_mve_vshlq_u32, 31842, 31797},
  { ARM::BI__builtin_arm_mve_vshlq_u8, 31852, 31797},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s16, 31871, 31861},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s32, 31885, 31861},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s8, 31899, 31861},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u16, 31912, 31861},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u32, 31926, 31861},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u8, 31940, 31861},
  { ARM::BI__builtin_arm_mve_vshlq_x_s16, 31961, 31953},
  { ARM::BI__builtin_arm_mve_vshlq_x_s32, 31973, 31953},
  { ARM::BI__builtin_arm_mve_vshlq_x_s8, 31985, 31953},
  { ARM::BI__builtin_arm_mve_vshlq_x_u16, 31996, 31953},
  { ARM::BI__builtin_arm_mve_vshlq_x_u32, 32008, 31953},
  { ARM::BI__builtin_arm_mve_vshlq_x_u8, 32020, 31953},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_s16, 32041, 32031},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_s32, 32057, 32031},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_u16, 32073, 32031},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_u32, 32089, 32031},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_s16, 32113, 32105},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_s32, 32127, 32105},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_u16, 32141, 32105},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_u32, 32155, 32105},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_s16, 32179, 32169},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_s32, 32195, 32169},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_u16, 32211, 32169},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_u32, 32227, 32169},
  { ARM::BI__builtin_arm_mve_vshrntq_n_s16, 32251, 32243},
  { ARM::BI__builtin_arm_mve_vshrntq_n_s32, 32265, 32243},
  { ARM::BI__builtin_arm_mve_vshrntq_n_u16, 32279, 32243},
  { ARM::BI__builtin_arm_mve_vshrntq_n_u32, 32293, 32243},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s16, 32315, 32307},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s32, 32329, 32307},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s8, 32343, 32307},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u16, 32356, 32307},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u32, 32370, 32307},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u8, 32384, 32307},
  { ARM::BI__builtin_arm_mve_vshrq_n_s16, 32403, 32397},
  { ARM::BI__builtin_arm_mve_vshrq_n_s32, 32415, 32397},
  { ARM::BI__builtin_arm_mve_vshrq_n_s8, 32427, 32397},
  { ARM::BI__builtin_arm_mve_vshrq_n_u16, 32438, 32397},
  { ARM::BI__builtin_arm_mve_vshrq_n_u32, 32450, 32397},
  { ARM::BI__builtin_arm_mve_vshrq_n_u8, 32462, 32397},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s16, 32481, 32473},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s32, 32495, 32473},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s8, 32509, 32473},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u16, 32522, 32473},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u32, 32536, 32473},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u8, 32550, 32473},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s16, 32571, 32563},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s32, 32585, 32563},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s8, 32599, 32563},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u16, 32612, 32563},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u32, 32626, 32563},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u8, 32640, 32563},
  { ARM::BI__builtin_arm_mve_vsliq_n_s16, 32659, 32653},
  { ARM::BI__builtin_arm_mve_vsliq_n_s32, 32671, 32653},
  { ARM::BI__builtin_arm_mve_vsliq_n_s8, 32683, 32653},
  { ARM::BI__builtin_arm_mve_vsliq_n_u16, 32694, 32653},
  { ARM::BI__builtin_arm_mve_vsliq_n_u32, 32706, 32653},
  { ARM::BI__builtin_arm_mve_vsliq_n_u8, 32718, 32653},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s16, 32737, 32729},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s32, 32751, 32729},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s8, 32765, 32729},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u16, 32778, 32729},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u32, 32792, 32729},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u8, 32806, 32729},
  { ARM::BI__builtin_arm_mve_vsriq_n_s16, 32825, 32819},
  { ARM::BI__builtin_arm_mve_vsriq_n_s32, 32837, 32819},
  { ARM::BI__builtin_arm_mve_vsriq_n_s8, 32849, 32819},
  { ARM::BI__builtin_arm_mve_vsriq_n_u16, 32860, 32819},
  { ARM::BI__builtin_arm_mve_vsriq_n_u32, 32872, 32819},
  { ARM::BI__builtin_arm_mve_vsriq_n_u8, 32884, 32819},
  { ARM::BI__builtin_arm_mve_vst1q_f16, 32901, 32895},
  { ARM::BI__builtin_arm_mve_vst1q_f32, 32911, 32895},
  { ARM::BI__builtin_arm_mve_vst1q_p_f16, 32929, 32921},
  { ARM::BI__builtin_arm_mve_vst1q_p_f32, 32941, 32921},
  { ARM::BI__builtin_arm_mve_vst1q_p_s16, 32953, 32921},
  { ARM::BI__builtin_arm_mve_vst1q_p_s32, 32965, 32921},
  { ARM::BI__builtin_arm_mve_vst1q_p_s8, 32977, 32921},
  { ARM::BI__builtin_arm_mve_vst1q_p_u16, 32988, 32921},
  { ARM::BI__builtin_arm_mve_vst1q_p_u32, 33000, 32921},
  { ARM::BI__builtin_arm_mve_vst1q_p_u8, 33012, 32921},
  { ARM::BI__builtin_arm_mve_vst1q_s16, 33023, 32895},
  { ARM::BI__builtin_arm_mve_vst1q_s32, 33033, 32895},
  { ARM::BI__builtin_arm_mve_vst1q_s8, 33043, 32895},
  { ARM::BI__builtin_arm_mve_vst1q_u16, 33052, 32895},
  { ARM::BI__builtin_arm_mve_vst1q_u32, 33062, 32895},
  { ARM::BI__builtin_arm_mve_vst1q_u8, 33072, 32895},
  { ARM::BI__builtin_arm_mve_vst2q_f16, 33087, 33081},
  { ARM::BI__builtin_arm_mve_vst2q_f32, 33097, 33081},
  { ARM::BI__builtin_arm_mve_vst2q_s16, 33107, 33081},
  { ARM::BI__builtin_arm_mve_vst2q_s32, 33117, 33081},
  { ARM::BI__builtin_arm_mve_vst2q_s8, 33127, 33081},
  { ARM::BI__builtin_arm_mve_vst2q_u16, 33136, 33081},
  { ARM::BI__builtin_arm_mve_vst2q_u32, 33146, 33081},
  { ARM::BI__builtin_arm_mve_vst2q_u8, 33156, 33081},
  { ARM::BI__builtin_arm_mve_vst4q_f16, 33171, 33165},
  { ARM::BI__builtin_arm_mve_vst4q_f32, 33181, 33165},
  { ARM::BI__builtin_arm_mve_vst4q_s16, 33191, 33165},
  { ARM::BI__builtin_arm_mve_vst4q_s32, 33201, 33165},
  { ARM::BI__builtin_arm_mve_vst4q_s8, 33211, 33165},
  { ARM::BI__builtin_arm_mve_vst4q_u16, 33220, 33165},
  { ARM::BI__builtin_arm_mve_vst4q_u32, 33230, 33165},
  { ARM::BI__builtin_arm_mve_vst4q_u8, 33240, 33165},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s16, 33258, 33249},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s32, 33271, 33249},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s8, 33284, 33249},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u16, 33296, 33249},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u32, 33309, 33249},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u8, 33322, 33249},
  { ARM::BI__builtin_arm_mve_vstrbq_s16, 33341, 33334},
  { ARM::BI__builtin_arm_mve_vstrbq_s32, 33352, 33334},
  { ARM::BI__builtin_arm_mve_vstrbq_s8, 33363, 33334},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s16, 33397, 33373},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s32, 33425, 33373},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s8, 33453, 33373},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u16, 33480, 33373},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u32, 33508, 33373},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u8, 33536, 33373},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s16, 33585, 33563},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s32, 33611, 33563},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s8, 33637, 33563},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u16, 33662, 33563},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u32, 33688, 33563},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u8, 33714, 33563},
  { ARM::BI__builtin_arm_mve_vstrbq_u16, 33739, 33334},
  { ARM::BI__builtin_arm_mve_vstrbq_u32, 33750, 33334},
  { ARM::BI__builtin_arm_mve_vstrbq_u8, 33761, 33334},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_s64, 33793, 33771},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_u64, 33819, 33771},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_s64, 33865, 33845},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_u64, 33889, 33845},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64, 33938, 33913},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64, 33967, 33913},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_s64, 34019, 33996},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_u64, 34046, 33996},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_s64, 34097, 34073},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_u64, 34125, 34073},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_s64, 34175, 34153},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_u64, 34201, 34153},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_s64, 34259, 34227},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_u64, 34295, 34227},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_s64, 34361, 34331},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_u64, 34395, 34331},
  { ARM::BI__builtin_arm_mve_vstrhq_f16, 34436, 34429},
  { ARM::BI__builtin_arm_mve_vstrhq_p_f16, 34456, 34447},
  { ARM::BI__builtin_arm_mve_vstrhq_p_s16, 34469, 34447},
  { ARM::BI__builtin_arm_mve_vstrhq_p_s32, 34482, 34447},
  { ARM::BI__builtin_arm_mve_vstrhq_p_u16, 34495, 34447},
  { ARM::BI__builtin_arm_mve_vstrhq_p_u32, 34508, 34447},
  { ARM::BI__builtin_arm_mve_vstrhq_s16, 34521, 34429},
  { ARM::BI__builtin_arm_mve_vstrhq_s32, 34532, 34429},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_f16, 34565, 34543},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_f16, 34615, 34591},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s16, 34643, 34591},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s32, 34671, 34591},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u16, 34699, 34591},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u32, 34727, 34591},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s16, 34755, 34543},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s32, 34781, 34543},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u16, 34807, 34543},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u32, 34833, 34543},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_f16, 34889, 34859},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_f16, 34955, 34923},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s16, 34991, 34923},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s32, 35027, 34923},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u16, 35063, 34923},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u32, 35099, 34923},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s16, 35135, 34859},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s32, 35169, 34859},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u16, 35203, 34859},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u32, 35237, 34859},
  { ARM::BI__builtin_arm_mve_vstrhq_u16, 35271, 34429},
  { ARM::BI__builtin_arm_mve_vstrhq_u32, 35282, 34429},
  { ARM::BI__builtin_arm_mve_vstrwq_f32, 35300, 35293},
  { ARM::BI__builtin_arm_mve_vstrwq_p_f32, 35320, 35311},
  { ARM::BI__builtin_arm_mve_vstrwq_p_s32, 35333, 35311},
  { ARM::BI__builtin_arm_mve_vstrwq_p_u32, 35346, 35311},
  { ARM::BI__builtin_arm_mve_vstrwq_s32, 35359, 35293},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_f32, 35390, 35370},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_f32, 35436, 35414},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_s32, 35462, 35414},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_u32, 35488, 35414},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_s32, 35514, 35370},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_u32, 35538, 35370},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_f32, 35585, 35562},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32, 35637, 35612},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32, 35666, 35612},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32, 35695, 35612},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_s32, 35724, 35562},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_u32, 35751, 35562},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_f32, 35800, 35778},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_f32, 35850, 35826},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_s32, 35878, 35826},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_u32, 35906, 35826},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_s32, 35934, 35778},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_u32, 35960, 35778},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_f32, 36016, 35986},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_f32, 36082, 36050},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_s32, 36118, 36050},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_u32, 36154, 36050},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_s32, 36190, 35986},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_u32, 36224, 35986},
  { ARM::BI__builtin_arm_mve_vstrwq_u32, 36258, 35293},
  { ARM::BI__builtin_arm_mve_vsubq_f16, 36275, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_f32, 36285, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_m_f16, 36303, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_f32, 36315, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_f16, 36327, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_f32, 36341, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_s16, 36355, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_s32, 36369, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_s8, 36383, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_u16, 36396, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_u32, 36410, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_u8, 36424, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_s16, 36437, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_s32, 36449, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_s8, 36461, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_u16, 36472, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_u32, 36484, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_m_u8, 36496, 36295},
  { ARM::BI__builtin_arm_mve_vsubq_n_f16, 36507, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_n_f32, 36519, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_n_s16, 36531, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_n_s32, 36543, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_n_s8, 36555, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_n_u16, 36566, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_n_u32, 36578, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_n_u8, 36590, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_s16, 36601, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_s32, 36611, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_s8, 36621, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_u16, 36630, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_u32, 36640, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_u8, 36650, 36269},
  { ARM::BI__builtin_arm_mve_vsubq_x_f16, 36667, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_f32, 36679, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_f16, 36691, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_f32, 36705, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_s16, 36719, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_s32, 36733, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_s8, 36747, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_u16, 36760, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_u32, 36774, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_u8, 36788, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_s16, 36801, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_s32, 36813, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_s8, 36825, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_u16, 36836, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_u32, 36848, 36659},
  { ARM::BI__builtin_arm_mve_vsubq_x_u8, 36860, 36659},
  { ARM::BI__builtin_arm_mve_vuninitializedq_f16, 36871, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_f32, 36891, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f16, 36927, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f32, 36959, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s16, 36991, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s32, 37023, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s64, 37055, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s8, 37087, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u16, 37118, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u32, 37150, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u64, 37182, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u8, 37214, 36911},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s16, 37245, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s32, 37265, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s64, 37285, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s8, 37305, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u16, 37324, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u32, 37344, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u64, 37364, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u8, 37384, -1},
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
    "u32\000vabdq_x_u8\000vabsq\000vabsq_f16\000vabsq_f32\000vabsq_m\000vabs"
    "q_m_f16\000vabsq_m_f32\000vabsq_m_s16\000vabsq_m_s32\000vabsq_m_s8\000v"
    "absq_s16\000vabsq_s32\000vabsq_s8\000vabsq_x\000vabsq_x_f16\000vabsq_x_"
    "f32\000vabsq_x_s16\000vabsq_x_s32\000vabsq_x_s8\000vadciq_m\000vadciq_m"
    "_s32\000vadciq_m_u32\000vadciq\000vadciq_s32\000vadciq_u32\000vadcq_m\000"
    "vadcq_m_s32\000vadcq_m_u32\000vadcq\000vadcq_s32\000vadcq_u32\000vaddq\000"
    "vaddq_f16\000vaddq_f32\000vaddq_m\000vaddq_m_f16\000vaddq_m_f32\000vadd"
    "q_m_n_f16\000vaddq_m_n_f32\000vaddq_m_n_s16\000vaddq_m_n_s32\000vaddq_m"
    "_n_s8\000vaddq_m_n_u16\000vaddq_m_n_u32\000vaddq_m_n_u8\000vaddq_m_s16\000"
    "vaddq_m_s32\000vaddq_m_s8\000vaddq_m_u16\000vaddq_m_u32\000vaddq_m_u8\000"
    "vaddq_n_f16\000vaddq_n_f32\000vaddq_n_s16\000vaddq_n_s32\000vaddq_n_s8\000"
    "vaddq_n_u16\000vaddq_n_u32\000vaddq_n_u8\000vaddq_s16\000vaddq_s32\000v"
    "addq_s8\000vaddq_u16\000vaddq_u32\000vaddq_u8\000vaddq_x\000vaddq_x_f16"
    "\000vaddq_x_f32\000vaddq_x_n_f16\000vaddq_x_n_f32\000vaddq_x_n_s16\000v"
    "addq_x_n_s32\000vaddq_x_n_s8\000vaddq_x_n_u16\000vaddq_x_n_u32\000vaddq"
    "_x_n_u8\000vaddq_x_s16\000vaddq_x_s32\000vaddq_x_s8\000vaddq_x_u16\000v"
    "addq_x_u32\000vaddq_x_u8\000vandq\000vandq_f16\000vandq_f32\000vandq_m\000"
    "vandq_m_f16\000vandq_m_f32\000vandq_m_s16\000vandq_m_s32\000vandq_m_s8\000"
    "vandq_m_u16\000vandq_m_u32\000vandq_m_u8\000vandq_s16\000vandq_s32\000v"
    "andq_s8\000vandq_u16\000vandq_u32\000vandq_u8\000vandq_x\000vandq_x_f16"
    "\000vandq_x_f32\000vandq_x_s16\000vandq_x_s32\000vandq_x_s8\000vandq_x_"
    "u16\000vandq_x_u32\000vandq_x_u8\000vbicq\000vbicq_f16\000vbicq_f32\000"
    "vbicq_m\000vbicq_m_f16\000vbicq_m_f32\000vbicq_m_n\000vbicq_m_n_s16\000"
    "vbicq_m_n_s32\000vbicq_m_n_u16\000vbicq_m_n_u32\000vbicq_m_s16\000vbicq"
    "_m_s32\000vbicq_m_s8\000vbicq_m_u16\000vbicq_m_u32\000vbicq_m_u8\000vbi"
    "cq_n_s16\000vbicq_n_s32\000vbicq_n_u16\000vbicq_n_u32\000vbicq_s16\000v"
    "bicq_s32\000vbicq_s8\000vbicq_u16\000vbicq_u32\000vbicq_u8\000vbicq_x\000"
    "vbicq_x_f16\000vbicq_x_f32\000vbicq_x_s16\000vbicq_x_s32\000vbicq_x_s8\000"
    "vbicq_x_u16\000vbicq_x_u32\000vbicq_x_u8\000vbrsrq_m\000vbrsrq_m_n_f16\000"
    "vbrsrq_m_n_f32\000vbrsrq_m_n_s16\000vbrsrq_m_n_s32\000vbrsrq_m_n_s8\000"
    "vbrsrq_m_n_u16\000vbrsrq_m_n_u32\000vbrsrq_m_n_u8\000vbrsrq\000vbrsrq_n"
    "_f16\000vbrsrq_n_f32\000vbrsrq_n_s16\000vbrsrq_n_s32\000vbrsrq_n_s8\000"
    "vbrsrq_n_u16\000vbrsrq_n_u32\000vbrsrq_n_u8\000vbrsrq_x\000vbrsrq_x_n_f"
    "16\000vbrsrq_x_n_f32\000vbrsrq_x_n_s16\000vbrsrq_x_n_s32\000vbrsrq_x_n_"
    "s8\000vbrsrq_x_n_u16\000vbrsrq_x_n_u32\000vbrsrq_x_n_u8\000vcaddq_rot27"
    "0\000vcaddq_rot270_f16\000vcaddq_rot270_f32\000vcaddq_rot270_m\000vcadd"
    "q_rot270_m_f16\000vcaddq_rot270_m_f32\000vcaddq_rot270_m_s16\000vcaddq_"
    "rot270_m_s32\000vcaddq_rot270_m_s8\000vcaddq_rot270_m_u16\000vcaddq_rot"
    "270_m_u32\000vcaddq_rot270_m_u8\000vcaddq_rot270_s16\000vcaddq_rot270_s"
    "32\000vcaddq_rot270_s8\000vcaddq_rot270_u16\000vcaddq_rot270_u32\000vca"
    "ddq_rot270_u8\000vcaddq_rot270_x\000vcaddq_rot270_x_f16\000vcaddq_rot27"
    "0_x_f32\000vcaddq_rot270_x_s16\000vcaddq_rot270_x_s32\000vcaddq_rot270_"
    "x_s8\000vcaddq_rot270_x_u16\000vcaddq_rot270_x_u32\000vcaddq_rot270_x_u"
    "8\000vcaddq_rot90\000vcaddq_rot90_f16\000vcaddq_rot90_f32\000vcaddq_rot"
    "90_m\000vcaddq_rot90_m_f16\000vcaddq_rot90_m_f32\000vcaddq_rot90_m_s16\000"
    "vcaddq_rot90_m_s32\000vcaddq_rot90_m_s8\000vcaddq_rot90_m_u16\000vcaddq"
    "_rot90_m_u32\000vcaddq_rot90_m_u8\000vcaddq_rot90_s16\000vcaddq_rot90_s"
    "32\000vcaddq_rot90_s8\000vcaddq_rot90_u16\000vcaddq_rot90_u32\000vcaddq"
    "_rot90_u8\000vcaddq_rot90_x\000vcaddq_rot90_x_f16\000vcaddq_rot90_x_f32"
    "\000vcaddq_rot90_x_s16\000vcaddq_rot90_x_s32\000vcaddq_rot90_x_s8\000vc"
    "addq_rot90_x_u16\000vcaddq_rot90_x_u32\000vcaddq_rot90_x_u8\000vclsq_m\000"
    "vclsq_m_s16\000vclsq_m_s32\000vclsq_m_s8\000vclsq\000vclsq_s16\000vclsq"
    "_s32\000vclsq_s8\000vclsq_x\000vclsq_x_s16\000vclsq_x_s32\000vclsq_x_s8"
    "\000vclzq_m\000vclzq_m_s16\000vclzq_m_s32\000vclzq_m_s8\000vclzq_m_u16\000"
    "vclzq_m_u32\000vclzq_m_u8\000vclzq\000vclzq_s16\000vclzq_s32\000vclzq_s"
    "8\000vclzq_u16\000vclzq_u32\000vclzq_u8\000vclzq_x\000vclzq_x_s16\000vc"
    "lzq_x_s32\000vclzq_x_s8\000vclzq_x_u16\000vclzq_x_u32\000vclzq_x_u8\000"
    "vcmlaq\000vcmlaq_f16\000vcmlaq_f32\000vcmlaq_m\000vcmlaq_m_f16\000vcmla"
    "q_m_f32\000vcmlaq_rot180\000vcmlaq_rot180_f16\000vcmlaq_rot180_f32\000v"
    "cmlaq_rot180_m\000vcmlaq_rot180_m_f16\000vcmlaq_rot180_m_f32\000vcmlaq_"
    "rot270\000vcmlaq_rot270_f16\000vcmlaq_rot270_f32\000vcmlaq_rot270_m\000"
    "vcmlaq_rot270_m_f16\000vcmlaq_rot270_m_f32\000vcmlaq_rot90\000vcmlaq_ro"
    "t90_f16\000vcmlaq_rot90_f32\000vcmlaq_rot90_m\000vcmlaq_rot90_m_f16\000"
    "vcmlaq_rot90_m_f32\000vcmpcsq_m\000vcmpcsq_m_n_u16\000vcmpcsq_m_n_u32\000"
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
    "m_f16_f32\000vcvtq\000vcvtq_f16_s16\000vcvtq_f16_u16\000vcvtq_f32_s32\000"
    "vcvtq_f32_u32\000vcvtq_m\000vcvtq_m_f16_s16\000vcvtq_m_f16_u16\000vcvtq"
    "_m_f32_s32\000vcvtq_m_f32_u32\000vcvtq_m_n\000vcvtq_m_n_f16_s16\000vcvt"
    "q_m_n_f16_u16\000vcvtq_m_n_f32_s32\000vcvtq_m_n_f32_u32\000vcvtq_m_n_s1"
    "6_f16\000vcvtq_m_n_s32_f32\000vcvtq_m_n_u16_f16\000vcvtq_m_n_u32_f32\000"
    "vcvtq_m_s16_f16\000vcvtq_m_s32_f32\000vcvtq_m_u16_f16\000vcvtq_m_u32_f3"
    "2\000vcvtq_n\000vcvtq_n_f16_s16\000vcvtq_n_f16_u16\000vcvtq_n_f32_s32\000"
    "vcvtq_n_f32_u32\000vcvtq_n_s16_f16\000vcvtq_n_s32_f32\000vcvtq_n_u16_f1"
    "6\000vcvtq_n_u32_f32\000vcvtq_s16_f16\000vcvtq_s32_f32\000vcvtq_u16_f16"
    "\000vcvtq_u32_f32\000vcvtq_x\000vcvtq_x_f16_s16\000vcvtq_x_f16_u16\000v"
    "cvtq_x_f32_s32\000vcvtq_x_f32_u32\000vcvtq_x_n\000vcvtq_x_n_f16_s16\000"
    "vcvtq_x_n_f16_u16\000vcvtq_x_n_f32_s32\000vcvtq_x_n_f32_u32\000vcvtq_x_"
    "n_s16_f16\000vcvtq_x_n_s32_f32\000vcvtq_x_n_u16_f16\000vcvtq_x_n_u32_f3"
    "2\000vcvtq_x_s16_f16\000vcvtq_x_s32_f32\000vcvtq_x_u16_f16\000vcvtq_x_u"
    "32_f32\000vcvttq_f16_f32\000vcvttq_m_f16_f32\000vddupq_m\000vddupq_m_n_"
    "u16\000vddupq_m_n_u32\000vddupq_m_n_u8\000vddupq_m_wb_u16\000vddupq_m_w"
    "b_u32\000vddupq_m_wb_u8\000vddupq_u16\000vddupq_n_u16\000vddupq_u32\000"
    "vddupq_n_u32\000vddupq_u8\000vddupq_n_u8\000vddupq_wb_u16\000vddupq_wb_"
    "u32\000vddupq_wb_u8\000vddupq_x_u16\000vddupq_x_n_u16\000vddupq_x_u32\000"
    "vddupq_x_n_u32\000vddupq_x_u8\000vddupq_x_n_u8\000vddupq_x_wb_u16\000vd"
    "dupq_x_wb_u32\000vddupq_x_wb_u8\000vdupq_m\000vdupq_m_n_f16\000vdupq_m_"
    "n_f32\000vdupq_m_n_s16\000vdupq_m_n_s32\000vdupq_m_n_s8\000vdupq_m_n_u1"
    "6\000vdupq_m_n_u32\000vdupq_m_n_u8\000vdupq_n_f16\000vdupq_n_f32\000vdu"
    "pq_n_s16\000vdupq_n_s32\000vdupq_n_s8\000vdupq_n_u16\000vdupq_n_u32\000"
    "vdupq_n_u8\000vdupq_x_n_f16\000vdupq_x_n_f32\000vdupq_x_n_s16\000vdupq_"
    "x_n_s32\000vdupq_x_n_s8\000vdupq_x_n_u16\000vdupq_x_n_u32\000vdupq_x_n_"
    "u8\000vdwdupq_m\000vdwdupq_m_n_u16\000vdwdupq_m_n_u32\000vdwdupq_m_n_u8"
    "\000vdwdupq_m_wb_u16\000vdwdupq_m_wb_u32\000vdwdupq_m_wb_u8\000vdwdupq_"
    "u16\000vdwdupq_n_u16\000vdwdupq_u32\000vdwdupq_n_u32\000vdwdupq_u8\000v"
    "dwdupq_n_u8\000vdwdupq_wb_u16\000vdwdupq_wb_u32\000vdwdupq_wb_u8\000vdw"
    "dupq_x_u16\000vdwdupq_x_n_u16\000vdwdupq_x_u32\000vdwdupq_x_n_u32\000vd"
    "wdupq_x_u8\000vdwdupq_x_n_u8\000vdwdupq_x_wb_u16\000vdwdupq_x_wb_u32\000"
    "vdwdupq_x_wb_u8\000veorq\000veorq_f16\000veorq_f32\000veorq_m\000veorq_"
    "m_f16\000veorq_m_f32\000veorq_m_s16\000veorq_m_s32\000veorq_m_s8\000veo"
    "rq_m_u16\000veorq_m_u32\000veorq_m_u8\000veorq_s16\000veorq_s32\000veor"
    "q_s8\000veorq_u16\000veorq_u32\000veorq_u8\000veorq_x\000veorq_x_f16\000"
    "veorq_x_f32\000veorq_x_s16\000veorq_x_s32\000veorq_x_s8\000veorq_x_u16\000"
    "veorq_x_u32\000veorq_x_u8\000vgetq_lane\000vgetq_lane_f16\000vgetq_lane"
    "_f32\000vgetq_lane_s16\000vgetq_lane_s32\000vgetq_lane_s64\000vgetq_lan"
    "e_s8\000vgetq_lane_u16\000vgetq_lane_u32\000vgetq_lane_u64\000vgetq_lan"
    "e_u8\000vhaddq_m\000vhaddq_m_n_s16\000vhaddq_m_n_s32\000vhaddq_m_n_s8\000"
    "vhaddq_m_n_u16\000vhaddq_m_n_u32\000vhaddq_m_n_u8\000vhaddq_m_s16\000vh"
    "addq_m_s32\000vhaddq_m_s8\000vhaddq_m_u16\000vhaddq_m_u32\000vhaddq_m_u"
    "8\000vhaddq\000vhaddq_n_s16\000vhaddq_n_s32\000vhaddq_n_s8\000vhaddq_n_"
    "u16\000vhaddq_n_u32\000vhaddq_n_u8\000vhaddq_s16\000vhaddq_s32\000vhadd"
    "q_s8\000vhaddq_u16\000vhaddq_u32\000vhaddq_u8\000vhaddq_x\000vhaddq_x_n"
    "_s16\000vhaddq_x_n_s32\000vhaddq_x_n_s8\000vhaddq_x_n_u16\000vhaddq_x_n"
    "_u32\000vhaddq_x_n_u8\000vhaddq_x_s16\000vhaddq_x_s32\000vhaddq_x_s8\000"
    "vhaddq_x_u16\000vhaddq_x_u32\000vhaddq_x_u8\000vhcaddq_rot270_m\000vhca"
    "ddq_rot270_m_s16\000vhcaddq_rot270_m_s32\000vhcaddq_rot270_m_s8\000vhca"
    "ddq_rot270\000vhcaddq_rot270_s16\000vhcaddq_rot270_s32\000vhcaddq_rot27"
    "0_s8\000vhcaddq_rot270_x\000vhcaddq_rot270_x_s16\000vhcaddq_rot270_x_s3"
    "2\000vhcaddq_rot270_x_s8\000vhcaddq_rot90_m\000vhcaddq_rot90_m_s16\000v"
    "hcaddq_rot90_m_s32\000vhcaddq_rot90_m_s8\000vhcaddq_rot90\000vhcaddq_ro"
    "t90_s16\000vhcaddq_rot90_s32\000vhcaddq_rot90_s8\000vhcaddq_rot90_x\000"
    "vhcaddq_rot90_x_s16\000vhcaddq_rot90_x_s32\000vhcaddq_rot90_x_s8\000vhs"
    "ubq_m\000vhsubq_m_n_s16\000vhsubq_m_n_s32\000vhsubq_m_n_s8\000vhsubq_m_"
    "n_u16\000vhsubq_m_n_u32\000vhsubq_m_n_u8\000vhsubq_m_s16\000vhsubq_m_s3"
    "2\000vhsubq_m_s8\000vhsubq_m_u16\000vhsubq_m_u32\000vhsubq_m_u8\000vhsu"
    "bq\000vhsubq_n_s16\000vhsubq_n_s32\000vhsubq_n_s8\000vhsubq_n_u16\000vh"
    "subq_n_u32\000vhsubq_n_u8\000vhsubq_s16\000vhsubq_s32\000vhsubq_s8\000v"
    "hsubq_u16\000vhsubq_u32\000vhsubq_u8\000vhsubq_x\000vhsubq_x_n_s16\000v"
    "hsubq_x_n_s32\000vhsubq_x_n_s8\000vhsubq_x_n_u16\000vhsubq_x_n_u32\000v"
    "hsubq_x_n_u8\000vhsubq_x_s16\000vhsubq_x_s32\000vhsubq_x_s8\000vhsubq_x"
    "_u16\000vhsubq_x_u32\000vhsubq_x_u8\000vidupq_m\000vidupq_m_n_u16\000vi"
    "dupq_m_n_u32\000vidupq_m_n_u8\000vidupq_m_wb_u16\000vidupq_m_wb_u32\000"
    "vidupq_m_wb_u8\000vidupq_u16\000vidupq_n_u16\000vidupq_u32\000vidupq_n_"
    "u32\000vidupq_u8\000vidupq_n_u8\000vidupq_wb_u16\000vidupq_wb_u32\000vi"
    "dupq_wb_u8\000vidupq_x_u16\000vidupq_x_n_u16\000vidupq_x_u32\000vidupq_"
    "x_n_u32\000vidupq_x_u8\000vidupq_x_n_u8\000vidupq_x_wb_u16\000vidupq_x_"
    "wb_u32\000vidupq_x_wb_u8\000viwdupq_m\000viwdupq_m_n_u16\000viwdupq_m_n"
    "_u32\000viwdupq_m_n_u8\000viwdupq_m_wb_u16\000viwdupq_m_wb_u32\000viwdu"
    "pq_m_wb_u8\000viwdupq_u16\000viwdupq_n_u16\000viwdupq_u32\000viwdupq_n_"
    "u32\000viwdupq_u8\000viwdupq_n_u8\000viwdupq_wb_u16\000viwdupq_wb_u32\000"
    "viwdupq_wb_u8\000viwdupq_x_u16\000viwdupq_x_n_u16\000viwdupq_x_u32\000v"
    "iwdupq_x_n_u32\000viwdupq_x_u8\000viwdupq_x_n_u8\000viwdupq_x_wb_u16\000"
    "viwdupq_x_wb_u32\000viwdupq_x_wb_u8\000vld1q\000vld1q_f16\000vld1q_f32\000"
    "vld1q_s16\000vld1q_s32\000vld1q_s8\000vld1q_u16\000vld1q_u32\000vld1q_u"
    "8\000vld1q_z\000vld1q_z_f16\000vld1q_z_f32\000vld1q_z_s16\000vld1q_z_s3"
    "2\000vld1q_z_s8\000vld1q_z_u16\000vld1q_z_u32\000vld1q_z_u8\000vld2q\000"
    "vld2q_f16\000vld2q_f32\000vld2q_s16\000vld2q_s32\000vld2q_s8\000vld2q_u"
    "16\000vld2q_u32\000vld2q_u8\000vld4q\000vld4q_f16\000vld4q_f32\000vld4q"
    "_s16\000vld4q_s32\000vld4q_s8\000vld4q_u16\000vld4q_u32\000vld4q_u8\000"
    "vldrbq_gather_offset\000vldrbq_gather_offset_s16\000vldrbq_gather_offse"
    "t_s32\000vldrbq_gather_offset_s8\000vldrbq_gather_offset_u16\000vldrbq_"
    "gather_offset_u32\000vldrbq_gather_offset_u8\000vldrbq_gather_offset_z\000"
    "vldrbq_gather_offset_z_s16\000vldrbq_gather_offset_z_s32\000vldrbq_gath"
    "er_offset_z_s8\000vldrbq_gather_offset_z_u16\000vldrbq_gather_offset_z_"
    "u32\000vldrbq_gather_offset_z_u8\000vldrbq_s16\000vldrbq_s32\000vldrbq_"
    "s8\000vldrbq_u16\000vldrbq_u32\000vldrbq_u8\000vldrbq_z_s16\000vldrbq_z"
    "_s32\000vldrbq_z_s8\000vldrbq_z_u16\000vldrbq_z_u32\000vldrbq_z_u8\000v"
    "ldrdq_gather_base_s64\000vldrdq_gather_base_u64\000vldrdq_gather_base_w"
    "b_s64\000vldrdq_gather_base_wb_u64\000vldrdq_gather_base_wb_z_s64\000vl"
    "drdq_gather_base_wb_z_u64\000vldrdq_gather_base_z_s64\000vldrdq_gather_"
    "base_z_u64\000vldrdq_gather_offset\000vldrdq_gather_offset_s64\000vldrd"
    "q_gather_offset_u64\000vldrdq_gather_offset_z\000vldrdq_gather_offset_z"
    "_s64\000vldrdq_gather_offset_z_u64\000vldrdq_gather_shifted_offset\000v"
    "ldrdq_gather_shifted_offset_s64\000vldrdq_gather_shifted_offset_u64\000"
    "vldrdq_gather_shifted_offset_z\000vldrdq_gather_shifted_offset_z_s64\000"
    "vldrdq_gather_shifted_offset_z_u64\000vldrhq_f16\000vldrhq_gather_offse"
    "t\000vldrhq_gather_offset_f16\000vldrhq_gather_offset_s16\000vldrhq_gat"
    "her_offset_s32\000vldrhq_gather_offset_u16\000vldrhq_gather_offset_u32\000"
    "vldrhq_gather_offset_z\000vldrhq_gather_offset_z_f16\000vldrhq_gather_o"
    "ffset_z_s16\000vldrhq_gather_offset_z_s32\000vldrhq_gather_offset_z_u16"
    "\000vldrhq_gather_offset_z_u32\000vldrhq_gather_shifted_offset\000vldrh"
    "q_gather_shifted_offset_f16\000vldrhq_gather_shifted_offset_s16\000vldr"
    "hq_gather_shifted_offset_s32\000vldrhq_gather_shifted_offset_u16\000vld"
    "rhq_gather_shifted_offset_u32\000vldrhq_gather_shifted_offset_z\000vldr"
    "hq_gather_shifted_offset_z_f16\000vldrhq_gather_shifted_offset_z_s16\000"
    "vldrhq_gather_shifted_offset_z_s32\000vldrhq_gather_shifted_offset_z_u1"
    "6\000vldrhq_gather_shifted_offset_z_u32\000vldrhq_s16\000vldrhq_s32\000"
    "vldrhq_u16\000vldrhq_u32\000vldrhq_z_f16\000vldrhq_z_s16\000vldrhq_z_s3"
    "2\000vldrhq_z_u16\000vldrhq_z_u32\000vldrwq_f32\000vldrwq_gather_base_f"
    "32\000vldrwq_gather_base_s32\000vldrwq_gather_base_u32\000vldrwq_gather"
    "_base_wb_f32\000vldrwq_gather_base_wb_s32\000vldrwq_gather_base_wb_u32\000"
    "vldrwq_gather_base_wb_z_f32\000vldrwq_gather_base_wb_z_s32\000vldrwq_ga"
    "ther_base_wb_z_u32\000vldrwq_gather_base_z_f32\000vldrwq_gather_base_z_"
    "s32\000vldrwq_gather_base_z_u32\000vldrwq_gather_offset\000vldrwq_gathe"
    "r_offset_f32\000vldrwq_gather_offset_s32\000vldrwq_gather_offset_u32\000"
    "vldrwq_gather_offset_z\000vldrwq_gather_offset_z_f32\000vldrwq_gather_o"
    "ffset_z_s32\000vldrwq_gather_offset_z_u32\000vldrwq_gather_shifted_offs"
    "et\000vldrwq_gather_shifted_offset_f32\000vldrwq_gather_shifted_offset_"
    "s32\000vldrwq_gather_shifted_offset_u32\000vldrwq_gather_shifted_offset"
    "_z\000vldrwq_gather_shifted_offset_z_f32\000vldrwq_gather_shifted_offse"
    "t_z_s32\000vldrwq_gather_shifted_offset_z_u32\000vldrwq_s32\000vldrwq_u"
    "32\000vldrwq_z_f32\000vldrwq_z_s32\000vldrwq_z_u32\000vmaxaq_m\000vmaxa"
    "q_m_s16\000vmaxaq_m_s32\000vmaxaq_m_s8\000vmaxaq\000vmaxaq_s16\000vmaxa"
    "q_s32\000vmaxaq_s8\000vmaxnmaq\000vmaxnmaq_f16\000vmaxnmaq_f32\000vmaxn"
    "maq_m\000vmaxnmaq_m_f16\000vmaxnmaq_m_f32\000vmaxnmq\000vmaxnmq_f16\000"
    "vmaxnmq_f32\000vmaxnmq_m\000vmaxnmq_m_f16\000vmaxnmq_m_f32\000vmaxnmq_x"
    "\000vmaxnmq_x_f16\000vmaxnmq_x_f32\000vmaxq_m\000vmaxq_m_s16\000vmaxq_m"
    "_s32\000vmaxq_m_s8\000vmaxq_m_u16\000vmaxq_m_u32\000vmaxq_m_u8\000vmaxq"
    "\000vmaxq_s16\000vmaxq_s32\000vmaxq_s8\000vmaxq_u16\000vmaxq_u32\000vma"
    "xq_u8\000vmaxq_x\000vmaxq_x_s16\000vmaxq_x_s32\000vmaxq_x_s8\000vmaxq_x"
    "_u16\000vmaxq_x_u32\000vmaxq_x_u8\000vmaxvq\000vmaxvq_s16\000vmaxvq_s32"
    "\000vmaxvq_s8\000vmaxvq_u16\000vmaxvq_u32\000vmaxvq_u8\000vminaq_m\000v"
    "minaq_m_s16\000vminaq_m_s32\000vminaq_m_s8\000vminaq\000vminaq_s16\000v"
    "minaq_s32\000vminaq_s8\000vminnmaq\000vminnmaq_f16\000vminnmaq_f32\000v"
    "minnmaq_m\000vminnmaq_m_f16\000vminnmaq_m_f32\000vminnmq\000vminnmq_f16"
    "\000vminnmq_f32\000vminnmq_m\000vminnmq_m_f16\000vminnmq_m_f32\000vminn"
    "mq_x\000vminnmq_x_f16\000vminnmq_x_f32\000vminq_m\000vminq_m_s16\000vmi"
    "nq_m_s32\000vminq_m_s8\000vminq_m_u16\000vminq_m_u32\000vminq_m_u8\000v"
    "minq\000vminq_s16\000vminq_s32\000vminq_s8\000vminq_u16\000vminq_u32\000"
    "vminq_u8\000vminq_x\000vminq_x_s16\000vminq_x_s32\000vminq_x_s8\000vmin"
    "q_x_u16\000vminq_x_u32\000vminq_x_u8\000vminvq\000vminvq_s16\000vminvq_"
    "s32\000vminvq_s8\000vminvq_u16\000vminvq_u32\000vminvq_u8\000vmladavaq_"
    "p\000vmladavaq_p_s16\000vmladavaq_p_s32\000vmladavaq_p_s8\000vmladavaq_"
    "p_u16\000vmladavaq_p_u32\000vmladavaq_p_u8\000vmladavaq\000vmladavaq_s1"
    "6\000vmladavaq_s32\000vmladavaq_s8\000vmladavaq_u16\000vmladavaq_u32\000"
    "vmladavaq_u8\000vmladavaxq_p\000vmladavaxq_p_s16\000vmladavaxq_p_s32\000"
    "vmladavaxq_p_s8\000vmladavaxq\000vmladavaxq_s16\000vmladavaxq_s32\000vm"
    "ladavaxq_s8\000vmladavq_p\000vmladavq_p_s16\000vmladavq_p_s32\000vmlada"
    "vq_p_s8\000vmladavq_p_u16\000vmladavq_p_u32\000vmladavq_p_u8\000vmladav"
    "q\000vmladavq_s16\000vmladavq_s32\000vmladavq_s8\000vmladavq_u16\000vml"
    "adavq_u32\000vmladavq_u8\000vmladavxq_p\000vmladavxq_p_s16\000vmladavxq"
    "_p_s32\000vmladavxq_p_s8\000vmladavxq\000vmladavxq_s16\000vmladavxq_s32"
    "\000vmladavxq_s8\000vmlaldavaq_p\000vmlaldavaq_p_s16\000vmlaldavaq_p_s3"
    "2\000vmlaldavaq_p_u16\000vmlaldavaq_p_u32\000vmlaldavaq\000vmlaldavaq_s"
    "16\000vmlaldavaq_s32\000vmlaldavaq_u16\000vmlaldavaq_u32\000vmlaldavaxq"
    "_p\000vmlaldavaxq_p_s16\000vmlaldavaxq_p_s32\000vmlaldavaxq\000vmlaldav"
    "axq_s16\000vmlaldavaxq_s32\000vmlaldavq_p\000vmlaldavq_p_s16\000vmlalda"
    "vq_p_s32\000vmlaldavq_p_u16\000vmlaldavq_p_u32\000vmlaldavq\000vmlaldav"
    "q_s16\000vmlaldavq_s32\000vmlaldavq_u16\000vmlaldavq_u32\000vmlaldavxq_"
    "p\000vmlaldavxq_p_s16\000vmlaldavxq_p_s32\000vmlaldavxq\000vmlaldavxq_s"
    "16\000vmlaldavxq_s32\000vmlsdavaq_p\000vmlsdavaq_p_s16\000vmlsdavaq_p_s"
    "32\000vmlsdavaq_p_s8\000vmlsdavaq\000vmlsdavaq_s16\000vmlsdavaq_s32\000"
    "vmlsdavaq_s8\000vmlsdavaxq_p\000vmlsdavaxq_p_s16\000vmlsdavaxq_p_s32\000"
    "vmlsdavaxq_p_s8\000vmlsdavaxq\000vmlsdavaxq_s16\000vmlsdavaxq_s32\000vm"
    "lsdavaxq_s8\000vmlsdavq_p\000vmlsdavq_p_s16\000vmlsdavq_p_s32\000vmlsda"
    "vq_p_s8\000vmlsdavq\000vmlsdavq_s16\000vmlsdavq_s32\000vmlsdavq_s8\000v"
    "mlsdavxq_p\000vmlsdavxq_p_s16\000vmlsdavxq_p_s32\000vmlsdavxq_p_s8\000v"
    "mlsdavxq\000vmlsdavxq_s16\000vmlsdavxq_s32\000vmlsdavxq_s8\000vmlsldava"
    "q_p\000vmlsldavaq_p_s16\000vmlsldavaq_p_s32\000vmlsldavaq\000vmlsldavaq"
    "_s16\000vmlsldavaq_s32\000vmlsldavaxq_p\000vmlsldavaxq_p_s16\000vmlslda"
    "vaxq_p_s32\000vmlsldavaxq\000vmlsldavaxq_s16\000vmlsldavaxq_s32\000vmls"
    "ldavq_p\000vmlsldavq_p_s16\000vmlsldavq_p_s32\000vmlsldavq\000vmlsldavq"
    "_s16\000vmlsldavq_s32\000vmlsldavxq_p\000vmlsldavxq_p_s16\000vmlsldavxq"
    "_p_s32\000vmlsldavxq\000vmlsldavxq_s16\000vmlsldavxq_s32\000vmovlbq_m\000"
    "vmovlbq_m_s16\000vmovlbq_m_s8\000vmovlbq_m_u16\000vmovlbq_m_u8\000vmovl"
    "bq\000vmovlbq_s16\000vmovlbq_s8\000vmovlbq_u16\000vmovlbq_u8\000vmovlbq"
    "_x\000vmovlbq_x_s16\000vmovlbq_x_s8\000vmovlbq_x_u16\000vmovlbq_x_u8\000"
    "vmovltq_m\000vmovltq_m_s16\000vmovltq_m_s8\000vmovltq_m_u16\000vmovltq_"
    "m_u8\000vmovltq\000vmovltq_s16\000vmovltq_s8\000vmovltq_u16\000vmovltq_"
    "u8\000vmovltq_x\000vmovltq_x_s16\000vmovltq_x_s8\000vmovltq_x_u16\000vm"
    "ovltq_x_u8\000vmovnbq_m\000vmovnbq_m_s16\000vmovnbq_m_s32\000vmovnbq_m_"
    "u16\000vmovnbq_m_u32\000vmovnbq\000vmovnbq_s16\000vmovnbq_s32\000vmovnb"
    "q_u16\000vmovnbq_u32\000vmovntq_m\000vmovntq_m_s16\000vmovntq_m_s32\000"
    "vmovntq_m_u16\000vmovntq_m_u32\000vmovntq\000vmovntq_s16\000vmovntq_s32"
    "\000vmovntq_u16\000vmovntq_u32\000vmulhq_m\000vmulhq_m_s16\000vmulhq_m_"
    "s32\000vmulhq_m_s8\000vmulhq_m_u16\000vmulhq_m_u32\000vmulhq_m_u8\000vm"
    "ulhq\000vmulhq_s16\000vmulhq_s32\000vmulhq_s8\000vmulhq_u16\000vmulhq_u"
    "32\000vmulhq_u8\000vmulhq_x\000vmulhq_x_s16\000vmulhq_x_s32\000vmulhq_x"
    "_s8\000vmulhq_x_u16\000vmulhq_x_u32\000vmulhq_x_u8\000vmullbq_int_m\000"
    "vmullbq_int_m_s16\000vmullbq_int_m_s32\000vmullbq_int_m_s8\000vmullbq_i"
    "nt_m_u16\000vmullbq_int_m_u32\000vmullbq_int_m_u8\000vmullbq_int\000vmu"
    "llbq_int_s16\000vmullbq_int_s32\000vmullbq_int_s8\000vmullbq_int_u16\000"
    "vmullbq_int_u32\000vmullbq_int_u8\000vmullbq_int_x\000vmullbq_int_x_s16"
    "\000vmullbq_int_x_s32\000vmullbq_int_x_s8\000vmullbq_int_x_u16\000vmull"
    "bq_int_x_u32\000vmullbq_int_x_u8\000vmullbq_poly_m\000vmullbq_poly_m_p1"
    "6\000vmullbq_poly_m_p8\000vmullbq_poly\000vmullbq_poly_p16\000vmullbq_p"
    "oly_p8\000vmullbq_poly_x\000vmullbq_poly_x_p16\000vmullbq_poly_x_p8\000"
    "vmulltq_int_m\000vmulltq_int_m_s16\000vmulltq_int_m_s32\000vmulltq_int_"
    "m_s8\000vmulltq_int_m_u16\000vmulltq_int_m_u32\000vmulltq_int_m_u8\000v"
    "mulltq_int\000vmulltq_int_s16\000vmulltq_int_s32\000vmulltq_int_s8\000v"
    "mulltq_int_u16\000vmulltq_int_u32\000vmulltq_int_u8\000vmulltq_int_x\000"
    "vmulltq_int_x_s16\000vmulltq_int_x_s32\000vmulltq_int_x_s8\000vmulltq_i"
    "nt_x_u16\000vmulltq_int_x_u32\000vmulltq_int_x_u8\000vmulltq_poly_m\000"
    "vmulltq_poly_m_p16\000vmulltq_poly_m_p8\000vmulltq_poly\000vmulltq_poly"
    "_p16\000vmulltq_poly_p8\000vmulltq_poly_x\000vmulltq_poly_x_p16\000vmul"
    "ltq_poly_x_p8\000vmulq\000vmulq_f16\000vmulq_f32\000vmulq_m\000vmulq_m_"
    "f16\000vmulq_m_f32\000vmulq_m_n_f16\000vmulq_m_n_f32\000vmulq_m_n_s16\000"
    "vmulq_m_n_s32\000vmulq_m_n_s8\000vmulq_m_n_u16\000vmulq_m_n_u32\000vmul"
    "q_m_n_u8\000vmulq_m_s16\000vmulq_m_s32\000vmulq_m_s8\000vmulq_m_u16\000"
    "vmulq_m_u32\000vmulq_m_u8\000vmulq_n_f16\000vmulq_n_f32\000vmulq_n_s16\000"
    "vmulq_n_s32\000vmulq_n_s8\000vmulq_n_u16\000vmulq_n_u32\000vmulq_n_u8\000"
    "vmulq_s16\000vmulq_s32\000vmulq_s8\000vmulq_u16\000vmulq_u32\000vmulq_u"
    "8\000vmulq_x\000vmulq_x_f16\000vmulq_x_f32\000vmulq_x_n_f16\000vmulq_x_"
    "n_f32\000vmulq_x_n_s16\000vmulq_x_n_s32\000vmulq_x_n_s8\000vmulq_x_n_u1"
    "6\000vmulq_x_n_u32\000vmulq_x_n_u8\000vmulq_x_s16\000vmulq_x_s32\000vmu"
    "lq_x_s8\000vmulq_x_u16\000vmulq_x_u32\000vmulq_x_u8\000vmvnq_m\000vmvnq"
    "_m_n_s16\000vmvnq_m_n_s32\000vmvnq_m_n_u16\000vmvnq_m_n_u32\000vmvnq_m_"
    "s16\000vmvnq_m_s32\000vmvnq_m_s8\000vmvnq_m_u16\000vmvnq_m_u32\000vmvnq"
    "_m_u8\000vmvnq_n_s16\000vmvnq_n_s32\000vmvnq_n_u16\000vmvnq_n_u32\000vm"
    "vnq\000vmvnq_s16\000vmvnq_s32\000vmvnq_s8\000vmvnq_u16\000vmvnq_u32\000"
    "vmvnq_u8\000vmvnq_x_n_s16\000vmvnq_x_n_s32\000vmvnq_x_n_u16\000vmvnq_x_"
    "n_u32\000vmvnq_x\000vmvnq_x_s16\000vmvnq_x_s32\000vmvnq_x_s8\000vmvnq_x"
    "_u16\000vmvnq_x_u32\000vmvnq_x_u8\000vnegq\000vnegq_f16\000vnegq_f32\000"
    "vnegq_m\000vnegq_m_f16\000vnegq_m_f32\000vnegq_m_s16\000vnegq_m_s32\000"
    "vnegq_m_s8\000vnegq_s16\000vnegq_s32\000vnegq_s8\000vnegq_x\000vnegq_x_"
    "f16\000vnegq_x_f32\000vnegq_x_s16\000vnegq_x_s32\000vnegq_x_s8\000vornq"
    "\000vornq_f16\000vornq_f32\000vornq_m\000vornq_m_f16\000vornq_m_f32\000"
    "vornq_m_s16\000vornq_m_s32\000vornq_m_s8\000vornq_m_u16\000vornq_m_u32\000"
    "vornq_m_u8\000vornq_s16\000vornq_s32\000vornq_s8\000vornq_u16\000vornq_"
    "u32\000vornq_u8\000vornq_x\000vornq_x_f16\000vornq_x_f32\000vornq_x_s16"
    "\000vornq_x_s32\000vornq_x_s8\000vornq_x_u16\000vornq_x_u32\000vornq_x_"
    "u8\000vorrq\000vorrq_f16\000vorrq_f32\000vorrq_m\000vorrq_m_f16\000vorr"
    "q_m_f32\000vorrq_m_n\000vorrq_m_n_s16\000vorrq_m_n_s32\000vorrq_m_n_u16"
    "\000vorrq_m_n_u32\000vorrq_m_s16\000vorrq_m_s32\000vorrq_m_s8\000vorrq_"
    "m_u16\000vorrq_m_u32\000vorrq_m_u8\000vorrq_n_s16\000vorrq_n_s32\000vor"
    "rq_n_u16\000vorrq_n_u32\000vorrq_s16\000vorrq_s32\000vorrq_s8\000vorrq_"
    "u16\000vorrq_u32\000vorrq_u8\000vorrq_x\000vorrq_x_f16\000vorrq_x_f32\000"
    "vorrq_x_s16\000vorrq_x_s32\000vorrq_x_s8\000vorrq_x_u16\000vorrq_x_u32\000"
    "vorrq_x_u8\000vpnot\000vpselq\000vpselq_f16\000vpselq_f32\000vpselq_s16"
    "\000vpselq_s32\000vpselq_s64\000vpselq_s8\000vpselq_u16\000vpselq_u32\000"
    "vpselq_u64\000vpselq_u8\000vqabsq_m\000vqabsq_m_s16\000vqabsq_m_s32\000"
    "vqabsq_m_s8\000vqabsq\000vqabsq_s16\000vqabsq_s32\000vqabsq_s8\000vqadd"
    "q_m\000vqaddq_m_n_s16\000vqaddq_m_n_s32\000vqaddq_m_n_s8\000vqaddq_m_n_"
    "u16\000vqaddq_m_n_u32\000vqaddq_m_n_u8\000vqaddq_m_s16\000vqaddq_m_s32\000"
    "vqaddq_m_s8\000vqaddq_m_u16\000vqaddq_m_u32\000vqaddq_m_u8\000vqaddq\000"
    "vqaddq_n_s16\000vqaddq_n_s32\000vqaddq_n_s8\000vqaddq_n_u16\000vqaddq_n"
    "_u32\000vqaddq_n_u8\000vqaddq_s16\000vqaddq_s32\000vqaddq_s8\000vqaddq_"
    "u16\000vqaddq_u32\000vqaddq_u8\000vqdmulhq_m\000vqdmulhq_m_n_s16\000vqd"
    "mulhq_m_n_s32\000vqdmulhq_m_n_s8\000vqdmulhq_m_s16\000vqdmulhq_m_s32\000"
    "vqdmulhq_m_s8\000vqdmulhq\000vqdmulhq_n_s16\000vqdmulhq_n_s32\000vqdmul"
    "hq_n_s8\000vqdmulhq_s16\000vqdmulhq_s32\000vqdmulhq_s8\000vqdmullbq_m\000"
    "vqdmullbq_m_n_s16\000vqdmullbq_m_n_s32\000vqdmullbq_m_s16\000vqdmullbq_"
    "m_s32\000vqdmullbq\000vqdmullbq_n_s16\000vqdmullbq_n_s32\000vqdmullbq_s"
    "16\000vqdmullbq_s32\000vqdmulltq_m\000vqdmulltq_m_n_s16\000vqdmulltq_m_"
    "n_s32\000vqdmulltq_m_s16\000vqdmulltq_m_s32\000vqdmulltq\000vqdmulltq_n"
    "_s16\000vqdmulltq_n_s32\000vqdmulltq_s16\000vqdmulltq_s32\000vqnegq_m\000"
    "vqnegq_m_s16\000vqnegq_m_s32\000vqnegq_m_s8\000vqnegq\000vqnegq_s16\000"
    "vqnegq_s32\000vqnegq_s8\000vqrdmulhq_m\000vqrdmulhq_m_n_s16\000vqrdmulh"
    "q_m_n_s32\000vqrdmulhq_m_n_s8\000vqrdmulhq_m_s16\000vqrdmulhq_m_s32\000"
    "vqrdmulhq_m_s8\000vqrdmulhq\000vqrdmulhq_n_s16\000vqrdmulhq_n_s32\000vq"
    "rdmulhq_n_s8\000vqrdmulhq_s16\000vqrdmulhq_s32\000vqrdmulhq_s8\000vqrsh"
    "lq_m_n\000vqrshlq_m_n_s16\000vqrshlq_m_n_s32\000vqrshlq_m_n_s8\000vqrsh"
    "lq_m_n_u16\000vqrshlq_m_n_u32\000vqrshlq_m_n_u8\000vqrshlq_m\000vqrshlq"
    "_m_s16\000vqrshlq_m_s32\000vqrshlq_m_s8\000vqrshlq_m_u16\000vqrshlq_m_u"
    "32\000vqrshlq_m_u8\000vqrshlq\000vqrshlq_n_s16\000vqrshlq_n_s32\000vqrs"
    "hlq_n_s8\000vqrshlq_n_u16\000vqrshlq_n_u32\000vqrshlq_n_u8\000vqrshlq_s"
    "16\000vqrshlq_s32\000vqrshlq_s8\000vqrshlq_u16\000vqrshlq_u32\000vqrshl"
    "q_u8\000vqrshrnbq_m\000vqrshrnbq_m_n_s16\000vqrshrnbq_m_n_s32\000vqrshr"
    "nbq_m_n_u16\000vqrshrnbq_m_n_u32\000vqrshrnbq\000vqrshrnbq_n_s16\000vqr"
    "shrnbq_n_s32\000vqrshrnbq_n_u16\000vqrshrnbq_n_u32\000vqrshrntq_m\000vq"
    "rshrntq_m_n_s16\000vqrshrntq_m_n_s32\000vqrshrntq_m_n_u16\000vqrshrntq_"
    "m_n_u32\000vqrshrntq\000vqrshrntq_n_s16\000vqrshrntq_n_s32\000vqrshrntq"
    "_n_u16\000vqrshrntq_n_u32\000vqrshrunbq_m\000vqrshrunbq_m_n_s16\000vqrs"
    "hrunbq_m_n_s32\000vqrshrunbq\000vqrshrunbq_n_s16\000vqrshrunbq_n_s32\000"
    "vqrshruntq_m\000vqrshruntq_m_n_s16\000vqrshruntq_m_n_s32\000vqrshruntq\000"
    "vqrshruntq_n_s16\000vqrshruntq_n_s32\000vqshlq_m_n\000vqshlq_m_n_s16\000"
    "vqshlq_m_n_s32\000vqshlq_m_n_s8\000vqshlq_m_n_u16\000vqshlq_m_n_u32\000"
    "vqshlq_m_n_u8\000vqshlq_m_r\000vqshlq_m_r_s16\000vqshlq_m_r_s32\000vqsh"
    "lq_m_r_s8\000vqshlq_m_r_u16\000vqshlq_m_r_u32\000vqshlq_m_r_u8\000vqshl"
    "q_m\000vqshlq_m_s16\000vqshlq_m_s32\000vqshlq_m_s8\000vqshlq_m_u16\000v"
    "qshlq_m_u32\000vqshlq_m_u8\000vqshlq_n\000vqshlq_n_s16\000vqshlq_n_s32\000"
    "vqshlq_n_s8\000vqshlq_n_u16\000vqshlq_n_u32\000vqshlq_n_u8\000vqshlq_r\000"
    "vqshlq_r_s16\000vqshlq_r_s32\000vqshlq_r_s8\000vqshlq_r_u16\000vqshlq_r"
    "_u32\000vqshlq_r_u8\000vqshlq\000vqshlq_s16\000vqshlq_s32\000vqshlq_s8\000"
    "vqshlq_u16\000vqshlq_u32\000vqshlq_u8\000vqshluq_m\000vqshluq_m_n_s16\000"
    "vqshluq_m_n_s32\000vqshluq_m_n_s8\000vqshluq\000vqshluq_n_s16\000vqshlu"
    "q_n_s32\000vqshluq_n_s8\000vqshrnbq_m\000vqshrnbq_m_n_s16\000vqshrnbq_m"
    "_n_s32\000vqshrnbq_m_n_u16\000vqshrnbq_m_n_u32\000vqshrnbq\000vqshrnbq_"
    "n_s16\000vqshrnbq_n_s32\000vqshrnbq_n_u16\000vqshrnbq_n_u32\000vqshrntq"
    "_m\000vqshrntq_m_n_s16\000vqshrntq_m_n_s32\000vqshrntq_m_n_u16\000vqshr"
    "ntq_m_n_u32\000vqshrntq\000vqshrntq_n_s16\000vqshrntq_n_s32\000vqshrntq"
    "_n_u16\000vqshrntq_n_u32\000vqshrunbq_m\000vqshrunbq_m_n_s16\000vqshrun"
    "bq_m_n_s32\000vqshrunbq\000vqshrunbq_n_s16\000vqshrunbq_n_s32\000vqshru"
    "ntq_m\000vqshruntq_m_n_s16\000vqshruntq_m_n_s32\000vqshruntq\000vqshrun"
    "tq_n_s16\000vqshruntq_n_s32\000vqsubq_m\000vqsubq_m_n_s16\000vqsubq_m_n"
    "_s32\000vqsubq_m_n_s8\000vqsubq_m_n_u16\000vqsubq_m_n_u32\000vqsubq_m_n"
    "_u8\000vqsubq_m_s16\000vqsubq_m_s32\000vqsubq_m_s8\000vqsubq_m_u16\000v"
    "qsubq_m_u32\000vqsubq_m_u8\000vqsubq\000vqsubq_n_s16\000vqsubq_n_s32\000"
    "vqsubq_n_s8\000vqsubq_n_u16\000vqsubq_n_u32\000vqsubq_n_u8\000vqsubq_s1"
    "6\000vqsubq_s32\000vqsubq_s8\000vqsubq_u16\000vqsubq_u32\000vqsubq_u8\000"
    "vreinterpretq_f16\000vreinterpretq_f16_f32\000vreinterpretq_f16_s16\000"
    "vreinterpretq_f16_s32\000vreinterpretq_f16_s64\000vreinterpretq_f16_s8\000"
    "vreinterpretq_f16_u16\000vreinterpretq_f16_u32\000vreinterpretq_f16_u64"
    "\000vreinterpretq_f16_u8\000vreinterpretq_f32\000vreinterpretq_f32_f16\000"
    "vreinterpretq_f32_s16\000vreinterpretq_f32_s32\000vreinterpretq_f32_s64"
    "\000vreinterpretq_f32_s8\000vreinterpretq_f32_u16\000vreinterpretq_f32_"
    "u32\000vreinterpretq_f32_u64\000vreinterpretq_f32_u8\000vreinterpretq_s"
    "16\000vreinterpretq_s16_f16\000vreinterpretq_s16_f32\000vreinterpretq_s"
    "16_s32\000vreinterpretq_s16_s64\000vreinterpretq_s16_s8\000vreinterpret"
    "q_s16_u16\000vreinterpretq_s16_u32\000vreinterpretq_s16_u64\000vreinter"
    "pretq_s16_u8\000vreinterpretq_s32\000vreinterpretq_s32_f16\000vreinterp"
    "retq_s32_f32\000vreinterpretq_s32_s16\000vreinterpretq_s32_s64\000vrein"
    "terpretq_s32_s8\000vreinterpretq_s32_u16\000vreinterpretq_s32_u32\000vr"
    "einterpretq_s32_u64\000vreinterpretq_s32_u8\000vreinterpretq_s64\000vre"
    "interpretq_s64_f16\000vreinterpretq_s64_f32\000vreinterpretq_s64_s16\000"
    "vreinterpretq_s64_s32\000vreinterpretq_s64_s8\000vreinterpretq_s64_u16\000"
    "vreinterpretq_s64_u32\000vreinterpretq_s64_u64\000vreinterpretq_s64_u8\000"
    "vreinterpretq_s8\000vreinterpretq_s8_f16\000vreinterpretq_s8_f32\000vre"
    "interpretq_s8_s16\000vreinterpretq_s8_s32\000vreinterpretq_s8_s64\000vr"
    "einterpretq_s8_u16\000vreinterpretq_s8_u32\000vreinterpretq_s8_u64\000v"
    "reinterpretq_s8_u8\000vreinterpretq_u16\000vreinterpretq_u16_f16\000vre"
    "interpretq_u16_f32\000vreinterpretq_u16_s16\000vreinterpretq_u16_s32\000"
    "vreinterpretq_u16_s64\000vreinterpretq_u16_s8\000vreinterpretq_u16_u32\000"
    "vreinterpretq_u16_u64\000vreinterpretq_u16_u8\000vreinterpretq_u32\000v"
    "reinterpretq_u32_f16\000vreinterpretq_u32_f32\000vreinterpretq_u32_s16\000"
    "vreinterpretq_u32_s32\000vreinterpretq_u32_s64\000vreinterpretq_u32_s8\000"
    "vreinterpretq_u32_u16\000vreinterpretq_u32_u64\000vreinterpretq_u32_u8\000"
    "vreinterpretq_u64\000vreinterpretq_u64_f16\000vreinterpretq_u64_f32\000"
    "vreinterpretq_u64_s16\000vreinterpretq_u64_s32\000vreinterpretq_u64_s64"
    "\000vreinterpretq_u64_s8\000vreinterpretq_u64_u16\000vreinterpretq_u64_"
    "u32\000vreinterpretq_u64_u8\000vreinterpretq_u8\000vreinterpretq_u8_f16"
    "\000vreinterpretq_u8_f32\000vreinterpretq_u8_s16\000vreinterpretq_u8_s3"
    "2\000vreinterpretq_u8_s64\000vreinterpretq_u8_s8\000vreinterpretq_u8_u1"
    "6\000vreinterpretq_u8_u32\000vreinterpretq_u8_u64\000vrev16q_m\000vrev1"
    "6q_m_s8\000vrev16q_m_u8\000vrev16q\000vrev16q_s8\000vrev16q_u8\000vrev1"
    "6q_x\000vrev16q_x_s8\000vrev16q_x_u8\000vrev32q\000vrev32q_f16\000vrev3"
    "2q_m\000vrev32q_m_f16\000vrev32q_m_s16\000vrev32q_m_s8\000vrev32q_m_u16"
    "\000vrev32q_m_u8\000vrev32q_s16\000vrev32q_s8\000vrev32q_u16\000vrev32q"
    "_u8\000vrev32q_x\000vrev32q_x_f16\000vrev32q_x_s16\000vrev32q_x_s8\000v"
    "rev32q_x_u16\000vrev32q_x_u8\000vrev64q\000vrev64q_f16\000vrev64q_f32\000"
    "vrev64q_m\000vrev64q_m_f16\000vrev64q_m_f32\000vrev64q_m_s16\000vrev64q"
    "_m_s32\000vrev64q_m_s8\000vrev64q_m_u16\000vrev64q_m_u32\000vrev64q_m_u"
    "8\000vrev64q_s16\000vrev64q_s32\000vrev64q_s8\000vrev64q_u16\000vrev64q"
    "_u32\000vrev64q_u8\000vrev64q_x\000vrev64q_x_f16\000vrev64q_x_f32\000vr"
    "ev64q_x_s16\000vrev64q_x_s32\000vrev64q_x_s8\000vrev64q_x_u16\000vrev64"
    "q_x_u32\000vrev64q_x_u8\000vrhaddq_m\000vrhaddq_m_s16\000vrhaddq_m_s32\000"
    "vrhaddq_m_s8\000vrhaddq_m_u16\000vrhaddq_m_u32\000vrhaddq_m_u8\000vrhad"
    "dq\000vrhaddq_s16\000vrhaddq_s32\000vrhaddq_s8\000vrhaddq_u16\000vrhadd"
    "q_u32\000vrhaddq_u8\000vrhaddq_x\000vrhaddq_x_s16\000vrhaddq_x_s32\000v"
    "rhaddq_x_s8\000vrhaddq_x_u16\000vrhaddq_x_u32\000vrhaddq_x_u8\000vrmlal"
    "davhaq_p\000vrmlaldavhaq_p_s32\000vrmlaldavhaq_p_u32\000vrmlaldavhaq\000"
    "vrmlaldavhaq_s32\000vrmlaldavhaq_u32\000vrmlaldavhaxq_p\000vrmlaldavhax"
    "q_p_s32\000vrmlaldavhaxq\000vrmlaldavhaxq_s32\000vrmlaldavhq_p\000vrmla"
    "ldavhq_p_s32\000vrmlaldavhq_p_u32\000vrmlaldavhq\000vrmlaldavhq_s32\000"
    "vrmlaldavhq_u32\000vrmlaldavhxq_p\000vrmlaldavhxq_p_s32\000vrmlaldavhxq"
    "\000vrmlaldavhxq_s32\000vrmlsldavhaq_p\000vrmlsldavhaq_p_s32\000vrmlsld"
    "avhaq\000vrmlsldavhaq_s32\000vrmlsldavhaxq_p\000vrmlsldavhaxq_p_s32\000"
    "vrmlsldavhaxq\000vrmlsldavhaxq_s32\000vrmlsldavhq_p\000vrmlsldavhq_p_s3"
    "2\000vrmlsldavhq\000vrmlsldavhq_s32\000vrmlsldavhxq_p\000vrmlsldavhxq_p"
    "_s32\000vrmlsldavhxq\000vrmlsldavhxq_s32\000vrmulhq_m\000vrmulhq_m_s16\000"
    "vrmulhq_m_s32\000vrmulhq_m_s8\000vrmulhq_m_u16\000vrmulhq_m_u32\000vrmu"
    "lhq_m_u8\000vrmulhq\000vrmulhq_s16\000vrmulhq_s32\000vrmulhq_s8\000vrmu"
    "lhq_u16\000vrmulhq_u32\000vrmulhq_u8\000vrmulhq_x\000vrmulhq_x_s16\000v"
    "rmulhq_x_s32\000vrmulhq_x_s8\000vrmulhq_x_u16\000vrmulhq_x_u32\000vrmul"
    "hq_x_u8\000vrndaq\000vrndaq_f16\000vrndaq_f32\000vrndaq_m\000vrndaq_m_f"
    "16\000vrndaq_m_f32\000vrndaq_x\000vrndaq_x_f16\000vrndaq_x_f32\000vrndm"
    "q\000vrndmq_f16\000vrndmq_f32\000vrndmq_m\000vrndmq_m_f16\000vrndmq_m_f"
    "32\000vrndmq_x\000vrndmq_x_f16\000vrndmq_x_f32\000vrndnq\000vrndnq_f16\000"
    "vrndnq_f32\000vrndnq_m\000vrndnq_m_f16\000vrndnq_m_f32\000vrndnq_x\000v"
    "rndnq_x_f16\000vrndnq_x_f32\000vrndpq\000vrndpq_f16\000vrndpq_f32\000vr"
    "ndpq_m\000vrndpq_m_f16\000vrndpq_m_f32\000vrndpq_x\000vrndpq_x_f16\000v"
    "rndpq_x_f32\000vrndq\000vrndq_f16\000vrndq_f32\000vrndq_m\000vrndq_m_f1"
    "6\000vrndq_m_f32\000vrndq_x\000vrndq_x_f16\000vrndq_x_f32\000vrndxq\000"
    "vrndxq_f16\000vrndxq_f32\000vrndxq_m\000vrndxq_m_f16\000vrndxq_m_f32\000"
    "vrndxq_x\000vrndxq_x_f16\000vrndxq_x_f32\000vrshlq_m_n\000vrshlq_m_n_s1"
    "6\000vrshlq_m_n_s32\000vrshlq_m_n_s8\000vrshlq_m_n_u16\000vrshlq_m_n_u3"
    "2\000vrshlq_m_n_u8\000vrshlq_m\000vrshlq_m_s16\000vrshlq_m_s32\000vrshl"
    "q_m_s8\000vrshlq_m_u16\000vrshlq_m_u32\000vrshlq_m_u8\000vrshlq\000vrsh"
    "lq_n_s16\000vrshlq_n_s32\000vrshlq_n_s8\000vrshlq_n_u16\000vrshlq_n_u32"
    "\000vrshlq_n_u8\000vrshlq_s16\000vrshlq_s32\000vrshlq_s8\000vrshlq_u16\000"
    "vrshlq_u32\000vrshlq_u8\000vrshlq_x\000vrshlq_x_s16\000vrshlq_x_s32\000"
    "vrshlq_x_s8\000vrshlq_x_u16\000vrshlq_x_u32\000vrshlq_x_u8\000vrshrnbq_"
    "m\000vrshrnbq_m_n_s16\000vrshrnbq_m_n_s32\000vrshrnbq_m_n_u16\000vrshrn"
    "bq_m_n_u32\000vrshrnbq\000vrshrnbq_n_s16\000vrshrnbq_n_s32\000vrshrnbq_"
    "n_u16\000vrshrnbq_n_u32\000vrshrntq_m\000vrshrntq_m_n_s16\000vrshrntq_m"
    "_n_s32\000vrshrntq_m_n_u16\000vrshrntq_m_n_u32\000vrshrntq\000vrshrntq_"
    "n_s16\000vrshrntq_n_s32\000vrshrntq_n_u16\000vrshrntq_n_u32\000vrshrq_m"
    "\000vrshrq_m_n_s16\000vrshrq_m_n_s32\000vrshrq_m_n_s8\000vrshrq_m_n_u16"
    "\000vrshrq_m_n_u32\000vrshrq_m_n_u8\000vrshrq\000vrshrq_n_s16\000vrshrq"
    "_n_s32\000vrshrq_n_s8\000vrshrq_n_u16\000vrshrq_n_u32\000vrshrq_n_u8\000"
    "vrshrq_x\000vrshrq_x_n_s16\000vrshrq_x_n_s32\000vrshrq_x_n_s8\000vrshrq"
    "_x_n_u16\000vrshrq_x_n_u32\000vrshrq_x_n_u8\000vsetq_lane\000vsetq_lane"
    "_f16\000vsetq_lane_f32\000vsetq_lane_s16\000vsetq_lane_s32\000vsetq_lan"
    "e_s64\000vsetq_lane_s8\000vsetq_lane_u16\000vsetq_lane_u32\000vsetq_lan"
    "e_u64\000vsetq_lane_u8\000vshllbq_m\000vshllbq_m_n_s16\000vshllbq_m_n_s"
    "8\000vshllbq_m_n_u16\000vshllbq_m_n_u8\000vshllbq\000vshllbq_n_s16\000v"
    "shllbq_n_s8\000vshllbq_n_u16\000vshllbq_n_u8\000vshllbq_x\000vshllbq_x_"
    "n_s16\000vshllbq_x_n_s8\000vshllbq_x_n_u16\000vshllbq_x_n_u8\000vshlltq"
    "_m\000vshlltq_m_n_s16\000vshlltq_m_n_s8\000vshlltq_m_n_u16\000vshlltq_m"
    "_n_u8\000vshlltq\000vshlltq_n_s16\000vshlltq_n_s8\000vshlltq_n_u16\000v"
    "shlltq_n_u8\000vshlltq_x\000vshlltq_x_n_s16\000vshlltq_x_n_s8\000vshllt"
    "q_x_n_u16\000vshlltq_x_n_u8\000vshlq_m_n\000vshlq_m_n_s16\000vshlq_m_n_"
    "s32\000vshlq_m_n_s8\000vshlq_m_n_u16\000vshlq_m_n_u32\000vshlq_m_n_u8\000"
    "vshlq_m_r\000vshlq_m_r_s16\000vshlq_m_r_s32\000vshlq_m_r_s8\000vshlq_m_"
    "r_u16\000vshlq_m_r_u32\000vshlq_m_r_u8\000vshlq_m\000vshlq_m_s16\000vsh"
    "lq_m_s32\000vshlq_m_s8\000vshlq_m_u16\000vshlq_m_u32\000vshlq_m_u8\000v"
    "shlq_n\000vshlq_n_s16\000vshlq_n_s32\000vshlq_n_s8\000vshlq_n_u16\000vs"
    "hlq_n_u32\000vshlq_n_u8\000vshlq_r\000vshlq_r_s16\000vshlq_r_s32\000vsh"
    "lq_r_s8\000vshlq_r_u16\000vshlq_r_u32\000vshlq_r_u8\000vshlq\000vshlq_s"
    "16\000vshlq_s32\000vshlq_s8\000vshlq_u16\000vshlq_u32\000vshlq_u8\000vs"
    "hlq_x_n\000vshlq_x_n_s16\000vshlq_x_n_s32\000vshlq_x_n_s8\000vshlq_x_n_"
    "u16\000vshlq_x_n_u32\000vshlq_x_n_u8\000vshlq_x\000vshlq_x_s16\000vshlq"
    "_x_s32\000vshlq_x_s8\000vshlq_x_u16\000vshlq_x_u32\000vshlq_x_u8\000vsh"
    "rnbq_m\000vshrnbq_m_n_s16\000vshrnbq_m_n_s32\000vshrnbq_m_n_u16\000vshr"
    "nbq_m_n_u32\000vshrnbq\000vshrnbq_n_s16\000vshrnbq_n_s32\000vshrnbq_n_u"
    "16\000vshrnbq_n_u32\000vshrntq_m\000vshrntq_m_n_s16\000vshrntq_m_n_s32\000"
    "vshrntq_m_n_u16\000vshrntq_m_n_u32\000vshrntq\000vshrntq_n_s16\000vshrn"
    "tq_n_s32\000vshrntq_n_u16\000vshrntq_n_u32\000vshrq_m\000vshrq_m_n_s16\000"
    "vshrq_m_n_s32\000vshrq_m_n_s8\000vshrq_m_n_u16\000vshrq_m_n_u32\000vshr"
    "q_m_n_u8\000vshrq\000vshrq_n_s16\000vshrq_n_s32\000vshrq_n_s8\000vshrq_"
    "n_u16\000vshrq_n_u32\000vshrq_n_u8\000vshrq_x\000vshrq_x_n_s16\000vshrq"
    "_x_n_s32\000vshrq_x_n_s8\000vshrq_x_n_u16\000vshrq_x_n_u32\000vshrq_x_n"
    "_u8\000vsliq_m\000vsliq_m_n_s16\000vsliq_m_n_s32\000vsliq_m_n_s8\000vsl"
    "iq_m_n_u16\000vsliq_m_n_u32\000vsliq_m_n_u8\000vsliq\000vsliq_n_s16\000"
    "vsliq_n_s32\000vsliq_n_s8\000vsliq_n_u16\000vsliq_n_u32\000vsliq_n_u8\000"
    "vsriq_m\000vsriq_m_n_s16\000vsriq_m_n_s32\000vsriq_m_n_s8\000vsriq_m_n_"
    "u16\000vsriq_m_n_u32\000vsriq_m_n_u8\000vsriq\000vsriq_n_s16\000vsriq_n"
    "_s32\000vsriq_n_s8\000vsriq_n_u16\000vsriq_n_u32\000vsriq_n_u8\000vst1q"
    "\000vst1q_f16\000vst1q_f32\000vst1q_p\000vst1q_p_f16\000vst1q_p_f32\000"
    "vst1q_p_s16\000vst1q_p_s32\000vst1q_p_s8\000vst1q_p_u16\000vst1q_p_u32\000"
    "vst1q_p_u8\000vst1q_s16\000vst1q_s32\000vst1q_s8\000vst1q_u16\000vst1q_"
    "u32\000vst1q_u8\000vst2q\000vst2q_f16\000vst2q_f32\000vst2q_s16\000vst2"
    "q_s32\000vst2q_s8\000vst2q_u16\000vst2q_u32\000vst2q_u8\000vst4q\000vst"
    "4q_f16\000vst4q_f32\000vst4q_s16\000vst4q_s32\000vst4q_s8\000vst4q_u16\000"
    "vst4q_u32\000vst4q_u8\000vstrbq_p\000vstrbq_p_s16\000vstrbq_p_s32\000vs"
    "trbq_p_s8\000vstrbq_p_u16\000vstrbq_p_u32\000vstrbq_p_u8\000vstrbq\000v"
    "strbq_s16\000vstrbq_s32\000vstrbq_s8\000vstrbq_scatter_offset_p\000vstr"
    "bq_scatter_offset_p_s16\000vstrbq_scatter_offset_p_s32\000vstrbq_scatte"
    "r_offset_p_s8\000vstrbq_scatter_offset_p_u16\000vstrbq_scatter_offset_p"
    "_u32\000vstrbq_scatter_offset_p_u8\000vstrbq_scatter_offset\000vstrbq_s"
    "catter_offset_s16\000vstrbq_scatter_offset_s32\000vstrbq_scatter_offset"
    "_s8\000vstrbq_scatter_offset_u16\000vstrbq_scatter_offset_u32\000vstrbq"
    "_scatter_offset_u8\000vstrbq_u16\000vstrbq_u32\000vstrbq_u8\000vstrdq_s"
    "catter_base_p\000vstrdq_scatter_base_p_s64\000vstrdq_scatter_base_p_u64"
    "\000vstrdq_scatter_base\000vstrdq_scatter_base_s64\000vstrdq_scatter_ba"
    "se_u64\000vstrdq_scatter_base_wb_p\000vstrdq_scatter_base_wb_p_s64\000v"
    "strdq_scatter_base_wb_p_u64\000vstrdq_scatter_base_wb\000vstrdq_scatter"
    "_base_wb_s64\000vstrdq_scatter_base_wb_u64\000vstrdq_scatter_offset_p\000"
    "vstrdq_scatter_offset_p_s64\000vstrdq_scatter_offset_p_u64\000vstrdq_sc"
    "atter_offset\000vstrdq_scatter_offset_s64\000vstrdq_scatter_offset_u64\000"
    "vstrdq_scatter_shifted_offset_p\000vstrdq_scatter_shifted_offset_p_s64\000"
    "vstrdq_scatter_shifted_offset_p_u64\000vstrdq_scatter_shifted_offset\000"
    "vstrdq_scatter_shifted_offset_s64\000vstrdq_scatter_shifted_offset_u64\000"
    "vstrhq\000vstrhq_f16\000vstrhq_p\000vstrhq_p_f16\000vstrhq_p_s16\000vst"
    "rhq_p_s32\000vstrhq_p_u16\000vstrhq_p_u32\000vstrhq_s16\000vstrhq_s32\000"
    "vstrhq_scatter_offset\000vstrhq_scatter_offset_f16\000vstrhq_scatter_of"
    "fset_p\000vstrhq_scatter_offset_p_f16\000vstrhq_scatter_offset_p_s16\000"
    "vstrhq_scatter_offset_p_s32\000vstrhq_scatter_offset_p_u16\000vstrhq_sc"
    "atter_offset_p_u32\000vstrhq_scatter_offset_s16\000vstrhq_scatter_offse"
    "t_s32\000vstrhq_scatter_offset_u16\000vstrhq_scatter_offset_u32\000vstr"
    "hq_scatter_shifted_offset\000vstrhq_scatter_shifted_offset_f16\000vstrh"
    "q_scatter_shifted_offset_p\000vstrhq_scatter_shifted_offset_p_f16\000vs"
    "trhq_scatter_shifted_offset_p_s16\000vstrhq_scatter_shifted_offset_p_s3"
    "2\000vstrhq_scatter_shifted_offset_p_u16\000vstrhq_scatter_shifted_offs"
    "et_p_u32\000vstrhq_scatter_shifted_offset_s16\000vstrhq_scatter_shifted"
    "_offset_s32\000vstrhq_scatter_shifted_offset_u16\000vstrhq_scatter_shif"
    "ted_offset_u32\000vstrhq_u16\000vstrhq_u32\000vstrwq\000vstrwq_f32\000v"
    "strwq_p\000vstrwq_p_f32\000vstrwq_p_s32\000vstrwq_p_u32\000vstrwq_s32\000"
    "vstrwq_scatter_base\000vstrwq_scatter_base_f32\000vstrwq_scatter_base_p"
    "\000vstrwq_scatter_base_p_f32\000vstrwq_scatter_base_p_s32\000vstrwq_sc"
    "atter_base_p_u32\000vstrwq_scatter_base_s32\000vstrwq_scatter_base_u32\000"
    "vstrwq_scatter_base_wb\000vstrwq_scatter_base_wb_f32\000vstrwq_scatter_"
    "base_wb_p\000vstrwq_scatter_base_wb_p_f32\000vstrwq_scatter_base_wb_p_s"
    "32\000vstrwq_scatter_base_wb_p_u32\000vstrwq_scatter_base_wb_s32\000vst"
    "rwq_scatter_base_wb_u32\000vstrwq_scatter_offset\000vstrwq_scatter_offs"
    "et_f32\000vstrwq_scatter_offset_p\000vstrwq_scatter_offset_p_f32\000vst"
    "rwq_scatter_offset_p_s32\000vstrwq_scatter_offset_p_u32\000vstrwq_scatt"
    "er_offset_s32\000vstrwq_scatter_offset_u32\000vstrwq_scatter_shifted_of"
    "fset\000vstrwq_scatter_shifted_offset_f32\000vstrwq_scatter_shifted_off"
    "set_p\000vstrwq_scatter_shifted_offset_p_f32\000vstrwq_scatter_shifted_"
    "offset_p_s32\000vstrwq_scatter_shifted_offset_p_u32\000vstrwq_scatter_s"
    "hifted_offset_s32\000vstrwq_scatter_shifted_offset_u32\000vstrwq_u32\000"
    "vsubq\000vsubq_f16\000vsubq_f32\000vsubq_m\000vsubq_m_f16\000vsubq_m_f3"
    "2\000vsubq_m_n_f16\000vsubq_m_n_f32\000vsubq_m_n_s16\000vsubq_m_n_s32\000"
    "vsubq_m_n_s8\000vsubq_m_n_u16\000vsubq_m_n_u32\000vsubq_m_n_u8\000vsubq"
    "_m_s16\000vsubq_m_s32\000vsubq_m_s8\000vsubq_m_u16\000vsubq_m_u32\000vs"
    "ubq_m_u8\000vsubq_n_f16\000vsubq_n_f32\000vsubq_n_s16\000vsubq_n_s32\000"
    "vsubq_n_s8\000vsubq_n_u16\000vsubq_n_u32\000vsubq_n_u8\000vsubq_s16\000"
    "vsubq_s32\000vsubq_s8\000vsubq_u16\000vsubq_u32\000vsubq_u8\000vsubq_x\000"
    "vsubq_x_f16\000vsubq_x_f32\000vsubq_x_n_f16\000vsubq_x_n_f32\000vsubq_x"
    "_n_s16\000vsubq_x_n_s32\000vsubq_x_n_s8\000vsubq_x_n_u16\000vsubq_x_n_u"
    "32\000vsubq_x_n_u8\000vsubq_x_s16\000vsubq_x_s32\000vsubq_x_s8\000vsubq"
    "_x_u16\000vsubq_x_u32\000vsubq_x_u8\000vuninitializedq_f16\000vuninitia"
    "lizedq_f32\000vuninitializedq\000vuninitializedq_polymorphic_f16\000vun"
    "initializedq_polymorphic_f32\000vuninitializedq_polymorphic_s16\000vuni"
    "nitializedq_polymorphic_s32\000vuninitializedq_polymorphic_s64\000vunin"
    "itializedq_polymorphic_s8\000vuninitializedq_polymorphic_u16\000vuninit"
    "ializedq_polymorphic_u32\000vuninitializedq_polymorphic_u64\000vuniniti"
    "alizedq_polymorphic_u8\000vuninitializedq_s16\000vuninitializedq_s32\000"
    "vuninitializedq_s64\000vuninitializedq_s8\000vuninitializedq_u16\000vun"
    "initializedq_u32\000vuninitializedq_u64\000vuninitializedq_u8\000"};

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
