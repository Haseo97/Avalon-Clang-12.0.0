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
  { ARM::BI__builtin_arm_mve_vcvtaq_m_s16_f16, 7467, 7458},
  { ARM::BI__builtin_arm_mve_vcvtaq_m_s32_f32, 7484, 7458},
  { ARM::BI__builtin_arm_mve_vcvtaq_m_u16_f16, 7501, 7458},
  { ARM::BI__builtin_arm_mve_vcvtaq_m_u32_f32, 7518, 7458},
  { ARM::BI__builtin_arm_mve_vcvtaq_s16_f16, 7535, -1},
  { ARM::BI__builtin_arm_mve_vcvtaq_s32_f32, 7550, -1},
  { ARM::BI__builtin_arm_mve_vcvtaq_u16_f16, 7565, -1},
  { ARM::BI__builtin_arm_mve_vcvtaq_u32_f32, 7580, -1},
  { ARM::BI__builtin_arm_mve_vcvtaq_x_s16_f16, 7595, -1},
  { ARM::BI__builtin_arm_mve_vcvtaq_x_s32_f32, 7612, -1},
  { ARM::BI__builtin_arm_mve_vcvtaq_x_u16_f16, 7629, -1},
  { ARM::BI__builtin_arm_mve_vcvtaq_x_u32_f32, 7646, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_f16_f32, 7663, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_f32_f16, 7678, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_m_f16_f32, 7693, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_m_f32_f16, 7710, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_x_f32_f16, 7727, -1},
  { ARM::BI__builtin_arm_mve_vcvtmq_m_s16_f16, 7753, 7744},
  { ARM::BI__builtin_arm_mve_vcvtmq_m_s32_f32, 7770, 7744},
  { ARM::BI__builtin_arm_mve_vcvtmq_m_u16_f16, 7787, 7744},
  { ARM::BI__builtin_arm_mve_vcvtmq_m_u32_f32, 7804, 7744},
  { ARM::BI__builtin_arm_mve_vcvtmq_s16_f16, 7821, -1},
  { ARM::BI__builtin_arm_mve_vcvtmq_s32_f32, 7836, -1},
  { ARM::BI__builtin_arm_mve_vcvtmq_u16_f16, 7851, -1},
  { ARM::BI__builtin_arm_mve_vcvtmq_u32_f32, 7866, -1},
  { ARM::BI__builtin_arm_mve_vcvtmq_x_s16_f16, 7881, -1},
  { ARM::BI__builtin_arm_mve_vcvtmq_x_s32_f32, 7898, -1},
  { ARM::BI__builtin_arm_mve_vcvtmq_x_u16_f16, 7915, -1},
  { ARM::BI__builtin_arm_mve_vcvtmq_x_u32_f32, 7932, -1},
  { ARM::BI__builtin_arm_mve_vcvtnq_m_s16_f16, 7958, 7949},
  { ARM::BI__builtin_arm_mve_vcvtnq_m_s32_f32, 7975, 7949},
  { ARM::BI__builtin_arm_mve_vcvtnq_m_u16_f16, 7992, 7949},
  { ARM::BI__builtin_arm_mve_vcvtnq_m_u32_f32, 8009, 7949},
  { ARM::BI__builtin_arm_mve_vcvtnq_s16_f16, 8026, -1},
  { ARM::BI__builtin_arm_mve_vcvtnq_s32_f32, 8041, -1},
  { ARM::BI__builtin_arm_mve_vcvtnq_u16_f16, 8056, -1},
  { ARM::BI__builtin_arm_mve_vcvtnq_u32_f32, 8071, -1},
  { ARM::BI__builtin_arm_mve_vcvtnq_x_s16_f16, 8086, -1},
  { ARM::BI__builtin_arm_mve_vcvtnq_x_s32_f32, 8103, -1},
  { ARM::BI__builtin_arm_mve_vcvtnq_x_u16_f16, 8120, -1},
  { ARM::BI__builtin_arm_mve_vcvtnq_x_u32_f32, 8137, -1},
  { ARM::BI__builtin_arm_mve_vcvtpq_m_s16_f16, 8163, 8154},
  { ARM::BI__builtin_arm_mve_vcvtpq_m_s32_f32, 8180, 8154},
  { ARM::BI__builtin_arm_mve_vcvtpq_m_u16_f16, 8197, 8154},
  { ARM::BI__builtin_arm_mve_vcvtpq_m_u32_f32, 8214, 8154},
  { ARM::BI__builtin_arm_mve_vcvtpq_s16_f16, 8231, -1},
  { ARM::BI__builtin_arm_mve_vcvtpq_s32_f32, 8246, -1},
  { ARM::BI__builtin_arm_mve_vcvtpq_u16_f16, 8261, -1},
  { ARM::BI__builtin_arm_mve_vcvtpq_u32_f32, 8276, -1},
  { ARM::BI__builtin_arm_mve_vcvtpq_x_s16_f16, 8291, -1},
  { ARM::BI__builtin_arm_mve_vcvtpq_x_s32_f32, 8308, -1},
  { ARM::BI__builtin_arm_mve_vcvtpq_x_u16_f16, 8325, -1},
  { ARM::BI__builtin_arm_mve_vcvtpq_x_u32_f32, 8342, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_f16_s16, 8365, 8359},
  { ARM::BI__builtin_arm_mve_vcvtq_f16_u16, 8379, 8359},
  { ARM::BI__builtin_arm_mve_vcvtq_f32_s32, 8393, 8359},
  { ARM::BI__builtin_arm_mve_vcvtq_f32_u32, 8407, 8359},
  { ARM::BI__builtin_arm_mve_vcvtq_m_f16_s16, 8429, 8421},
  { ARM::BI__builtin_arm_mve_vcvtq_m_f16_u16, 8445, 8421},
  { ARM::BI__builtin_arm_mve_vcvtq_m_f32_s32, 8461, 8421},
  { ARM::BI__builtin_arm_mve_vcvtq_m_f32_u32, 8477, 8421},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f16_s16, 8503, 8493},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f16_u16, 8521, 8493},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f32_s32, 8539, 8493},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f32_u32, 8557, 8493},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_s16_f16, 8575, 8493},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_s32_f32, 8593, 8493},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_u16_f16, 8611, 8493},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_u32_f32, 8629, 8493},
  { ARM::BI__builtin_arm_mve_vcvtq_m_s16_f16, 8647, 8421},
  { ARM::BI__builtin_arm_mve_vcvtq_m_s32_f32, 8663, 8421},
  { ARM::BI__builtin_arm_mve_vcvtq_m_u16_f16, 8679, 8421},
  { ARM::BI__builtin_arm_mve_vcvtq_m_u32_f32, 8695, 8421},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f16_s16, 8719, 8711},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f16_u16, 8735, 8711},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f32_s32, 8751, 8711},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f32_u32, 8767, 8711},
  { ARM::BI__builtin_arm_mve_vcvtq_n_s16_f16, 8783, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_n_s32_f32, 8799, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_n_u16_f16, 8815, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_n_u32_f32, 8831, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_s16_f16, 8847, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_s32_f32, 8861, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_u16_f16, 8875, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_u32_f32, 8889, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_f16_s16, 8911, 8903},
  { ARM::BI__builtin_arm_mve_vcvtq_x_f16_u16, 8927, 8903},
  { ARM::BI__builtin_arm_mve_vcvtq_x_f32_s32, 8943, 8903},
  { ARM::BI__builtin_arm_mve_vcvtq_x_f32_u32, 8959, 8903},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f16_s16, 8985, 8975},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f16_u16, 9003, 8975},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f32_s32, 9021, 8975},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f32_u32, 9039, 8975},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_s16_f16, 9057, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_s32_f32, 9075, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_u16_f16, 9093, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_u32_f32, 9111, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_s16_f16, 9129, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_s32_f32, 9145, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_u16_f16, 9161, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_u32_f32, 9177, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_f16_f32, 9193, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_f32_f16, 9208, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_m_f16_f32, 9223, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_m_f32_f16, 9240, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_x_f32_f16, 9257, -1},
  { ARM::BI__builtin_arm_mve_vddupq_m_n_u16, 9283, 9274},
  { ARM::BI__builtin_arm_mve_vddupq_m_n_u32, 9298, 9274},
  { ARM::BI__builtin_arm_mve_vddupq_m_n_u8, 9313, 9274},
  { ARM::BI__builtin_arm_mve_vddupq_m_wb_u16, 9327, 9274},
  { ARM::BI__builtin_arm_mve_vddupq_m_wb_u32, 9343, 9274},
  { ARM::BI__builtin_arm_mve_vddupq_m_wb_u8, 9359, 9274},
  { ARM::BI__builtin_arm_mve_vddupq_n_u16, 9385, 9374},
  { ARM::BI__builtin_arm_mve_vddupq_n_u32, 9409, 9398},
  { ARM::BI__builtin_arm_mve_vddupq_n_u8, 9432, 9422},
  { ARM::BI__builtin_arm_mve_vddupq_wb_u16, 9444, 9374},
  { ARM::BI__builtin_arm_mve_vddupq_wb_u32, 9458, 9398},
  { ARM::BI__builtin_arm_mve_vddupq_wb_u8, 9472, 9422},
  { ARM::BI__builtin_arm_mve_vddupq_x_n_u16, 9498, 9485},
  { ARM::BI__builtin_arm_mve_vddupq_x_n_u32, 9526, 9513},
  { ARM::BI__builtin_arm_mve_vddupq_x_n_u8, 9553, 9541},
  { ARM::BI__builtin_arm_mve_vddupq_x_wb_u16, 9567, 9485},
  { ARM::BI__builtin_arm_mve_vddupq_x_wb_u32, 9583, 9513},
  { ARM::BI__builtin_arm_mve_vddupq_x_wb_u8, 9599, 9541},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_f16, 9622, 9614},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_f32, 9636, 9614},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_s16, 9650, 9614},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_s32, 9664, 9614},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_s8, 9678, 9614},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_u16, 9691, 9614},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_u32, 9705, 9614},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_u8, 9719, 9614},
  { ARM::BI__builtin_arm_mve_vdupq_n_f16, 9732, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_f32, 9744, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_s16, 9756, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_s32, 9768, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_s8, 9780, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_u16, 9791, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_u32, 9803, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_u8, 9815, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_f16, 9826, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_f32, 9840, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_s16, 9854, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_s32, 9868, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_s8, 9882, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_u16, 9895, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_u32, 9909, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_u8, 9923, -1},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_n_u16, 9946, 9936},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_n_u32, 9962, 9936},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_n_u8, 9978, 9936},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_wb_u16, 9993, 9936},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_wb_u32, 10010, 9936},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_wb_u8, 10027, 9936},
  { ARM::BI__builtin_arm_mve_vdwdupq_n_u16, 10055, 10043},
  { ARM::BI__builtin_arm_mve_vdwdupq_n_u32, 10081, 10069},
  { ARM::BI__builtin_arm_mve_vdwdupq_n_u8, 10106, 10095},
  { ARM::BI__builtin_arm_mve_vdwdupq_wb_u16, 10119, 10043},
  { ARM::BI__builtin_arm_mve_vdwdupq_wb_u32, 10134, 10069},
  { ARM::BI__builtin_arm_mve_vdwdupq_wb_u8, 10149, 10095},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_n_u16, 10177, 10163},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_n_u32, 10207, 10193},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_n_u8, 10236, 10223},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_wb_u16, 10251, 10163},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_wb_u32, 10268, 10193},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_wb_u8, 10285, 10223},
  { ARM::BI__builtin_arm_mve_veorq_f16, 10307, 10301},
  { ARM::BI__builtin_arm_mve_veorq_f32, 10317, 10301},
  { ARM::BI__builtin_arm_mve_veorq_m_f16, 10335, 10327},
  { ARM::BI__builtin_arm_mve_veorq_m_f32, 10347, 10327},
  { ARM::BI__builtin_arm_mve_veorq_m_s16, 10359, 10327},
  { ARM::BI__builtin_arm_mve_veorq_m_s32, 10371, 10327},
  { ARM::BI__builtin_arm_mve_veorq_m_s8, 10383, 10327},
  { ARM::BI__builtin_arm_mve_veorq_m_u16, 10394, 10327},
  { ARM::BI__builtin_arm_mve_veorq_m_u32, 10406, 10327},
  { ARM::BI__builtin_arm_mve_veorq_m_u8, 10418, 10327},
  { ARM::BI__builtin_arm_mve_veorq_s16, 10429, 10301},
  { ARM::BI__builtin_arm_mve_veorq_s32, 10439, 10301},
  { ARM::BI__builtin_arm_mve_veorq_s8, 10449, 10301},
  { ARM::BI__builtin_arm_mve_veorq_u16, 10458, 10301},
  { ARM::BI__builtin_arm_mve_veorq_u32, 10468, 10301},
  { ARM::BI__builtin_arm_mve_veorq_u8, 10478, 10301},
  { ARM::BI__builtin_arm_mve_veorq_x_f16, 10495, 10487},
  { ARM::BI__builtin_arm_mve_veorq_x_f32, 10507, 10487},
  { ARM::BI__builtin_arm_mve_veorq_x_s16, 10519, 10487},
  { ARM::BI__builtin_arm_mve_veorq_x_s32, 10531, 10487},
  { ARM::BI__builtin_arm_mve_veorq_x_s8, 10543, 10487},
  { ARM::BI__builtin_arm_mve_veorq_x_u16, 10554, 10487},
  { ARM::BI__builtin_arm_mve_veorq_x_u32, 10566, 10487},
  { ARM::BI__builtin_arm_mve_veorq_x_u8, 10578, 10487},
  { ARM::BI__builtin_arm_mve_vgetq_lane_f16, 10600, 10589},
  { ARM::BI__builtin_arm_mve_vgetq_lane_f32, 10615, 10589},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s16, 10630, 10589},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s32, 10645, 10589},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s64, 10660, 10589},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s8, 10675, 10589},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u16, 10689, 10589},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u32, 10704, 10589},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u64, 10719, 10589},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u8, 10734, 10589},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_s16, 10757, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_s32, 10772, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_s8, 10787, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_u16, 10801, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_u32, 10816, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_u8, 10831, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s16, 10845, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s32, 10858, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s8, 10871, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u16, 10883, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u32, 10896, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u8, 10909, 10748},
  { ARM::BI__builtin_arm_mve_vhaddq_n_s16, 10928, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_n_s32, 10941, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_n_s8, 10954, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_n_u16, 10966, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_n_u32, 10979, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_n_u8, 10992, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_s16, 11004, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_s32, 11015, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_s8, 11026, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_u16, 11036, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_u32, 11047, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_u8, 11058, 10921},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_s16, 11077, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_s32, 11092, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_s8, 11107, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_u16, 11121, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_u32, 11136, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_u8, 11151, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s16, 11165, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s32, 11178, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s8, 11191, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u16, 11203, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u32, 11216, 11068},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u8, 11229, 11068},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s16, 11258, 11241},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s32, 11279, 11241},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s8, 11300, 11241},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s16, 11335, 11320},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s32, 11354, 11320},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s8, 11373, 11320},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s16, 11408, 11391},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s32, 11429, 11391},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s8, 11450, 11391},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s16, 11486, 11470},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s32, 11506, 11470},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s8, 11526, 11470},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s16, 11559, 11545},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s32, 11577, 11545},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s8, 11595, 11545},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s16, 11628, 11612},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s32, 11648, 11612},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s8, 11668, 11612},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_s16, 11696, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_s32, 11711, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_s8, 11726, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_u16, 11740, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_u32, 11755, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_u8, 11770, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s16, 11784, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s32, 11797, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s8, 11810, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u16, 11822, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u32, 11835, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u8, 11848, 11687},
  { ARM::BI__builtin_arm_mve_vhsubq_n_s16, 11867, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_n_s32, 11880, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_n_s8, 11893, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_n_u16, 11905, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_n_u32, 11918, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_n_u8, 11931, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_s16, 11943, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_s32, 11954, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_s8, 11965, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_u16, 11975, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_u32, 11986, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_u8, 11997, 11860},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_s16, 12016, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_s32, 12031, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_s8, 12046, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_u16, 12060, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_u32, 12075, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_u8, 12090, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s16, 12104, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s32, 12117, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s8, 12130, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u16, 12142, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u32, 12155, 12007},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u8, 12168, 12007},
  { ARM::BI__builtin_arm_mve_vidupq_m_n_u16, 12189, 12180},
  { ARM::BI__builtin_arm_mve_vidupq_m_n_u32, 12204, 12180},
  { ARM::BI__builtin_arm_mve_vidupq_m_n_u8, 12219, 12180},
  { ARM::BI__builtin_arm_mve_vidupq_m_wb_u16, 12233, 12180},
  { ARM::BI__builtin_arm_mve_vidupq_m_wb_u32, 12249, 12180},
  { ARM::BI__builtin_arm_mve_vidupq_m_wb_u8, 12265, 12180},
  { ARM::BI__builtin_arm_mve_vidupq_n_u16, 12291, 12280},
  { ARM::BI__builtin_arm_mve_vidupq_n_u32, 12315, 12304},
  { ARM::BI__builtin_arm_mve_vidupq_n_u8, 12338, 12328},
  { ARM::BI__builtin_arm_mve_vidupq_wb_u16, 12350, 12280},
  { ARM::BI__builtin_arm_mve_vidupq_wb_u32, 12364, 12304},
  { ARM::BI__builtin_arm_mve_vidupq_wb_u8, 12378, 12328},
  { ARM::BI__builtin_arm_mve_vidupq_x_n_u16, 12404, 12391},
  { ARM::BI__builtin_arm_mve_vidupq_x_n_u32, 12432, 12419},
  { ARM::BI__builtin_arm_mve_vidupq_x_n_u8, 12459, 12447},
  { ARM::BI__builtin_arm_mve_vidupq_x_wb_u16, 12473, 12391},
  { ARM::BI__builtin_arm_mve_vidupq_x_wb_u32, 12489, 12419},
  { ARM::BI__builtin_arm_mve_vidupq_x_wb_u8, 12505, 12447},
  { ARM::BI__builtin_arm_mve_viwdupq_m_n_u16, 12530, 12520},
  { ARM::BI__builtin_arm_mve_viwdupq_m_n_u32, 12546, 12520},
  { ARM::BI__builtin_arm_mve_viwdupq_m_n_u8, 12562, 12520},
  { ARM::BI__builtin_arm_mve_viwdupq_m_wb_u16, 12577, 12520},
  { ARM::BI__builtin_arm_mve_viwdupq_m_wb_u32, 12594, 12520},
  { ARM::BI__builtin_arm_mve_viwdupq_m_wb_u8, 12611, 12520},
  { ARM::BI__builtin_arm_mve_viwdupq_n_u16, 12639, 12627},
  { ARM::BI__builtin_arm_mve_viwdupq_n_u32, 12665, 12653},
  { ARM::BI__builtin_arm_mve_viwdupq_n_u8, 12690, 12679},
  { ARM::BI__builtin_arm_mve_viwdupq_wb_u16, 12703, 12627},
  { ARM::BI__builtin_arm_mve_viwdupq_wb_u32, 12718, 12653},
  { ARM::BI__builtin_arm_mve_viwdupq_wb_u8, 12733, 12679},
  { ARM::BI__builtin_arm_mve_viwdupq_x_n_u16, 12761, 12747},
  { ARM::BI__builtin_arm_mve_viwdupq_x_n_u32, 12791, 12777},
  { ARM::BI__builtin_arm_mve_viwdupq_x_n_u8, 12820, 12807},
  { ARM::BI__builtin_arm_mve_viwdupq_x_wb_u16, 12835, 12747},
  { ARM::BI__builtin_arm_mve_viwdupq_x_wb_u32, 12852, 12777},
  { ARM::BI__builtin_arm_mve_viwdupq_x_wb_u8, 12869, 12807},
  { ARM::BI__builtin_arm_mve_vld1q_f16, 12891, 12885},
  { ARM::BI__builtin_arm_mve_vld1q_f32, 12901, 12885},
  { ARM::BI__builtin_arm_mve_vld1q_s16, 12911, 12885},
  { ARM::BI__builtin_arm_mve_vld1q_s32, 12921, 12885},
  { ARM::BI__builtin_arm_mve_vld1q_s8, 12931, 12885},
  { ARM::BI__builtin_arm_mve_vld1q_u16, 12940, 12885},
  { ARM::BI__builtin_arm_mve_vld1q_u32, 12950, 12885},
  { ARM::BI__builtin_arm_mve_vld1q_u8, 12960, 12885},
  { ARM::BI__builtin_arm_mve_vld1q_z_f16, 12977, 12969},
  { ARM::BI__builtin_arm_mve_vld1q_z_f32, 12989, 12969},
  { ARM::BI__builtin_arm_mve_vld1q_z_s16, 13001, 12969},
  { ARM::BI__builtin_arm_mve_vld1q_z_s32, 13013, 12969},
  { ARM::BI__builtin_arm_mve_vld1q_z_s8, 13025, 12969},
  { ARM::BI__builtin_arm_mve_vld1q_z_u16, 13036, 12969},
  { ARM::BI__builtin_arm_mve_vld1q_z_u32, 13048, 12969},
  { ARM::BI__builtin_arm_mve_vld1q_z_u8, 13060, 12969},
  { ARM::BI__builtin_arm_mve_vld2q_f16, 13077, 13071},
  { ARM::BI__builtin_arm_mve_vld2q_f32, 13087, 13071},
  { ARM::BI__builtin_arm_mve_vld2q_s16, 13097, 13071},
  { ARM::BI__builtin_arm_mve_vld2q_s32, 13107, 13071},
  { ARM::BI__builtin_arm_mve_vld2q_s8, 13117, 13071},
  { ARM::BI__builtin_arm_mve_vld2q_u16, 13126, 13071},
  { ARM::BI__builtin_arm_mve_vld2q_u32, 13136, 13071},
  { ARM::BI__builtin_arm_mve_vld2q_u8, 13146, 13071},
  { ARM::BI__builtin_arm_mve_vld4q_f16, 13161, 13155},
  { ARM::BI__builtin_arm_mve_vld4q_f32, 13171, 13155},
  { ARM::BI__builtin_arm_mve_vld4q_s16, 13181, 13155},
  { ARM::BI__builtin_arm_mve_vld4q_s32, 13191, 13155},
  { ARM::BI__builtin_arm_mve_vld4q_s8, 13201, 13155},
  { ARM::BI__builtin_arm_mve_vld4q_u16, 13210, 13155},
  { ARM::BI__builtin_arm_mve_vld4q_u32, 13220, 13155},
  { ARM::BI__builtin_arm_mve_vld4q_u8, 13230, 13155},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s16, 13260, 13239},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s32, 13285, 13239},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s8, 13310, 13239},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u16, 13334, 13239},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u32, 13359, 13239},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u8, 13384, 13239},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s16, 13431, 13408},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s32, 13458, 13408},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s8, 13485, 13408},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u16, 13511, 13408},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u32, 13538, 13408},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u8, 13565, 13408},
  { ARM::BI__builtin_arm_mve_vldrbq_s16, 13591, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_s32, 13602, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_s8, 13613, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u16, 13623, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u32, 13634, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u8, 13645, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s16, 13655, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s32, 13668, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s8, 13681, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u16, 13693, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u32, 13706, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u8, 13719, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_s64, 13731, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_u64, 13754, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_s64, 13777, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_u64, 13803, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64, 13829, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64, 13857, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_s64, 13885, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_u64, 13910, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_s64, 13956, 13935},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_u64, 13981, 13935},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_s64, 14029, 14006},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_u64, 14056, 14006},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_s64, 14112, 14083},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_u64, 14145, 14083},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_s64, 14209, 14178},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_u64, 14244, 14178},
  { ARM::BI__builtin_arm_mve_vldrhq_f16, 14279, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_f16, 14311, 14290},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s16, 14336, 14290},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s32, 14361, 14290},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u16, 14386, 14290},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u32, 14411, 14290},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_f16, 14459, 14436},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s16, 14486, 14436},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s32, 14513, 14436},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u16, 14540, 14436},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u32, 14567, 14436},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_f16, 14623, 14594},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s16, 14656, 14594},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s32, 14689, 14594},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u16, 14722, 14594},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u32, 14755, 14594},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_f16, 14819, 14788},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s16, 14854, 14788},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s32, 14889, 14788},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u16, 14924, 14788},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u32, 14959, 14788},
  { ARM::BI__builtin_arm_mve_vldrhq_s16, 14994, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_s32, 15005, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_u16, 15016, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_u32, 15027, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_f16, 15038, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_s16, 15051, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_s32, 15064, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_u16, 15077, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_u32, 15090, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_f32, 15103, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_f32, 15114, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_s32, 15137, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_u32, 15160, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32, 15183, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32, 15209, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32, 15235, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_f32, 15261, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_s32, 15289, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_u32, 15317, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_f32, 15345, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_s32, 15370, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_u32, 15395, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_f32, 15441, 15420},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_s32, 15466, 15420},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_u32, 15491, 15420},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_f32, 15539, 15516},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_s32, 15566, 15516},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_u32, 15593, 15516},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_f32, 15649, 15620},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_s32, 15682, 15620},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_u32, 15715, 15620},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_f32, 15779, 15748},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_s32, 15814, 15748},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_u32, 15849, 15748},
  { ARM::BI__builtin_arm_mve_vldrwq_s32, 15884, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_u32, 15895, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_f32, 15906, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_s32, 15919, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_u32, 15932, -1},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s16, 15954, 15945},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s32, 15967, 15945},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s8, 15980, 15945},
  { ARM::BI__builtin_arm_mve_vmaxaq_s16, 15999, 15992},
  { ARM::BI__builtin_arm_mve_vmaxaq_s32, 16010, 15992},
  { ARM::BI__builtin_arm_mve_vmaxaq_s8, 16021, 15992},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_f16, 16040, 16031},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_f32, 16053, 16031},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_m_f16, 16077, 16066},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_m_f32, 16092, 16066},
  { ARM::BI__builtin_arm_mve_vmaxnmq_f16, 16115, 16107},
  { ARM::BI__builtin_arm_mve_vmaxnmq_f32, 16127, 16107},
  { ARM::BI__builtin_arm_mve_vmaxnmq_m_f16, 16149, 16139},
  { ARM::BI__builtin_arm_mve_vmaxnmq_m_f32, 16163, 16139},
  { ARM::BI__builtin_arm_mve_vmaxnmq_x_f16, 16187, 16177},
  { ARM::BI__builtin_arm_mve_vmaxnmq_x_f32, 16201, 16177},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s16, 16223, 16215},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s32, 16235, 16215},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s8, 16247, 16215},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u16, 16258, 16215},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u32, 16270, 16215},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u8, 16282, 16215},
  { ARM::BI__builtin_arm_mve_vmaxq_s16, 16299, 16293},
  { ARM::BI__builtin_arm_mve_vmaxq_s32, 16309, 16293},
  { ARM::BI__builtin_arm_mve_vmaxq_s8, 16319, 16293},
  { ARM::BI__builtin_arm_mve_vmaxq_u16, 16328, 16293},
  { ARM::BI__builtin_arm_mve_vmaxq_u32, 16338, 16293},
  { ARM::BI__builtin_arm_mve_vmaxq_u8, 16348, 16293},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s16, 16365, 16357},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s32, 16377, 16357},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s8, 16389, 16357},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u16, 16400, 16357},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u32, 16412, 16357},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u8, 16424, 16357},
  { ARM::BI__builtin_arm_mve_vmaxvq_s16, 16442, 16435},
  { ARM::BI__builtin_arm_mve_vmaxvq_s32, 16453, 16435},
  { ARM::BI__builtin_arm_mve_vmaxvq_s8, 16464, 16435},
  { ARM::BI__builtin_arm_mve_vmaxvq_u16, 16474, 16435},
  { ARM::BI__builtin_arm_mve_vmaxvq_u32, 16485, 16435},
  { ARM::BI__builtin_arm_mve_vmaxvq_u8, 16496, 16435},
  { ARM::BI__builtin_arm_mve_vminaq_m_s16, 16515, 16506},
  { ARM::BI__builtin_arm_mve_vminaq_m_s32, 16528, 16506},
  { ARM::BI__builtin_arm_mve_vminaq_m_s8, 16541, 16506},
  { ARM::BI__builtin_arm_mve_vminaq_s16, 16560, 16553},
  { ARM::BI__builtin_arm_mve_vminaq_s32, 16571, 16553},
  { ARM::BI__builtin_arm_mve_vminaq_s8, 16582, 16553},
  { ARM::BI__builtin_arm_mve_vminnmaq_f16, 16601, 16592},
  { ARM::BI__builtin_arm_mve_vminnmaq_f32, 16614, 16592},
  { ARM::BI__builtin_arm_mve_vminnmaq_m_f16, 16638, 16627},
  { ARM::BI__builtin_arm_mve_vminnmaq_m_f32, 16653, 16627},
  { ARM::BI__builtin_arm_mve_vminnmq_f16, 16676, 16668},
  { ARM::BI__builtin_arm_mve_vminnmq_f32, 16688, 16668},
  { ARM::BI__builtin_arm_mve_vminnmq_m_f16, 16710, 16700},
  { ARM::BI__builtin_arm_mve_vminnmq_m_f32, 16724, 16700},
  { ARM::BI__builtin_arm_mve_vminnmq_x_f16, 16748, 16738},
  { ARM::BI__builtin_arm_mve_vminnmq_x_f32, 16762, 16738},
  { ARM::BI__builtin_arm_mve_vminq_m_s16, 16784, 16776},
  { ARM::BI__builtin_arm_mve_vminq_m_s32, 16796, 16776},
  { ARM::BI__builtin_arm_mve_vminq_m_s8, 16808, 16776},
  { ARM::BI__builtin_arm_mve_vminq_m_u16, 16819, 16776},
  { ARM::BI__builtin_arm_mve_vminq_m_u32, 16831, 16776},
  { ARM::BI__builtin_arm_mve_vminq_m_u8, 16843, 16776},
  { ARM::BI__builtin_arm_mve_vminq_s16, 16860, 16854},
  { ARM::BI__builtin_arm_mve_vminq_s32, 16870, 16854},
  { ARM::BI__builtin_arm_mve_vminq_s8, 16880, 16854},
  { ARM::BI__builtin_arm_mve_vminq_u16, 16889, 16854},
  { ARM::BI__builtin_arm_mve_vminq_u32, 16899, 16854},
  { ARM::BI__builtin_arm_mve_vminq_u8, 16909, 16854},
  { ARM::BI__builtin_arm_mve_vminq_x_s16, 16926, 16918},
  { ARM::BI__builtin_arm_mve_vminq_x_s32, 16938, 16918},
  { ARM::BI__builtin_arm_mve_vminq_x_s8, 16950, 16918},
  { ARM::BI__builtin_arm_mve_vminq_x_u16, 16961, 16918},
  { ARM::BI__builtin_arm_mve_vminq_x_u32, 16973, 16918},
  { ARM::BI__builtin_arm_mve_vminq_x_u8, 16985, 16918},
  { ARM::BI__builtin_arm_mve_vminvq_s16, 17003, 16996},
  { ARM::BI__builtin_arm_mve_vminvq_s32, 17014, 16996},
  { ARM::BI__builtin_arm_mve_vminvq_s8, 17025, 16996},
  { ARM::BI__builtin_arm_mve_vminvq_u16, 17035, 16996},
  { ARM::BI__builtin_arm_mve_vminvq_u32, 17046, 16996},
  { ARM::BI__builtin_arm_mve_vminvq_u8, 17057, 16996},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s16, 17079, 17067},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s32, 17095, 17067},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s8, 17111, 17067},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u16, 17126, 17067},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u32, 17142, 17067},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u8, 17158, 17067},
  { ARM::BI__builtin_arm_mve_vmladavaq_s16, 17183, 17173},
  { ARM::BI__builtin_arm_mve_vmladavaq_s32, 17197, 17173},
  { ARM::BI__builtin_arm_mve_vmladavaq_s8, 17211, 17173},
  { ARM::BI__builtin_arm_mve_vmladavaq_u16, 17224, 17173},
  { ARM::BI__builtin_arm_mve_vmladavaq_u32, 17238, 17173},
  { ARM::BI__builtin_arm_mve_vmladavaq_u8, 17252, 17173},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s16, 17278, 17265},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s32, 17295, 17265},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s8, 17312, 17265},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s16, 17339, 17328},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s32, 17354, 17328},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s8, 17369, 17328},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s16, 17394, 17383},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s32, 17409, 17383},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s8, 17424, 17383},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u16, 17438, 17383},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u32, 17453, 17383},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u8, 17468, 17383},
  { ARM::BI__builtin_arm_mve_vmladavq_s16, 17491, 17482},
  { ARM::BI__builtin_arm_mve_vmladavq_s32, 17504, 17482},
  { ARM::BI__builtin_arm_mve_vmladavq_s8, 17517, 17482},
  { ARM::BI__builtin_arm_mve_vmladavq_u16, 17529, 17482},
  { ARM::BI__builtin_arm_mve_vmladavq_u32, 17542, 17482},
  { ARM::BI__builtin_arm_mve_vmladavq_u8, 17555, 17482},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s16, 17579, 17567},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s32, 17595, 17567},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s8, 17611, 17567},
  { ARM::BI__builtin_arm_mve_vmladavxq_s16, 17636, 17626},
  { ARM::BI__builtin_arm_mve_vmladavxq_s32, 17650, 17626},
  { ARM::BI__builtin_arm_mve_vmladavxq_s8, 17664, 17626},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_s16, 17690, 17677},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_s32, 17707, 17677},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_u16, 17724, 17677},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_u32, 17741, 17677},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_s16, 17769, 17758},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_s32, 17784, 17758},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_u16, 17799, 17758},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_u32, 17814, 17758},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s16, 17843, 17829},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s32, 17861, 17829},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_s16, 17891, 17879},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_s32, 17907, 17879},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_s16, 17935, 17923},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_s32, 17951, 17923},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_u16, 17967, 17923},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_u32, 17983, 17923},
  { ARM::BI__builtin_arm_mve_vmlaldavq_s16, 18009, 17999},
  { ARM::BI__builtin_arm_mve_vmlaldavq_s32, 18023, 17999},
  { ARM::BI__builtin_arm_mve_vmlaldavq_u16, 18037, 17999},
  { ARM::BI__builtin_arm_mve_vmlaldavq_u32, 18051, 17999},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_p_s16, 18078, 18065},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_p_s32, 18095, 18065},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_s16, 18123, 18112},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_s32, 18138, 18112},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s16, 18165, 18153},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s32, 18181, 18153},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s8, 18197, 18153},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s16, 18222, 18212},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s32, 18236, 18212},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s8, 18250, 18212},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s16, 18276, 18263},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s32, 18293, 18263},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s8, 18310, 18263},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s16, 18337, 18326},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s32, 18352, 18326},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s8, 18367, 18326},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s16, 18392, 18381},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s32, 18407, 18381},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s8, 18422, 18381},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s16, 18445, 18436},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s32, 18458, 18436},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s8, 18471, 18436},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s16, 18495, 18483},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s32, 18511, 18483},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s8, 18527, 18483},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s16, 18552, 18542},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s32, 18566, 18542},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s8, 18580, 18542},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_p_s16, 18606, 18593},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_p_s32, 18623, 18593},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_s16, 18651, 18640},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_s32, 18666, 18640},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s16, 18695, 18681},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s32, 18713, 18681},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_s16, 18743, 18731},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_s32, 18759, 18731},
  { ARM::BI__builtin_arm_mve_vmlsldavq_p_s16, 18787, 18775},
  { ARM::BI__builtin_arm_mve_vmlsldavq_p_s32, 18803, 18775},
  { ARM::BI__builtin_arm_mve_vmlsldavq_s16, 18829, 18819},
  { ARM::BI__builtin_arm_mve_vmlsldavq_s32, 18843, 18819},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_p_s16, 18870, 18857},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_p_s32, 18887, 18857},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_s16, 18915, 18904},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_s32, 18930, 18904},
  { ARM::BI__builtin_arm_mve_vmovlbq_m_s16, 18955, 18945},
  { ARM::BI__builtin_arm_mve_vmovlbq_m_s8, 18969, 18945},
  { ARM::BI__builtin_arm_mve_vmovlbq_m_u16, 18982, 18945},
  { ARM::BI__builtin_arm_mve_vmovlbq_m_u8, 18996, 18945},
  { ARM::BI__builtin_arm_mve_vmovlbq_s16, 19017, 19009},
  { ARM::BI__builtin_arm_mve_vmovlbq_s8, 19029, 19009},
  { ARM::BI__builtin_arm_mve_vmovlbq_u16, 19040, 19009},
  { ARM::BI__builtin_arm_mve_vmovlbq_u8, 19052, 19009},
  { ARM::BI__builtin_arm_mve_vmovlbq_x_s16, 19073, 19063},
  { ARM::BI__builtin_arm_mve_vmovlbq_x_s8, 19087, 19063},
  { ARM::BI__builtin_arm_mve_vmovlbq_x_u16, 19100, 19063},
  { ARM::BI__builtin_arm_mve_vmovlbq_x_u8, 19114, 19063},
  { ARM::BI__builtin_arm_mve_vmovltq_m_s16, 19137, 19127},
  { ARM::BI__builtin_arm_mve_vmovltq_m_s8, 19151, 19127},
  { ARM::BI__builtin_arm_mve_vmovltq_m_u16, 19164, 19127},
  { ARM::BI__builtin_arm_mve_vmovltq_m_u8, 19178, 19127},
  { ARM::BI__builtin_arm_mve_vmovltq_s16, 19199, 19191},
  { ARM::BI__builtin_arm_mve_vmovltq_s8, 19211, 19191},
  { ARM::BI__builtin_arm_mve_vmovltq_u16, 19222, 19191},
  { ARM::BI__builtin_arm_mve_vmovltq_u8, 19234, 19191},
  { ARM::BI__builtin_arm_mve_vmovltq_x_s16, 19255, 19245},
  { ARM::BI__builtin_arm_mve_vmovltq_x_s8, 19269, 19245},
  { ARM::BI__builtin_arm_mve_vmovltq_x_u16, 19282, 19245},
  { ARM::BI__builtin_arm_mve_vmovltq_x_u8, 19296, 19245},
  { ARM::BI__builtin_arm_mve_vmovnbq_m_s16, 19319, 19309},
  { ARM::BI__builtin_arm_mve_vmovnbq_m_s32, 19333, 19309},
  { ARM::BI__builtin_arm_mve_vmovnbq_m_u16, 19347, 19309},
  { ARM::BI__builtin_arm_mve_vmovnbq_m_u32, 19361, 19309},
  { ARM::BI__builtin_arm_mve_vmovnbq_s16, 19383, 19375},
  { ARM::BI__builtin_arm_mve_vmovnbq_s32, 19395, 19375},
  { ARM::BI__builtin_arm_mve_vmovnbq_u16, 19407, 19375},
  { ARM::BI__builtin_arm_mve_vmovnbq_u32, 19419, 19375},
  { ARM::BI__builtin_arm_mve_vmovntq_m_s16, 19441, 19431},
  { ARM::BI__builtin_arm_mve_vmovntq_m_s32, 19455, 19431},
  { ARM::BI__builtin_arm_mve_vmovntq_m_u16, 19469, 19431},
  { ARM::BI__builtin_arm_mve_vmovntq_m_u32, 19483, 19431},
  { ARM::BI__builtin_arm_mve_vmovntq_s16, 19505, 19497},
  { ARM::BI__builtin_arm_mve_vmovntq_s32, 19517, 19497},
  { ARM::BI__builtin_arm_mve_vmovntq_u16, 19529, 19497},
  { ARM::BI__builtin_arm_mve_vmovntq_u32, 19541, 19497},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s16, 19562, 19553},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s32, 19575, 19553},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s8, 19588, 19553},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u16, 19600, 19553},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u32, 19613, 19553},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u8, 19626, 19553},
  { ARM::BI__builtin_arm_mve_vmulhq_s16, 19645, 19638},
  { ARM::BI__builtin_arm_mve_vmulhq_s32, 19656, 19638},
  { ARM::BI__builtin_arm_mve_vmulhq_s8, 19667, 19638},
  { ARM::BI__builtin_arm_mve_vmulhq_u16, 19677, 19638},
  { ARM::BI__builtin_arm_mve_vmulhq_u32, 19688, 19638},
  { ARM::BI__builtin_arm_mve_vmulhq_u8, 19699, 19638},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s16, 19718, 19709},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s32, 19731, 19709},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s8, 19744, 19709},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u16, 19756, 19709},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u32, 19769, 19709},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u8, 19782, 19709},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s16, 19808, 19794},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s32, 19826, 19794},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s8, 19844, 19794},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u16, 19861, 19794},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u32, 19879, 19794},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u8, 19897, 19794},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s16, 19926, 19914},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s32, 19942, 19914},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s8, 19958, 19914},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u16, 19973, 19914},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u32, 19989, 19914},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u8, 20005, 19914},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s16, 20034, 20020},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s32, 20052, 20020},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s8, 20070, 20020},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u16, 20087, 20020},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u32, 20105, 20020},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u8, 20123, 20020},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_m_p16, 20155, 20140},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_m_p8, 20174, 20140},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_p16, 20205, 20192},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_p8, 20222, 20192},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_x_p16, 20253, 20238},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_x_p8, 20272, 20238},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s16, 20304, 20290},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s32, 20322, 20290},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s8, 20340, 20290},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u16, 20357, 20290},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u32, 20375, 20290},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u8, 20393, 20290},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s16, 20422, 20410},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s32, 20438, 20410},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s8, 20454, 20410},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u16, 20469, 20410},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u32, 20485, 20410},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u8, 20501, 20410},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s16, 20530, 20516},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s32, 20548, 20516},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s8, 20566, 20516},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u16, 20583, 20516},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u32, 20601, 20516},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u8, 20619, 20516},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_m_p16, 20651, 20636},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_m_p8, 20670, 20636},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_p16, 20701, 20688},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_p8, 20718, 20688},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_x_p16, 20749, 20734},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_x_p8, 20768, 20734},
  { ARM::BI__builtin_arm_mve_vmulq_f16, 20792, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_f32, 20802, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_m_f16, 20820, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_f32, 20832, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_f16, 20844, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_f32, 20858, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_s16, 20872, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_s32, 20886, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_s8, 20900, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_u16, 20913, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_u32, 20927, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_u8, 20941, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_s16, 20954, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_s32, 20966, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_s8, 20978, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_u16, 20989, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_u32, 21001, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_m_u8, 21013, 20812},
  { ARM::BI__builtin_arm_mve_vmulq_n_f16, 21024, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_n_f32, 21036, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_n_s16, 21048, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_n_s32, 21060, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_n_s8, 21072, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_n_u16, 21083, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_n_u32, 21095, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_n_u8, 21107, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_s16, 21118, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_s32, 21128, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_s8, 21138, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_u16, 21147, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_u32, 21157, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_u8, 21167, 20786},
  { ARM::BI__builtin_arm_mve_vmulq_x_f16, 21184, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_f32, 21196, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_f16, 21208, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_f32, 21222, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_s16, 21236, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_s32, 21250, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_s8, 21264, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_u16, 21277, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_u32, 21291, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_u8, 21305, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_s16, 21318, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_s32, 21330, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_s8, 21342, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_u16, 21353, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_u32, 21365, 21176},
  { ARM::BI__builtin_arm_mve_vmulq_x_u8, 21377, 21176},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_s16, 21396, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_s32, 21410, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_u16, 21424, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_u32, 21438, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_m_s16, 21452, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_m_s32, 21464, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_m_s8, 21476, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_m_u16, 21487, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_m_u32, 21499, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_m_u8, 21511, 21388},
  { ARM::BI__builtin_arm_mve_vmvnq_n_s16, 21522, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_s32, 21534, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_u16, 21546, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_u32, 21558, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_s16, 21576, 21570},
  { ARM::BI__builtin_arm_mve_vmvnq_s32, 21586, 21570},
  { ARM::BI__builtin_arm_mve_vmvnq_s8, 21596, 21570},
  { ARM::BI__builtin_arm_mve_vmvnq_u16, 21605, 21570},
  { ARM::BI__builtin_arm_mve_vmvnq_u32, 21615, 21570},
  { ARM::BI__builtin_arm_mve_vmvnq_u8, 21625, 21570},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_s16, 21634, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_s32, 21648, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_u16, 21662, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_u32, 21676, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_s16, 21698, 21690},
  { ARM::BI__builtin_arm_mve_vmvnq_x_s32, 21710, 21690},
  { ARM::BI__builtin_arm_mve_vmvnq_x_s8, 21722, 21690},
  { ARM::BI__builtin_arm_mve_vmvnq_x_u16, 21733, 21690},
  { ARM::BI__builtin_arm_mve_vmvnq_x_u32, 21745, 21690},
  { ARM::BI__builtin_arm_mve_vmvnq_x_u8, 21757, 21690},
  { ARM::BI__builtin_arm_mve_vnegq_f16, 21774, 21768},
  { ARM::BI__builtin_arm_mve_vnegq_f32, 21784, 21768},
  { ARM::BI__builtin_arm_mve_vnegq_m_f16, 21802, 21794},
  { ARM::BI__builtin_arm_mve_vnegq_m_f32, 21814, 21794},
  { ARM::BI__builtin_arm_mve_vnegq_m_s16, 21826, 21794},
  { ARM::BI__builtin_arm_mve_vnegq_m_s32, 21838, 21794},
  { ARM::BI__builtin_arm_mve_vnegq_m_s8, 21850, 21794},
  { ARM::BI__builtin_arm_mve_vnegq_s16, 21861, 21768},
  { ARM::BI__builtin_arm_mve_vnegq_s32, 21871, 21768},
  { ARM::BI__builtin_arm_mve_vnegq_s8, 21881, 21768},
  { ARM::BI__builtin_arm_mve_vnegq_x_f16, 21898, 21890},
  { ARM::BI__builtin_arm_mve_vnegq_x_f32, 21910, 21890},
  { ARM::BI__builtin_arm_mve_vnegq_x_s16, 21922, 21890},
  { ARM::BI__builtin_arm_mve_vnegq_x_s32, 21934, 21890},
  { ARM::BI__builtin_arm_mve_vnegq_x_s8, 21946, 21890},
  { ARM::BI__builtin_arm_mve_vornq_f16, 21963, 21957},
  { ARM::BI__builtin_arm_mve_vornq_f32, 21973, 21957},
  { ARM::BI__builtin_arm_mve_vornq_m_f16, 21991, 21983},
  { ARM::BI__builtin_arm_mve_vornq_m_f32, 22003, 21983},
  { ARM::BI__builtin_arm_mve_vornq_m_s16, 22015, 21983},
  { ARM::BI__builtin_arm_mve_vornq_m_s32, 22027, 21983},
  { ARM::BI__builtin_arm_mve_vornq_m_s8, 22039, 21983},
  { ARM::BI__builtin_arm_mve_vornq_m_u16, 22050, 21983},
  { ARM::BI__builtin_arm_mve_vornq_m_u32, 22062, 21983},
  { ARM::BI__builtin_arm_mve_vornq_m_u8, 22074, 21983},
  { ARM::BI__builtin_arm_mve_vornq_s16, 22085, 21957},
  { ARM::BI__builtin_arm_mve_vornq_s32, 22095, 21957},
  { ARM::BI__builtin_arm_mve_vornq_s8, 22105, 21957},
  { ARM::BI__builtin_arm_mve_vornq_u16, 22114, 21957},
  { ARM::BI__builtin_arm_mve_vornq_u32, 22124, 21957},
  { ARM::BI__builtin_arm_mve_vornq_u8, 22134, 21957},
  { ARM::BI__builtin_arm_mve_vornq_x_f16, 22151, 22143},
  { ARM::BI__builtin_arm_mve_vornq_x_f32, 22163, 22143},
  { ARM::BI__builtin_arm_mve_vornq_x_s16, 22175, 22143},
  { ARM::BI__builtin_arm_mve_vornq_x_s32, 22187, 22143},
  { ARM::BI__builtin_arm_mve_vornq_x_s8, 22199, 22143},
  { ARM::BI__builtin_arm_mve_vornq_x_u16, 22210, 22143},
  { ARM::BI__builtin_arm_mve_vornq_x_u32, 22222, 22143},
  { ARM::BI__builtin_arm_mve_vornq_x_u8, 22234, 22143},
  { ARM::BI__builtin_arm_mve_vorrq_f16, 22251, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_f32, 22261, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_m_f16, 22279, 22271},
  { ARM::BI__builtin_arm_mve_vorrq_m_f32, 22291, 22271},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_s16, 22313, 22303},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_s32, 22327, 22303},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_u16, 22341, 22303},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_u32, 22355, 22303},
  { ARM::BI__builtin_arm_mve_vorrq_m_s16, 22369, 22271},
  { ARM::BI__builtin_arm_mve_vorrq_m_s32, 22381, 22271},
  { ARM::BI__builtin_arm_mve_vorrq_m_s8, 22393, 22271},
  { ARM::BI__builtin_arm_mve_vorrq_m_u16, 22404, 22271},
  { ARM::BI__builtin_arm_mve_vorrq_m_u32, 22416, 22271},
  { ARM::BI__builtin_arm_mve_vorrq_m_u8, 22428, 22271},
  { ARM::BI__builtin_arm_mve_vorrq_n_s16, 22439, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_n_s32, 22451, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_n_u16, 22463, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_n_u32, 22475, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_s16, 22487, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_s32, 22497, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_s8, 22507, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_u16, 22516, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_u32, 22526, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_u8, 22536, 22245},
  { ARM::BI__builtin_arm_mve_vorrq_x_f16, 22553, 22545},
  { ARM::BI__builtin_arm_mve_vorrq_x_f32, 22565, 22545},
  { ARM::BI__builtin_arm_mve_vorrq_x_s16, 22577, 22545},
  { ARM::BI__builtin_arm_mve_vorrq_x_s32, 22589, 22545},
  { ARM::BI__builtin_arm_mve_vorrq_x_s8, 22601, 22545},
  { ARM::BI__builtin_arm_mve_vorrq_x_u16, 22612, 22545},
  { ARM::BI__builtin_arm_mve_vorrq_x_u32, 22624, 22545},
  { ARM::BI__builtin_arm_mve_vorrq_x_u8, 22636, 22545},
  { ARM::BI__builtin_arm_mve_vpnot, 22647, -1},
  { ARM::BI__builtin_arm_mve_vpselq_f16, 22660, 22653},
  { ARM::BI__builtin_arm_mve_vpselq_f32, 22671, 22653},
  { ARM::BI__builtin_arm_mve_vpselq_s16, 22682, 22653},
  { ARM::BI__builtin_arm_mve_vpselq_s32, 22693, 22653},
  { ARM::BI__builtin_arm_mve_vpselq_s64, 22704, 22653},
  { ARM::BI__builtin_arm_mve_vpselq_s8, 22715, 22653},
  { ARM::BI__builtin_arm_mve_vpselq_u16, 22725, 22653},
  { ARM::BI__builtin_arm_mve_vpselq_u32, 22736, 22653},
  { ARM::BI__builtin_arm_mve_vpselq_u64, 22747, 22653},
  { ARM::BI__builtin_arm_mve_vpselq_u8, 22758, 22653},
  { ARM::BI__builtin_arm_mve_vqabsq_m_s16, 22777, 22768},
  { ARM::BI__builtin_arm_mve_vqabsq_m_s32, 22790, 22768},
  { ARM::BI__builtin_arm_mve_vqabsq_m_s8, 22803, 22768},
  { ARM::BI__builtin_arm_mve_vqabsq_s16, 22822, 22815},
  { ARM::BI__builtin_arm_mve_vqabsq_s32, 22833, 22815},
  { ARM::BI__builtin_arm_mve_vqabsq_s8, 22844, 22815},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_s16, 22863, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_s32, 22878, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_s8, 22893, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_u16, 22907, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_u32, 22922, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_u8, 22937, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s16, 22951, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s32, 22964, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s8, 22977, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u16, 22989, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u32, 23002, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u8, 23015, 22854},
  { ARM::BI__builtin_arm_mve_vqaddq_n_s16, 23034, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_n_s32, 23047, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_n_s8, 23060, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_n_u16, 23072, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_n_u32, 23085, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_n_u8, 23098, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_s16, 23110, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_s32, 23121, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_s8, 23132, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_u16, 23142, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_u32, 23153, 23027},
  { ARM::BI__builtin_arm_mve_vqaddq_u8, 23164, 23027},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_n_s16, 23185, 23174},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_n_s32, 23202, 23174},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_n_s8, 23219, 23174},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s16, 23235, 23174},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s32, 23250, 23174},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s8, 23265, 23174},
  { ARM::BI__builtin_arm_mve_vqdmulhq_n_s16, 23288, 23279},
  { ARM::BI__builtin_arm_mve_vqdmulhq_n_s32, 23303, 23279},
  { ARM::BI__builtin_arm_mve_vqdmulhq_n_s8, 23318, 23279},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s16, 23332, 23279},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s32, 23345, 23279},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s8, 23358, 23279},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_n_s16, 23382, 23370},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_n_s32, 23400, 23370},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_s16, 23418, 23370},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_s32, 23434, 23370},
  { ARM::BI__builtin_arm_mve_vqdmullbq_n_s16, 23460, 23450},
  { ARM::BI__builtin_arm_mve_vqdmullbq_n_s32, 23476, 23450},
  { ARM::BI__builtin_arm_mve_vqdmullbq_s16, 23492, 23450},
  { ARM::BI__builtin_arm_mve_vqdmullbq_s32, 23506, 23450},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_n_s16, 23532, 23520},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_n_s32, 23550, 23520},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_s16, 23568, 23520},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_s32, 23584, 23520},
  { ARM::BI__builtin_arm_mve_vqdmulltq_n_s16, 23610, 23600},
  { ARM::BI__builtin_arm_mve_vqdmulltq_n_s32, 23626, 23600},
  { ARM::BI__builtin_arm_mve_vqdmulltq_s16, 23642, 23600},
  { ARM::BI__builtin_arm_mve_vqdmulltq_s32, 23656, 23600},
  { ARM::BI__builtin_arm_mve_vqmovnbq_m_s16, 23681, 23670},
  { ARM::BI__builtin_arm_mve_vqmovnbq_m_s32, 23696, 23670},
  { ARM::BI__builtin_arm_mve_vqmovnbq_m_u16, 23711, 23670},
  { ARM::BI__builtin_arm_mve_vqmovnbq_m_u32, 23726, 23670},
  { ARM::BI__builtin_arm_mve_vqmovnbq_s16, 23750, 23741},
  { ARM::BI__builtin_arm_mve_vqmovnbq_s32, 23763, 23741},
  { ARM::BI__builtin_arm_mve_vqmovnbq_u16, 23776, 23741},
  { ARM::BI__builtin_arm_mve_vqmovnbq_u32, 23789, 23741},
  { ARM::BI__builtin_arm_mve_vqmovntq_m_s16, 23813, 23802},
  { ARM::BI__builtin_arm_mve_vqmovntq_m_s32, 23828, 23802},
  { ARM::BI__builtin_arm_mve_vqmovntq_m_u16, 23843, 23802},
  { ARM::BI__builtin_arm_mve_vqmovntq_m_u32, 23858, 23802},
  { ARM::BI__builtin_arm_mve_vqmovntq_s16, 23882, 23873},
  { ARM::BI__builtin_arm_mve_vqmovntq_s32, 23895, 23873},
  { ARM::BI__builtin_arm_mve_vqmovntq_u16, 23908, 23873},
  { ARM::BI__builtin_arm_mve_vqmovntq_u32, 23921, 23873},
  { ARM::BI__builtin_arm_mve_vqmovunbq_m_s16, 23946, 23934},
  { ARM::BI__builtin_arm_mve_vqmovunbq_m_s32, 23962, 23934},
  { ARM::BI__builtin_arm_mve_vqmovunbq_s16, 23988, 23978},
  { ARM::BI__builtin_arm_mve_vqmovunbq_s32, 24002, 23978},
  { ARM::BI__builtin_arm_mve_vqmovuntq_m_s16, 24028, 24016},
  { ARM::BI__builtin_arm_mve_vqmovuntq_m_s32, 24044, 24016},
  { ARM::BI__builtin_arm_mve_vqmovuntq_s16, 24070, 24060},
  { ARM::BI__builtin_arm_mve_vqmovuntq_s32, 24084, 24060},
  { ARM::BI__builtin_arm_mve_vqnegq_m_s16, 24107, 24098},
  { ARM::BI__builtin_arm_mve_vqnegq_m_s32, 24120, 24098},
  { ARM::BI__builtin_arm_mve_vqnegq_m_s8, 24133, 24098},
  { ARM::BI__builtin_arm_mve_vqnegq_s16, 24152, 24145},
  { ARM::BI__builtin_arm_mve_vqnegq_s32, 24163, 24145},
  { ARM::BI__builtin_arm_mve_vqnegq_s8, 24174, 24145},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_n_s16, 24196, 24184},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_n_s32, 24214, 24184},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_n_s8, 24232, 24184},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s16, 24249, 24184},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s32, 24265, 24184},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s8, 24281, 24184},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_n_s16, 24306, 24296},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_n_s32, 24322, 24296},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_n_s8, 24338, 24296},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s16, 24353, 24296},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s32, 24367, 24296},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s8, 24381, 24296},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s16, 24406, 24394},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s32, 24422, 24394},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s8, 24438, 24394},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u16, 24453, 24394},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u32, 24469, 24394},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u8, 24485, 24394},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s16, 24510, 24500},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s32, 24524, 24500},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s8, 24538, 24500},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u16, 24551, 24500},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u32, 24565, 24500},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u8, 24579, 24500},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s16, 24600, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s32, 24614, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s8, 24628, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u16, 24641, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u32, 24655, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u8, 24669, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_s16, 24682, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_s32, 24694, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_s8, 24706, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_u16, 24717, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_u32, 24729, 24592},
  { ARM::BI__builtin_arm_mve_vqrshlq_u8, 24741, 24592},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s16, 24764, 24752},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s32, 24782, 24752},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u16, 24800, 24752},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u32, 24818, 24752},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_s16, 24846, 24836},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_s32, 24862, 24836},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_u16, 24878, 24836},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_u32, 24894, 24836},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s16, 24922, 24910},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s32, 24940, 24910},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u16, 24958, 24910},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u32, 24976, 24910},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_s16, 25004, 24994},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_s32, 25020, 24994},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_u16, 25036, 24994},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_u32, 25052, 24994},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s16, 25081, 25068},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s32, 25100, 25068},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_n_s16, 25130, 25119},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_n_s32, 25147, 25119},
  { ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s16, 25177, 25164},
  { ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s32, 25196, 25164},
  { ARM::BI__builtin_arm_mve_vqrshruntq_n_s16, 25226, 25215},
  { ARM::BI__builtin_arm_mve_vqrshruntq_n_s32, 25243, 25215},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s16, 25271, 25260},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s32, 25286, 25260},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s8, 25301, 25260},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u16, 25315, 25260},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u32, 25330, 25260},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u8, 25345, 25260},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s16, 25370, 25359},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s32, 25385, 25359},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s8, 25400, 25359},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u16, 25414, 25359},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u32, 25429, 25359},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u8, 25444, 25359},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s16, 25467, 25458},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s32, 25480, 25458},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s8, 25493, 25458},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u16, 25505, 25458},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u32, 25518, 25458},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u8, 25531, 25458},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s16, 25552, 25543},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s32, 25565, 25543},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s8, 25578, 25543},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u16, 25590, 25543},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u32, 25603, 25543},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u8, 25616, 25543},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s16, 25637, 25628},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s32, 25650, 25628},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s8, 25663, 25628},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u16, 25675, 25628},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u32, 25688, 25628},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u8, 25701, 25628},
  { ARM::BI__builtin_arm_mve_vqshlq_s16, 25720, 25713},
  { ARM::BI__builtin_arm_mve_vqshlq_s32, 25731, 25713},
  { ARM::BI__builtin_arm_mve_vqshlq_s8, 25742, 25713},
  { ARM::BI__builtin_arm_mve_vqshlq_u16, 25752, 25713},
  { ARM::BI__builtin_arm_mve_vqshlq_u32, 25763, 25713},
  { ARM::BI__builtin_arm_mve_vqshlq_u8, 25774, 25713},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s16, 25794, 25784},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s32, 25810, 25784},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s8, 25826, 25784},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s16, 25849, 25841},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s32, 25863, 25841},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s8, 25877, 25841},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s16, 25901, 25890},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s32, 25918, 25890},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u16, 25935, 25890},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u32, 25952, 25890},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_s16, 25978, 25969},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_s32, 25993, 25969},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_u16, 26008, 25969},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_u32, 26023, 25969},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_s16, 26049, 26038},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_s32, 26066, 26038},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_u16, 26083, 26038},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_u32, 26100, 26038},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_s16, 26126, 26117},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_s32, 26141, 26117},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_u16, 26156, 26117},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_u32, 26171, 26117},
  { ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s16, 26198, 26186},
  { ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s32, 26216, 26186},
  { ARM::BI__builtin_arm_mve_vqshrunbq_n_s16, 26244, 26234},
  { ARM::BI__builtin_arm_mve_vqshrunbq_n_s32, 26260, 26234},
  { ARM::BI__builtin_arm_mve_vqshruntq_m_n_s16, 26288, 26276},
  { ARM::BI__builtin_arm_mve_vqshruntq_m_n_s32, 26306, 26276},
  { ARM::BI__builtin_arm_mve_vqshruntq_n_s16, 26334, 26324},
  { ARM::BI__builtin_arm_mve_vqshruntq_n_s32, 26350, 26324},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_s16, 26375, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_s32, 26390, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_s8, 26405, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_u16, 26419, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_u32, 26434, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_u8, 26449, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s16, 26463, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s32, 26476, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s8, 26489, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u16, 26501, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u32, 26514, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u8, 26527, 26366},
  { ARM::BI__builtin_arm_mve_vqsubq_n_s16, 26546, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_n_s32, 26559, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_n_s8, 26572, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_n_u16, 26584, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_n_u32, 26597, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_n_u8, 26610, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_s16, 26622, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_s32, 26633, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_s8, 26644, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_u16, 26654, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_u32, 26665, 26539},
  { ARM::BI__builtin_arm_mve_vqsubq_u8, 26676, 26539},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_f32, 26704, 26686},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s16, 26726, 26686},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s32, 26748, 26686},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s64, 26770, 26686},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s8, 26792, 26686},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u16, 26813, 26686},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u32, 26835, 26686},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u64, 26857, 26686},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u8, 26879, 26686},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_f16, 26918, 26900},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s16, 26940, 26900},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s32, 26962, 26900},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s64, 26984, 26900},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s8, 27006, 26900},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u16, 27027, 26900},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u32, 27049, 26900},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u64, 27071, 26900},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u8, 27093, 26900},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_f16, 27132, 27114},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_f32, 27154, 27114},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s32, 27176, 27114},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s64, 27198, 27114},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s8, 27220, 27114},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u16, 27241, 27114},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u32, 27263, 27114},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u64, 27285, 27114},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u8, 27307, 27114},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_f16, 27346, 27328},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_f32, 27368, 27328},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s16, 27390, 27328},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s64, 27412, 27328},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s8, 27434, 27328},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u16, 27455, 27328},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u32, 27477, 27328},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u64, 27499, 27328},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u8, 27521, 27328},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_f16, 27560, 27542},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_f32, 27582, 27542},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s16, 27604, 27542},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s32, 27626, 27542},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s8, 27648, 27542},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u16, 27669, 27542},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u32, 27691, 27542},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u64, 27713, 27542},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u8, 27735, 27542},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_f16, 27773, 27756},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_f32, 27794, 27756},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s16, 27815, 27756},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s32, 27836, 27756},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s64, 27857, 27756},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u16, 27878, 27756},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u32, 27899, 27756},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u64, 27920, 27756},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u8, 27941, 27756},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_f16, 27979, 27961},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_f32, 28001, 27961},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s16, 28023, 27961},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s32, 28045, 27961},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s64, 28067, 27961},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s8, 28089, 27961},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u32, 28110, 27961},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u64, 28132, 27961},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u8, 28154, 27961},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_f16, 28193, 28175},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_f32, 28215, 28175},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s16, 28237, 28175},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s32, 28259, 28175},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s64, 28281, 28175},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s8, 28303, 28175},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u16, 28324, 28175},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u64, 28346, 28175},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u8, 28368, 28175},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_f16, 28407, 28389},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_f32, 28429, 28389},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s16, 28451, 28389},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s32, 28473, 28389},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s64, 28495, 28389},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s8, 28517, 28389},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u16, 28538, 28389},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u32, 28560, 28389},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u8, 28582, 28389},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_f16, 28620, 28603},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_f32, 28641, 28603},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s16, 28662, 28603},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s32, 28683, 28603},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s64, 28704, 28603},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s8, 28725, 28603},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u16, 28745, 28603},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u32, 28766, 28603},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u64, 28787, 28603},
  { ARM::BI__builtin_arm_mve_vrev16q_m_s8, 28818, 28808},
  { ARM::BI__builtin_arm_mve_vrev16q_m_u8, 28831, 28808},
  { ARM::BI__builtin_arm_mve_vrev16q_s8, 28852, 28844},
  { ARM::BI__builtin_arm_mve_vrev16q_u8, 28863, 28844},
  { ARM::BI__builtin_arm_mve_vrev16q_x_s8, 28884, 28874},
  { ARM::BI__builtin_arm_mve_vrev16q_x_u8, 28897, 28874},
  { ARM::BI__builtin_arm_mve_vrev32q_f16, 28918, 28910},
  { ARM::BI__builtin_arm_mve_vrev32q_m_f16, 28940, 28930},
  { ARM::BI__builtin_arm_mve_vrev32q_m_s16, 28954, 28930},
  { ARM::BI__builtin_arm_mve_vrev32q_m_s8, 28968, 28930},
  { ARM::BI__builtin_arm_mve_vrev32q_m_u16, 28981, 28930},
  { ARM::BI__builtin_arm_mve_vrev32q_m_u8, 28995, 28930},
  { ARM::BI__builtin_arm_mve_vrev32q_s16, 29008, 28910},
  { ARM::BI__builtin_arm_mve_vrev32q_s8, 29020, 28910},
  { ARM::BI__builtin_arm_mve_vrev32q_u16, 29031, 28910},
  { ARM::BI__builtin_arm_mve_vrev32q_u8, 29043, 28910},
  { ARM::BI__builtin_arm_mve_vrev32q_x_f16, 29064, 29054},
  { ARM::BI__builtin_arm_mve_vrev32q_x_s16, 29078, 29054},
  { ARM::BI__builtin_arm_mve_vrev32q_x_s8, 29092, 29054},
  { ARM::BI__builtin_arm_mve_vrev32q_x_u16, 29105, 29054},
  { ARM::BI__builtin_arm_mve_vrev32q_x_u8, 29119, 29054},
  { ARM::BI__builtin_arm_mve_vrev64q_f16, 29140, 29132},
  { ARM::BI__builtin_arm_mve_vrev64q_f32, 29152, 29132},
  { ARM::BI__builtin_arm_mve_vrev64q_m_f16, 29174, 29164},
  { ARM::BI__builtin_arm_mve_vrev64q_m_f32, 29188, 29164},
  { ARM::BI__builtin_arm_mve_vrev64q_m_s16, 29202, 29164},
  { ARM::BI__builtin_arm_mve_vrev64q_m_s32, 29216, 29164},
  { ARM::BI__builtin_arm_mve_vrev64q_m_s8, 29230, 29164},
  { ARM::BI__builtin_arm_mve_vrev64q_m_u16, 29243, 29164},
  { ARM::BI__builtin_arm_mve_vrev64q_m_u32, 29257, 29164},
  { ARM::BI__builtin_arm_mve_vrev64q_m_u8, 29271, 29164},
  { ARM::BI__builtin_arm_mve_vrev64q_s16, 29284, 29132},
  { ARM::BI__builtin_arm_mve_vrev64q_s32, 29296, 29132},
  { ARM::BI__builtin_arm_mve_vrev64q_s8, 29308, 29132},
  { ARM::BI__builtin_arm_mve_vrev64q_u16, 29319, 29132},
  { ARM::BI__builtin_arm_mve_vrev64q_u32, 29331, 29132},
  { ARM::BI__builtin_arm_mve_vrev64q_u8, 29343, 29132},
  { ARM::BI__builtin_arm_mve_vrev64q_x_f16, 29364, 29354},
  { ARM::BI__builtin_arm_mve_vrev64q_x_f32, 29378, 29354},
  { ARM::BI__builtin_arm_mve_vrev64q_x_s16, 29392, 29354},
  { ARM::BI__builtin_arm_mve_vrev64q_x_s32, 29406, 29354},
  { ARM::BI__builtin_arm_mve_vrev64q_x_s8, 29420, 29354},
  { ARM::BI__builtin_arm_mve_vrev64q_x_u16, 29433, 29354},
  { ARM::BI__builtin_arm_mve_vrev64q_x_u32, 29447, 29354},
  { ARM::BI__builtin_arm_mve_vrev64q_x_u8, 29461, 29354},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s16, 29484, 29474},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s32, 29498, 29474},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s8, 29512, 29474},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u16, 29525, 29474},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u32, 29539, 29474},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u8, 29553, 29474},
  { ARM::BI__builtin_arm_mve_vrhaddq_s16, 29574, 29566},
  { ARM::BI__builtin_arm_mve_vrhaddq_s32, 29586, 29566},
  { ARM::BI__builtin_arm_mve_vrhaddq_s8, 29598, 29566},
  { ARM::BI__builtin_arm_mve_vrhaddq_u16, 29609, 29566},
  { ARM::BI__builtin_arm_mve_vrhaddq_u32, 29621, 29566},
  { ARM::BI__builtin_arm_mve_vrhaddq_u8, 29633, 29566},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s16, 29654, 29644},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s32, 29668, 29644},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s8, 29682, 29644},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u16, 29695, 29644},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u32, 29709, 29644},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u8, 29723, 29644},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_s32, 29751, 29736},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_u32, 29770, 29736},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_s32, 29802, 29789},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_u32, 29819, 29789},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaxq_p_s32, 29852, 29836},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaxq_s32, 29886, 29872},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_p_s32, 29918, 29904},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_p_u32, 29936, 29904},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_s32, 29966, 29954},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_u32, 29982, 29954},
  { ARM::BI__builtin_arm_mve_vrmlaldavhxq_p_s32, 30013, 29998},
  { ARM::BI__builtin_arm_mve_vrmlaldavhxq_s32, 30045, 30032},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaq_p_s32, 30077, 30062},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaq_s32, 30109, 30096},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaxq_p_s32, 30142, 30126},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaxq_s32, 30176, 30162},
  { ARM::BI__builtin_arm_mve_vrmlsldavhq_p_s32, 30208, 30194},
  { ARM::BI__builtin_arm_mve_vrmlsldavhq_s32, 30238, 30226},
  { ARM::BI__builtin_arm_mve_vrmlsldavhxq_p_s32, 30269, 30254},
  { ARM::BI__builtin_arm_mve_vrmlsldavhxq_s32, 30301, 30288},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s16, 30328, 30318},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s32, 30342, 30318},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s8, 30356, 30318},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u16, 30369, 30318},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u32, 30383, 30318},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u8, 30397, 30318},
  { ARM::BI__builtin_arm_mve_vrmulhq_s16, 30418, 30410},
  { ARM::BI__builtin_arm_mve_vrmulhq_s32, 30430, 30410},
  { ARM::BI__builtin_arm_mve_vrmulhq_s8, 30442, 30410},
  { ARM::BI__builtin_arm_mve_vrmulhq_u16, 30453, 30410},
  { ARM::BI__builtin_arm_mve_vrmulhq_u32, 30465, 30410},
  { ARM::BI__builtin_arm_mve_vrmulhq_u8, 30477, 30410},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s16, 30498, 30488},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s32, 30512, 30488},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s8, 30526, 30488},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u16, 30539, 30488},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u32, 30553, 30488},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u8, 30567, 30488},
  { ARM::BI__builtin_arm_mve_vrndaq_f16, 30587, 30580},
  { ARM::BI__builtin_arm_mve_vrndaq_f32, 30598, 30580},
  { ARM::BI__builtin_arm_mve_vrndaq_m_f16, 30618, 30609},
  { ARM::BI__builtin_arm_mve_vrndaq_m_f32, 30631, 30609},
  { ARM::BI__builtin_arm_mve_vrndaq_x_f16, 30653, 30644},
  { ARM::BI__builtin_arm_mve_vrndaq_x_f32, 30666, 30644},
  { ARM::BI__builtin_arm_mve_vrndmq_f16, 30686, 30679},
  { ARM::BI__builtin_arm_mve_vrndmq_f32, 30697, 30679},
  { ARM::BI__builtin_arm_mve_vrndmq_m_f16, 30717, 30708},
  { ARM::BI__builtin_arm_mve_vrndmq_m_f32, 30730, 30708},
  { ARM::BI__builtin_arm_mve_vrndmq_x_f16, 30752, 30743},
  { ARM::BI__builtin_arm_mve_vrndmq_x_f32, 30765, 30743},
  { ARM::BI__builtin_arm_mve_vrndnq_f16, 30785, 30778},
  { ARM::BI__builtin_arm_mve_vrndnq_f32, 30796, 30778},
  { ARM::BI__builtin_arm_mve_vrndnq_m_f16, 30816, 30807},
  { ARM::BI__builtin_arm_mve_vrndnq_m_f32, 30829, 30807},
  { ARM::BI__builtin_arm_mve_vrndnq_x_f16, 30851, 30842},
  { ARM::BI__builtin_arm_mve_vrndnq_x_f32, 30864, 30842},
  { ARM::BI__builtin_arm_mve_vrndpq_f16, 30884, 30877},
  { ARM::BI__builtin_arm_mve_vrndpq_f32, 30895, 30877},
  { ARM::BI__builtin_arm_mve_vrndpq_m_f16, 30915, 30906},
  { ARM::BI__builtin_arm_mve_vrndpq_m_f32, 30928, 30906},
  { ARM::BI__builtin_arm_mve_vrndpq_x_f16, 30950, 30941},
  { ARM::BI__builtin_arm_mve_vrndpq_x_f32, 30963, 30941},
  { ARM::BI__builtin_arm_mve_vrndq_f16, 30982, 30976},
  { ARM::BI__builtin_arm_mve_vrndq_f32, 30992, 30976},
  { ARM::BI__builtin_arm_mve_vrndq_m_f16, 31010, 31002},
  { ARM::BI__builtin_arm_mve_vrndq_m_f32, 31022, 31002},
  { ARM::BI__builtin_arm_mve_vrndq_x_f16, 31042, 31034},
  { ARM::BI__builtin_arm_mve_vrndq_x_f32, 31054, 31034},
  { ARM::BI__builtin_arm_mve_vrndxq_f16, 31073, 31066},
  { ARM::BI__builtin_arm_mve_vrndxq_f32, 31084, 31066},
  { ARM::BI__builtin_arm_mve_vrndxq_m_f16, 31104, 31095},
  { ARM::BI__builtin_arm_mve_vrndxq_m_f32, 31117, 31095},
  { ARM::BI__builtin_arm_mve_vrndxq_x_f16, 31139, 31130},
  { ARM::BI__builtin_arm_mve_vrndxq_x_f32, 31152, 31130},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s16, 31176, 31165},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s32, 31191, 31165},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s8, 31206, 31165},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u16, 31220, 31165},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u32, 31235, 31165},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u8, 31250, 31165},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s16, 31273, 31264},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s32, 31286, 31264},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s8, 31299, 31264},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u16, 31311, 31264},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u32, 31324, 31264},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u8, 31337, 31264},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s16, 31356, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s32, 31369, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s8, 31382, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u16, 31394, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u32, 31407, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u8, 31420, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_s16, 31432, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_s32, 31443, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_s8, 31454, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_u16, 31464, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_u32, 31475, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_u8, 31486, 31349},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s16, 31505, 31496},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s32, 31518, 31496},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s8, 31531, 31496},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u16, 31543, 31496},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u32, 31556, 31496},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u8, 31569, 31496},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s16, 31592, 31581},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s32, 31609, 31581},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u16, 31626, 31581},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u32, 31643, 31581},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_s16, 31669, 31660},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_s32, 31684, 31660},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_u16, 31699, 31660},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_u32, 31714, 31660},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_s16, 31740, 31729},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_s32, 31757, 31729},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_u16, 31774, 31729},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_u32, 31791, 31729},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_s16, 31817, 31808},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_s32, 31832, 31808},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_u16, 31847, 31808},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_u32, 31862, 31808},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s16, 31886, 31877},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s32, 31901, 31877},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s8, 31916, 31877},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u16, 31930, 31877},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u32, 31945, 31877},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u8, 31960, 31877},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s16, 31981, 31974},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s32, 31994, 31974},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s8, 32007, 31974},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u16, 32019, 31974},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u32, 32032, 31974},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u8, 32045, 31974},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s16, 32066, 32057},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s32, 32081, 32057},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s8, 32096, 32057},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u16, 32110, 32057},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u32, 32125, 32057},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u8, 32140, 32057},
  { ARM::BI__builtin_arm_mve_vsbciq_m_s32, 32163, 32154},
  { ARM::BI__builtin_arm_mve_vsbciq_m_u32, 32176, 32154},
  { ARM::BI__builtin_arm_mve_vsbciq_s32, 32196, 32189},
  { ARM::BI__builtin_arm_mve_vsbciq_u32, 32207, 32189},
  { ARM::BI__builtin_arm_mve_vsbcq_m_s32, 32226, 32218},
  { ARM::BI__builtin_arm_mve_vsbcq_m_u32, 32238, 32218},
  { ARM::BI__builtin_arm_mve_vsbcq_s32, 32256, 32250},
  { ARM::BI__builtin_arm_mve_vsbcq_u32, 32266, 32250},
  { ARM::BI__builtin_arm_mve_vsetq_lane_f16, 32287, 32276},
  { ARM::BI__builtin_arm_mve_vsetq_lane_f32, 32302, 32276},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s16, 32317, 32276},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s32, 32332, 32276},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s64, 32347, 32276},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s8, 32362, 32276},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u16, 32376, 32276},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u32, 32391, 32276},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u64, 32406, 32276},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u8, 32421, 32276},
  { ARM::BI__builtin_arm_mve_vshlcq_m_s16, 32444, 32435},
  { ARM::BI__builtin_arm_mve_vshlcq_m_s32, 32457, 32435},
  { ARM::BI__builtin_arm_mve_vshlcq_m_s8, 32470, 32435},
  { ARM::BI__builtin_arm_mve_vshlcq_m_u16, 32482, 32435},
  { ARM::BI__builtin_arm_mve_vshlcq_m_u32, 32495, 32435},
  { ARM::BI__builtin_arm_mve_vshlcq_m_u8, 32508, 32435},
  { ARM::BI__builtin_arm_mve_vshlcq_s16, 32527, 32520},
  { ARM::BI__builtin_arm_mve_vshlcq_s32, 32538, 32520},
  { ARM::BI__builtin_arm_mve_vshlcq_s8, 32549, 32520},
  { ARM::BI__builtin_arm_mve_vshlcq_u16, 32559, 32520},
  { ARM::BI__builtin_arm_mve_vshlcq_u32, 32570, 32520},
  { ARM::BI__builtin_arm_mve_vshlcq_u8, 32581, 32520},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_s16, 32601, 32591},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_s8, 32617, 32591},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_u16, 32632, 32591},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_u8, 32648, 32591},
  { ARM::BI__builtin_arm_mve_vshllbq_n_s16, 32671, 32663},
  { ARM::BI__builtin_arm_mve_vshllbq_n_s8, 32685, 32663},
  { ARM::BI__builtin_arm_mve_vshllbq_n_u16, 32698, 32663},
  { ARM::BI__builtin_arm_mve_vshllbq_n_u8, 32712, 32663},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_s16, 32735, 32725},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_s8, 32751, 32725},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_u16, 32766, 32725},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_u8, 32782, 32725},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_s16, 32807, 32797},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_s8, 32823, 32797},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_u16, 32838, 32797},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_u8, 32854, 32797},
  { ARM::BI__builtin_arm_mve_vshlltq_n_s16, 32877, 32869},
  { ARM::BI__builtin_arm_mve_vshlltq_n_s8, 32891, 32869},
  { ARM::BI__builtin_arm_mve_vshlltq_n_u16, 32904, 32869},
  { ARM::BI__builtin_arm_mve_vshlltq_n_u8, 32918, 32869},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_s16, 32941, 32931},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_s8, 32957, 32931},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_u16, 32972, 32931},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_u8, 32988, 32931},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s16, 33013, 33003},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s32, 33027, 33003},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s8, 33041, 33003},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u16, 33054, 33003},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u32, 33068, 33003},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u8, 33082, 33003},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s16, 33105, 33095},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s32, 33119, 33095},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s8, 33133, 33095},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u16, 33146, 33095},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u32, 33160, 33095},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u8, 33174, 33095},
  { ARM::BI__builtin_arm_mve_vshlq_m_s16, 33195, 33187},
  { ARM::BI__builtin_arm_mve_vshlq_m_s32, 33207, 33187},
  { ARM::BI__builtin_arm_mve_vshlq_m_s8, 33219, 33187},
  { ARM::BI__builtin_arm_mve_vshlq_m_u16, 33230, 33187},
  { ARM::BI__builtin_arm_mve_vshlq_m_u32, 33242, 33187},
  { ARM::BI__builtin_arm_mve_vshlq_m_u8, 33254, 33187},
  { ARM::BI__builtin_arm_mve_vshlq_n_s16, 33273, 33265},
  { ARM::BI__builtin_arm_mve_vshlq_n_s32, 33285, 33265},
  { ARM::BI__builtin_arm_mve_vshlq_n_s8, 33297, 33265},
  { ARM::BI__builtin_arm_mve_vshlq_n_u16, 33308, 33265},
  { ARM::BI__builtin_arm_mve_vshlq_n_u32, 33320, 33265},
  { ARM::BI__builtin_arm_mve_vshlq_n_u8, 33332, 33265},
  { ARM::BI__builtin_arm_mve_vshlq_r_s16, 33351, 33343},
  { ARM::BI__builtin_arm_mve_vshlq_r_s32, 33363, 33343},
  { ARM::BI__builtin_arm_mve_vshlq_r_s8, 33375, 33343},
  { ARM::BI__builtin_arm_mve_vshlq_r_u16, 33386, 33343},
  { ARM::BI__builtin_arm_mve_vshlq_r_u32, 33398, 33343},
  { ARM::BI__builtin_arm_mve_vshlq_r_u8, 33410, 33343},
  { ARM::BI__builtin_arm_mve_vshlq_s16, 33427, 33421},
  { ARM::BI__builtin_arm_mve_vshlq_s32, 33437, 33421},
  { ARM::BI__builtin_arm_mve_vshlq_s8, 33447, 33421},
  { ARM::BI__builtin_arm_mve_vshlq_u16, 33456, 33421},
  { ARM::BI__builtin_arm_mve_vshlq_u32, 33466, 33421},
  { ARM::BI__builtin_arm_mve_vshlq_u8, 33476, 33421},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s16, 33495, 33485},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s32, 33509, 33485},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s8, 33523, 33485},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u16, 33536, 33485},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u32, 33550, 33485},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u8, 33564, 33485},
  { ARM::BI__builtin_arm_mve_vshlq_x_s16, 33585, 33577},
  { ARM::BI__builtin_arm_mve_vshlq_x_s32, 33597, 33577},
  { ARM::BI__builtin_arm_mve_vshlq_x_s8, 33609, 33577},
  { ARM::BI__builtin_arm_mve_vshlq_x_u16, 33620, 33577},
  { ARM::BI__builtin_arm_mve_vshlq_x_u32, 33632, 33577},
  { ARM::BI__builtin_arm_mve_vshlq_x_u8, 33644, 33577},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_s16, 33665, 33655},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_s32, 33681, 33655},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_u16, 33697, 33655},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_u32, 33713, 33655},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_s16, 33737, 33729},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_s32, 33751, 33729},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_u16, 33765, 33729},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_u32, 33779, 33729},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_s16, 33803, 33793},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_s32, 33819, 33793},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_u16, 33835, 33793},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_u32, 33851, 33793},
  { ARM::BI__builtin_arm_mve_vshrntq_n_s16, 33875, 33867},
  { ARM::BI__builtin_arm_mve_vshrntq_n_s32, 33889, 33867},
  { ARM::BI__builtin_arm_mve_vshrntq_n_u16, 33903, 33867},
  { ARM::BI__builtin_arm_mve_vshrntq_n_u32, 33917, 33867},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s16, 33939, 33931},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s32, 33953, 33931},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s8, 33967, 33931},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u16, 33980, 33931},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u32, 33994, 33931},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u8, 34008, 33931},
  { ARM::BI__builtin_arm_mve_vshrq_n_s16, 34027, 34021},
  { ARM::BI__builtin_arm_mve_vshrq_n_s32, 34039, 34021},
  { ARM::BI__builtin_arm_mve_vshrq_n_s8, 34051, 34021},
  { ARM::BI__builtin_arm_mve_vshrq_n_u16, 34062, 34021},
  { ARM::BI__builtin_arm_mve_vshrq_n_u32, 34074, 34021},
  { ARM::BI__builtin_arm_mve_vshrq_n_u8, 34086, 34021},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s16, 34105, 34097},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s32, 34119, 34097},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s8, 34133, 34097},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u16, 34146, 34097},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u32, 34160, 34097},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u8, 34174, 34097},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s16, 34195, 34187},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s32, 34209, 34187},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s8, 34223, 34187},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u16, 34236, 34187},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u32, 34250, 34187},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u8, 34264, 34187},
  { ARM::BI__builtin_arm_mve_vsliq_n_s16, 34283, 34277},
  { ARM::BI__builtin_arm_mve_vsliq_n_s32, 34295, 34277},
  { ARM::BI__builtin_arm_mve_vsliq_n_s8, 34307, 34277},
  { ARM::BI__builtin_arm_mve_vsliq_n_u16, 34318, 34277},
  { ARM::BI__builtin_arm_mve_vsliq_n_u32, 34330, 34277},
  { ARM::BI__builtin_arm_mve_vsliq_n_u8, 34342, 34277},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s16, 34361, 34353},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s32, 34375, 34353},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s8, 34389, 34353},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u16, 34402, 34353},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u32, 34416, 34353},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u8, 34430, 34353},
  { ARM::BI__builtin_arm_mve_vsriq_n_s16, 34449, 34443},
  { ARM::BI__builtin_arm_mve_vsriq_n_s32, 34461, 34443},
  { ARM::BI__builtin_arm_mve_vsriq_n_s8, 34473, 34443},
  { ARM::BI__builtin_arm_mve_vsriq_n_u16, 34484, 34443},
  { ARM::BI__builtin_arm_mve_vsriq_n_u32, 34496, 34443},
  { ARM::BI__builtin_arm_mve_vsriq_n_u8, 34508, 34443},
  { ARM::BI__builtin_arm_mve_vst1q_f16, 34525, 34519},
  { ARM::BI__builtin_arm_mve_vst1q_f32, 34535, 34519},
  { ARM::BI__builtin_arm_mve_vst1q_p_f16, 34553, 34545},
  { ARM::BI__builtin_arm_mve_vst1q_p_f32, 34565, 34545},
  { ARM::BI__builtin_arm_mve_vst1q_p_s16, 34577, 34545},
  { ARM::BI__builtin_arm_mve_vst1q_p_s32, 34589, 34545},
  { ARM::BI__builtin_arm_mve_vst1q_p_s8, 34601, 34545},
  { ARM::BI__builtin_arm_mve_vst1q_p_u16, 34612, 34545},
  { ARM::BI__builtin_arm_mve_vst1q_p_u32, 34624, 34545},
  { ARM::BI__builtin_arm_mve_vst1q_p_u8, 34636, 34545},
  { ARM::BI__builtin_arm_mve_vst1q_s16, 34647, 34519},
  { ARM::BI__builtin_arm_mve_vst1q_s32, 34657, 34519},
  { ARM::BI__builtin_arm_mve_vst1q_s8, 34667, 34519},
  { ARM::BI__builtin_arm_mve_vst1q_u16, 34676, 34519},
  { ARM::BI__builtin_arm_mve_vst1q_u32, 34686, 34519},
  { ARM::BI__builtin_arm_mve_vst1q_u8, 34696, 34519},
  { ARM::BI__builtin_arm_mve_vst2q_f16, 34711, 34705},
  { ARM::BI__builtin_arm_mve_vst2q_f32, 34721, 34705},
  { ARM::BI__builtin_arm_mve_vst2q_s16, 34731, 34705},
  { ARM::BI__builtin_arm_mve_vst2q_s32, 34741, 34705},
  { ARM::BI__builtin_arm_mve_vst2q_s8, 34751, 34705},
  { ARM::BI__builtin_arm_mve_vst2q_u16, 34760, 34705},
  { ARM::BI__builtin_arm_mve_vst2q_u32, 34770, 34705},
  { ARM::BI__builtin_arm_mve_vst2q_u8, 34780, 34705},
  { ARM::BI__builtin_arm_mve_vst4q_f16, 34795, 34789},
  { ARM::BI__builtin_arm_mve_vst4q_f32, 34805, 34789},
  { ARM::BI__builtin_arm_mve_vst4q_s16, 34815, 34789},
  { ARM::BI__builtin_arm_mve_vst4q_s32, 34825, 34789},
  { ARM::BI__builtin_arm_mve_vst4q_s8, 34835, 34789},
  { ARM::BI__builtin_arm_mve_vst4q_u16, 34844, 34789},
  { ARM::BI__builtin_arm_mve_vst4q_u32, 34854, 34789},
  { ARM::BI__builtin_arm_mve_vst4q_u8, 34864, 34789},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s16, 34882, 34873},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s32, 34895, 34873},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s8, 34908, 34873},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u16, 34920, 34873},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u32, 34933, 34873},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u8, 34946, 34873},
  { ARM::BI__builtin_arm_mve_vstrbq_s16, 34965, 34958},
  { ARM::BI__builtin_arm_mve_vstrbq_s32, 34976, 34958},
  { ARM::BI__builtin_arm_mve_vstrbq_s8, 34987, 34958},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s16, 35021, 34997},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s32, 35049, 34997},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s8, 35077, 34997},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u16, 35104, 34997},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u32, 35132, 34997},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u8, 35160, 34997},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s16, 35209, 35187},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s32, 35235, 35187},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s8, 35261, 35187},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u16, 35286, 35187},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u32, 35312, 35187},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u8, 35338, 35187},
  { ARM::BI__builtin_arm_mve_vstrbq_u16, 35363, 34958},
  { ARM::BI__builtin_arm_mve_vstrbq_u32, 35374, 34958},
  { ARM::BI__builtin_arm_mve_vstrbq_u8, 35385, 34958},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_s64, 35417, 35395},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_u64, 35443, 35395},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_s64, 35489, 35469},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_u64, 35513, 35469},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64, 35562, 35537},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64, 35591, 35537},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_s64, 35643, 35620},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_u64, 35670, 35620},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_s64, 35721, 35697},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_u64, 35749, 35697},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_s64, 35799, 35777},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_u64, 35825, 35777},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_s64, 35883, 35851},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_u64, 35919, 35851},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_s64, 35985, 35955},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_u64, 36019, 35955},
  { ARM::BI__builtin_arm_mve_vstrhq_f16, 36060, 36053},
  { ARM::BI__builtin_arm_mve_vstrhq_p_f16, 36080, 36071},
  { ARM::BI__builtin_arm_mve_vstrhq_p_s16, 36093, 36071},
  { ARM::BI__builtin_arm_mve_vstrhq_p_s32, 36106, 36071},
  { ARM::BI__builtin_arm_mve_vstrhq_p_u16, 36119, 36071},
  { ARM::BI__builtin_arm_mve_vstrhq_p_u32, 36132, 36071},
  { ARM::BI__builtin_arm_mve_vstrhq_s16, 36145, 36053},
  { ARM::BI__builtin_arm_mve_vstrhq_s32, 36156, 36053},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_f16, 36189, 36167},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_f16, 36239, 36215},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s16, 36267, 36215},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s32, 36295, 36215},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u16, 36323, 36215},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u32, 36351, 36215},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s16, 36379, 36167},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s32, 36405, 36167},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u16, 36431, 36167},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u32, 36457, 36167},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_f16, 36513, 36483},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_f16, 36579, 36547},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s16, 36615, 36547},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s32, 36651, 36547},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u16, 36687, 36547},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u32, 36723, 36547},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s16, 36759, 36483},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s32, 36793, 36483},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u16, 36827, 36483},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u32, 36861, 36483},
  { ARM::BI__builtin_arm_mve_vstrhq_u16, 36895, 36053},
  { ARM::BI__builtin_arm_mve_vstrhq_u32, 36906, 36053},
  { ARM::BI__builtin_arm_mve_vstrwq_f32, 36924, 36917},
  { ARM::BI__builtin_arm_mve_vstrwq_p_f32, 36944, 36935},
  { ARM::BI__builtin_arm_mve_vstrwq_p_s32, 36957, 36935},
  { ARM::BI__builtin_arm_mve_vstrwq_p_u32, 36970, 36935},
  { ARM::BI__builtin_arm_mve_vstrwq_s32, 36983, 36917},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_f32, 37014, 36994},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_f32, 37060, 37038},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_s32, 37086, 37038},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_u32, 37112, 37038},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_s32, 37138, 36994},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_u32, 37162, 36994},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_f32, 37209, 37186},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32, 37261, 37236},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32, 37290, 37236},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32, 37319, 37236},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_s32, 37348, 37186},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_u32, 37375, 37186},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_f32, 37424, 37402},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_f32, 37474, 37450},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_s32, 37502, 37450},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_u32, 37530, 37450},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_s32, 37558, 37402},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_u32, 37584, 37402},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_f32, 37640, 37610},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_f32, 37706, 37674},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_s32, 37742, 37674},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_u32, 37778, 37674},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_s32, 37814, 37610},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_u32, 37848, 37610},
  { ARM::BI__builtin_arm_mve_vstrwq_u32, 37882, 36917},
  { ARM::BI__builtin_arm_mve_vsubq_f16, 37899, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_f32, 37909, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_m_f16, 37927, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_f32, 37939, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_f16, 37951, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_f32, 37965, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_s16, 37979, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_s32, 37993, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_s8, 38007, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_u16, 38020, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_u32, 38034, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_u8, 38048, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_s16, 38061, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_s32, 38073, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_s8, 38085, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_u16, 38096, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_u32, 38108, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_m_u8, 38120, 37919},
  { ARM::BI__builtin_arm_mve_vsubq_n_f16, 38131, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_n_f32, 38143, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_n_s16, 38155, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_n_s32, 38167, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_n_s8, 38179, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_n_u16, 38190, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_n_u32, 38202, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_n_u8, 38214, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_s16, 38225, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_s32, 38235, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_s8, 38245, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_u16, 38254, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_u32, 38264, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_u8, 38274, 37893},
  { ARM::BI__builtin_arm_mve_vsubq_x_f16, 38291, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_f32, 38303, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_f16, 38315, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_f32, 38329, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_s16, 38343, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_s32, 38357, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_s8, 38371, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_u16, 38384, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_u32, 38398, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_u8, 38412, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_s16, 38425, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_s32, 38437, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_s8, 38449, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_u16, 38460, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_u32, 38472, 38283},
  { ARM::BI__builtin_arm_mve_vsubq_x_u8, 38484, 38283},
  { ARM::BI__builtin_arm_mve_vuninitializedq_f16, 38495, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_f32, 38515, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f16, 38551, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f32, 38583, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s16, 38615, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s32, 38647, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s64, 38679, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s8, 38711, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u16, 38742, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u32, 38774, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u64, 38806, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u8, 38838, 38535},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s16, 38869, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s32, 38889, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s64, 38909, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s8, 38929, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u16, 38948, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u32, 38968, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u64, 38988, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u8, 39008, -1},
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
    "vctp64q\000vctp64q_m\000vctp8q\000vctp8q_m\000vcvtaq_m\000vcvtaq_m_s16_"
    "f16\000vcvtaq_m_s32_f32\000vcvtaq_m_u16_f16\000vcvtaq_m_u32_f32\000vcvt"
    "aq_s16_f16\000vcvtaq_s32_f32\000vcvtaq_u16_f16\000vcvtaq_u32_f32\000vcv"
    "taq_x_s16_f16\000vcvtaq_x_s32_f32\000vcvtaq_x_u16_f16\000vcvtaq_x_u32_f"
    "32\000vcvtbq_f16_f32\000vcvtbq_f32_f16\000vcvtbq_m_f16_f32\000vcvtbq_m_"
    "f32_f16\000vcvtbq_x_f32_f16\000vcvtmq_m\000vcvtmq_m_s16_f16\000vcvtmq_m"
    "_s32_f32\000vcvtmq_m_u16_f16\000vcvtmq_m_u32_f32\000vcvtmq_s16_f16\000v"
    "cvtmq_s32_f32\000vcvtmq_u16_f16\000vcvtmq_u32_f32\000vcvtmq_x_s16_f16\000"
    "vcvtmq_x_s32_f32\000vcvtmq_x_u16_f16\000vcvtmq_x_u32_f32\000vcvtnq_m\000"
    "vcvtnq_m_s16_f16\000vcvtnq_m_s32_f32\000vcvtnq_m_u16_f16\000vcvtnq_m_u3"
    "2_f32\000vcvtnq_s16_f16\000vcvtnq_s32_f32\000vcvtnq_u16_f16\000vcvtnq_u"
    "32_f32\000vcvtnq_x_s16_f16\000vcvtnq_x_s32_f32\000vcvtnq_x_u16_f16\000v"
    "cvtnq_x_u32_f32\000vcvtpq_m\000vcvtpq_m_s16_f16\000vcvtpq_m_s32_f32\000"
    "vcvtpq_m_u16_f16\000vcvtpq_m_u32_f32\000vcvtpq_s16_f16\000vcvtpq_s32_f3"
    "2\000vcvtpq_u16_f16\000vcvtpq_u32_f32\000vcvtpq_x_s16_f16\000vcvtpq_x_s"
    "32_f32\000vcvtpq_x_u16_f16\000vcvtpq_x_u32_f32\000vcvtq\000vcvtq_f16_s1"
    "6\000vcvtq_f16_u16\000vcvtq_f32_s32\000vcvtq_f32_u32\000vcvtq_m\000vcvt"
    "q_m_f16_s16\000vcvtq_m_f16_u16\000vcvtq_m_f32_s32\000vcvtq_m_f32_u32\000"
    "vcvtq_m_n\000vcvtq_m_n_f16_s16\000vcvtq_m_n_f16_u16\000vcvtq_m_n_f32_s3"
    "2\000vcvtq_m_n_f32_u32\000vcvtq_m_n_s16_f16\000vcvtq_m_n_s32_f32\000vcv"
    "tq_m_n_u16_f16\000vcvtq_m_n_u32_f32\000vcvtq_m_s16_f16\000vcvtq_m_s32_f"
    "32\000vcvtq_m_u16_f16\000vcvtq_m_u32_f32\000vcvtq_n\000vcvtq_n_f16_s16\000"
    "vcvtq_n_f16_u16\000vcvtq_n_f32_s32\000vcvtq_n_f32_u32\000vcvtq_n_s16_f1"
    "6\000vcvtq_n_s32_f32\000vcvtq_n_u16_f16\000vcvtq_n_u32_f32\000vcvtq_s16"
    "_f16\000vcvtq_s32_f32\000vcvtq_u16_f16\000vcvtq_u32_f32\000vcvtq_x\000v"
    "cvtq_x_f16_s16\000vcvtq_x_f16_u16\000vcvtq_x_f32_s32\000vcvtq_x_f32_u32"
    "\000vcvtq_x_n\000vcvtq_x_n_f16_s16\000vcvtq_x_n_f16_u16\000vcvtq_x_n_f3"
    "2_s32\000vcvtq_x_n_f32_u32\000vcvtq_x_n_s16_f16\000vcvtq_x_n_s32_f32\000"
    "vcvtq_x_n_u16_f16\000vcvtq_x_n_u32_f32\000vcvtq_x_s16_f16\000vcvtq_x_s3"
    "2_f32\000vcvtq_x_u16_f16\000vcvtq_x_u32_f32\000vcvttq_f16_f32\000vcvttq"
    "_f32_f16\000vcvttq_m_f16_f32\000vcvttq_m_f32_f16\000vcvttq_x_f32_f16\000"
    "vddupq_m\000vddupq_m_n_u16\000vddupq_m_n_u32\000vddupq_m_n_u8\000vddupq"
    "_m_wb_u16\000vddupq_m_wb_u32\000vddupq_m_wb_u8\000vddupq_u16\000vddupq_"
    "n_u16\000vddupq_u32\000vddupq_n_u32\000vddupq_u8\000vddupq_n_u8\000vddu"
    "pq_wb_u16\000vddupq_wb_u32\000vddupq_wb_u8\000vddupq_x_u16\000vddupq_x_"
    "n_u16\000vddupq_x_u32\000vddupq_x_n_u32\000vddupq_x_u8\000vddupq_x_n_u8"
    "\000vddupq_x_wb_u16\000vddupq_x_wb_u32\000vddupq_x_wb_u8\000vdupq_m\000"
    "vdupq_m_n_f16\000vdupq_m_n_f32\000vdupq_m_n_s16\000vdupq_m_n_s32\000vdu"
    "pq_m_n_s8\000vdupq_m_n_u16\000vdupq_m_n_u32\000vdupq_m_n_u8\000vdupq_n_"
    "f16\000vdupq_n_f32\000vdupq_n_s16\000vdupq_n_s32\000vdupq_n_s8\000vdupq"
    "_n_u16\000vdupq_n_u32\000vdupq_n_u8\000vdupq_x_n_f16\000vdupq_x_n_f32\000"
    "vdupq_x_n_s16\000vdupq_x_n_s32\000vdupq_x_n_s8\000vdupq_x_n_u16\000vdup"
    "q_x_n_u32\000vdupq_x_n_u8\000vdwdupq_m\000vdwdupq_m_n_u16\000vdwdupq_m_"
    "n_u32\000vdwdupq_m_n_u8\000vdwdupq_m_wb_u16\000vdwdupq_m_wb_u32\000vdwd"
    "upq_m_wb_u8\000vdwdupq_u16\000vdwdupq_n_u16\000vdwdupq_u32\000vdwdupq_n"
    "_u32\000vdwdupq_u8\000vdwdupq_n_u8\000vdwdupq_wb_u16\000vdwdupq_wb_u32\000"
    "vdwdupq_wb_u8\000vdwdupq_x_u16\000vdwdupq_x_n_u16\000vdwdupq_x_u32\000v"
    "dwdupq_x_n_u32\000vdwdupq_x_u8\000vdwdupq_x_n_u8\000vdwdupq_x_wb_u16\000"
    "vdwdupq_x_wb_u32\000vdwdupq_x_wb_u8\000veorq\000veorq_f16\000veorq_f32\000"
    "veorq_m\000veorq_m_f16\000veorq_m_f32\000veorq_m_s16\000veorq_m_s32\000"
    "veorq_m_s8\000veorq_m_u16\000veorq_m_u32\000veorq_m_u8\000veorq_s16\000"
    "veorq_s32\000veorq_s8\000veorq_u16\000veorq_u32\000veorq_u8\000veorq_x\000"
    "veorq_x_f16\000veorq_x_f32\000veorq_x_s16\000veorq_x_s32\000veorq_x_s8\000"
    "veorq_x_u16\000veorq_x_u32\000veorq_x_u8\000vgetq_lane\000vgetq_lane_f1"
    "6\000vgetq_lane_f32\000vgetq_lane_s16\000vgetq_lane_s32\000vgetq_lane_s"
    "64\000vgetq_lane_s8\000vgetq_lane_u16\000vgetq_lane_u32\000vgetq_lane_u"
    "64\000vgetq_lane_u8\000vhaddq_m\000vhaddq_m_n_s16\000vhaddq_m_n_s32\000"
    "vhaddq_m_n_s8\000vhaddq_m_n_u16\000vhaddq_m_n_u32\000vhaddq_m_n_u8\000v"
    "haddq_m_s16\000vhaddq_m_s32\000vhaddq_m_s8\000vhaddq_m_u16\000vhaddq_m_"
    "u32\000vhaddq_m_u8\000vhaddq\000vhaddq_n_s16\000vhaddq_n_s32\000vhaddq_"
    "n_s8\000vhaddq_n_u16\000vhaddq_n_u32\000vhaddq_n_u8\000vhaddq_s16\000vh"
    "addq_s32\000vhaddq_s8\000vhaddq_u16\000vhaddq_u32\000vhaddq_u8\000vhadd"
    "q_x\000vhaddq_x_n_s16\000vhaddq_x_n_s32\000vhaddq_x_n_s8\000vhaddq_x_n_"
    "u16\000vhaddq_x_n_u32\000vhaddq_x_n_u8\000vhaddq_x_s16\000vhaddq_x_s32\000"
    "vhaddq_x_s8\000vhaddq_x_u16\000vhaddq_x_u32\000vhaddq_x_u8\000vhcaddq_r"
    "ot270_m\000vhcaddq_rot270_m_s16\000vhcaddq_rot270_m_s32\000vhcaddq_rot2"
    "70_m_s8\000vhcaddq_rot270\000vhcaddq_rot270_s16\000vhcaddq_rot270_s32\000"
    "vhcaddq_rot270_s8\000vhcaddq_rot270_x\000vhcaddq_rot270_x_s16\000vhcadd"
    "q_rot270_x_s32\000vhcaddq_rot270_x_s8\000vhcaddq_rot90_m\000vhcaddq_rot"
    "90_m_s16\000vhcaddq_rot90_m_s32\000vhcaddq_rot90_m_s8\000vhcaddq_rot90\000"
    "vhcaddq_rot90_s16\000vhcaddq_rot90_s32\000vhcaddq_rot90_s8\000vhcaddq_r"
    "ot90_x\000vhcaddq_rot90_x_s16\000vhcaddq_rot90_x_s32\000vhcaddq_rot90_x"
    "_s8\000vhsubq_m\000vhsubq_m_n_s16\000vhsubq_m_n_s32\000vhsubq_m_n_s8\000"
    "vhsubq_m_n_u16\000vhsubq_m_n_u32\000vhsubq_m_n_u8\000vhsubq_m_s16\000vh"
    "subq_m_s32\000vhsubq_m_s8\000vhsubq_m_u16\000vhsubq_m_u32\000vhsubq_m_u"
    "8\000vhsubq\000vhsubq_n_s16\000vhsubq_n_s32\000vhsubq_n_s8\000vhsubq_n_"
    "u16\000vhsubq_n_u32\000vhsubq_n_u8\000vhsubq_s16\000vhsubq_s32\000vhsub"
    "q_s8\000vhsubq_u16\000vhsubq_u32\000vhsubq_u8\000vhsubq_x\000vhsubq_x_n"
    "_s16\000vhsubq_x_n_s32\000vhsubq_x_n_s8\000vhsubq_x_n_u16\000vhsubq_x_n"
    "_u32\000vhsubq_x_n_u8\000vhsubq_x_s16\000vhsubq_x_s32\000vhsubq_x_s8\000"
    "vhsubq_x_u16\000vhsubq_x_u32\000vhsubq_x_u8\000vidupq_m\000vidupq_m_n_u"
    "16\000vidupq_m_n_u32\000vidupq_m_n_u8\000vidupq_m_wb_u16\000vidupq_m_wb"
    "_u32\000vidupq_m_wb_u8\000vidupq_u16\000vidupq_n_u16\000vidupq_u32\000v"
    "idupq_n_u32\000vidupq_u8\000vidupq_n_u8\000vidupq_wb_u16\000vidupq_wb_u"
    "32\000vidupq_wb_u8\000vidupq_x_u16\000vidupq_x_n_u16\000vidupq_x_u32\000"
    "vidupq_x_n_u32\000vidupq_x_u8\000vidupq_x_n_u8\000vidupq_x_wb_u16\000vi"
    "dupq_x_wb_u32\000vidupq_x_wb_u8\000viwdupq_m\000viwdupq_m_n_u16\000viwd"
    "upq_m_n_u32\000viwdupq_m_n_u8\000viwdupq_m_wb_u16\000viwdupq_m_wb_u32\000"
    "viwdupq_m_wb_u8\000viwdupq_u16\000viwdupq_n_u16\000viwdupq_u32\000viwdu"
    "pq_n_u32\000viwdupq_u8\000viwdupq_n_u8\000viwdupq_wb_u16\000viwdupq_wb_"
    "u32\000viwdupq_wb_u8\000viwdupq_x_u16\000viwdupq_x_n_u16\000viwdupq_x_u"
    "32\000viwdupq_x_n_u32\000viwdupq_x_u8\000viwdupq_x_n_u8\000viwdupq_x_wb"
    "_u16\000viwdupq_x_wb_u32\000viwdupq_x_wb_u8\000vld1q\000vld1q_f16\000vl"
    "d1q_f32\000vld1q_s16\000vld1q_s32\000vld1q_s8\000vld1q_u16\000vld1q_u32"
    "\000vld1q_u8\000vld1q_z\000vld1q_z_f16\000vld1q_z_f32\000vld1q_z_s16\000"
    "vld1q_z_s32\000vld1q_z_s8\000vld1q_z_u16\000vld1q_z_u32\000vld1q_z_u8\000"
    "vld2q\000vld2q_f16\000vld2q_f32\000vld2q_s16\000vld2q_s32\000vld2q_s8\000"
    "vld2q_u16\000vld2q_u32\000vld2q_u8\000vld4q\000vld4q_f16\000vld4q_f32\000"
    "vld4q_s16\000vld4q_s32\000vld4q_s8\000vld4q_u16\000vld4q_u32\000vld4q_u"
    "8\000vldrbq_gather_offset\000vldrbq_gather_offset_s16\000vldrbq_gather_"
    "offset_s32\000vldrbq_gather_offset_s8\000vldrbq_gather_offset_u16\000vl"
    "drbq_gather_offset_u32\000vldrbq_gather_offset_u8\000vldrbq_gather_offs"
    "et_z\000vldrbq_gather_offset_z_s16\000vldrbq_gather_offset_z_s32\000vld"
    "rbq_gather_offset_z_s8\000vldrbq_gather_offset_z_u16\000vldrbq_gather_o"
    "ffset_z_u32\000vldrbq_gather_offset_z_u8\000vldrbq_s16\000vldrbq_s32\000"
    "vldrbq_s8\000vldrbq_u16\000vldrbq_u32\000vldrbq_u8\000vldrbq_z_s16\000v"
    "ldrbq_z_s32\000vldrbq_z_s8\000vldrbq_z_u16\000vldrbq_z_u32\000vldrbq_z_"
    "u8\000vldrdq_gather_base_s64\000vldrdq_gather_base_u64\000vldrdq_gather"
    "_base_wb_s64\000vldrdq_gather_base_wb_u64\000vldrdq_gather_base_wb_z_s6"
    "4\000vldrdq_gather_base_wb_z_u64\000vldrdq_gather_base_z_s64\000vldrdq_"
    "gather_base_z_u64\000vldrdq_gather_offset\000vldrdq_gather_offset_s64\000"
    "vldrdq_gather_offset_u64\000vldrdq_gather_offset_z\000vldrdq_gather_off"
    "set_z_s64\000vldrdq_gather_offset_z_u64\000vldrdq_gather_shifted_offset"
    "\000vldrdq_gather_shifted_offset_s64\000vldrdq_gather_shifted_offset_u6"
    "4\000vldrdq_gather_shifted_offset_z\000vldrdq_gather_shifted_offset_z_s"
    "64\000vldrdq_gather_shifted_offset_z_u64\000vldrhq_f16\000vldrhq_gather"
    "_offset\000vldrhq_gather_offset_f16\000vldrhq_gather_offset_s16\000vldr"
    "hq_gather_offset_s32\000vldrhq_gather_offset_u16\000vldrhq_gather_offse"
    "t_u32\000vldrhq_gather_offset_z\000vldrhq_gather_offset_z_f16\000vldrhq"
    "_gather_offset_z_s16\000vldrhq_gather_offset_z_s32\000vldrhq_gather_off"
    "set_z_u16\000vldrhq_gather_offset_z_u32\000vldrhq_gather_shifted_offset"
    "\000vldrhq_gather_shifted_offset_f16\000vldrhq_gather_shifted_offset_s1"
    "6\000vldrhq_gather_shifted_offset_s32\000vldrhq_gather_shifted_offset_u"
    "16\000vldrhq_gather_shifted_offset_u32\000vldrhq_gather_shifted_offset_"
    "z\000vldrhq_gather_shifted_offset_z_f16\000vldrhq_gather_shifted_offset"
    "_z_s16\000vldrhq_gather_shifted_offset_z_s32\000vldrhq_gather_shifted_o"
    "ffset_z_u16\000vldrhq_gather_shifted_offset_z_u32\000vldrhq_s16\000vldr"
    "hq_s32\000vldrhq_u16\000vldrhq_u32\000vldrhq_z_f16\000vldrhq_z_s16\000v"
    "ldrhq_z_s32\000vldrhq_z_u16\000vldrhq_z_u32\000vldrwq_f32\000vldrwq_gat"
    "her_base_f32\000vldrwq_gather_base_s32\000vldrwq_gather_base_u32\000vld"
    "rwq_gather_base_wb_f32\000vldrwq_gather_base_wb_s32\000vldrwq_gather_ba"
    "se_wb_u32\000vldrwq_gather_base_wb_z_f32\000vldrwq_gather_base_wb_z_s32"
    "\000vldrwq_gather_base_wb_z_u32\000vldrwq_gather_base_z_f32\000vldrwq_g"
    "ather_base_z_s32\000vldrwq_gather_base_z_u32\000vldrwq_gather_offset\000"
    "vldrwq_gather_offset_f32\000vldrwq_gather_offset_s32\000vldrwq_gather_o"
    "ffset_u32\000vldrwq_gather_offset_z\000vldrwq_gather_offset_z_f32\000vl"
    "drwq_gather_offset_z_s32\000vldrwq_gather_offset_z_u32\000vldrwq_gather"
    "_shifted_offset\000vldrwq_gather_shifted_offset_f32\000vldrwq_gather_sh"
    "ifted_offset_s32\000vldrwq_gather_shifted_offset_u32\000vldrwq_gather_s"
    "hifted_offset_z\000vldrwq_gather_shifted_offset_z_f32\000vldrwq_gather_"
    "shifted_offset_z_s32\000vldrwq_gather_shifted_offset_z_u32\000vldrwq_s3"
    "2\000vldrwq_u32\000vldrwq_z_f32\000vldrwq_z_s32\000vldrwq_z_u32\000vmax"
    "aq_m\000vmaxaq_m_s16\000vmaxaq_m_s32\000vmaxaq_m_s8\000vmaxaq\000vmaxaq"
    "_s16\000vmaxaq_s32\000vmaxaq_s8\000vmaxnmaq\000vmaxnmaq_f16\000vmaxnmaq"
    "_f32\000vmaxnmaq_m\000vmaxnmaq_m_f16\000vmaxnmaq_m_f32\000vmaxnmq\000vm"
    "axnmq_f16\000vmaxnmq_f32\000vmaxnmq_m\000vmaxnmq_m_f16\000vmaxnmq_m_f32"
    "\000vmaxnmq_x\000vmaxnmq_x_f16\000vmaxnmq_x_f32\000vmaxq_m\000vmaxq_m_s"
    "16\000vmaxq_m_s32\000vmaxq_m_s8\000vmaxq_m_u16\000vmaxq_m_u32\000vmaxq_"
    "m_u8\000vmaxq\000vmaxq_s16\000vmaxq_s32\000vmaxq_s8\000vmaxq_u16\000vma"
    "xq_u32\000vmaxq_u8\000vmaxq_x\000vmaxq_x_s16\000vmaxq_x_s32\000vmaxq_x_"
    "s8\000vmaxq_x_u16\000vmaxq_x_u32\000vmaxq_x_u8\000vmaxvq\000vmaxvq_s16\000"
    "vmaxvq_s32\000vmaxvq_s8\000vmaxvq_u16\000vmaxvq_u32\000vmaxvq_u8\000vmi"
    "naq_m\000vminaq_m_s16\000vminaq_m_s32\000vminaq_m_s8\000vminaq\000vmina"
    "q_s16\000vminaq_s32\000vminaq_s8\000vminnmaq\000vminnmaq_f16\000vminnma"
    "q_f32\000vminnmaq_m\000vminnmaq_m_f16\000vminnmaq_m_f32\000vminnmq\000v"
    "minnmq_f16\000vminnmq_f32\000vminnmq_m\000vminnmq_m_f16\000vminnmq_m_f3"
    "2\000vminnmq_x\000vminnmq_x_f16\000vminnmq_x_f32\000vminq_m\000vminq_m_"
    "s16\000vminq_m_s32\000vminq_m_s8\000vminq_m_u16\000vminq_m_u32\000vminq"
    "_m_u8\000vminq\000vminq_s16\000vminq_s32\000vminq_s8\000vminq_u16\000vm"
    "inq_u32\000vminq_u8\000vminq_x\000vminq_x_s16\000vminq_x_s32\000vminq_x"
    "_s8\000vminq_x_u16\000vminq_x_u32\000vminq_x_u8\000vminvq\000vminvq_s16"
    "\000vminvq_s32\000vminvq_s8\000vminvq_u16\000vminvq_u32\000vminvq_u8\000"
    "vmladavaq_p\000vmladavaq_p_s16\000vmladavaq_p_s32\000vmladavaq_p_s8\000"
    "vmladavaq_p_u16\000vmladavaq_p_u32\000vmladavaq_p_u8\000vmladavaq\000vm"
    "ladavaq_s16\000vmladavaq_s32\000vmladavaq_s8\000vmladavaq_u16\000vmlada"
    "vaq_u32\000vmladavaq_u8\000vmladavaxq_p\000vmladavaxq_p_s16\000vmladava"
    "xq_p_s32\000vmladavaxq_p_s8\000vmladavaxq\000vmladavaxq_s16\000vmladava"
    "xq_s32\000vmladavaxq_s8\000vmladavq_p\000vmladavq_p_s16\000vmladavq_p_s"
    "32\000vmladavq_p_s8\000vmladavq_p_u16\000vmladavq_p_u32\000vmladavq_p_u"
    "8\000vmladavq\000vmladavq_s16\000vmladavq_s32\000vmladavq_s8\000vmladav"
    "q_u16\000vmladavq_u32\000vmladavq_u8\000vmladavxq_p\000vmladavxq_p_s16\000"
    "vmladavxq_p_s32\000vmladavxq_p_s8\000vmladavxq\000vmladavxq_s16\000vmla"
    "davxq_s32\000vmladavxq_s8\000vmlaldavaq_p\000vmlaldavaq_p_s16\000vmlald"
    "avaq_p_s32\000vmlaldavaq_p_u16\000vmlaldavaq_p_u32\000vmlaldavaq\000vml"
    "aldavaq_s16\000vmlaldavaq_s32\000vmlaldavaq_u16\000vmlaldavaq_u32\000vm"
    "laldavaxq_p\000vmlaldavaxq_p_s16\000vmlaldavaxq_p_s32\000vmlaldavaxq\000"
    "vmlaldavaxq_s16\000vmlaldavaxq_s32\000vmlaldavq_p\000vmlaldavq_p_s16\000"
    "vmlaldavq_p_s32\000vmlaldavq_p_u16\000vmlaldavq_p_u32\000vmlaldavq\000v"
    "mlaldavq_s16\000vmlaldavq_s32\000vmlaldavq_u16\000vmlaldavq_u32\000vmla"
    "ldavxq_p\000vmlaldavxq_p_s16\000vmlaldavxq_p_s32\000vmlaldavxq\000vmlal"
    "davxq_s16\000vmlaldavxq_s32\000vmlsdavaq_p\000vmlsdavaq_p_s16\000vmlsda"
    "vaq_p_s32\000vmlsdavaq_p_s8\000vmlsdavaq\000vmlsdavaq_s16\000vmlsdavaq_"
    "s32\000vmlsdavaq_s8\000vmlsdavaxq_p\000vmlsdavaxq_p_s16\000vmlsdavaxq_p"
    "_s32\000vmlsdavaxq_p_s8\000vmlsdavaxq\000vmlsdavaxq_s16\000vmlsdavaxq_s"
    "32\000vmlsdavaxq_s8\000vmlsdavq_p\000vmlsdavq_p_s16\000vmlsdavq_p_s32\000"
    "vmlsdavq_p_s8\000vmlsdavq\000vmlsdavq_s16\000vmlsdavq_s32\000vmlsdavq_s"
    "8\000vmlsdavxq_p\000vmlsdavxq_p_s16\000vmlsdavxq_p_s32\000vmlsdavxq_p_s"
    "8\000vmlsdavxq\000vmlsdavxq_s16\000vmlsdavxq_s32\000vmlsdavxq_s8\000vml"
    "sldavaq_p\000vmlsldavaq_p_s16\000vmlsldavaq_p_s32\000vmlsldavaq\000vmls"
    "ldavaq_s16\000vmlsldavaq_s32\000vmlsldavaxq_p\000vmlsldavaxq_p_s16\000v"
    "mlsldavaxq_p_s32\000vmlsldavaxq\000vmlsldavaxq_s16\000vmlsldavaxq_s32\000"
    "vmlsldavq_p\000vmlsldavq_p_s16\000vmlsldavq_p_s32\000vmlsldavq\000vmlsl"
    "davq_s16\000vmlsldavq_s32\000vmlsldavxq_p\000vmlsldavxq_p_s16\000vmlsld"
    "avxq_p_s32\000vmlsldavxq\000vmlsldavxq_s16\000vmlsldavxq_s32\000vmovlbq"
    "_m\000vmovlbq_m_s16\000vmovlbq_m_s8\000vmovlbq_m_u16\000vmovlbq_m_u8\000"
    "vmovlbq\000vmovlbq_s16\000vmovlbq_s8\000vmovlbq_u16\000vmovlbq_u8\000vm"
    "ovlbq_x\000vmovlbq_x_s16\000vmovlbq_x_s8\000vmovlbq_x_u16\000vmovlbq_x_"
    "u8\000vmovltq_m\000vmovltq_m_s16\000vmovltq_m_s8\000vmovltq_m_u16\000vm"
    "ovltq_m_u8\000vmovltq\000vmovltq_s16\000vmovltq_s8\000vmovltq_u16\000vm"
    "ovltq_u8\000vmovltq_x\000vmovltq_x_s16\000vmovltq_x_s8\000vmovltq_x_u16"
    "\000vmovltq_x_u8\000vmovnbq_m\000vmovnbq_m_s16\000vmovnbq_m_s32\000vmov"
    "nbq_m_u16\000vmovnbq_m_u32\000vmovnbq\000vmovnbq_s16\000vmovnbq_s32\000"
    "vmovnbq_u16\000vmovnbq_u32\000vmovntq_m\000vmovntq_m_s16\000vmovntq_m_s"
    "32\000vmovntq_m_u16\000vmovntq_m_u32\000vmovntq\000vmovntq_s16\000vmovn"
    "tq_s32\000vmovntq_u16\000vmovntq_u32\000vmulhq_m\000vmulhq_m_s16\000vmu"
    "lhq_m_s32\000vmulhq_m_s8\000vmulhq_m_u16\000vmulhq_m_u32\000vmulhq_m_u8"
    "\000vmulhq\000vmulhq_s16\000vmulhq_s32\000vmulhq_s8\000vmulhq_u16\000vm"
    "ulhq_u32\000vmulhq_u8\000vmulhq_x\000vmulhq_x_s16\000vmulhq_x_s32\000vm"
    "ulhq_x_s8\000vmulhq_x_u16\000vmulhq_x_u32\000vmulhq_x_u8\000vmullbq_int"
    "_m\000vmullbq_int_m_s16\000vmullbq_int_m_s32\000vmullbq_int_m_s8\000vmu"
    "llbq_int_m_u16\000vmullbq_int_m_u32\000vmullbq_int_m_u8\000vmullbq_int\000"
    "vmullbq_int_s16\000vmullbq_int_s32\000vmullbq_int_s8\000vmullbq_int_u16"
    "\000vmullbq_int_u32\000vmullbq_int_u8\000vmullbq_int_x\000vmullbq_int_x"
    "_s16\000vmullbq_int_x_s32\000vmullbq_int_x_s8\000vmullbq_int_x_u16\000v"
    "mullbq_int_x_u32\000vmullbq_int_x_u8\000vmullbq_poly_m\000vmullbq_poly_"
    "m_p16\000vmullbq_poly_m_p8\000vmullbq_poly\000vmullbq_poly_p16\000vmull"
    "bq_poly_p8\000vmullbq_poly_x\000vmullbq_poly_x_p16\000vmullbq_poly_x_p8"
    "\000vmulltq_int_m\000vmulltq_int_m_s16\000vmulltq_int_m_s32\000vmulltq_"
    "int_m_s8\000vmulltq_int_m_u16\000vmulltq_int_m_u32\000vmulltq_int_m_u8\000"
    "vmulltq_int\000vmulltq_int_s16\000vmulltq_int_s32\000vmulltq_int_s8\000"
    "vmulltq_int_u16\000vmulltq_int_u32\000vmulltq_int_u8\000vmulltq_int_x\000"
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
    "_s16\000vqdmulltq_n_s32\000vqdmulltq_s16\000vqdmulltq_s32\000vqmovnbq_m"
    "\000vqmovnbq_m_s16\000vqmovnbq_m_s32\000vqmovnbq_m_u16\000vqmovnbq_m_u3"
    "2\000vqmovnbq\000vqmovnbq_s16\000vqmovnbq_s32\000vqmovnbq_u16\000vqmovn"
    "bq_u32\000vqmovntq_m\000vqmovntq_m_s16\000vqmovntq_m_s32\000vqmovntq_m_"
    "u16\000vqmovntq_m_u32\000vqmovntq\000vqmovntq_s16\000vqmovntq_s32\000vq"
    "movntq_u16\000vqmovntq_u32\000vqmovunbq_m\000vqmovunbq_m_s16\000vqmovun"
    "bq_m_s32\000vqmovunbq\000vqmovunbq_s16\000vqmovunbq_s32\000vqmovuntq_m\000"
    "vqmovuntq_m_s16\000vqmovuntq_m_s32\000vqmovuntq\000vqmovuntq_s16\000vqm"
    "ovuntq_s32\000vqnegq_m\000vqnegq_m_s16\000vqnegq_m_s32\000vqnegq_m_s8\000"
    "vqnegq\000vqnegq_s16\000vqnegq_s32\000vqnegq_s8\000vqrdmulhq_m\000vqrdm"
    "ulhq_m_n_s16\000vqrdmulhq_m_n_s32\000vqrdmulhq_m_n_s8\000vqrdmulhq_m_s1"
    "6\000vqrdmulhq_m_s32\000vqrdmulhq_m_s8\000vqrdmulhq\000vqrdmulhq_n_s16\000"
    "vqrdmulhq_n_s32\000vqrdmulhq_n_s8\000vqrdmulhq_s16\000vqrdmulhq_s32\000"
    "vqrdmulhq_s8\000vqrshlq_m_n\000vqrshlq_m_n_s16\000vqrshlq_m_n_s32\000vq"
    "rshlq_m_n_s8\000vqrshlq_m_n_u16\000vqrshlq_m_n_u32\000vqrshlq_m_n_u8\000"
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
    "ubq_m_n_s16\000vqsubq_m_n_s32\000vqsubq_m_n_s8\000vqsubq_m_n_u16\000vqs"
    "ubq_m_n_u32\000vqsubq_m_n_u8\000vqsubq_m_s16\000vqsubq_m_s32\000vqsubq_"
    "m_s8\000vqsubq_m_u16\000vqsubq_m_u32\000vqsubq_m_u8\000vqsubq\000vqsubq"
    "_n_s16\000vqsubq_n_s32\000vqsubq_n_s8\000vqsubq_n_u16\000vqsubq_n_u32\000"
    "vqsubq_n_u8\000vqsubq_s16\000vqsubq_s32\000vqsubq_s8\000vqsubq_u16\000v"
    "qsubq_u32\000vqsubq_u8\000vreinterpretq_f16\000vreinterpretq_f16_f32\000"
    "vreinterpretq_f16_s16\000vreinterpretq_f16_s32\000vreinterpretq_f16_s64"
    "\000vreinterpretq_f16_s8\000vreinterpretq_f16_u16\000vreinterpretq_f16_"
    "u32\000vreinterpretq_f16_u64\000vreinterpretq_f16_u8\000vreinterpretq_f"
    "32\000vreinterpretq_f32_f16\000vreinterpretq_f32_s16\000vreinterpretq_f"
    "32_s32\000vreinterpretq_f32_s64\000vreinterpretq_f32_s8\000vreinterpret"
    "q_f32_u16\000vreinterpretq_f32_u32\000vreinterpretq_f32_u64\000vreinter"
    "pretq_f32_u8\000vreinterpretq_s16\000vreinterpretq_s16_f16\000vreinterp"
    "retq_s16_f32\000vreinterpretq_s16_s32\000vreinterpretq_s16_s64\000vrein"
    "terpretq_s16_s8\000vreinterpretq_s16_u16\000vreinterpretq_s16_u32\000vr"
    "einterpretq_s16_u64\000vreinterpretq_s16_u8\000vreinterpretq_s32\000vre"
    "interpretq_s32_f16\000vreinterpretq_s32_f32\000vreinterpretq_s32_s16\000"
    "vreinterpretq_s32_s64\000vreinterpretq_s32_s8\000vreinterpretq_s32_u16\000"
    "vreinterpretq_s32_u32\000vreinterpretq_s32_u64\000vreinterpretq_s32_u8\000"
    "vreinterpretq_s64\000vreinterpretq_s64_f16\000vreinterpretq_s64_f32\000"
    "vreinterpretq_s64_s16\000vreinterpretq_s64_s32\000vreinterpretq_s64_s8\000"
    "vreinterpretq_s64_u16\000vreinterpretq_s64_u32\000vreinterpretq_s64_u64"
    "\000vreinterpretq_s64_u8\000vreinterpretq_s8\000vreinterpretq_s8_f16\000"
    "vreinterpretq_s8_f32\000vreinterpretq_s8_s16\000vreinterpretq_s8_s32\000"
    "vreinterpretq_s8_s64\000vreinterpretq_s8_u16\000vreinterpretq_s8_u32\000"
    "vreinterpretq_s8_u64\000vreinterpretq_s8_u8\000vreinterpretq_u16\000vre"
    "interpretq_u16_f16\000vreinterpretq_u16_f32\000vreinterpretq_u16_s16\000"
    "vreinterpretq_u16_s32\000vreinterpretq_u16_s64\000vreinterpretq_u16_s8\000"
    "vreinterpretq_u16_u32\000vreinterpretq_u16_u64\000vreinterpretq_u16_u8\000"
    "vreinterpretq_u32\000vreinterpretq_u32_f16\000vreinterpretq_u32_f32\000"
    "vreinterpretq_u32_s16\000vreinterpretq_u32_s32\000vreinterpretq_u32_s64"
    "\000vreinterpretq_u32_s8\000vreinterpretq_u32_u16\000vreinterpretq_u32_"
    "u64\000vreinterpretq_u32_u8\000vreinterpretq_u64\000vreinterpretq_u64_f"
    "16\000vreinterpretq_u64_f32\000vreinterpretq_u64_s16\000vreinterpretq_u"
    "64_s32\000vreinterpretq_u64_s64\000vreinterpretq_u64_s8\000vreinterpret"
    "q_u64_u16\000vreinterpretq_u64_u32\000vreinterpretq_u64_u8\000vreinterp"
    "retq_u8\000vreinterpretq_u8_f16\000vreinterpretq_u8_f32\000vreinterpret"
    "q_u8_s16\000vreinterpretq_u8_s32\000vreinterpretq_u8_s64\000vreinterpre"
    "tq_u8_s8\000vreinterpretq_u8_u16\000vreinterpretq_u8_u32\000vreinterpre"
    "tq_u8_u64\000vrev16q_m\000vrev16q_m_s8\000vrev16q_m_u8\000vrev16q\000vr"
    "ev16q_s8\000vrev16q_u8\000vrev16q_x\000vrev16q_x_s8\000vrev16q_x_u8\000"
    "vrev32q\000vrev32q_f16\000vrev32q_m\000vrev32q_m_f16\000vrev32q_m_s16\000"
    "vrev32q_m_s8\000vrev32q_m_u16\000vrev32q_m_u8\000vrev32q_s16\000vrev32q"
    "_s8\000vrev32q_u16\000vrev32q_u8\000vrev32q_x\000vrev32q_x_f16\000vrev3"
    "2q_x_s16\000vrev32q_x_s8\000vrev32q_x_u16\000vrev32q_x_u8\000vrev64q\000"
    "vrev64q_f16\000vrev64q_f32\000vrev64q_m\000vrev64q_m_f16\000vrev64q_m_f"
    "32\000vrev64q_m_s16\000vrev64q_m_s32\000vrev64q_m_s8\000vrev64q_m_u16\000"
    "vrev64q_m_u32\000vrev64q_m_u8\000vrev64q_s16\000vrev64q_s32\000vrev64q_"
    "s8\000vrev64q_u16\000vrev64q_u32\000vrev64q_u8\000vrev64q_x\000vrev64q_"
    "x_f16\000vrev64q_x_f32\000vrev64q_x_s16\000vrev64q_x_s32\000vrev64q_x_s"
    "8\000vrev64q_x_u16\000vrev64q_x_u32\000vrev64q_x_u8\000vrhaddq_m\000vrh"
    "addq_m_s16\000vrhaddq_m_s32\000vrhaddq_m_s8\000vrhaddq_m_u16\000vrhaddq"
    "_m_u32\000vrhaddq_m_u8\000vrhaddq\000vrhaddq_s16\000vrhaddq_s32\000vrha"
    "ddq_s8\000vrhaddq_u16\000vrhaddq_u32\000vrhaddq_u8\000vrhaddq_x\000vrha"
    "ddq_x_s16\000vrhaddq_x_s32\000vrhaddq_x_s8\000vrhaddq_x_u16\000vrhaddq_"
    "x_u32\000vrhaddq_x_u8\000vrmlaldavhaq_p\000vrmlaldavhaq_p_s32\000vrmlal"
    "davhaq_p_u32\000vrmlaldavhaq\000vrmlaldavhaq_s32\000vrmlaldavhaq_u32\000"
    "vrmlaldavhaxq_p\000vrmlaldavhaxq_p_s32\000vrmlaldavhaxq\000vrmlaldavhax"
    "q_s32\000vrmlaldavhq_p\000vrmlaldavhq_p_s32\000vrmlaldavhq_p_u32\000vrm"
    "laldavhq\000vrmlaldavhq_s32\000vrmlaldavhq_u32\000vrmlaldavhxq_p\000vrm"
    "laldavhxq_p_s32\000vrmlaldavhxq\000vrmlaldavhxq_s32\000vrmlsldavhaq_p\000"
    "vrmlsldavhaq_p_s32\000vrmlsldavhaq\000vrmlsldavhaq_s32\000vrmlsldavhaxq"
    "_p\000vrmlsldavhaxq_p_s32\000vrmlsldavhaxq\000vrmlsldavhaxq_s32\000vrml"
    "sldavhq_p\000vrmlsldavhq_p_s32\000vrmlsldavhq\000vrmlsldavhq_s32\000vrm"
    "lsldavhxq_p\000vrmlsldavhxq_p_s32\000vrmlsldavhxq\000vrmlsldavhxq_s32\000"
    "vrmulhq_m\000vrmulhq_m_s16\000vrmulhq_m_s32\000vrmulhq_m_s8\000vrmulhq_"
    "m_u16\000vrmulhq_m_u32\000vrmulhq_m_u8\000vrmulhq\000vrmulhq_s16\000vrm"
    "ulhq_s32\000vrmulhq_s8\000vrmulhq_u16\000vrmulhq_u32\000vrmulhq_u8\000v"
    "rmulhq_x\000vrmulhq_x_s16\000vrmulhq_x_s32\000vrmulhq_x_s8\000vrmulhq_x"
    "_u16\000vrmulhq_x_u32\000vrmulhq_x_u8\000vrndaq\000vrndaq_f16\000vrndaq"
    "_f32\000vrndaq_m\000vrndaq_m_f16\000vrndaq_m_f32\000vrndaq_x\000vrndaq_"
    "x_f16\000vrndaq_x_f32\000vrndmq\000vrndmq_f16\000vrndmq_f32\000vrndmq_m"
    "\000vrndmq_m_f16\000vrndmq_m_f32\000vrndmq_x\000vrndmq_x_f16\000vrndmq_"
    "x_f32\000vrndnq\000vrndnq_f16\000vrndnq_f32\000vrndnq_m\000vrndnq_m_f16"
    "\000vrndnq_m_f32\000vrndnq_x\000vrndnq_x_f16\000vrndnq_x_f32\000vrndpq\000"
    "vrndpq_f16\000vrndpq_f32\000vrndpq_m\000vrndpq_m_f16\000vrndpq_m_f32\000"
    "vrndpq_x\000vrndpq_x_f16\000vrndpq_x_f32\000vrndq\000vrndq_f16\000vrndq"
    "_f32\000vrndq_m\000vrndq_m_f16\000vrndq_m_f32\000vrndq_x\000vrndq_x_f16"
    "\000vrndq_x_f32\000vrndxq\000vrndxq_f16\000vrndxq_f32\000vrndxq_m\000vr"
    "ndxq_m_f16\000vrndxq_m_f32\000vrndxq_x\000vrndxq_x_f16\000vrndxq_x_f32\000"
    "vrshlq_m_n\000vrshlq_m_n_s16\000vrshlq_m_n_s32\000vrshlq_m_n_s8\000vrsh"
    "lq_m_n_u16\000vrshlq_m_n_u32\000vrshlq_m_n_u8\000vrshlq_m\000vrshlq_m_s"
    "16\000vrshlq_m_s32\000vrshlq_m_s8\000vrshlq_m_u16\000vrshlq_m_u32\000vr"
    "shlq_m_u8\000vrshlq\000vrshlq_n_s16\000vrshlq_n_s32\000vrshlq_n_s8\000v"
    "rshlq_n_u16\000vrshlq_n_u32\000vrshlq_n_u8\000vrshlq_s16\000vrshlq_s32\000"
    "vrshlq_s8\000vrshlq_u16\000vrshlq_u32\000vrshlq_u8\000vrshlq_x\000vrshl"
    "q_x_s16\000vrshlq_x_s32\000vrshlq_x_s8\000vrshlq_x_u16\000vrshlq_x_u32\000"
    "vrshlq_x_u8\000vrshrnbq_m\000vrshrnbq_m_n_s16\000vrshrnbq_m_n_s32\000vr"
    "shrnbq_m_n_u16\000vrshrnbq_m_n_u32\000vrshrnbq\000vrshrnbq_n_s16\000vrs"
    "hrnbq_n_s32\000vrshrnbq_n_u16\000vrshrnbq_n_u32\000vrshrntq_m\000vrshrn"
    "tq_m_n_s16\000vrshrntq_m_n_s32\000vrshrntq_m_n_u16\000vrshrntq_m_n_u32\000"
    "vrshrntq\000vrshrntq_n_s16\000vrshrntq_n_s32\000vrshrntq_n_u16\000vrshr"
    "ntq_n_u32\000vrshrq_m\000vrshrq_m_n_s16\000vrshrq_m_n_s32\000vrshrq_m_n"
    "_s8\000vrshrq_m_n_u16\000vrshrq_m_n_u32\000vrshrq_m_n_u8\000vrshrq\000v"
    "rshrq_n_s16\000vrshrq_n_s32\000vrshrq_n_s8\000vrshrq_n_u16\000vrshrq_n_"
    "u32\000vrshrq_n_u8\000vrshrq_x\000vrshrq_x_n_s16\000vrshrq_x_n_s32\000v"
    "rshrq_x_n_s8\000vrshrq_x_n_u16\000vrshrq_x_n_u32\000vrshrq_x_n_u8\000vs"
    "bciq_m\000vsbciq_m_s32\000vsbciq_m_u32\000vsbciq\000vsbciq_s32\000vsbci"
    "q_u32\000vsbcq_m\000vsbcq_m_s32\000vsbcq_m_u32\000vsbcq\000vsbcq_s32\000"
    "vsbcq_u32\000vsetq_lane\000vsetq_lane_f16\000vsetq_lane_f32\000vsetq_la"
    "ne_s16\000vsetq_lane_s32\000vsetq_lane_s64\000vsetq_lane_s8\000vsetq_la"
    "ne_u16\000vsetq_lane_u32\000vsetq_lane_u64\000vsetq_lane_u8\000vshlcq_m"
    "\000vshlcq_m_s16\000vshlcq_m_s32\000vshlcq_m_s8\000vshlcq_m_u16\000vshl"
    "cq_m_u32\000vshlcq_m_u8\000vshlcq\000vshlcq_s16\000vshlcq_s32\000vshlcq"
    "_s8\000vshlcq_u16\000vshlcq_u32\000vshlcq_u8\000vshllbq_m\000vshllbq_m_"
    "n_s16\000vshllbq_m_n_s8\000vshllbq_m_n_u16\000vshllbq_m_n_u8\000vshllbq"
    "\000vshllbq_n_s16\000vshllbq_n_s8\000vshllbq_n_u16\000vshllbq_n_u8\000v"
    "shllbq_x\000vshllbq_x_n_s16\000vshllbq_x_n_s8\000vshllbq_x_n_u16\000vsh"
    "llbq_x_n_u8\000vshlltq_m\000vshlltq_m_n_s16\000vshlltq_m_n_s8\000vshllt"
    "q_m_n_u16\000vshlltq_m_n_u8\000vshlltq\000vshlltq_n_s16\000vshlltq_n_s8"
    "\000vshlltq_n_u16\000vshlltq_n_u8\000vshlltq_x\000vshlltq_x_n_s16\000vs"
    "hlltq_x_n_s8\000vshlltq_x_n_u16\000vshlltq_x_n_u8\000vshlq_m_n\000vshlq"
    "_m_n_s16\000vshlq_m_n_s32\000vshlq_m_n_s8\000vshlq_m_n_u16\000vshlq_m_n"
    "_u32\000vshlq_m_n_u8\000vshlq_m_r\000vshlq_m_r_s16\000vshlq_m_r_s32\000"
    "vshlq_m_r_s8\000vshlq_m_r_u16\000vshlq_m_r_u32\000vshlq_m_r_u8\000vshlq"
    "_m\000vshlq_m_s16\000vshlq_m_s32\000vshlq_m_s8\000vshlq_m_u16\000vshlq_"
    "m_u32\000vshlq_m_u8\000vshlq_n\000vshlq_n_s16\000vshlq_n_s32\000vshlq_n"
    "_s8\000vshlq_n_u16\000vshlq_n_u32\000vshlq_n_u8\000vshlq_r\000vshlq_r_s"
    "16\000vshlq_r_s32\000vshlq_r_s8\000vshlq_r_u16\000vshlq_r_u32\000vshlq_"
    "r_u8\000vshlq\000vshlq_s16\000vshlq_s32\000vshlq_s8\000vshlq_u16\000vsh"
    "lq_u32\000vshlq_u8\000vshlq_x_n\000vshlq_x_n_s16\000vshlq_x_n_s32\000vs"
    "hlq_x_n_s8\000vshlq_x_n_u16\000vshlq_x_n_u32\000vshlq_x_n_u8\000vshlq_x"
    "\000vshlq_x_s16\000vshlq_x_s32\000vshlq_x_s8\000vshlq_x_u16\000vshlq_x_"
    "u32\000vshlq_x_u8\000vshrnbq_m\000vshrnbq_m_n_s16\000vshrnbq_m_n_s32\000"
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
    "32\000vsubq_m\000vsubq_m_f16\000vsubq_m_f32\000vsubq_m_n_f16\000vsubq_m"
    "_n_f32\000vsubq_m_n_s16\000vsubq_m_n_s32\000vsubq_m_n_s8\000vsubq_m_n_u"
    "16\000vsubq_m_n_u32\000vsubq_m_n_u8\000vsubq_m_s16\000vsubq_m_s32\000vs"
    "ubq_m_s8\000vsubq_m_u16\000vsubq_m_u32\000vsubq_m_u8\000vsubq_n_f16\000"
    "vsubq_n_f32\000vsubq_n_s16\000vsubq_n_s32\000vsubq_n_s8\000vsubq_n_u16\000"
    "vsubq_n_u32\000vsubq_n_u8\000vsubq_s16\000vsubq_s32\000vsubq_s8\000vsub"
    "q_u16\000vsubq_u32\000vsubq_u8\000vsubq_x\000vsubq_x_f16\000vsubq_x_f32"
    "\000vsubq_x_n_f16\000vsubq_x_n_f32\000vsubq_x_n_s16\000vsubq_x_n_s32\000"
    "vsubq_x_n_s8\000vsubq_x_n_u16\000vsubq_x_n_u32\000vsubq_x_n_u8\000vsubq"
    "_x_s16\000vsubq_x_s32\000vsubq_x_s8\000vsubq_x_u16\000vsubq_x_u32\000vs"
    "ubq_x_u8\000vuninitializedq_f16\000vuninitializedq_f32\000vuninitialize"
    "dq\000vuninitializedq_polymorphic_f16\000vuninitializedq_polymorphic_f3"
    "2\000vuninitializedq_polymorphic_s16\000vuninitializedq_polymorphic_s32"
    "\000vuninitializedq_polymorphic_s64\000vuninitializedq_polymorphic_s8\000"
    "vuninitializedq_polymorphic_u16\000vuninitializedq_polymorphic_u32\000v"
    "uninitializedq_polymorphic_u64\000vuninitializedq_polymorphic_u8\000vun"
    "initializedq_s16\000vuninitializedq_s32\000vuninitializedq_s64\000vunin"
    "itializedq_s8\000vuninitializedq_u16\000vuninitializedq_u32\000vuniniti"
    "alizedq_u64\000vuninitializedq_u8\000"};

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
