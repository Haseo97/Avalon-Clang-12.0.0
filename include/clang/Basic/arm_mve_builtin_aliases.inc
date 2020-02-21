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
  { ARM::BI__builtin_arm_mve_vabsq_s16, 590, 564},
  { ARM::BI__builtin_arm_mve_vabsq_s32, 600, 564},
  { ARM::BI__builtin_arm_mve_vabsq_s8, 610, 564},
  { ARM::BI__builtin_arm_mve_vadciq_m_s32, 628, 619},
  { ARM::BI__builtin_arm_mve_vadciq_m_u32, 641, 619},
  { ARM::BI__builtin_arm_mve_vadciq_s32, 661, 654},
  { ARM::BI__builtin_arm_mve_vadciq_u32, 672, 654},
  { ARM::BI__builtin_arm_mve_vadcq_m_s32, 691, 683},
  { ARM::BI__builtin_arm_mve_vadcq_m_u32, 703, 683},
  { ARM::BI__builtin_arm_mve_vadcq_s32, 721, 715},
  { ARM::BI__builtin_arm_mve_vadcq_u32, 731, 715},
  { ARM::BI__builtin_arm_mve_vaddq_f16, 747, 741},
  { ARM::BI__builtin_arm_mve_vaddq_f32, 757, 741},
  { ARM::BI__builtin_arm_mve_vaddq_m_f16, 775, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_f32, 787, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_f16, 799, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_f32, 813, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_s16, 827, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_s32, 841, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_s8, 855, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_u16, 868, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_u32, 882, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_n_u8, 896, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_s16, 909, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_s32, 921, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_s8, 933, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_u16, 944, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_u32, 956, 767},
  { ARM::BI__builtin_arm_mve_vaddq_m_u8, 968, 767},
  { ARM::BI__builtin_arm_mve_vaddq_n_f16, 979, 741},
  { ARM::BI__builtin_arm_mve_vaddq_n_f32, 991, 741},
  { ARM::BI__builtin_arm_mve_vaddq_n_s16, 1003, 741},
  { ARM::BI__builtin_arm_mve_vaddq_n_s32, 1015, 741},
  { ARM::BI__builtin_arm_mve_vaddq_n_s8, 1027, 741},
  { ARM::BI__builtin_arm_mve_vaddq_n_u16, 1038, 741},
  { ARM::BI__builtin_arm_mve_vaddq_n_u32, 1050, 741},
  { ARM::BI__builtin_arm_mve_vaddq_n_u8, 1062, 741},
  { ARM::BI__builtin_arm_mve_vaddq_s16, 1073, 741},
  { ARM::BI__builtin_arm_mve_vaddq_s32, 1083, 741},
  { ARM::BI__builtin_arm_mve_vaddq_s8, 1093, 741},
  { ARM::BI__builtin_arm_mve_vaddq_u16, 1102, 741},
  { ARM::BI__builtin_arm_mve_vaddq_u32, 1112, 741},
  { ARM::BI__builtin_arm_mve_vaddq_u8, 1122, 741},
  { ARM::BI__builtin_arm_mve_vaddq_x_f16, 1139, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_f32, 1151, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_f16, 1163, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_f32, 1177, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_s16, 1191, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_s32, 1205, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_s8, 1219, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_u16, 1232, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_u32, 1246, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_n_u8, 1260, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_s16, 1273, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_s32, 1285, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_s8, 1297, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_u16, 1308, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_u32, 1320, 1131},
  { ARM::BI__builtin_arm_mve_vaddq_x_u8, 1332, 1131},
  { ARM::BI__builtin_arm_mve_vandq_f16, 1349, 1343},
  { ARM::BI__builtin_arm_mve_vandq_f32, 1359, 1343},
  { ARM::BI__builtin_arm_mve_vandq_m_f16, 1377, 1369},
  { ARM::BI__builtin_arm_mve_vandq_m_f32, 1389, 1369},
  { ARM::BI__builtin_arm_mve_vandq_m_s16, 1401, 1369},
  { ARM::BI__builtin_arm_mve_vandq_m_s32, 1413, 1369},
  { ARM::BI__builtin_arm_mve_vandq_m_s8, 1425, 1369},
  { ARM::BI__builtin_arm_mve_vandq_m_u16, 1436, 1369},
  { ARM::BI__builtin_arm_mve_vandq_m_u32, 1448, 1369},
  { ARM::BI__builtin_arm_mve_vandq_m_u8, 1460, 1369},
  { ARM::BI__builtin_arm_mve_vandq_s16, 1471, 1343},
  { ARM::BI__builtin_arm_mve_vandq_s32, 1481, 1343},
  { ARM::BI__builtin_arm_mve_vandq_s8, 1491, 1343},
  { ARM::BI__builtin_arm_mve_vandq_u16, 1500, 1343},
  { ARM::BI__builtin_arm_mve_vandq_u32, 1510, 1343},
  { ARM::BI__builtin_arm_mve_vandq_u8, 1520, 1343},
  { ARM::BI__builtin_arm_mve_vandq_x_f16, 1537, 1529},
  { ARM::BI__builtin_arm_mve_vandq_x_f32, 1549, 1529},
  { ARM::BI__builtin_arm_mve_vandq_x_s16, 1561, 1529},
  { ARM::BI__builtin_arm_mve_vandq_x_s32, 1573, 1529},
  { ARM::BI__builtin_arm_mve_vandq_x_s8, 1585, 1529},
  { ARM::BI__builtin_arm_mve_vandq_x_u16, 1596, 1529},
  { ARM::BI__builtin_arm_mve_vandq_x_u32, 1608, 1529},
  { ARM::BI__builtin_arm_mve_vandq_x_u8, 1620, 1529},
  { ARM::BI__builtin_arm_mve_vbicq_f16, 1637, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_f32, 1647, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_m_f16, 1665, 1657},
  { ARM::BI__builtin_arm_mve_vbicq_m_f32, 1677, 1657},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_s16, 1699, 1689},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_s32, 1713, 1689},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_u16, 1727, 1689},
  { ARM::BI__builtin_arm_mve_vbicq_m_n_u32, 1741, 1689},
  { ARM::BI__builtin_arm_mve_vbicq_m_s16, 1755, 1657},
  { ARM::BI__builtin_arm_mve_vbicq_m_s32, 1767, 1657},
  { ARM::BI__builtin_arm_mve_vbicq_m_s8, 1779, 1657},
  { ARM::BI__builtin_arm_mve_vbicq_m_u16, 1790, 1657},
  { ARM::BI__builtin_arm_mve_vbicq_m_u32, 1802, 1657},
  { ARM::BI__builtin_arm_mve_vbicq_m_u8, 1814, 1657},
  { ARM::BI__builtin_arm_mve_vbicq_n_s16, 1825, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_n_s32, 1837, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_n_u16, 1849, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_n_u32, 1861, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_s16, 1873, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_s32, 1883, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_s8, 1893, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_u16, 1902, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_u32, 1912, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_u8, 1922, 1631},
  { ARM::BI__builtin_arm_mve_vbicq_x_f16, 1939, 1931},
  { ARM::BI__builtin_arm_mve_vbicq_x_f32, 1951, 1931},
  { ARM::BI__builtin_arm_mve_vbicq_x_s16, 1963, 1931},
  { ARM::BI__builtin_arm_mve_vbicq_x_s32, 1975, 1931},
  { ARM::BI__builtin_arm_mve_vbicq_x_s8, 1987, 1931},
  { ARM::BI__builtin_arm_mve_vbicq_x_u16, 1998, 1931},
  { ARM::BI__builtin_arm_mve_vbicq_x_u32, 2010, 1931},
  { ARM::BI__builtin_arm_mve_vbicq_x_u8, 2022, 1931},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_f16, 2042, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_f32, 2057, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_s16, 2072, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_s32, 2087, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_s64, 2102, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_s8, 2117, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_u16, 2131, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_u32, 2146, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_u64, 2161, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_m_n_u8, 2176, 2033},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_f16, 2197, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_f32, 2210, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_s16, 2223, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_s32, 2236, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_s64, 2249, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_s8, 2262, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_u16, 2274, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_u32, 2287, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_u64, 2300, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_n_u8, 2313, 2190},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_f16, 2334, 2325},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_f32, 2349, 2325},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_s16, 2364, 2325},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_s32, 2379, 2325},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_s64, 2394, 2325},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_s8, 2409, 2325},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_u16, 2423, 2325},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_u32, 2438, 2325},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_u64, 2453, 2325},
  { ARM::BI__builtin_arm_mve_vbrsrq_x_n_u8, 2468, 2325},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_f16, 2496, 2482},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_f32, 2514, 2482},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_f16, 2548, 2532},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_f32, 2568, 2532},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s16, 2588, 2532},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s32, 2608, 2532},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_s8, 2628, 2532},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u16, 2647, 2532},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u32, 2667, 2532},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_m_u8, 2687, 2532},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_s16, 2706, 2482},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_s32, 2724, 2482},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_s8, 2742, 2482},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_u16, 2759, 2482},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_u32, 2777, 2482},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_u8, 2795, 2482},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_f16, 2828, 2812},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_f32, 2848, 2812},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s16, 2868, 2812},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s32, 2888, 2812},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_s8, 2908, 2812},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u16, 2927, 2812},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u32, 2947, 2812},
  { ARM::BI__builtin_arm_mve_vcaddq_rot270_x_u8, 2967, 2812},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_f16, 2999, 2986},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_f32, 3016, 2986},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_f16, 3048, 3033},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_f32, 3067, 3033},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s16, 3086, 3033},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s32, 3105, 3033},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_s8, 3124, 3033},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u16, 3142, 3033},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u32, 3161, 3033},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_m_u8, 3180, 3033},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_s16, 3198, 2986},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_s32, 3215, 2986},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_s8, 3232, 2986},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_u16, 3248, 2986},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_u32, 3265, 2986},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_u8, 3282, 2986},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_f16, 3313, 3298},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_f32, 3332, 3298},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s16, 3351, 3298},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s32, 3370, 3298},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_s8, 3389, 3298},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u16, 3407, 3298},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u32, 3426, 3298},
  { ARM::BI__builtin_arm_mve_vcaddq_rot90_x_u8, 3445, 3298},
  { ARM::BI__builtin_arm_mve_vclsq_s16, 3469, 3463},
  { ARM::BI__builtin_arm_mve_vclsq_s32, 3479, 3463},
  { ARM::BI__builtin_arm_mve_vclsq_s8, 3489, 3463},
  { ARM::BI__builtin_arm_mve_vclzq_s16, 3504, 3498},
  { ARM::BI__builtin_arm_mve_vclzq_s32, 3514, 3498},
  { ARM::BI__builtin_arm_mve_vclzq_s8, 3524, 3498},
  { ARM::BI__builtin_arm_mve_vclzq_u16, 3533, 3498},
  { ARM::BI__builtin_arm_mve_vclzq_u32, 3543, 3498},
  { ARM::BI__builtin_arm_mve_vclzq_u8, 3553, 3498},
  { ARM::BI__builtin_arm_mve_vcmlaq_f16, 3569, 3562},
  { ARM::BI__builtin_arm_mve_vcmlaq_f32, 3580, 3562},
  { ARM::BI__builtin_arm_mve_vcmlaq_m_f16, 3600, 3591},
  { ARM::BI__builtin_arm_mve_vcmlaq_m_f32, 3613, 3591},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_f16, 3640, 3626},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_f32, 3658, 3626},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_m_f16, 3692, 3676},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot180_m_f32, 3712, 3676},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_f16, 3746, 3732},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_f32, 3764, 3732},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_m_f16, 3798, 3782},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot270_m_f32, 3818, 3782},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_f16, 3851, 3838},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_f32, 3868, 3838},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_m_f16, 3900, 3885},
  { ARM::BI__builtin_arm_mve_vcmlaq_rot90_m_f32, 3919, 3885},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u16, 3948, 3938},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u32, 3964, 3938},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_n_u8, 3980, 3938},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_u16, 3995, 3938},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_u32, 4009, 3938},
  { ARM::BI__builtin_arm_mve_vcmpcsq_m_u8, 4023, 3938},
  { ARM::BI__builtin_arm_mve_vcmpcsq_n_u16, 4044, 4036},
  { ARM::BI__builtin_arm_mve_vcmpcsq_n_u32, 4058, 4036},
  { ARM::BI__builtin_arm_mve_vcmpcsq_n_u8, 4072, 4036},
  { ARM::BI__builtin_arm_mve_vcmpcsq_u16, 4085, 4036},
  { ARM::BI__builtin_arm_mve_vcmpcsq_u32, 4097, 4036},
  { ARM::BI__builtin_arm_mve_vcmpcsq_u8, 4109, 4036},
  { ARM::BI__builtin_arm_mve_vcmpeqq_f16, 4128, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_f32, 4140, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_f16, 4162, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_f32, 4176, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_f16, 4190, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_f32, 4206, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s16, 4222, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s32, 4238, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_s8, 4254, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u16, 4269, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u32, 4285, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_n_u8, 4301, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_s16, 4316, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_s32, 4330, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_s8, 4344, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_u16, 4357, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_u32, 4371, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_m_u8, 4385, 4152},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_f16, 4398, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_f32, 4412, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_s16, 4426, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_s32, 4440, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_s8, 4454, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_u16, 4467, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_u32, 4481, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_n_u8, 4495, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_s16, 4508, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_s32, 4520, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_s8, 4532, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_u16, 4543, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_u32, 4555, 4120},
  { ARM::BI__builtin_arm_mve_vcmpeqq_u8, 4567, 4120},
  { ARM::BI__builtin_arm_mve_vcmpgeq_f16, 4586, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgeq_f32, 4598, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_f16, 4620, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_f32, 4634, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_f16, 4648, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_f32, 4664, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s16, 4680, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s32, 4696, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_n_s8, 4712, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_s16, 4727, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_s32, 4741, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_m_s8, 4755, 4610},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_f16, 4768, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_f32, 4782, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_s16, 4796, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_s32, 4810, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgeq_n_s8, 4824, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgeq_s16, 4837, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgeq_s32, 4849, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgeq_s8, 4861, 4578},
  { ARM::BI__builtin_arm_mve_vcmpgtq_f16, 4880, 4872},
  { ARM::BI__builtin_arm_mve_vcmpgtq_f32, 4892, 4872},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_f16, 4914, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_f32, 4928, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_f16, 4942, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_f32, 4958, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s16, 4974, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s32, 4990, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_n_s8, 5006, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_s16, 5021, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_s32, 5035, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_m_s8, 5049, 4904},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_f16, 5062, 4872},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_f32, 5076, 4872},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_s16, 5090, 4872},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_s32, 5104, 4872},
  { ARM::BI__builtin_arm_mve_vcmpgtq_n_s8, 5118, 4872},
  { ARM::BI__builtin_arm_mve_vcmpgtq_s16, 5131, 4872},
  { ARM::BI__builtin_arm_mve_vcmpgtq_s32, 5143, 4872},
  { ARM::BI__builtin_arm_mve_vcmpgtq_s8, 5155, 4872},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_n_u16, 5176, 5166},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_n_u32, 5192, 5166},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_n_u8, 5208, 5166},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_u16, 5223, 5166},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_u32, 5237, 5166},
  { ARM::BI__builtin_arm_mve_vcmphiq_m_u8, 5251, 5166},
  { ARM::BI__builtin_arm_mve_vcmphiq_n_u16, 5272, 5264},
  { ARM::BI__builtin_arm_mve_vcmphiq_n_u32, 5286, 5264},
  { ARM::BI__builtin_arm_mve_vcmphiq_n_u8, 5300, 5264},
  { ARM::BI__builtin_arm_mve_vcmphiq_u16, 5313, 5264},
  { ARM::BI__builtin_arm_mve_vcmphiq_u32, 5325, 5264},
  { ARM::BI__builtin_arm_mve_vcmphiq_u8, 5337, 5264},
  { ARM::BI__builtin_arm_mve_vcmpleq_f16, 5356, 5348},
  { ARM::BI__builtin_arm_mve_vcmpleq_f32, 5368, 5348},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_f16, 5390, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_f32, 5404, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_f16, 5418, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_f32, 5434, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_s16, 5450, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_s32, 5466, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_n_s8, 5482, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_s16, 5497, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_s32, 5511, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_m_s8, 5525, 5380},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_f16, 5538, 5348},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_f32, 5552, 5348},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_s16, 5566, 5348},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_s32, 5580, 5348},
  { ARM::BI__builtin_arm_mve_vcmpleq_n_s8, 5594, 5348},
  { ARM::BI__builtin_arm_mve_vcmpleq_s16, 5607, 5348},
  { ARM::BI__builtin_arm_mve_vcmpleq_s32, 5619, 5348},
  { ARM::BI__builtin_arm_mve_vcmpleq_s8, 5631, 5348},
  { ARM::BI__builtin_arm_mve_vcmpltq_f16, 5650, 5642},
  { ARM::BI__builtin_arm_mve_vcmpltq_f32, 5662, 5642},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_f16, 5684, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_f32, 5698, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_f16, 5712, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_f32, 5728, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_s16, 5744, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_s32, 5760, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_n_s8, 5776, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_s16, 5791, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_s32, 5805, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_m_s8, 5819, 5674},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_f16, 5832, 5642},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_f32, 5846, 5642},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_s16, 5860, 5642},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_s32, 5874, 5642},
  { ARM::BI__builtin_arm_mve_vcmpltq_n_s8, 5888, 5642},
  { ARM::BI__builtin_arm_mve_vcmpltq_s16, 5901, 5642},
  { ARM::BI__builtin_arm_mve_vcmpltq_s32, 5913, 5642},
  { ARM::BI__builtin_arm_mve_vcmpltq_s8, 5925, 5642},
  { ARM::BI__builtin_arm_mve_vcmpneq_f16, 5944, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_f32, 5956, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_f16, 5978, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_f32, 5992, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_f16, 6006, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_f32, 6022, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_s16, 6038, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_s32, 6054, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_s8, 6070, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_u16, 6085, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_u32, 6101, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_n_u8, 6117, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_s16, 6132, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_s32, 6146, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_s8, 6160, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_u16, 6173, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_u32, 6187, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_m_u8, 6201, 5968},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_f16, 6214, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_f32, 6228, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_s16, 6242, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_s32, 6256, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_s8, 6270, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_u16, 6283, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_u32, 6297, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_n_u8, 6311, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_s16, 6324, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_s32, 6336, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_s8, 6348, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_u16, 6359, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_u32, 6371, 5936},
  { ARM::BI__builtin_arm_mve_vcmpneq_u8, 6383, 5936},
  { ARM::BI__builtin_arm_mve_vcmulq_f16, 6401, 6394},
  { ARM::BI__builtin_arm_mve_vcmulq_f32, 6412, 6394},
  { ARM::BI__builtin_arm_mve_vcmulq_m_f16, 6432, 6423},
  { ARM::BI__builtin_arm_mve_vcmulq_m_f32, 6445, 6423},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_f16, 6472, 6458},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_f32, 6490, 6458},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_m_f16, 6524, 6508},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_m_f32, 6544, 6508},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_x_f16, 6580, 6564},
  { ARM::BI__builtin_arm_mve_vcmulq_rot180_x_f32, 6600, 6564},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_f16, 6634, 6620},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_f32, 6652, 6620},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_m_f16, 6686, 6670},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_m_f32, 6706, 6670},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_x_f16, 6742, 6726},
  { ARM::BI__builtin_arm_mve_vcmulq_rot270_x_f32, 6762, 6726},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_f16, 6795, 6782},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_f32, 6812, 6782},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_m_f16, 6844, 6829},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_m_f32, 6863, 6829},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_x_f16, 6897, 6882},
  { ARM::BI__builtin_arm_mve_vcmulq_rot90_x_f32, 6916, 6882},
  { ARM::BI__builtin_arm_mve_vcmulq_x_f16, 6944, 6935},
  { ARM::BI__builtin_arm_mve_vcmulq_x_f32, 6957, 6935},
  { ARM::BI__builtin_arm_mve_vcreateq_f16, 6970, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_f32, 6983, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s16, 6996, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s32, 7009, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s64, 7022, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_s8, 7035, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u16, 7047, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u32, 7060, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u64, 7073, -1},
  { ARM::BI__builtin_arm_mve_vcreateq_u8, 7086, -1},
  { ARM::BI__builtin_arm_mve_vctp16q, 7098, -1},
  { ARM::BI__builtin_arm_mve_vctp16q_m, 7106, -1},
  { ARM::BI__builtin_arm_mve_vctp32q, 7116, -1},
  { ARM::BI__builtin_arm_mve_vctp32q_m, 7124, -1},
  { ARM::BI__builtin_arm_mve_vctp64q, 7134, -1},
  { ARM::BI__builtin_arm_mve_vctp64q_m, 7142, -1},
  { ARM::BI__builtin_arm_mve_vctp8q, 7152, -1},
  { ARM::BI__builtin_arm_mve_vctp8q_m, 7159, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_f16_f32, 7168, -1},
  { ARM::BI__builtin_arm_mve_vcvtbq_m_f16_f32, 7183, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_f16_s16, 7206, 7200},
  { ARM::BI__builtin_arm_mve_vcvtq_f16_u16, 7220, 7200},
  { ARM::BI__builtin_arm_mve_vcvtq_f32_s32, 7234, 7200},
  { ARM::BI__builtin_arm_mve_vcvtq_f32_u32, 7248, 7200},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f16_s16, 7272, 7262},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f16_u16, 7290, 7262},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f32_s32, 7308, 7262},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_f32_u32, 7326, 7262},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_s16_f16, 7344, 7262},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_s32_f32, 7362, 7262},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_u16_f16, 7380, 7262},
  { ARM::BI__builtin_arm_mve_vcvtq_m_n_u32_f32, 7398, 7262},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f16_s16, 7424, 7416},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f16_u16, 7440, 7416},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f32_s32, 7456, 7416},
  { ARM::BI__builtin_arm_mve_vcvtq_n_f32_u32, 7472, 7416},
  { ARM::BI__builtin_arm_mve_vcvtq_n_s16_f16, 7488, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_n_s32_f32, 7504, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_n_u16_f16, 7520, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_n_u32_f32, 7536, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_s16_f16, 7552, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_s32_f32, 7566, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_u16_f16, 7580, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_u32_f32, 7594, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f16_s16, 7618, 7608},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f16_u16, 7636, 7608},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f32_s32, 7654, 7608},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_f32_u32, 7672, 7608},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_s16_f16, 7690, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_s32_f32, 7708, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_u16_f16, 7726, -1},
  { ARM::BI__builtin_arm_mve_vcvtq_x_n_u32_f32, 7744, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_f16_f32, 7762, -1},
  { ARM::BI__builtin_arm_mve_vcvttq_m_f16_f32, 7777, -1},
  { ARM::BI__builtin_arm_mve_vddupq_m_n_u16, 7803, 7794},
  { ARM::BI__builtin_arm_mve_vddupq_m_n_u32, 7818, 7794},
  { ARM::BI__builtin_arm_mve_vddupq_m_n_u8, 7833, 7794},
  { ARM::BI__builtin_arm_mve_vddupq_m_wb_u16, 7847, 7794},
  { ARM::BI__builtin_arm_mve_vddupq_m_wb_u32, 7863, 7794},
  { ARM::BI__builtin_arm_mve_vddupq_m_wb_u8, 7879, 7794},
  { ARM::BI__builtin_arm_mve_vddupq_n_u16, 7905, 7894},
  { ARM::BI__builtin_arm_mve_vddupq_n_u32, 7929, 7918},
  { ARM::BI__builtin_arm_mve_vddupq_n_u8, 7952, 7942},
  { ARM::BI__builtin_arm_mve_vddupq_wb_u16, 7964, 7894},
  { ARM::BI__builtin_arm_mve_vddupq_wb_u32, 7978, 7918},
  { ARM::BI__builtin_arm_mve_vddupq_wb_u8, 7992, 7942},
  { ARM::BI__builtin_arm_mve_vddupq_x_n_u16, 8018, 8005},
  { ARM::BI__builtin_arm_mve_vddupq_x_n_u32, 8046, 8033},
  { ARM::BI__builtin_arm_mve_vddupq_x_n_u8, 8073, 8061},
  { ARM::BI__builtin_arm_mve_vddupq_x_wb_u16, 8087, 8005},
  { ARM::BI__builtin_arm_mve_vddupq_x_wb_u32, 8103, 8033},
  { ARM::BI__builtin_arm_mve_vddupq_x_wb_u8, 8119, 8061},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_f16, 8142, 8134},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_f32, 8156, 8134},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_s16, 8170, 8134},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_s32, 8184, 8134},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_s8, 8198, 8134},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_u16, 8211, 8134},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_u32, 8225, 8134},
  { ARM::BI__builtin_arm_mve_vdupq_m_n_u8, 8239, 8134},
  { ARM::BI__builtin_arm_mve_vdupq_n_f16, 8252, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_f32, 8264, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_s16, 8276, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_s32, 8288, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_s8, 8300, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_u16, 8311, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_u32, 8323, -1},
  { ARM::BI__builtin_arm_mve_vdupq_n_u8, 8335, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_f16, 8346, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_f32, 8360, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_s16, 8374, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_s32, 8388, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_s8, 8402, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_u16, 8415, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_u32, 8429, -1},
  { ARM::BI__builtin_arm_mve_vdupq_x_n_u8, 8443, -1},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_n_u16, 8466, 8456},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_n_u32, 8482, 8456},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_n_u8, 8498, 8456},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_wb_u16, 8513, 8456},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_wb_u32, 8530, 8456},
  { ARM::BI__builtin_arm_mve_vdwdupq_m_wb_u8, 8547, 8456},
  { ARM::BI__builtin_arm_mve_vdwdupq_n_u16, 8575, 8563},
  { ARM::BI__builtin_arm_mve_vdwdupq_n_u32, 8601, 8589},
  { ARM::BI__builtin_arm_mve_vdwdupq_n_u8, 8626, 8615},
  { ARM::BI__builtin_arm_mve_vdwdupq_wb_u16, 8639, 8563},
  { ARM::BI__builtin_arm_mve_vdwdupq_wb_u32, 8654, 8589},
  { ARM::BI__builtin_arm_mve_vdwdupq_wb_u8, 8669, 8615},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_n_u16, 8697, 8683},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_n_u32, 8727, 8713},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_n_u8, 8756, 8743},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_wb_u16, 8771, 8683},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_wb_u32, 8788, 8713},
  { ARM::BI__builtin_arm_mve_vdwdupq_x_wb_u8, 8805, 8743},
  { ARM::BI__builtin_arm_mve_veorq_f16, 8827, 8821},
  { ARM::BI__builtin_arm_mve_veorq_f32, 8837, 8821},
  { ARM::BI__builtin_arm_mve_veorq_m_f16, 8855, 8847},
  { ARM::BI__builtin_arm_mve_veorq_m_f32, 8867, 8847},
  { ARM::BI__builtin_arm_mve_veorq_m_s16, 8879, 8847},
  { ARM::BI__builtin_arm_mve_veorq_m_s32, 8891, 8847},
  { ARM::BI__builtin_arm_mve_veorq_m_s8, 8903, 8847},
  { ARM::BI__builtin_arm_mve_veorq_m_u16, 8914, 8847},
  { ARM::BI__builtin_arm_mve_veorq_m_u32, 8926, 8847},
  { ARM::BI__builtin_arm_mve_veorq_m_u8, 8938, 8847},
  { ARM::BI__builtin_arm_mve_veorq_s16, 8949, 8821},
  { ARM::BI__builtin_arm_mve_veorq_s32, 8959, 8821},
  { ARM::BI__builtin_arm_mve_veorq_s8, 8969, 8821},
  { ARM::BI__builtin_arm_mve_veorq_u16, 8978, 8821},
  { ARM::BI__builtin_arm_mve_veorq_u32, 8988, 8821},
  { ARM::BI__builtin_arm_mve_veorq_u8, 8998, 8821},
  { ARM::BI__builtin_arm_mve_veorq_x_f16, 9015, 9007},
  { ARM::BI__builtin_arm_mve_veorq_x_f32, 9027, 9007},
  { ARM::BI__builtin_arm_mve_veorq_x_s16, 9039, 9007},
  { ARM::BI__builtin_arm_mve_veorq_x_s32, 9051, 9007},
  { ARM::BI__builtin_arm_mve_veorq_x_s8, 9063, 9007},
  { ARM::BI__builtin_arm_mve_veorq_x_u16, 9074, 9007},
  { ARM::BI__builtin_arm_mve_veorq_x_u32, 9086, 9007},
  { ARM::BI__builtin_arm_mve_veorq_x_u8, 9098, 9007},
  { ARM::BI__builtin_arm_mve_vgetq_lane_f16, 9120, 9109},
  { ARM::BI__builtin_arm_mve_vgetq_lane_f32, 9135, 9109},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s16, 9150, 9109},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s32, 9165, 9109},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s64, 9180, 9109},
  { ARM::BI__builtin_arm_mve_vgetq_lane_s8, 9195, 9109},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u16, 9209, 9109},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u32, 9224, 9109},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u64, 9239, 9109},
  { ARM::BI__builtin_arm_mve_vgetq_lane_u8, 9254, 9109},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_s16, 9277, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_s32, 9292, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_s8, 9307, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_u16, 9321, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_u32, 9336, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_n_u8, 9351, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s16, 9365, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s32, 9378, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_s8, 9391, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u16, 9403, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u32, 9416, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_m_u8, 9429, 9268},
  { ARM::BI__builtin_arm_mve_vhaddq_n_s16, 9448, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_n_s32, 9461, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_n_s8, 9474, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_n_u16, 9486, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_n_u32, 9499, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_n_u8, 9512, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_s16, 9524, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_s32, 9535, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_s8, 9546, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_u16, 9556, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_u32, 9567, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_u8, 9578, 9441},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_s16, 9597, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_s32, 9612, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_s8, 9627, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_u16, 9641, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_u32, 9656, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_n_u8, 9671, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s16, 9685, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s32, 9698, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_s8, 9711, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u16, 9723, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u32, 9736, 9588},
  { ARM::BI__builtin_arm_mve_vhaddq_x_u8, 9749, 9588},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s16, 9778, 9761},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s32, 9799, 9761},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_m_s8, 9820, 9761},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s16, 9855, 9840},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s32, 9874, 9840},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_s8, 9893, 9840},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s16, 9928, 9911},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s32, 9949, 9911},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot270_x_s8, 9970, 9911},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s16, 10006, 9990},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s32, 10026, 9990},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_m_s8, 10046, 9990},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s16, 10079, 10065},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s32, 10097, 10065},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_s8, 10115, 10065},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s16, 10148, 10132},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s32, 10168, 10132},
  { ARM::BI__builtin_arm_mve_vhcaddq_rot90_x_s8, 10188, 10132},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_s16, 10216, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_s32, 10231, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_s8, 10246, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_u16, 10260, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_u32, 10275, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_n_u8, 10290, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s16, 10304, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s32, 10317, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_s8, 10330, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u16, 10342, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u32, 10355, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_m_u8, 10368, 10207},
  { ARM::BI__builtin_arm_mve_vhsubq_n_s16, 10387, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_n_s32, 10400, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_n_s8, 10413, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_n_u16, 10425, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_n_u32, 10438, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_n_u8, 10451, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_s16, 10463, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_s32, 10474, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_s8, 10485, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_u16, 10495, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_u32, 10506, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_u8, 10517, 10380},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_s16, 10536, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_s32, 10551, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_s8, 10566, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_u16, 10580, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_u32, 10595, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_n_u8, 10610, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s16, 10624, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s32, 10637, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_s8, 10650, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u16, 10662, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u32, 10675, 10527},
  { ARM::BI__builtin_arm_mve_vhsubq_x_u8, 10688, 10527},
  { ARM::BI__builtin_arm_mve_vidupq_m_n_u16, 10709, 10700},
  { ARM::BI__builtin_arm_mve_vidupq_m_n_u32, 10724, 10700},
  { ARM::BI__builtin_arm_mve_vidupq_m_n_u8, 10739, 10700},
  { ARM::BI__builtin_arm_mve_vidupq_m_wb_u16, 10753, 10700},
  { ARM::BI__builtin_arm_mve_vidupq_m_wb_u32, 10769, 10700},
  { ARM::BI__builtin_arm_mve_vidupq_m_wb_u8, 10785, 10700},
  { ARM::BI__builtin_arm_mve_vidupq_n_u16, 10811, 10800},
  { ARM::BI__builtin_arm_mve_vidupq_n_u32, 10835, 10824},
  { ARM::BI__builtin_arm_mve_vidupq_n_u8, 10858, 10848},
  { ARM::BI__builtin_arm_mve_vidupq_wb_u16, 10870, 10800},
  { ARM::BI__builtin_arm_mve_vidupq_wb_u32, 10884, 10824},
  { ARM::BI__builtin_arm_mve_vidupq_wb_u8, 10898, 10848},
  { ARM::BI__builtin_arm_mve_vidupq_x_n_u16, 10924, 10911},
  { ARM::BI__builtin_arm_mve_vidupq_x_n_u32, 10952, 10939},
  { ARM::BI__builtin_arm_mve_vidupq_x_n_u8, 10979, 10967},
  { ARM::BI__builtin_arm_mve_vidupq_x_wb_u16, 10993, 10911},
  { ARM::BI__builtin_arm_mve_vidupq_x_wb_u32, 11009, 10939},
  { ARM::BI__builtin_arm_mve_vidupq_x_wb_u8, 11025, 10967},
  { ARM::BI__builtin_arm_mve_viwdupq_m_n_u16, 11050, 11040},
  { ARM::BI__builtin_arm_mve_viwdupq_m_n_u32, 11066, 11040},
  { ARM::BI__builtin_arm_mve_viwdupq_m_n_u8, 11082, 11040},
  { ARM::BI__builtin_arm_mve_viwdupq_m_wb_u16, 11097, 11040},
  { ARM::BI__builtin_arm_mve_viwdupq_m_wb_u32, 11114, 11040},
  { ARM::BI__builtin_arm_mve_viwdupq_m_wb_u8, 11131, 11040},
  { ARM::BI__builtin_arm_mve_viwdupq_n_u16, 11159, 11147},
  { ARM::BI__builtin_arm_mve_viwdupq_n_u32, 11185, 11173},
  { ARM::BI__builtin_arm_mve_viwdupq_n_u8, 11210, 11199},
  { ARM::BI__builtin_arm_mve_viwdupq_wb_u16, 11223, 11147},
  { ARM::BI__builtin_arm_mve_viwdupq_wb_u32, 11238, 11173},
  { ARM::BI__builtin_arm_mve_viwdupq_wb_u8, 11253, 11199},
  { ARM::BI__builtin_arm_mve_viwdupq_x_n_u16, 11281, 11267},
  { ARM::BI__builtin_arm_mve_viwdupq_x_n_u32, 11311, 11297},
  { ARM::BI__builtin_arm_mve_viwdupq_x_n_u8, 11340, 11327},
  { ARM::BI__builtin_arm_mve_viwdupq_x_wb_u16, 11355, 11267},
  { ARM::BI__builtin_arm_mve_viwdupq_x_wb_u32, 11372, 11297},
  { ARM::BI__builtin_arm_mve_viwdupq_x_wb_u8, 11389, 11327},
  { ARM::BI__builtin_arm_mve_vld1q_f16, 11411, 11405},
  { ARM::BI__builtin_arm_mve_vld1q_f32, 11421, 11405},
  { ARM::BI__builtin_arm_mve_vld1q_s16, 11431, 11405},
  { ARM::BI__builtin_arm_mve_vld1q_s32, 11441, 11405},
  { ARM::BI__builtin_arm_mve_vld1q_s8, 11451, 11405},
  { ARM::BI__builtin_arm_mve_vld1q_u16, 11460, 11405},
  { ARM::BI__builtin_arm_mve_vld1q_u32, 11470, 11405},
  { ARM::BI__builtin_arm_mve_vld1q_u8, 11480, 11405},
  { ARM::BI__builtin_arm_mve_vld1q_z_f16, 11497, 11489},
  { ARM::BI__builtin_arm_mve_vld1q_z_f32, 11509, 11489},
  { ARM::BI__builtin_arm_mve_vld1q_z_s16, 11521, 11489},
  { ARM::BI__builtin_arm_mve_vld1q_z_s32, 11533, 11489},
  { ARM::BI__builtin_arm_mve_vld1q_z_s8, 11545, 11489},
  { ARM::BI__builtin_arm_mve_vld1q_z_u16, 11556, 11489},
  { ARM::BI__builtin_arm_mve_vld1q_z_u32, 11568, 11489},
  { ARM::BI__builtin_arm_mve_vld1q_z_u8, 11580, 11489},
  { ARM::BI__builtin_arm_mve_vld2q_f16, 11597, 11591},
  { ARM::BI__builtin_arm_mve_vld2q_f32, 11607, 11591},
  { ARM::BI__builtin_arm_mve_vld2q_s16, 11617, 11591},
  { ARM::BI__builtin_arm_mve_vld2q_s32, 11627, 11591},
  { ARM::BI__builtin_arm_mve_vld2q_s8, 11637, 11591},
  { ARM::BI__builtin_arm_mve_vld2q_u16, 11646, 11591},
  { ARM::BI__builtin_arm_mve_vld2q_u32, 11656, 11591},
  { ARM::BI__builtin_arm_mve_vld2q_u8, 11666, 11591},
  { ARM::BI__builtin_arm_mve_vld4q_f16, 11681, 11675},
  { ARM::BI__builtin_arm_mve_vld4q_f32, 11691, 11675},
  { ARM::BI__builtin_arm_mve_vld4q_s16, 11701, 11675},
  { ARM::BI__builtin_arm_mve_vld4q_s32, 11711, 11675},
  { ARM::BI__builtin_arm_mve_vld4q_s8, 11721, 11675},
  { ARM::BI__builtin_arm_mve_vld4q_u16, 11730, 11675},
  { ARM::BI__builtin_arm_mve_vld4q_u32, 11740, 11675},
  { ARM::BI__builtin_arm_mve_vld4q_u8, 11750, 11675},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s16, 11780, 11759},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s32, 11805, 11759},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_s8, 11830, 11759},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u16, 11854, 11759},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u32, 11879, 11759},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_u8, 11904, 11759},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s16, 11951, 11928},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s32, 11978, 11928},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_s8, 12005, 11928},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u16, 12031, 11928},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u32, 12058, 11928},
  { ARM::BI__builtin_arm_mve_vldrbq_gather_offset_z_u8, 12085, 11928},
  { ARM::BI__builtin_arm_mve_vldrbq_s16, 12111, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_s32, 12122, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_s8, 12133, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u16, 12143, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u32, 12154, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_u8, 12165, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s16, 12175, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s32, 12188, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_s8, 12201, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u16, 12213, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u32, 12226, -1},
  { ARM::BI__builtin_arm_mve_vldrbq_z_u8, 12239, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_s64, 12251, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_u64, 12274, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_s64, 12297, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_u64, 12323, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64, 12349, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64, 12377, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_s64, 12405, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_u64, 12430, -1},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_s64, 12476, 12455},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_u64, 12501, 12455},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_s64, 12549, 12526},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_offset_z_u64, 12576, 12526},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_s64, 12632, 12603},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_u64, 12665, 12603},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_s64, 12729, 12698},
  { ARM::BI__builtin_arm_mve_vldrdq_gather_shifted_offset_z_u64, 12764, 12698},
  { ARM::BI__builtin_arm_mve_vldrhq_f16, 12799, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_f16, 12831, 12810},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s16, 12856, 12810},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_s32, 12881, 12810},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u16, 12906, 12810},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_u32, 12931, 12810},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_f16, 12979, 12956},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s16, 13006, 12956},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_s32, 13033, 12956},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u16, 13060, 12956},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_offset_z_u32, 13087, 12956},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_f16, 13143, 13114},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s16, 13176, 13114},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_s32, 13209, 13114},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u16, 13242, 13114},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_u32, 13275, 13114},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_f16, 13339, 13308},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s16, 13374, 13308},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s32, 13409, 13308},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u16, 13444, 13308},
  { ARM::BI__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u32, 13479, 13308},
  { ARM::BI__builtin_arm_mve_vldrhq_s16, 13514, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_s32, 13525, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_u16, 13536, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_u32, 13547, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_f16, 13558, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_s16, 13571, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_s32, 13584, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_u16, 13597, -1},
  { ARM::BI__builtin_arm_mve_vldrhq_z_u32, 13610, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_f32, 13623, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_f32, 13634, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_s32, 13657, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_u32, 13680, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32, 13703, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32, 13729, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32, 13755, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_f32, 13781, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_s32, 13809, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_u32, 13837, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_f32, 13865, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_s32, 13890, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_u32, 13915, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_f32, 13961, 13940},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_s32, 13986, 13940},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_u32, 14011, 13940},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_f32, 14059, 14036},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_s32, 14086, 14036},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_offset_z_u32, 14113, 14036},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_f32, 14169, 14140},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_s32, 14202, 14140},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_u32, 14235, 14140},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_f32, 14299, 14268},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_s32, 14334, 14268},
  { ARM::BI__builtin_arm_mve_vldrwq_gather_shifted_offset_z_u32, 14369, 14268},
  { ARM::BI__builtin_arm_mve_vldrwq_s32, 14404, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_u32, 14415, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_f32, 14426, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_s32, 14439, -1},
  { ARM::BI__builtin_arm_mve_vldrwq_z_u32, 14452, -1},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s16, 14474, 14465},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s32, 14487, 14465},
  { ARM::BI__builtin_arm_mve_vmaxaq_m_s8, 14500, 14465},
  { ARM::BI__builtin_arm_mve_vmaxaq_s16, 14519, 14512},
  { ARM::BI__builtin_arm_mve_vmaxaq_s32, 14530, 14512},
  { ARM::BI__builtin_arm_mve_vmaxaq_s8, 14541, 14512},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_f16, 14560, 14551},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_f32, 14573, 14551},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_m_f16, 14597, 14586},
  { ARM::BI__builtin_arm_mve_vmaxnmaq_m_f32, 14612, 14586},
  { ARM::BI__builtin_arm_mve_vmaxnmq_f16, 14635, 14627},
  { ARM::BI__builtin_arm_mve_vmaxnmq_f32, 14647, 14627},
  { ARM::BI__builtin_arm_mve_vmaxnmq_m_f16, 14669, 14659},
  { ARM::BI__builtin_arm_mve_vmaxnmq_m_f32, 14683, 14659},
  { ARM::BI__builtin_arm_mve_vmaxnmq_x_f16, 14707, 14697},
  { ARM::BI__builtin_arm_mve_vmaxnmq_x_f32, 14721, 14697},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s16, 14743, 14735},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s32, 14755, 14735},
  { ARM::BI__builtin_arm_mve_vmaxq_m_s8, 14767, 14735},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u16, 14778, 14735},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u32, 14790, 14735},
  { ARM::BI__builtin_arm_mve_vmaxq_m_u8, 14802, 14735},
  { ARM::BI__builtin_arm_mve_vmaxq_s16, 14819, 14813},
  { ARM::BI__builtin_arm_mve_vmaxq_s32, 14829, 14813},
  { ARM::BI__builtin_arm_mve_vmaxq_s8, 14839, 14813},
  { ARM::BI__builtin_arm_mve_vmaxq_u16, 14848, 14813},
  { ARM::BI__builtin_arm_mve_vmaxq_u32, 14858, 14813},
  { ARM::BI__builtin_arm_mve_vmaxq_u8, 14868, 14813},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s16, 14885, 14877},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s32, 14897, 14877},
  { ARM::BI__builtin_arm_mve_vmaxq_x_s8, 14909, 14877},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u16, 14920, 14877},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u32, 14932, 14877},
  { ARM::BI__builtin_arm_mve_vmaxq_x_u8, 14944, 14877},
  { ARM::BI__builtin_arm_mve_vmaxvq_s16, 14962, 14955},
  { ARM::BI__builtin_arm_mve_vmaxvq_s32, 14973, 14955},
  { ARM::BI__builtin_arm_mve_vmaxvq_s8, 14984, 14955},
  { ARM::BI__builtin_arm_mve_vmaxvq_u16, 14994, 14955},
  { ARM::BI__builtin_arm_mve_vmaxvq_u32, 15005, 14955},
  { ARM::BI__builtin_arm_mve_vmaxvq_u8, 15016, 14955},
  { ARM::BI__builtin_arm_mve_vminaq_m_s16, 15035, 15026},
  { ARM::BI__builtin_arm_mve_vminaq_m_s32, 15048, 15026},
  { ARM::BI__builtin_arm_mve_vminaq_m_s8, 15061, 15026},
  { ARM::BI__builtin_arm_mve_vminaq_s16, 15080, 15073},
  { ARM::BI__builtin_arm_mve_vminaq_s32, 15091, 15073},
  { ARM::BI__builtin_arm_mve_vminaq_s8, 15102, 15073},
  { ARM::BI__builtin_arm_mve_vminnmaq_f16, 15121, 15112},
  { ARM::BI__builtin_arm_mve_vminnmaq_f32, 15134, 15112},
  { ARM::BI__builtin_arm_mve_vminnmaq_m_f16, 15158, 15147},
  { ARM::BI__builtin_arm_mve_vminnmaq_m_f32, 15173, 15147},
  { ARM::BI__builtin_arm_mve_vminnmq_f16, 15196, 15188},
  { ARM::BI__builtin_arm_mve_vminnmq_f32, 15208, 15188},
  { ARM::BI__builtin_arm_mve_vminnmq_m_f16, 15230, 15220},
  { ARM::BI__builtin_arm_mve_vminnmq_m_f32, 15244, 15220},
  { ARM::BI__builtin_arm_mve_vminnmq_x_f16, 15268, 15258},
  { ARM::BI__builtin_arm_mve_vminnmq_x_f32, 15282, 15258},
  { ARM::BI__builtin_arm_mve_vminq_m_s16, 15304, 15296},
  { ARM::BI__builtin_arm_mve_vminq_m_s32, 15316, 15296},
  { ARM::BI__builtin_arm_mve_vminq_m_s8, 15328, 15296},
  { ARM::BI__builtin_arm_mve_vminq_m_u16, 15339, 15296},
  { ARM::BI__builtin_arm_mve_vminq_m_u32, 15351, 15296},
  { ARM::BI__builtin_arm_mve_vminq_m_u8, 15363, 15296},
  { ARM::BI__builtin_arm_mve_vminq_s16, 15380, 15374},
  { ARM::BI__builtin_arm_mve_vminq_s32, 15390, 15374},
  { ARM::BI__builtin_arm_mve_vminq_s8, 15400, 15374},
  { ARM::BI__builtin_arm_mve_vminq_u16, 15409, 15374},
  { ARM::BI__builtin_arm_mve_vminq_u32, 15419, 15374},
  { ARM::BI__builtin_arm_mve_vminq_u8, 15429, 15374},
  { ARM::BI__builtin_arm_mve_vminq_x_s16, 15446, 15438},
  { ARM::BI__builtin_arm_mve_vminq_x_s32, 15458, 15438},
  { ARM::BI__builtin_arm_mve_vminq_x_s8, 15470, 15438},
  { ARM::BI__builtin_arm_mve_vminq_x_u16, 15481, 15438},
  { ARM::BI__builtin_arm_mve_vminq_x_u32, 15493, 15438},
  { ARM::BI__builtin_arm_mve_vminq_x_u8, 15505, 15438},
  { ARM::BI__builtin_arm_mve_vminvq_s16, 15523, 15516},
  { ARM::BI__builtin_arm_mve_vminvq_s32, 15534, 15516},
  { ARM::BI__builtin_arm_mve_vminvq_s8, 15545, 15516},
  { ARM::BI__builtin_arm_mve_vminvq_u16, 15555, 15516},
  { ARM::BI__builtin_arm_mve_vminvq_u32, 15566, 15516},
  { ARM::BI__builtin_arm_mve_vminvq_u8, 15577, 15516},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s16, 15599, 15587},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s32, 15615, 15587},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_s8, 15631, 15587},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u16, 15646, 15587},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u32, 15662, 15587},
  { ARM::BI__builtin_arm_mve_vmladavaq_p_u8, 15678, 15587},
  { ARM::BI__builtin_arm_mve_vmladavaq_s16, 15703, 15693},
  { ARM::BI__builtin_arm_mve_vmladavaq_s32, 15717, 15693},
  { ARM::BI__builtin_arm_mve_vmladavaq_s8, 15731, 15693},
  { ARM::BI__builtin_arm_mve_vmladavaq_u16, 15744, 15693},
  { ARM::BI__builtin_arm_mve_vmladavaq_u32, 15758, 15693},
  { ARM::BI__builtin_arm_mve_vmladavaq_u8, 15772, 15693},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s16, 15798, 15785},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s32, 15815, 15785},
  { ARM::BI__builtin_arm_mve_vmladavaxq_p_s8, 15832, 15785},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s16, 15859, 15848},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s32, 15874, 15848},
  { ARM::BI__builtin_arm_mve_vmladavaxq_s8, 15889, 15848},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s16, 15914, 15903},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s32, 15929, 15903},
  { ARM::BI__builtin_arm_mve_vmladavq_p_s8, 15944, 15903},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u16, 15958, 15903},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u32, 15973, 15903},
  { ARM::BI__builtin_arm_mve_vmladavq_p_u8, 15988, 15903},
  { ARM::BI__builtin_arm_mve_vmladavq_s16, 16011, 16002},
  { ARM::BI__builtin_arm_mve_vmladavq_s32, 16024, 16002},
  { ARM::BI__builtin_arm_mve_vmladavq_s8, 16037, 16002},
  { ARM::BI__builtin_arm_mve_vmladavq_u16, 16049, 16002},
  { ARM::BI__builtin_arm_mve_vmladavq_u32, 16062, 16002},
  { ARM::BI__builtin_arm_mve_vmladavq_u8, 16075, 16002},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s16, 16099, 16087},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s32, 16115, 16087},
  { ARM::BI__builtin_arm_mve_vmladavxq_p_s8, 16131, 16087},
  { ARM::BI__builtin_arm_mve_vmladavxq_s16, 16156, 16146},
  { ARM::BI__builtin_arm_mve_vmladavxq_s32, 16170, 16146},
  { ARM::BI__builtin_arm_mve_vmladavxq_s8, 16184, 16146},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_s16, 16210, 16197},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_s32, 16227, 16197},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_u16, 16244, 16197},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_p_u32, 16261, 16197},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_s16, 16289, 16278},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_s32, 16304, 16278},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_u16, 16319, 16278},
  { ARM::BI__builtin_arm_mve_vmlaldavaq_u32, 16334, 16278},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s16, 16363, 16349},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_p_s32, 16381, 16349},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_s16, 16411, 16399},
  { ARM::BI__builtin_arm_mve_vmlaldavaxq_s32, 16427, 16399},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_s16, 16455, 16443},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_s32, 16471, 16443},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_u16, 16487, 16443},
  { ARM::BI__builtin_arm_mve_vmlaldavq_p_u32, 16503, 16443},
  { ARM::BI__builtin_arm_mve_vmlaldavq_s16, 16529, 16519},
  { ARM::BI__builtin_arm_mve_vmlaldavq_s32, 16543, 16519},
  { ARM::BI__builtin_arm_mve_vmlaldavq_u16, 16557, 16519},
  { ARM::BI__builtin_arm_mve_vmlaldavq_u32, 16571, 16519},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_p_s16, 16598, 16585},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_p_s32, 16615, 16585},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_s16, 16643, 16632},
  { ARM::BI__builtin_arm_mve_vmlaldavxq_s32, 16658, 16632},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s16, 16685, 16673},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s32, 16701, 16673},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_p_s8, 16717, 16673},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s16, 16742, 16732},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s32, 16756, 16732},
  { ARM::BI__builtin_arm_mve_vmlsdavaq_s8, 16770, 16732},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s16, 16796, 16783},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s32, 16813, 16783},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_p_s8, 16830, 16783},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s16, 16857, 16846},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s32, 16872, 16846},
  { ARM::BI__builtin_arm_mve_vmlsdavaxq_s8, 16887, 16846},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s16, 16912, 16901},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s32, 16927, 16901},
  { ARM::BI__builtin_arm_mve_vmlsdavq_p_s8, 16942, 16901},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s16, 16965, 16956},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s32, 16978, 16956},
  { ARM::BI__builtin_arm_mve_vmlsdavq_s8, 16991, 16956},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s16, 17015, 17003},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s32, 17031, 17003},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_p_s8, 17047, 17003},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s16, 17072, 17062},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s32, 17086, 17062},
  { ARM::BI__builtin_arm_mve_vmlsdavxq_s8, 17100, 17062},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_p_s16, 17126, 17113},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_p_s32, 17143, 17113},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_s16, 17171, 17160},
  { ARM::BI__builtin_arm_mve_vmlsldavaq_s32, 17186, 17160},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s16, 17215, 17201},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_p_s32, 17233, 17201},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_s16, 17263, 17251},
  { ARM::BI__builtin_arm_mve_vmlsldavaxq_s32, 17279, 17251},
  { ARM::BI__builtin_arm_mve_vmlsldavq_p_s16, 17307, 17295},
  { ARM::BI__builtin_arm_mve_vmlsldavq_p_s32, 17323, 17295},
  { ARM::BI__builtin_arm_mve_vmlsldavq_s16, 17349, 17339},
  { ARM::BI__builtin_arm_mve_vmlsldavq_s32, 17363, 17339},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_p_s16, 17390, 17377},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_p_s32, 17407, 17377},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_s16, 17435, 17424},
  { ARM::BI__builtin_arm_mve_vmlsldavxq_s32, 17450, 17424},
  { ARM::BI__builtin_arm_mve_vmovlbq_s16, 17473, 17465},
  { ARM::BI__builtin_arm_mve_vmovlbq_s8, 17485, 17465},
  { ARM::BI__builtin_arm_mve_vmovlbq_u16, 17496, 17465},
  { ARM::BI__builtin_arm_mve_vmovlbq_u8, 17508, 17465},
  { ARM::BI__builtin_arm_mve_vmovltq_s16, 17527, 17519},
  { ARM::BI__builtin_arm_mve_vmovltq_s8, 17539, 17519},
  { ARM::BI__builtin_arm_mve_vmovltq_u16, 17550, 17519},
  { ARM::BI__builtin_arm_mve_vmovltq_u8, 17562, 17519},
  { ARM::BI__builtin_arm_mve_vmovnbq_s16, 17581, 17573},
  { ARM::BI__builtin_arm_mve_vmovnbq_s32, 17593, 17573},
  { ARM::BI__builtin_arm_mve_vmovnbq_u16, 17605, 17573},
  { ARM::BI__builtin_arm_mve_vmovnbq_u32, 17617, 17573},
  { ARM::BI__builtin_arm_mve_vmovntq_s16, 17637, 17629},
  { ARM::BI__builtin_arm_mve_vmovntq_s32, 17649, 17629},
  { ARM::BI__builtin_arm_mve_vmovntq_u16, 17661, 17629},
  { ARM::BI__builtin_arm_mve_vmovntq_u32, 17673, 17629},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s16, 17694, 17685},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s32, 17707, 17685},
  { ARM::BI__builtin_arm_mve_vmulhq_m_s8, 17720, 17685},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u16, 17732, 17685},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u32, 17745, 17685},
  { ARM::BI__builtin_arm_mve_vmulhq_m_u8, 17758, 17685},
  { ARM::BI__builtin_arm_mve_vmulhq_s16, 17777, 17770},
  { ARM::BI__builtin_arm_mve_vmulhq_s32, 17788, 17770},
  { ARM::BI__builtin_arm_mve_vmulhq_s8, 17799, 17770},
  { ARM::BI__builtin_arm_mve_vmulhq_u16, 17809, 17770},
  { ARM::BI__builtin_arm_mve_vmulhq_u32, 17820, 17770},
  { ARM::BI__builtin_arm_mve_vmulhq_u8, 17831, 17770},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s16, 17850, 17841},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s32, 17863, 17841},
  { ARM::BI__builtin_arm_mve_vmulhq_x_s8, 17876, 17841},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u16, 17888, 17841},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u32, 17901, 17841},
  { ARM::BI__builtin_arm_mve_vmulhq_x_u8, 17914, 17841},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s16, 17940, 17926},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s32, 17958, 17926},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_s8, 17976, 17926},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u16, 17993, 17926},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u32, 18011, 17926},
  { ARM::BI__builtin_arm_mve_vmullbq_int_m_u8, 18029, 17926},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s16, 18058, 18046},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s32, 18074, 18046},
  { ARM::BI__builtin_arm_mve_vmullbq_int_s8, 18090, 18046},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u16, 18105, 18046},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u32, 18121, 18046},
  { ARM::BI__builtin_arm_mve_vmullbq_int_u8, 18137, 18046},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s16, 18166, 18152},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s32, 18184, 18152},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_s8, 18202, 18152},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u16, 18219, 18152},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u32, 18237, 18152},
  { ARM::BI__builtin_arm_mve_vmullbq_int_x_u8, 18255, 18152},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_m_p16, 18287, 18272},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_m_p8, 18306, 18272},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_p16, 18337, 18324},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_p8, 18354, 18324},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_x_p16, 18385, 18370},
  { ARM::BI__builtin_arm_mve_vmullbq_poly_x_p8, 18404, 18370},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s16, 18436, 18422},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s32, 18454, 18422},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_s8, 18472, 18422},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u16, 18489, 18422},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u32, 18507, 18422},
  { ARM::BI__builtin_arm_mve_vmulltq_int_m_u8, 18525, 18422},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s16, 18554, 18542},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s32, 18570, 18542},
  { ARM::BI__builtin_arm_mve_vmulltq_int_s8, 18586, 18542},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u16, 18601, 18542},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u32, 18617, 18542},
  { ARM::BI__builtin_arm_mve_vmulltq_int_u8, 18633, 18542},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s16, 18662, 18648},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s32, 18680, 18648},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_s8, 18698, 18648},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u16, 18715, 18648},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u32, 18733, 18648},
  { ARM::BI__builtin_arm_mve_vmulltq_int_x_u8, 18751, 18648},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_m_p16, 18783, 18768},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_m_p8, 18802, 18768},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_p16, 18833, 18820},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_p8, 18850, 18820},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_x_p16, 18881, 18866},
  { ARM::BI__builtin_arm_mve_vmulltq_poly_x_p8, 18900, 18866},
  { ARM::BI__builtin_arm_mve_vmulq_f16, 18924, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_f32, 18934, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_m_f16, 18952, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_f32, 18964, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_f16, 18976, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_f32, 18990, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_s16, 19004, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_s32, 19018, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_s8, 19032, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_u16, 19045, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_u32, 19059, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_n_u8, 19073, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_s16, 19086, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_s32, 19098, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_s8, 19110, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_u16, 19121, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_u32, 19133, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_m_u8, 19145, 18944},
  { ARM::BI__builtin_arm_mve_vmulq_n_f16, 19156, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_n_f32, 19168, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_n_s16, 19180, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_n_s32, 19192, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_n_s8, 19204, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_n_u16, 19215, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_n_u32, 19227, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_n_u8, 19239, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_s16, 19250, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_s32, 19260, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_s8, 19270, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_u16, 19279, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_u32, 19289, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_u8, 19299, 18918},
  { ARM::BI__builtin_arm_mve_vmulq_x_f16, 19316, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_f32, 19328, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_f16, 19340, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_f32, 19354, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_s16, 19368, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_s32, 19382, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_s8, 19396, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_u16, 19409, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_u32, 19423, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_n_u8, 19437, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_s16, 19450, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_s32, 19462, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_s8, 19474, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_u16, 19485, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_u32, 19497, 19308},
  { ARM::BI__builtin_arm_mve_vmulq_x_u8, 19509, 19308},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_s16, 19528, 19520},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_s32, 19542, 19520},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_u16, 19556, 19520},
  { ARM::BI__builtin_arm_mve_vmvnq_m_n_u32, 19570, 19520},
  { ARM::BI__builtin_arm_mve_vmvnq_n_s16, 19584, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_s32, 19596, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_u16, 19608, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_n_u32, 19620, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_s16, 19638, 19632},
  { ARM::BI__builtin_arm_mve_vmvnq_s32, 19648, 19632},
  { ARM::BI__builtin_arm_mve_vmvnq_s8, 19658, 19632},
  { ARM::BI__builtin_arm_mve_vmvnq_u16, 19667, 19632},
  { ARM::BI__builtin_arm_mve_vmvnq_u32, 19677, 19632},
  { ARM::BI__builtin_arm_mve_vmvnq_u8, 19687, 19632},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_s16, 19696, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_s32, 19710, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_u16, 19724, -1},
  { ARM::BI__builtin_arm_mve_vmvnq_x_n_u32, 19738, -1},
  { ARM::BI__builtin_arm_mve_vnegq_f16, 19758, 19752},
  { ARM::BI__builtin_arm_mve_vnegq_f32, 19768, 19752},
  { ARM::BI__builtin_arm_mve_vnegq_s16, 19778, 19752},
  { ARM::BI__builtin_arm_mve_vnegq_s32, 19788, 19752},
  { ARM::BI__builtin_arm_mve_vnegq_s8, 19798, 19752},
  { ARM::BI__builtin_arm_mve_vornq_f16, 19813, 19807},
  { ARM::BI__builtin_arm_mve_vornq_f32, 19823, 19807},
  { ARM::BI__builtin_arm_mve_vornq_m_f16, 19841, 19833},
  { ARM::BI__builtin_arm_mve_vornq_m_f32, 19853, 19833},
  { ARM::BI__builtin_arm_mve_vornq_m_s16, 19865, 19833},
  { ARM::BI__builtin_arm_mve_vornq_m_s32, 19877, 19833},
  { ARM::BI__builtin_arm_mve_vornq_m_s8, 19889, 19833},
  { ARM::BI__builtin_arm_mve_vornq_m_u16, 19900, 19833},
  { ARM::BI__builtin_arm_mve_vornq_m_u32, 19912, 19833},
  { ARM::BI__builtin_arm_mve_vornq_m_u8, 19924, 19833},
  { ARM::BI__builtin_arm_mve_vornq_s16, 19935, 19807},
  { ARM::BI__builtin_arm_mve_vornq_s32, 19945, 19807},
  { ARM::BI__builtin_arm_mve_vornq_s8, 19955, 19807},
  { ARM::BI__builtin_arm_mve_vornq_u16, 19964, 19807},
  { ARM::BI__builtin_arm_mve_vornq_u32, 19974, 19807},
  { ARM::BI__builtin_arm_mve_vornq_u8, 19984, 19807},
  { ARM::BI__builtin_arm_mve_vornq_x_f16, 20001, 19993},
  { ARM::BI__builtin_arm_mve_vornq_x_f32, 20013, 19993},
  { ARM::BI__builtin_arm_mve_vornq_x_s16, 20025, 19993},
  { ARM::BI__builtin_arm_mve_vornq_x_s32, 20037, 19993},
  { ARM::BI__builtin_arm_mve_vornq_x_s8, 20049, 19993},
  { ARM::BI__builtin_arm_mve_vornq_x_u16, 20060, 19993},
  { ARM::BI__builtin_arm_mve_vornq_x_u32, 20072, 19993},
  { ARM::BI__builtin_arm_mve_vornq_x_u8, 20084, 19993},
  { ARM::BI__builtin_arm_mve_vorrq_f16, 20101, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_f32, 20111, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_m_f16, 20129, 20121},
  { ARM::BI__builtin_arm_mve_vorrq_m_f32, 20141, 20121},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_s16, 20163, 20153},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_s32, 20177, 20153},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_u16, 20191, 20153},
  { ARM::BI__builtin_arm_mve_vorrq_m_n_u32, 20205, 20153},
  { ARM::BI__builtin_arm_mve_vorrq_m_s16, 20219, 20121},
  { ARM::BI__builtin_arm_mve_vorrq_m_s32, 20231, 20121},
  { ARM::BI__builtin_arm_mve_vorrq_m_s8, 20243, 20121},
  { ARM::BI__builtin_arm_mve_vorrq_m_u16, 20254, 20121},
  { ARM::BI__builtin_arm_mve_vorrq_m_u32, 20266, 20121},
  { ARM::BI__builtin_arm_mve_vorrq_m_u8, 20278, 20121},
  { ARM::BI__builtin_arm_mve_vorrq_n_s16, 20289, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_n_s32, 20301, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_n_u16, 20313, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_n_u32, 20325, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_s16, 20337, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_s32, 20347, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_s8, 20357, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_u16, 20366, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_u32, 20376, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_u8, 20386, 20095},
  { ARM::BI__builtin_arm_mve_vorrq_x_f16, 20403, 20395},
  { ARM::BI__builtin_arm_mve_vorrq_x_f32, 20415, 20395},
  { ARM::BI__builtin_arm_mve_vorrq_x_s16, 20427, 20395},
  { ARM::BI__builtin_arm_mve_vorrq_x_s32, 20439, 20395},
  { ARM::BI__builtin_arm_mve_vorrq_x_s8, 20451, 20395},
  { ARM::BI__builtin_arm_mve_vorrq_x_u16, 20462, 20395},
  { ARM::BI__builtin_arm_mve_vorrq_x_u32, 20474, 20395},
  { ARM::BI__builtin_arm_mve_vorrq_x_u8, 20486, 20395},
  { ARM::BI__builtin_arm_mve_vpnot, 20497, -1},
  { ARM::BI__builtin_arm_mve_vpselq_f16, 20510, 20503},
  { ARM::BI__builtin_arm_mve_vpselq_f32, 20521, 20503},
  { ARM::BI__builtin_arm_mve_vpselq_s16, 20532, 20503},
  { ARM::BI__builtin_arm_mve_vpselq_s32, 20543, 20503},
  { ARM::BI__builtin_arm_mve_vpselq_s64, 20554, 20503},
  { ARM::BI__builtin_arm_mve_vpselq_s8, 20565, 20503},
  { ARM::BI__builtin_arm_mve_vpselq_u16, 20575, 20503},
  { ARM::BI__builtin_arm_mve_vpselq_u32, 20586, 20503},
  { ARM::BI__builtin_arm_mve_vpselq_u64, 20597, 20503},
  { ARM::BI__builtin_arm_mve_vpselq_u8, 20608, 20503},
  { ARM::BI__builtin_arm_mve_vqabsq_s16, 20625, 20618},
  { ARM::BI__builtin_arm_mve_vqabsq_s32, 20636, 20618},
  { ARM::BI__builtin_arm_mve_vqabsq_s8, 20647, 20618},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_s16, 20666, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_s32, 20681, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_s8, 20696, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_u16, 20710, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_u32, 20725, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_n_u8, 20740, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s16, 20754, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s32, 20767, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_s8, 20780, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u16, 20792, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u32, 20805, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_m_u8, 20818, 20657},
  { ARM::BI__builtin_arm_mve_vqaddq_n_s16, 20837, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_n_s32, 20850, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_n_s8, 20863, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_n_u16, 20875, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_n_u32, 20888, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_n_u8, 20901, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_s16, 20913, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_s32, 20924, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_s8, 20935, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_u16, 20945, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_u32, 20956, 20830},
  { ARM::BI__builtin_arm_mve_vqaddq_u8, 20967, 20830},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_n_s16, 20988, 20977},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_n_s32, 21005, 20977},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_n_s8, 21022, 20977},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s16, 21038, 20977},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s32, 21053, 20977},
  { ARM::BI__builtin_arm_mve_vqdmulhq_m_s8, 21068, 20977},
  { ARM::BI__builtin_arm_mve_vqdmulhq_n_s16, 21091, 21082},
  { ARM::BI__builtin_arm_mve_vqdmulhq_n_s32, 21106, 21082},
  { ARM::BI__builtin_arm_mve_vqdmulhq_n_s8, 21121, 21082},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s16, 21135, 21082},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s32, 21148, 21082},
  { ARM::BI__builtin_arm_mve_vqdmulhq_s8, 21161, 21082},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_n_s16, 21185, 21173},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_n_s32, 21203, 21173},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_s16, 21221, 21173},
  { ARM::BI__builtin_arm_mve_vqdmullbq_m_s32, 21237, 21173},
  { ARM::BI__builtin_arm_mve_vqdmullbq_n_s16, 21263, 21253},
  { ARM::BI__builtin_arm_mve_vqdmullbq_n_s32, 21279, 21253},
  { ARM::BI__builtin_arm_mve_vqdmullbq_s16, 21295, 21253},
  { ARM::BI__builtin_arm_mve_vqdmullbq_s32, 21309, 21253},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_n_s16, 21335, 21323},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_n_s32, 21353, 21323},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_s16, 21371, 21323},
  { ARM::BI__builtin_arm_mve_vqdmulltq_m_s32, 21387, 21323},
  { ARM::BI__builtin_arm_mve_vqdmulltq_n_s16, 21413, 21403},
  { ARM::BI__builtin_arm_mve_vqdmulltq_n_s32, 21429, 21403},
  { ARM::BI__builtin_arm_mve_vqdmulltq_s16, 21445, 21403},
  { ARM::BI__builtin_arm_mve_vqdmulltq_s32, 21459, 21403},
  { ARM::BI__builtin_arm_mve_vqnegq_s16, 21480, 21473},
  { ARM::BI__builtin_arm_mve_vqnegq_s32, 21491, 21473},
  { ARM::BI__builtin_arm_mve_vqnegq_s8, 21502, 21473},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_n_s16, 21524, 21512},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_n_s32, 21542, 21512},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_n_s8, 21560, 21512},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s16, 21577, 21512},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s32, 21593, 21512},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_m_s8, 21609, 21512},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_n_s16, 21634, 21624},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_n_s32, 21650, 21624},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_n_s8, 21666, 21624},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s16, 21681, 21624},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s32, 21695, 21624},
  { ARM::BI__builtin_arm_mve_vqrdmulhq_s8, 21709, 21624},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s16, 21734, 21722},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s32, 21750, 21722},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_s8, 21766, 21722},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u16, 21781, 21722},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u32, 21797, 21722},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_n_u8, 21813, 21722},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s16, 21838, 21828},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s32, 21852, 21828},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_s8, 21866, 21828},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u16, 21879, 21828},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u32, 21893, 21828},
  { ARM::BI__builtin_arm_mve_vqrshlq_m_u8, 21907, 21828},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s16, 21928, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s32, 21942, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_s8, 21956, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u16, 21969, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u32, 21983, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_n_u8, 21997, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_s16, 22010, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_s32, 22022, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_s8, 22034, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_u16, 22045, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_u32, 22057, 21920},
  { ARM::BI__builtin_arm_mve_vqrshlq_u8, 22069, 21920},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s16, 22092, 22080},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s32, 22110, 22080},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u16, 22128, 22080},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u32, 22146, 22080},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_s16, 22174, 22164},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_s32, 22190, 22164},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_u16, 22206, 22164},
  { ARM::BI__builtin_arm_mve_vqrshrnbq_n_u32, 22222, 22164},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s16, 22250, 22238},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s32, 22268, 22238},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u16, 22286, 22238},
  { ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u32, 22304, 22238},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_s16, 22332, 22322},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_s32, 22348, 22322},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_u16, 22364, 22322},
  { ARM::BI__builtin_arm_mve_vqrshrntq_n_u32, 22380, 22322},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s16, 22409, 22396},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s32, 22428, 22396},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_n_s16, 22458, 22447},
  { ARM::BI__builtin_arm_mve_vqrshrunbq_n_s32, 22475, 22447},
  { ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s16, 22505, 22492},
  { ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s32, 22524, 22492},
  { ARM::BI__builtin_arm_mve_vqrshruntq_n_s16, 22554, 22543},
  { ARM::BI__builtin_arm_mve_vqrshruntq_n_s32, 22571, 22543},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s16, 22599, 22588},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s32, 22614, 22588},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_s8, 22629, 22588},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u16, 22643, 22588},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u32, 22658, 22588},
  { ARM::BI__builtin_arm_mve_vqshlq_m_n_u8, 22673, 22588},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s16, 22698, 22687},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s32, 22713, 22687},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_s8, 22728, 22687},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u16, 22742, 22687},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u32, 22757, 22687},
  { ARM::BI__builtin_arm_mve_vqshlq_m_r_u8, 22772, 22687},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s16, 22795, 22786},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s32, 22808, 22786},
  { ARM::BI__builtin_arm_mve_vqshlq_m_s8, 22821, 22786},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u16, 22833, 22786},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u32, 22846, 22786},
  { ARM::BI__builtin_arm_mve_vqshlq_m_u8, 22859, 22786},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s16, 22880, 22871},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s32, 22893, 22871},
  { ARM::BI__builtin_arm_mve_vqshlq_n_s8, 22906, 22871},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u16, 22918, 22871},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u32, 22931, 22871},
  { ARM::BI__builtin_arm_mve_vqshlq_n_u8, 22944, 22871},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s16, 22965, 22956},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s32, 22978, 22956},
  { ARM::BI__builtin_arm_mve_vqshlq_r_s8, 22991, 22956},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u16, 23003, 22956},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u32, 23016, 22956},
  { ARM::BI__builtin_arm_mve_vqshlq_r_u8, 23029, 22956},
  { ARM::BI__builtin_arm_mve_vqshlq_s16, 23048, 23041},
  { ARM::BI__builtin_arm_mve_vqshlq_s32, 23059, 23041},
  { ARM::BI__builtin_arm_mve_vqshlq_s8, 23070, 23041},
  { ARM::BI__builtin_arm_mve_vqshlq_u16, 23080, 23041},
  { ARM::BI__builtin_arm_mve_vqshlq_u32, 23091, 23041},
  { ARM::BI__builtin_arm_mve_vqshlq_u8, 23102, 23041},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s16, 23122, 23112},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s32, 23138, 23112},
  { ARM::BI__builtin_arm_mve_vqshluq_m_n_s8, 23154, 23112},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s16, 23177, 23169},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s32, 23191, 23169},
  { ARM::BI__builtin_arm_mve_vqshluq_n_s8, 23205, 23169},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s16, 23229, 23218},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s32, 23246, 23218},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u16, 23263, 23218},
  { ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u32, 23280, 23218},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_s16, 23306, 23297},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_s32, 23321, 23297},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_u16, 23336, 23297},
  { ARM::BI__builtin_arm_mve_vqshrnbq_n_u32, 23351, 23297},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_s16, 23377, 23366},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_s32, 23394, 23366},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_u16, 23411, 23366},
  { ARM::BI__builtin_arm_mve_vqshrntq_m_n_u32, 23428, 23366},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_s16, 23454, 23445},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_s32, 23469, 23445},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_u16, 23484, 23445},
  { ARM::BI__builtin_arm_mve_vqshrntq_n_u32, 23499, 23445},
  { ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s16, 23526, 23514},
  { ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s32, 23544, 23514},
  { ARM::BI__builtin_arm_mve_vqshrunbq_n_s16, 23572, 23562},
  { ARM::BI__builtin_arm_mve_vqshrunbq_n_s32, 23588, 23562},
  { ARM::BI__builtin_arm_mve_vqshruntq_m_n_s16, 23616, 23604},
  { ARM::BI__builtin_arm_mve_vqshruntq_m_n_s32, 23634, 23604},
  { ARM::BI__builtin_arm_mve_vqshruntq_n_s16, 23662, 23652},
  { ARM::BI__builtin_arm_mve_vqshruntq_n_s32, 23678, 23652},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_s16, 23703, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_s32, 23718, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_s8, 23733, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_u16, 23747, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_u32, 23762, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_n_u8, 23777, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s16, 23791, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s32, 23804, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_s8, 23817, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u16, 23829, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u32, 23842, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_m_u8, 23855, 23694},
  { ARM::BI__builtin_arm_mve_vqsubq_n_s16, 23874, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_n_s32, 23887, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_n_s8, 23900, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_n_u16, 23912, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_n_u32, 23925, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_n_u8, 23938, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_s16, 23950, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_s32, 23961, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_s8, 23972, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_u16, 23982, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_u32, 23993, 23867},
  { ARM::BI__builtin_arm_mve_vqsubq_u8, 24004, 23867},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_f32, 24032, 24014},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s16, 24054, 24014},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s32, 24076, 24014},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s64, 24098, 24014},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_s8, 24120, 24014},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u16, 24141, 24014},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u32, 24163, 24014},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u64, 24185, 24014},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f16_u8, 24207, 24014},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_f16, 24246, 24228},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s16, 24268, 24228},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s32, 24290, 24228},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s64, 24312, 24228},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_s8, 24334, 24228},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u16, 24355, 24228},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u32, 24377, 24228},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u64, 24399, 24228},
  { ARM::BI__builtin_arm_mve_vreinterpretq_f32_u8, 24421, 24228},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_f16, 24460, 24442},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_f32, 24482, 24442},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s32, 24504, 24442},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s64, 24526, 24442},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_s8, 24548, 24442},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u16, 24569, 24442},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u32, 24591, 24442},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u64, 24613, 24442},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s16_u8, 24635, 24442},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_f16, 24674, 24656},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_f32, 24696, 24656},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s16, 24718, 24656},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s64, 24740, 24656},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_s8, 24762, 24656},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u16, 24783, 24656},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u32, 24805, 24656},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u64, 24827, 24656},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s32_u8, 24849, 24656},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_f16, 24888, 24870},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_f32, 24910, 24870},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s16, 24932, 24870},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s32, 24954, 24870},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_s8, 24976, 24870},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u16, 24997, 24870},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u32, 25019, 24870},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u64, 25041, 24870},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s64_u8, 25063, 24870},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_f16, 25101, 25084},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_f32, 25122, 25084},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s16, 25143, 25084},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s32, 25164, 25084},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_s64, 25185, 25084},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u16, 25206, 25084},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u32, 25227, 25084},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u64, 25248, 25084},
  { ARM::BI__builtin_arm_mve_vreinterpretq_s8_u8, 25269, 25084},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_f16, 25307, 25289},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_f32, 25329, 25289},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s16, 25351, 25289},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s32, 25373, 25289},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s64, 25395, 25289},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_s8, 25417, 25289},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u32, 25438, 25289},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u64, 25460, 25289},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u16_u8, 25482, 25289},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_f16, 25521, 25503},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_f32, 25543, 25503},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s16, 25565, 25503},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s32, 25587, 25503},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s64, 25609, 25503},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_s8, 25631, 25503},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u16, 25652, 25503},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u64, 25674, 25503},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u32_u8, 25696, 25503},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_f16, 25735, 25717},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_f32, 25757, 25717},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s16, 25779, 25717},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s32, 25801, 25717},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s64, 25823, 25717},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_s8, 25845, 25717},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u16, 25866, 25717},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u32, 25888, 25717},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u64_u8, 25910, 25717},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_f16, 25948, 25931},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_f32, 25969, 25931},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s16, 25990, 25931},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s32, 26011, 25931},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s64, 26032, 25931},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_s8, 26053, 25931},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u16, 26073, 25931},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u32, 26094, 25931},
  { ARM::BI__builtin_arm_mve_vreinterpretq_u8_u64, 26115, 25931},
  { ARM::BI__builtin_arm_mve_vrev16q_s8, 26144, 26136},
  { ARM::BI__builtin_arm_mve_vrev16q_u8, 26155, 26136},
  { ARM::BI__builtin_arm_mve_vrev32q_f16, 26174, 26166},
  { ARM::BI__builtin_arm_mve_vrev32q_s16, 26186, 26166},
  { ARM::BI__builtin_arm_mve_vrev32q_s8, 26198, 26166},
  { ARM::BI__builtin_arm_mve_vrev32q_u16, 26209, 26166},
  { ARM::BI__builtin_arm_mve_vrev32q_u8, 26221, 26166},
  { ARM::BI__builtin_arm_mve_vrev64q_f16, 26240, 26232},
  { ARM::BI__builtin_arm_mve_vrev64q_f32, 26252, 26232},
  { ARM::BI__builtin_arm_mve_vrev64q_s16, 26264, 26232},
  { ARM::BI__builtin_arm_mve_vrev64q_s32, 26276, 26232},
  { ARM::BI__builtin_arm_mve_vrev64q_s8, 26288, 26232},
  { ARM::BI__builtin_arm_mve_vrev64q_u16, 26299, 26232},
  { ARM::BI__builtin_arm_mve_vrev64q_u32, 26311, 26232},
  { ARM::BI__builtin_arm_mve_vrev64q_u8, 26323, 26232},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s16, 26344, 26334},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s32, 26358, 26334},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_s8, 26372, 26334},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u16, 26385, 26334},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u32, 26399, 26334},
  { ARM::BI__builtin_arm_mve_vrhaddq_m_u8, 26413, 26334},
  { ARM::BI__builtin_arm_mve_vrhaddq_s16, 26434, 26426},
  { ARM::BI__builtin_arm_mve_vrhaddq_s32, 26446, 26426},
  { ARM::BI__builtin_arm_mve_vrhaddq_s8, 26458, 26426},
  { ARM::BI__builtin_arm_mve_vrhaddq_u16, 26469, 26426},
  { ARM::BI__builtin_arm_mve_vrhaddq_u32, 26481, 26426},
  { ARM::BI__builtin_arm_mve_vrhaddq_u8, 26493, 26426},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s16, 26514, 26504},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s32, 26528, 26504},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_s8, 26542, 26504},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u16, 26555, 26504},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u32, 26569, 26504},
  { ARM::BI__builtin_arm_mve_vrhaddq_x_u8, 26583, 26504},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_s32, 26611, 26596},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_p_u32, 26630, 26596},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_s32, 26662, 26649},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaq_u32, 26679, 26649},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaxq_p_s32, 26712, 26696},
  { ARM::BI__builtin_arm_mve_vrmlaldavhaxq_s32, 26746, 26732},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_p_s32, 26778, 26764},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_p_u32, 26796, 26764},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_s32, 26826, 26814},
  { ARM::BI__builtin_arm_mve_vrmlaldavhq_u32, 26842, 26814},
  { ARM::BI__builtin_arm_mve_vrmlaldavhxq_p_s32, 26873, 26858},
  { ARM::BI__builtin_arm_mve_vrmlaldavhxq_s32, 26905, 26892},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaq_p_s32, 26937, 26922},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaq_s32, 26969, 26956},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaxq_p_s32, 27002, 26986},
  { ARM::BI__builtin_arm_mve_vrmlsldavhaxq_s32, 27036, 27022},
  { ARM::BI__builtin_arm_mve_vrmlsldavhq_p_s32, 27068, 27054},
  { ARM::BI__builtin_arm_mve_vrmlsldavhq_s32, 27098, 27086},
  { ARM::BI__builtin_arm_mve_vrmlsldavhxq_p_s32, 27129, 27114},
  { ARM::BI__builtin_arm_mve_vrmlsldavhxq_s32, 27161, 27148},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s16, 27188, 27178},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s32, 27202, 27178},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_s8, 27216, 27178},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u16, 27229, 27178},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u32, 27243, 27178},
  { ARM::BI__builtin_arm_mve_vrmulhq_m_u8, 27257, 27178},
  { ARM::BI__builtin_arm_mve_vrmulhq_s16, 27278, 27270},
  { ARM::BI__builtin_arm_mve_vrmulhq_s32, 27290, 27270},
  { ARM::BI__builtin_arm_mve_vrmulhq_s8, 27302, 27270},
  { ARM::BI__builtin_arm_mve_vrmulhq_u16, 27313, 27270},
  { ARM::BI__builtin_arm_mve_vrmulhq_u32, 27325, 27270},
  { ARM::BI__builtin_arm_mve_vrmulhq_u8, 27337, 27270},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s16, 27358, 27348},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s32, 27372, 27348},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_s8, 27386, 27348},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u16, 27399, 27348},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u32, 27413, 27348},
  { ARM::BI__builtin_arm_mve_vrmulhq_x_u8, 27427, 27348},
  { ARM::BI__builtin_arm_mve_vrndaq_f16, 27447, 27440},
  { ARM::BI__builtin_arm_mve_vrndaq_f32, 27458, 27440},
  { ARM::BI__builtin_arm_mve_vrndmq_f16, 27476, 27469},
  { ARM::BI__builtin_arm_mve_vrndmq_f32, 27487, 27469},
  { ARM::BI__builtin_arm_mve_vrndnq_f16, 27505, 27498},
  { ARM::BI__builtin_arm_mve_vrndnq_f32, 27516, 27498},
  { ARM::BI__builtin_arm_mve_vrndpq_f16, 27534, 27527},
  { ARM::BI__builtin_arm_mve_vrndpq_f32, 27545, 27527},
  { ARM::BI__builtin_arm_mve_vrndq_f16, 27562, 27556},
  { ARM::BI__builtin_arm_mve_vrndq_f32, 27572, 27556},
  { ARM::BI__builtin_arm_mve_vrndxq_f16, 27589, 27582},
  { ARM::BI__builtin_arm_mve_vrndxq_f32, 27600, 27582},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s16, 27622, 27611},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s32, 27637, 27611},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_s8, 27652, 27611},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u16, 27666, 27611},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u32, 27681, 27611},
  { ARM::BI__builtin_arm_mve_vrshlq_m_n_u8, 27696, 27611},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s16, 27719, 27710},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s32, 27732, 27710},
  { ARM::BI__builtin_arm_mve_vrshlq_m_s8, 27745, 27710},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u16, 27757, 27710},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u32, 27770, 27710},
  { ARM::BI__builtin_arm_mve_vrshlq_m_u8, 27783, 27710},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s16, 27802, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s32, 27815, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_n_s8, 27828, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u16, 27840, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u32, 27853, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_n_u8, 27866, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_s16, 27878, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_s32, 27889, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_s8, 27900, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_u16, 27910, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_u32, 27921, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_u8, 27932, 27795},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s16, 27951, 27942},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s32, 27964, 27942},
  { ARM::BI__builtin_arm_mve_vrshlq_x_s8, 27977, 27942},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u16, 27989, 27942},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u32, 28002, 27942},
  { ARM::BI__builtin_arm_mve_vrshlq_x_u8, 28015, 27942},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s16, 28038, 28027},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s32, 28055, 28027},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u16, 28072, 28027},
  { ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u32, 28089, 28027},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_s16, 28115, 28106},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_s32, 28130, 28106},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_u16, 28145, 28106},
  { ARM::BI__builtin_arm_mve_vrshrnbq_n_u32, 28160, 28106},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_s16, 28186, 28175},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_s32, 28203, 28175},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_u16, 28220, 28175},
  { ARM::BI__builtin_arm_mve_vrshrntq_m_n_u32, 28237, 28175},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_s16, 28263, 28254},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_s32, 28278, 28254},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_u16, 28293, 28254},
  { ARM::BI__builtin_arm_mve_vrshrntq_n_u32, 28308, 28254},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s16, 28332, 28323},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s32, 28347, 28323},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_s8, 28362, 28323},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u16, 28376, 28323},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u32, 28391, 28323},
  { ARM::BI__builtin_arm_mve_vrshrq_m_n_u8, 28406, 28323},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s16, 28427, 28420},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s32, 28440, 28420},
  { ARM::BI__builtin_arm_mve_vrshrq_n_s8, 28453, 28420},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u16, 28465, 28420},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u32, 28478, 28420},
  { ARM::BI__builtin_arm_mve_vrshrq_n_u8, 28491, 28420},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s16, 28512, 28503},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s32, 28527, 28503},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_s8, 28542, 28503},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u16, 28556, 28503},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u32, 28571, 28503},
  { ARM::BI__builtin_arm_mve_vrshrq_x_n_u8, 28586, 28503},
  { ARM::BI__builtin_arm_mve_vsetq_lane_f16, 28611, 28600},
  { ARM::BI__builtin_arm_mve_vsetq_lane_f32, 28626, 28600},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s16, 28641, 28600},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s32, 28656, 28600},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s64, 28671, 28600},
  { ARM::BI__builtin_arm_mve_vsetq_lane_s8, 28686, 28600},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u16, 28700, 28600},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u32, 28715, 28600},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u64, 28730, 28600},
  { ARM::BI__builtin_arm_mve_vsetq_lane_u8, 28745, 28600},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_s16, 28769, 28759},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_s8, 28785, 28759},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_u16, 28800, 28759},
  { ARM::BI__builtin_arm_mve_vshllbq_m_n_u8, 28816, 28759},
  { ARM::BI__builtin_arm_mve_vshllbq_n_s16, 28839, 28831},
  { ARM::BI__builtin_arm_mve_vshllbq_n_s8, 28853, 28831},
  { ARM::BI__builtin_arm_mve_vshllbq_n_u16, 28866, 28831},
  { ARM::BI__builtin_arm_mve_vshllbq_n_u8, 28880, 28831},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_s16, 28903, 28893},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_s8, 28919, 28893},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_u16, 28934, 28893},
  { ARM::BI__builtin_arm_mve_vshllbq_x_n_u8, 28950, 28893},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_s16, 28975, 28965},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_s8, 28991, 28965},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_u16, 29006, 28965},
  { ARM::BI__builtin_arm_mve_vshlltq_m_n_u8, 29022, 28965},
  { ARM::BI__builtin_arm_mve_vshlltq_n_s16, 29045, 29037},
  { ARM::BI__builtin_arm_mve_vshlltq_n_s8, 29059, 29037},
  { ARM::BI__builtin_arm_mve_vshlltq_n_u16, 29072, 29037},
  { ARM::BI__builtin_arm_mve_vshlltq_n_u8, 29086, 29037},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_s16, 29109, 29099},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_s8, 29125, 29099},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_u16, 29140, 29099},
  { ARM::BI__builtin_arm_mve_vshlltq_x_n_u8, 29156, 29099},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s16, 29181, 29171},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s32, 29195, 29171},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_s8, 29209, 29171},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u16, 29222, 29171},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u32, 29236, 29171},
  { ARM::BI__builtin_arm_mve_vshlq_m_n_u8, 29250, 29171},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s16, 29273, 29263},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s32, 29287, 29263},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_s8, 29301, 29263},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u16, 29314, 29263},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u32, 29328, 29263},
  { ARM::BI__builtin_arm_mve_vshlq_m_r_u8, 29342, 29263},
  { ARM::BI__builtin_arm_mve_vshlq_m_s16, 29363, 29355},
  { ARM::BI__builtin_arm_mve_vshlq_m_s32, 29375, 29355},
  { ARM::BI__builtin_arm_mve_vshlq_m_s8, 29387, 29355},
  { ARM::BI__builtin_arm_mve_vshlq_m_u16, 29398, 29355},
  { ARM::BI__builtin_arm_mve_vshlq_m_u32, 29410, 29355},
  { ARM::BI__builtin_arm_mve_vshlq_m_u8, 29422, 29355},
  { ARM::BI__builtin_arm_mve_vshlq_n_s16, 29441, 29433},
  { ARM::BI__builtin_arm_mve_vshlq_n_s32, 29453, 29433},
  { ARM::BI__builtin_arm_mve_vshlq_n_s8, 29465, 29433},
  { ARM::BI__builtin_arm_mve_vshlq_n_u16, 29476, 29433},
  { ARM::BI__builtin_arm_mve_vshlq_n_u32, 29488, 29433},
  { ARM::BI__builtin_arm_mve_vshlq_n_u8, 29500, 29433},
  { ARM::BI__builtin_arm_mve_vshlq_r_s16, 29519, 29511},
  { ARM::BI__builtin_arm_mve_vshlq_r_s32, 29531, 29511},
  { ARM::BI__builtin_arm_mve_vshlq_r_s8, 29543, 29511},
  { ARM::BI__builtin_arm_mve_vshlq_r_u16, 29554, 29511},
  { ARM::BI__builtin_arm_mve_vshlq_r_u32, 29566, 29511},
  { ARM::BI__builtin_arm_mve_vshlq_r_u8, 29578, 29511},
  { ARM::BI__builtin_arm_mve_vshlq_s16, 29595, 29589},
  { ARM::BI__builtin_arm_mve_vshlq_s32, 29605, 29589},
  { ARM::BI__builtin_arm_mve_vshlq_s8, 29615, 29589},
  { ARM::BI__builtin_arm_mve_vshlq_u16, 29624, 29589},
  { ARM::BI__builtin_arm_mve_vshlq_u32, 29634, 29589},
  { ARM::BI__builtin_arm_mve_vshlq_u8, 29644, 29589},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s16, 29663, 29653},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s32, 29677, 29653},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_s8, 29691, 29653},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u16, 29704, 29653},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u32, 29718, 29653},
  { ARM::BI__builtin_arm_mve_vshlq_x_n_u8, 29732, 29653},
  { ARM::BI__builtin_arm_mve_vshlq_x_s16, 29753, 29745},
  { ARM::BI__builtin_arm_mve_vshlq_x_s32, 29765, 29745},
  { ARM::BI__builtin_arm_mve_vshlq_x_s8, 29777, 29745},
  { ARM::BI__builtin_arm_mve_vshlq_x_u16, 29788, 29745},
  { ARM::BI__builtin_arm_mve_vshlq_x_u32, 29800, 29745},
  { ARM::BI__builtin_arm_mve_vshlq_x_u8, 29812, 29745},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_s16, 29833, 29823},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_s32, 29849, 29823},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_u16, 29865, 29823},
  { ARM::BI__builtin_arm_mve_vshrnbq_m_n_u32, 29881, 29823},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_s16, 29905, 29897},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_s32, 29919, 29897},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_u16, 29933, 29897},
  { ARM::BI__builtin_arm_mve_vshrnbq_n_u32, 29947, 29897},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_s16, 29971, 29961},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_s32, 29987, 29961},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_u16, 30003, 29961},
  { ARM::BI__builtin_arm_mve_vshrntq_m_n_u32, 30019, 29961},
  { ARM::BI__builtin_arm_mve_vshrntq_n_s16, 30043, 30035},
  { ARM::BI__builtin_arm_mve_vshrntq_n_s32, 30057, 30035},
  { ARM::BI__builtin_arm_mve_vshrntq_n_u16, 30071, 30035},
  { ARM::BI__builtin_arm_mve_vshrntq_n_u32, 30085, 30035},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s16, 30107, 30099},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s32, 30121, 30099},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_s8, 30135, 30099},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u16, 30148, 30099},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u32, 30162, 30099},
  { ARM::BI__builtin_arm_mve_vshrq_m_n_u8, 30176, 30099},
  { ARM::BI__builtin_arm_mve_vshrq_n_s16, 30195, 30189},
  { ARM::BI__builtin_arm_mve_vshrq_n_s32, 30207, 30189},
  { ARM::BI__builtin_arm_mve_vshrq_n_s8, 30219, 30189},
  { ARM::BI__builtin_arm_mve_vshrq_n_u16, 30230, 30189},
  { ARM::BI__builtin_arm_mve_vshrq_n_u32, 30242, 30189},
  { ARM::BI__builtin_arm_mve_vshrq_n_u8, 30254, 30189},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s16, 30273, 30265},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s32, 30287, 30265},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_s8, 30301, 30265},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u16, 30314, 30265},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u32, 30328, 30265},
  { ARM::BI__builtin_arm_mve_vshrq_x_n_u8, 30342, 30265},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s16, 30363, 30355},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s32, 30377, 30355},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_s8, 30391, 30355},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u16, 30404, 30355},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u32, 30418, 30355},
  { ARM::BI__builtin_arm_mve_vsliq_m_n_u8, 30432, 30355},
  { ARM::BI__builtin_arm_mve_vsliq_n_s16, 30451, 30445},
  { ARM::BI__builtin_arm_mve_vsliq_n_s32, 30463, 30445},
  { ARM::BI__builtin_arm_mve_vsliq_n_s8, 30475, 30445},
  { ARM::BI__builtin_arm_mve_vsliq_n_u16, 30486, 30445},
  { ARM::BI__builtin_arm_mve_vsliq_n_u32, 30498, 30445},
  { ARM::BI__builtin_arm_mve_vsliq_n_u8, 30510, 30445},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s16, 30529, 30521},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s32, 30543, 30521},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_s8, 30557, 30521},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u16, 30570, 30521},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u32, 30584, 30521},
  { ARM::BI__builtin_arm_mve_vsriq_m_n_u8, 30598, 30521},
  { ARM::BI__builtin_arm_mve_vsriq_n_s16, 30617, 30611},
  { ARM::BI__builtin_arm_mve_vsriq_n_s32, 30629, 30611},
  { ARM::BI__builtin_arm_mve_vsriq_n_s8, 30641, 30611},
  { ARM::BI__builtin_arm_mve_vsriq_n_u16, 30652, 30611},
  { ARM::BI__builtin_arm_mve_vsriq_n_u32, 30664, 30611},
  { ARM::BI__builtin_arm_mve_vsriq_n_u8, 30676, 30611},
  { ARM::BI__builtin_arm_mve_vst1q_f16, 30693, 30687},
  { ARM::BI__builtin_arm_mve_vst1q_f32, 30703, 30687},
  { ARM::BI__builtin_arm_mve_vst1q_p_f16, 30721, 30713},
  { ARM::BI__builtin_arm_mve_vst1q_p_f32, 30733, 30713},
  { ARM::BI__builtin_arm_mve_vst1q_p_s16, 30745, 30713},
  { ARM::BI__builtin_arm_mve_vst1q_p_s32, 30757, 30713},
  { ARM::BI__builtin_arm_mve_vst1q_p_s8, 30769, 30713},
  { ARM::BI__builtin_arm_mve_vst1q_p_u16, 30780, 30713},
  { ARM::BI__builtin_arm_mve_vst1q_p_u32, 30792, 30713},
  { ARM::BI__builtin_arm_mve_vst1q_p_u8, 30804, 30713},
  { ARM::BI__builtin_arm_mve_vst1q_s16, 30815, 30687},
  { ARM::BI__builtin_arm_mve_vst1q_s32, 30825, 30687},
  { ARM::BI__builtin_arm_mve_vst1q_s8, 30835, 30687},
  { ARM::BI__builtin_arm_mve_vst1q_u16, 30844, 30687},
  { ARM::BI__builtin_arm_mve_vst1q_u32, 30854, 30687},
  { ARM::BI__builtin_arm_mve_vst1q_u8, 30864, 30687},
  { ARM::BI__builtin_arm_mve_vst2q_f16, 30879, 30873},
  { ARM::BI__builtin_arm_mve_vst2q_f32, 30889, 30873},
  { ARM::BI__builtin_arm_mve_vst2q_s16, 30899, 30873},
  { ARM::BI__builtin_arm_mve_vst2q_s32, 30909, 30873},
  { ARM::BI__builtin_arm_mve_vst2q_s8, 30919, 30873},
  { ARM::BI__builtin_arm_mve_vst2q_u16, 30928, 30873},
  { ARM::BI__builtin_arm_mve_vst2q_u32, 30938, 30873},
  { ARM::BI__builtin_arm_mve_vst2q_u8, 30948, 30873},
  { ARM::BI__builtin_arm_mve_vst4q_f16, 30963, 30957},
  { ARM::BI__builtin_arm_mve_vst4q_f32, 30973, 30957},
  { ARM::BI__builtin_arm_mve_vst4q_s16, 30983, 30957},
  { ARM::BI__builtin_arm_mve_vst4q_s32, 30993, 30957},
  { ARM::BI__builtin_arm_mve_vst4q_s8, 31003, 30957},
  { ARM::BI__builtin_arm_mve_vst4q_u16, 31012, 30957},
  { ARM::BI__builtin_arm_mve_vst4q_u32, 31022, 30957},
  { ARM::BI__builtin_arm_mve_vst4q_u8, 31032, 30957},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s16, 31050, 31041},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s32, 31063, 31041},
  { ARM::BI__builtin_arm_mve_vstrbq_p_s8, 31076, 31041},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u16, 31088, 31041},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u32, 31101, 31041},
  { ARM::BI__builtin_arm_mve_vstrbq_p_u8, 31114, 31041},
  { ARM::BI__builtin_arm_mve_vstrbq_s16, 31133, 31126},
  { ARM::BI__builtin_arm_mve_vstrbq_s32, 31144, 31126},
  { ARM::BI__builtin_arm_mve_vstrbq_s8, 31155, 31126},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s16, 31189, 31165},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s32, 31217, 31165},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_s8, 31245, 31165},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u16, 31272, 31165},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u32, 31300, 31165},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_p_u8, 31328, 31165},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s16, 31377, 31355},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s32, 31403, 31355},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_s8, 31429, 31355},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u16, 31454, 31355},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u32, 31480, 31355},
  { ARM::BI__builtin_arm_mve_vstrbq_scatter_offset_u8, 31506, 31355},
  { ARM::BI__builtin_arm_mve_vstrbq_u16, 31531, 31126},
  { ARM::BI__builtin_arm_mve_vstrbq_u32, 31542, 31126},
  { ARM::BI__builtin_arm_mve_vstrbq_u8, 31553, 31126},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_s64, 31585, 31563},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_u64, 31611, 31563},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_s64, 31657, 31637},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_u64, 31681, 31637},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64, 31730, 31705},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64, 31759, 31705},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_s64, 31811, 31788},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_u64, 31838, 31788},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_s64, 31889, 31865},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_p_u64, 31917, 31865},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_s64, 31967, 31945},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_offset_u64, 31993, 31945},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_s64, 32051, 32019},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_u64, 32087, 32019},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_s64, 32153, 32123},
  { ARM::BI__builtin_arm_mve_vstrdq_scatter_shifted_offset_u64, 32187, 32123},
  { ARM::BI__builtin_arm_mve_vstrhq_f16, 32228, 32221},
  { ARM::BI__builtin_arm_mve_vstrhq_p_f16, 32248, 32239},
  { ARM::BI__builtin_arm_mve_vstrhq_p_s16, 32261, 32239},
  { ARM::BI__builtin_arm_mve_vstrhq_p_s32, 32274, 32239},
  { ARM::BI__builtin_arm_mve_vstrhq_p_u16, 32287, 32239},
  { ARM::BI__builtin_arm_mve_vstrhq_p_u32, 32300, 32239},
  { ARM::BI__builtin_arm_mve_vstrhq_s16, 32313, 32221},
  { ARM::BI__builtin_arm_mve_vstrhq_s32, 32324, 32221},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_f16, 32357, 32335},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_f16, 32407, 32383},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s16, 32435, 32383},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_s32, 32463, 32383},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u16, 32491, 32383},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_p_u32, 32519, 32383},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s16, 32547, 32335},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_s32, 32573, 32335},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u16, 32599, 32335},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_offset_u32, 32625, 32335},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_f16, 32681, 32651},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_f16, 32747, 32715},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s16, 32783, 32715},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s32, 32819, 32715},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u16, 32855, 32715},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u32, 32891, 32715},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s16, 32927, 32651},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_s32, 32961, 32651},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u16, 32995, 32651},
  { ARM::BI__builtin_arm_mve_vstrhq_scatter_shifted_offset_u32, 33029, 32651},
  { ARM::BI__builtin_arm_mve_vstrhq_u16, 33063, 32221},
  { ARM::BI__builtin_arm_mve_vstrhq_u32, 33074, 32221},
  { ARM::BI__builtin_arm_mve_vstrwq_f32, 33092, 33085},
  { ARM::BI__builtin_arm_mve_vstrwq_p_f32, 33112, 33103},
  { ARM::BI__builtin_arm_mve_vstrwq_p_s32, 33125, 33103},
  { ARM::BI__builtin_arm_mve_vstrwq_p_u32, 33138, 33103},
  { ARM::BI__builtin_arm_mve_vstrwq_s32, 33151, 33085},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_f32, 33182, 33162},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_f32, 33228, 33206},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_s32, 33254, 33206},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_u32, 33280, 33206},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_s32, 33306, 33162},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_u32, 33330, 33162},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_f32, 33377, 33354},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32, 33429, 33404},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32, 33458, 33404},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32, 33487, 33404},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_s32, 33516, 33354},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_u32, 33543, 33354},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_f32, 33592, 33570},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_f32, 33642, 33618},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_s32, 33670, 33618},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_p_u32, 33698, 33618},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_s32, 33726, 33570},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_offset_u32, 33752, 33570},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_f32, 33808, 33778},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_f32, 33874, 33842},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_s32, 33910, 33842},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_u32, 33946, 33842},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_s32, 33982, 33778},
  { ARM::BI__builtin_arm_mve_vstrwq_scatter_shifted_offset_u32, 34016, 33778},
  { ARM::BI__builtin_arm_mve_vstrwq_u32, 34050, 33085},
  { ARM::BI__builtin_arm_mve_vsubq_f16, 34067, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_f32, 34077, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_m_f16, 34095, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_f32, 34107, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_f16, 34119, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_f32, 34133, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_s16, 34147, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_s32, 34161, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_s8, 34175, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_u16, 34188, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_u32, 34202, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_n_u8, 34216, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_s16, 34229, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_s32, 34241, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_s8, 34253, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_u16, 34264, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_u32, 34276, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_m_u8, 34288, 34087},
  { ARM::BI__builtin_arm_mve_vsubq_n_f16, 34299, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_n_f32, 34311, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_n_s16, 34323, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_n_s32, 34335, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_n_s8, 34347, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_n_u16, 34358, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_n_u32, 34370, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_n_u8, 34382, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_s16, 34393, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_s32, 34403, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_s8, 34413, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_u16, 34422, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_u32, 34432, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_u8, 34442, 34061},
  { ARM::BI__builtin_arm_mve_vsubq_x_f16, 34459, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_f32, 34471, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_f16, 34483, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_f32, 34497, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_s16, 34511, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_s32, 34525, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_s8, 34539, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_u16, 34552, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_u32, 34566, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_n_u8, 34580, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_s16, 34593, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_s32, 34605, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_s8, 34617, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_u16, 34628, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_u32, 34640, 34451},
  { ARM::BI__builtin_arm_mve_vsubq_x_u8, 34652, 34451},
  { ARM::BI__builtin_arm_mve_vuninitializedq_f16, 34663, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_f32, 34683, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f16, 34719, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_f32, 34751, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s16, 34783, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s32, 34815, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s64, 34847, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_s8, 34879, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u16, 34910, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u32, 34942, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u64, 34974, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_polymorphic_u8, 35006, 34703},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s16, 35037, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s32, 35057, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s64, 35077, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_s8, 35097, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u16, 35116, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u32, 35136, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u64, 35156, -1},
  { ARM::BI__builtin_arm_mve_vuninitializedq_u8, 35176, -1},
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
    "u32\000vabdq_x_u8\000vabsq\000vabsq_f16\000vabsq_f32\000vabsq_s16\000va"
    "bsq_s32\000vabsq_s8\000vadciq_m\000vadciq_m_s32\000vadciq_m_u32\000vadc"
    "iq\000vadciq_s32\000vadciq_u32\000vadcq_m\000vadcq_m_s32\000vadcq_m_u32"
    "\000vadcq\000vadcq_s32\000vadcq_u32\000vaddq\000vaddq_f16\000vaddq_f32\000"
    "vaddq_m\000vaddq_m_f16\000vaddq_m_f32\000vaddq_m_n_f16\000vaddq_m_n_f32"
    "\000vaddq_m_n_s16\000vaddq_m_n_s32\000vaddq_m_n_s8\000vaddq_m_n_u16\000"
    "vaddq_m_n_u32\000vaddq_m_n_u8\000vaddq_m_s16\000vaddq_m_s32\000vaddq_m_"
    "s8\000vaddq_m_u16\000vaddq_m_u32\000vaddq_m_u8\000vaddq_n_f16\000vaddq_"
    "n_f32\000vaddq_n_s16\000vaddq_n_s32\000vaddq_n_s8\000vaddq_n_u16\000vad"
    "dq_n_u32\000vaddq_n_u8\000vaddq_s16\000vaddq_s32\000vaddq_s8\000vaddq_u"
    "16\000vaddq_u32\000vaddq_u8\000vaddq_x\000vaddq_x_f16\000vaddq_x_f32\000"
    "vaddq_x_n_f16\000vaddq_x_n_f32\000vaddq_x_n_s16\000vaddq_x_n_s32\000vad"
    "dq_x_n_s8\000vaddq_x_n_u16\000vaddq_x_n_u32\000vaddq_x_n_u8\000vaddq_x_"
    "s16\000vaddq_x_s32\000vaddq_x_s8\000vaddq_x_u16\000vaddq_x_u32\000vaddq"
    "_x_u8\000vandq\000vandq_f16\000vandq_f32\000vandq_m\000vandq_m_f16\000v"
    "andq_m_f32\000vandq_m_s16\000vandq_m_s32\000vandq_m_s8\000vandq_m_u16\000"
    "vandq_m_u32\000vandq_m_u8\000vandq_s16\000vandq_s32\000vandq_s8\000vand"
    "q_u16\000vandq_u32\000vandq_u8\000vandq_x\000vandq_x_f16\000vandq_x_f32"
    "\000vandq_x_s16\000vandq_x_s32\000vandq_x_s8\000vandq_x_u16\000vandq_x_"
    "u32\000vandq_x_u8\000vbicq\000vbicq_f16\000vbicq_f32\000vbicq_m\000vbic"
    "q_m_f16\000vbicq_m_f32\000vbicq_m_n\000vbicq_m_n_s16\000vbicq_m_n_s32\000"
    "vbicq_m_n_u16\000vbicq_m_n_u32\000vbicq_m_s16\000vbicq_m_s32\000vbicq_m"
    "_s8\000vbicq_m_u16\000vbicq_m_u32\000vbicq_m_u8\000vbicq_n_s16\000vbicq"
    "_n_s32\000vbicq_n_u16\000vbicq_n_u32\000vbicq_s16\000vbicq_s32\000vbicq"
    "_s8\000vbicq_u16\000vbicq_u32\000vbicq_u8\000vbicq_x\000vbicq_x_f16\000"
    "vbicq_x_f32\000vbicq_x_s16\000vbicq_x_s32\000vbicq_x_s8\000vbicq_x_u16\000"
    "vbicq_x_u32\000vbicq_x_u8\000vbrsrq_m\000vbrsrq_m_n_f16\000vbrsrq_m_n_f"
    "32\000vbrsrq_m_n_s16\000vbrsrq_m_n_s32\000vbrsrq_m_n_s64\000vbrsrq_m_n_"
    "s8\000vbrsrq_m_n_u16\000vbrsrq_m_n_u32\000vbrsrq_m_n_u64\000vbrsrq_m_n_"
    "u8\000vbrsrq\000vbrsrq_n_f16\000vbrsrq_n_f32\000vbrsrq_n_s16\000vbrsrq_"
    "n_s32\000vbrsrq_n_s64\000vbrsrq_n_s8\000vbrsrq_n_u16\000vbrsrq_n_u32\000"
    "vbrsrq_n_u64\000vbrsrq_n_u8\000vbrsrq_x\000vbrsrq_x_n_f16\000vbrsrq_x_n"
    "_f32\000vbrsrq_x_n_s16\000vbrsrq_x_n_s32\000vbrsrq_x_n_s64\000vbrsrq_x_"
    "n_s8\000vbrsrq_x_n_u16\000vbrsrq_x_n_u32\000vbrsrq_x_n_u64\000vbrsrq_x_"
    "n_u8\000vcaddq_rot270\000vcaddq_rot270_f16\000vcaddq_rot270_f32\000vcad"
    "dq_rot270_m\000vcaddq_rot270_m_f16\000vcaddq_rot270_m_f32\000vcaddq_rot"
    "270_m_s16\000vcaddq_rot270_m_s32\000vcaddq_rot270_m_s8\000vcaddq_rot270"
    "_m_u16\000vcaddq_rot270_m_u32\000vcaddq_rot270_m_u8\000vcaddq_rot270_s1"
    "6\000vcaddq_rot270_s32\000vcaddq_rot270_s8\000vcaddq_rot270_u16\000vcad"
    "dq_rot270_u32\000vcaddq_rot270_u8\000vcaddq_rot270_x\000vcaddq_rot270_x"
    "_f16\000vcaddq_rot270_x_f32\000vcaddq_rot270_x_s16\000vcaddq_rot270_x_s"
    "32\000vcaddq_rot270_x_s8\000vcaddq_rot270_x_u16\000vcaddq_rot270_x_u32\000"
    "vcaddq_rot270_x_u8\000vcaddq_rot90\000vcaddq_rot90_f16\000vcaddq_rot90_"
    "f32\000vcaddq_rot90_m\000vcaddq_rot90_m_f16\000vcaddq_rot90_m_f32\000vc"
    "addq_rot90_m_s16\000vcaddq_rot90_m_s32\000vcaddq_rot90_m_s8\000vcaddq_r"
    "ot90_m_u16\000vcaddq_rot90_m_u32\000vcaddq_rot90_m_u8\000vcaddq_rot90_s"
    "16\000vcaddq_rot90_s32\000vcaddq_rot90_s8\000vcaddq_rot90_u16\000vcaddq"
    "_rot90_u32\000vcaddq_rot90_u8\000vcaddq_rot90_x\000vcaddq_rot90_x_f16\000"
    "vcaddq_rot90_x_f32\000vcaddq_rot90_x_s16\000vcaddq_rot90_x_s32\000vcadd"
    "q_rot90_x_s8\000vcaddq_rot90_x_u16\000vcaddq_rot90_x_u32\000vcaddq_rot9"
    "0_x_u8\000vclsq\000vclsq_s16\000vclsq_s32\000vclsq_s8\000vclzq\000vclzq"
    "_s16\000vclzq_s32\000vclzq_s8\000vclzq_u16\000vclzq_u32\000vclzq_u8\000"
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
    "vcvtq_f32_u32\000vcvtq_m_n\000vcvtq_m_n_f16_s16\000vcvtq_m_n_f16_u16\000"
    "vcvtq_m_n_f32_s32\000vcvtq_m_n_f32_u32\000vcvtq_m_n_s16_f16\000vcvtq_m_"
    "n_s32_f32\000vcvtq_m_n_u16_f16\000vcvtq_m_n_u32_f32\000vcvtq_n\000vcvtq"
    "_n_f16_s16\000vcvtq_n_f16_u16\000vcvtq_n_f32_s32\000vcvtq_n_f32_u32\000"
    "vcvtq_n_s16_f16\000vcvtq_n_s32_f32\000vcvtq_n_u16_f16\000vcvtq_n_u32_f3"
    "2\000vcvtq_s16_f16\000vcvtq_s32_f32\000vcvtq_u16_f16\000vcvtq_u32_f32\000"
    "vcvtq_x_n\000vcvtq_x_n_f16_s16\000vcvtq_x_n_f16_u16\000vcvtq_x_n_f32_s3"
    "2\000vcvtq_x_n_f32_u32\000vcvtq_x_n_s16_f16\000vcvtq_x_n_s32_f32\000vcv"
    "tq_x_n_u16_f16\000vcvtq_x_n_u32_f32\000vcvttq_f16_f32\000vcvttq_m_f16_f"
    "32\000vddupq_m\000vddupq_m_n_u16\000vddupq_m_n_u32\000vddupq_m_n_u8\000"
    "vddupq_m_wb_u16\000vddupq_m_wb_u32\000vddupq_m_wb_u8\000vddupq_u16\000v"
    "ddupq_n_u16\000vddupq_u32\000vddupq_n_u32\000vddupq_u8\000vddupq_n_u8\000"
    "vddupq_wb_u16\000vddupq_wb_u32\000vddupq_wb_u8\000vddupq_x_u16\000vddup"
    "q_x_n_u16\000vddupq_x_u32\000vddupq_x_n_u32\000vddupq_x_u8\000vddupq_x_"
    "n_u8\000vddupq_x_wb_u16\000vddupq_x_wb_u32\000vddupq_x_wb_u8\000vdupq_m"
    "\000vdupq_m_n_f16\000vdupq_m_n_f32\000vdupq_m_n_s16\000vdupq_m_n_s32\000"
    "vdupq_m_n_s8\000vdupq_m_n_u16\000vdupq_m_n_u32\000vdupq_m_n_u8\000vdupq"
    "_n_f16\000vdupq_n_f32\000vdupq_n_s16\000vdupq_n_s32\000vdupq_n_s8\000vd"
    "upq_n_u16\000vdupq_n_u32\000vdupq_n_u8\000vdupq_x_n_f16\000vdupq_x_n_f3"
    "2\000vdupq_x_n_s16\000vdupq_x_n_s32\000vdupq_x_n_s8\000vdupq_x_n_u16\000"
    "vdupq_x_n_u32\000vdupq_x_n_u8\000vdwdupq_m\000vdwdupq_m_n_u16\000vdwdup"
    "q_m_n_u32\000vdwdupq_m_n_u8\000vdwdupq_m_wb_u16\000vdwdupq_m_wb_u32\000"
    "vdwdupq_m_wb_u8\000vdwdupq_u16\000vdwdupq_n_u16\000vdwdupq_u32\000vdwdu"
    "pq_n_u32\000vdwdupq_u8\000vdwdupq_n_u8\000vdwdupq_wb_u16\000vdwdupq_wb_"
    "u32\000vdwdupq_wb_u8\000vdwdupq_x_u16\000vdwdupq_x_n_u16\000vdwdupq_x_u"
    "32\000vdwdupq_x_n_u32\000vdwdupq_x_u8\000vdwdupq_x_n_u8\000vdwdupq_x_wb"
    "_u16\000vdwdupq_x_wb_u32\000vdwdupq_x_wb_u8\000veorq\000veorq_f16\000ve"
    "orq_f32\000veorq_m\000veorq_m_f16\000veorq_m_f32\000veorq_m_s16\000veor"
    "q_m_s32\000veorq_m_s8\000veorq_m_u16\000veorq_m_u32\000veorq_m_u8\000ve"
    "orq_s16\000veorq_s32\000veorq_s8\000veorq_u16\000veorq_u32\000veorq_u8\000"
    "veorq_x\000veorq_x_f16\000veorq_x_f32\000veorq_x_s16\000veorq_x_s32\000"
    "veorq_x_s8\000veorq_x_u16\000veorq_x_u32\000veorq_x_u8\000vgetq_lane\000"
    "vgetq_lane_f16\000vgetq_lane_f32\000vgetq_lane_s16\000vgetq_lane_s32\000"
    "vgetq_lane_s64\000vgetq_lane_s8\000vgetq_lane_u16\000vgetq_lane_u32\000"
    "vgetq_lane_u64\000vgetq_lane_u8\000vhaddq_m\000vhaddq_m_n_s16\000vhaddq"
    "_m_n_s32\000vhaddq_m_n_s8\000vhaddq_m_n_u16\000vhaddq_m_n_u32\000vhaddq"
    "_m_n_u8\000vhaddq_m_s16\000vhaddq_m_s32\000vhaddq_m_s8\000vhaddq_m_u16\000"
    "vhaddq_m_u32\000vhaddq_m_u8\000vhaddq\000vhaddq_n_s16\000vhaddq_n_s32\000"
    "vhaddq_n_s8\000vhaddq_n_u16\000vhaddq_n_u32\000vhaddq_n_u8\000vhaddq_s1"
    "6\000vhaddq_s32\000vhaddq_s8\000vhaddq_u16\000vhaddq_u32\000vhaddq_u8\000"
    "vhaddq_x\000vhaddq_x_n_s16\000vhaddq_x_n_s32\000vhaddq_x_n_s8\000vhaddq"
    "_x_n_u16\000vhaddq_x_n_u32\000vhaddq_x_n_u8\000vhaddq_x_s16\000vhaddq_x"
    "_s32\000vhaddq_x_s8\000vhaddq_x_u16\000vhaddq_x_u32\000vhaddq_x_u8\000v"
    "hcaddq_rot270_m\000vhcaddq_rot270_m_s16\000vhcaddq_rot270_m_s32\000vhca"
    "ddq_rot270_m_s8\000vhcaddq_rot270\000vhcaddq_rot270_s16\000vhcaddq_rot2"
    "70_s32\000vhcaddq_rot270_s8\000vhcaddq_rot270_x\000vhcaddq_rot270_x_s16"
    "\000vhcaddq_rot270_x_s32\000vhcaddq_rot270_x_s8\000vhcaddq_rot90_m\000v"
    "hcaddq_rot90_m_s16\000vhcaddq_rot90_m_s32\000vhcaddq_rot90_m_s8\000vhca"
    "ddq_rot90\000vhcaddq_rot90_s16\000vhcaddq_rot90_s32\000vhcaddq_rot90_s8"
    "\000vhcaddq_rot90_x\000vhcaddq_rot90_x_s16\000vhcaddq_rot90_x_s32\000vh"
    "caddq_rot90_x_s8\000vhsubq_m\000vhsubq_m_n_s16\000vhsubq_m_n_s32\000vhs"
    "ubq_m_n_s8\000vhsubq_m_n_u16\000vhsubq_m_n_u32\000vhsubq_m_n_u8\000vhsu"
    "bq_m_s16\000vhsubq_m_s32\000vhsubq_m_s8\000vhsubq_m_u16\000vhsubq_m_u32"
    "\000vhsubq_m_u8\000vhsubq\000vhsubq_n_s16\000vhsubq_n_s32\000vhsubq_n_s"
    "8\000vhsubq_n_u16\000vhsubq_n_u32\000vhsubq_n_u8\000vhsubq_s16\000vhsub"
    "q_s32\000vhsubq_s8\000vhsubq_u16\000vhsubq_u32\000vhsubq_u8\000vhsubq_x"
    "\000vhsubq_x_n_s16\000vhsubq_x_n_s32\000vhsubq_x_n_s8\000vhsubq_x_n_u16"
    "\000vhsubq_x_n_u32\000vhsubq_x_n_u8\000vhsubq_x_s16\000vhsubq_x_s32\000"
    "vhsubq_x_s8\000vhsubq_x_u16\000vhsubq_x_u32\000vhsubq_x_u8\000vidupq_m\000"
    "vidupq_m_n_u16\000vidupq_m_n_u32\000vidupq_m_n_u8\000vidupq_m_wb_u16\000"
    "vidupq_m_wb_u32\000vidupq_m_wb_u8\000vidupq_u16\000vidupq_n_u16\000vidu"
    "pq_u32\000vidupq_n_u32\000vidupq_u8\000vidupq_n_u8\000vidupq_wb_u16\000"
    "vidupq_wb_u32\000vidupq_wb_u8\000vidupq_x_u16\000vidupq_x_n_u16\000vidu"
    "pq_x_u32\000vidupq_x_n_u32\000vidupq_x_u8\000vidupq_x_n_u8\000vidupq_x_"
    "wb_u16\000vidupq_x_wb_u32\000vidupq_x_wb_u8\000viwdupq_m\000viwdupq_m_n"
    "_u16\000viwdupq_m_n_u32\000viwdupq_m_n_u8\000viwdupq_m_wb_u16\000viwdup"
    "q_m_wb_u32\000viwdupq_m_wb_u8\000viwdupq_u16\000viwdupq_n_u16\000viwdup"
    "q_u32\000viwdupq_n_u32\000viwdupq_u8\000viwdupq_n_u8\000viwdupq_wb_u16\000"
    "viwdupq_wb_u32\000viwdupq_wb_u8\000viwdupq_x_u16\000viwdupq_x_n_u16\000"
    "viwdupq_x_u32\000viwdupq_x_n_u32\000viwdupq_x_u8\000viwdupq_x_n_u8\000v"
    "iwdupq_x_wb_u16\000viwdupq_x_wb_u32\000viwdupq_x_wb_u8\000vld1q\000vld1"
    "q_f16\000vld1q_f32\000vld1q_s16\000vld1q_s32\000vld1q_s8\000vld1q_u16\000"
    "vld1q_u32\000vld1q_u8\000vld1q_z\000vld1q_z_f16\000vld1q_z_f32\000vld1q"
    "_z_s16\000vld1q_z_s32\000vld1q_z_s8\000vld1q_z_u16\000vld1q_z_u32\000vl"
    "d1q_z_u8\000vld2q\000vld2q_f16\000vld2q_f32\000vld2q_s16\000vld2q_s32\000"
    "vld2q_s8\000vld2q_u16\000vld2q_u32\000vld2q_u8\000vld4q\000vld4q_f16\000"
    "vld4q_f32\000vld4q_s16\000vld4q_s32\000vld4q_s8\000vld4q_u16\000vld4q_u"
    "32\000vld4q_u8\000vldrbq_gather_offset\000vldrbq_gather_offset_s16\000v"
    "ldrbq_gather_offset_s32\000vldrbq_gather_offset_s8\000vldrbq_gather_off"
    "set_u16\000vldrbq_gather_offset_u32\000vldrbq_gather_offset_u8\000vldrb"
    "q_gather_offset_z\000vldrbq_gather_offset_z_s16\000vldrbq_gather_offset"
    "_z_s32\000vldrbq_gather_offset_z_s8\000vldrbq_gather_offset_z_u16\000vl"
    "drbq_gather_offset_z_u32\000vldrbq_gather_offset_z_u8\000vldrbq_s16\000"
    "vldrbq_s32\000vldrbq_s8\000vldrbq_u16\000vldrbq_u32\000vldrbq_u8\000vld"
    "rbq_z_s16\000vldrbq_z_s32\000vldrbq_z_s8\000vldrbq_z_u16\000vldrbq_z_u3"
    "2\000vldrbq_z_u8\000vldrdq_gather_base_s64\000vldrdq_gather_base_u64\000"
    "vldrdq_gather_base_wb_s64\000vldrdq_gather_base_wb_u64\000vldrdq_gather"
    "_base_wb_z_s64\000vldrdq_gather_base_wb_z_u64\000vldrdq_gather_base_z_s"
    "64\000vldrdq_gather_base_z_u64\000vldrdq_gather_offset\000vldrdq_gather"
    "_offset_s64\000vldrdq_gather_offset_u64\000vldrdq_gather_offset_z\000vl"
    "drdq_gather_offset_z_s64\000vldrdq_gather_offset_z_u64\000vldrdq_gather"
    "_shifted_offset\000vldrdq_gather_shifted_offset_s64\000vldrdq_gather_sh"
    "ifted_offset_u64\000vldrdq_gather_shifted_offset_z\000vldrdq_gather_shi"
    "fted_offset_z_s64\000vldrdq_gather_shifted_offset_z_u64\000vldrhq_f16\000"
    "vldrhq_gather_offset\000vldrhq_gather_offset_f16\000vldrhq_gather_offse"
    "t_s16\000vldrhq_gather_offset_s32\000vldrhq_gather_offset_u16\000vldrhq"
    "_gather_offset_u32\000vldrhq_gather_offset_z\000vldrhq_gather_offset_z_"
    "f16\000vldrhq_gather_offset_z_s16\000vldrhq_gather_offset_z_s32\000vldr"
    "hq_gather_offset_z_u16\000vldrhq_gather_offset_z_u32\000vldrhq_gather_s"
    "hifted_offset\000vldrhq_gather_shifted_offset_f16\000vldrhq_gather_shif"
    "ted_offset_s16\000vldrhq_gather_shifted_offset_s32\000vldrhq_gather_shi"
    "fted_offset_u16\000vldrhq_gather_shifted_offset_u32\000vldrhq_gather_sh"
    "ifted_offset_z\000vldrhq_gather_shifted_offset_z_f16\000vldrhq_gather_s"
    "hifted_offset_z_s16\000vldrhq_gather_shifted_offset_z_s32\000vldrhq_gat"
    "her_shifted_offset_z_u16\000vldrhq_gather_shifted_offset_z_u32\000vldrh"
    "q_s16\000vldrhq_s32\000vldrhq_u16\000vldrhq_u32\000vldrhq_z_f16\000vldr"
    "hq_z_s16\000vldrhq_z_s32\000vldrhq_z_u16\000vldrhq_z_u32\000vldrwq_f32\000"
    "vldrwq_gather_base_f32\000vldrwq_gather_base_s32\000vldrwq_gather_base_"
    "u32\000vldrwq_gather_base_wb_f32\000vldrwq_gather_base_wb_s32\000vldrwq"
    "_gather_base_wb_u32\000vldrwq_gather_base_wb_z_f32\000vldrwq_gather_bas"
    "e_wb_z_s32\000vldrwq_gather_base_wb_z_u32\000vldrwq_gather_base_z_f32\000"
    "vldrwq_gather_base_z_s32\000vldrwq_gather_base_z_u32\000vldrwq_gather_o"
    "ffset\000vldrwq_gather_offset_f32\000vldrwq_gather_offset_s32\000vldrwq"
    "_gather_offset_u32\000vldrwq_gather_offset_z\000vldrwq_gather_offset_z_"
    "f32\000vldrwq_gather_offset_z_s32\000vldrwq_gather_offset_z_u32\000vldr"
    "wq_gather_shifted_offset\000vldrwq_gather_shifted_offset_f32\000vldrwq_"
    "gather_shifted_offset_s32\000vldrwq_gather_shifted_offset_u32\000vldrwq"
    "_gather_shifted_offset_z\000vldrwq_gather_shifted_offset_z_f32\000vldrw"
    "q_gather_shifted_offset_z_s32\000vldrwq_gather_shifted_offset_z_u32\000"
    "vldrwq_s32\000vldrwq_u32\000vldrwq_z_f32\000vldrwq_z_s32\000vldrwq_z_u3"
    "2\000vmaxaq_m\000vmaxaq_m_s16\000vmaxaq_m_s32\000vmaxaq_m_s8\000vmaxaq\000"
    "vmaxaq_s16\000vmaxaq_s32\000vmaxaq_s8\000vmaxnmaq\000vmaxnmaq_f16\000vm"
    "axnmaq_f32\000vmaxnmaq_m\000vmaxnmaq_m_f16\000vmaxnmaq_m_f32\000vmaxnmq"
    "\000vmaxnmq_f16\000vmaxnmq_f32\000vmaxnmq_m\000vmaxnmq_m_f16\000vmaxnmq"
    "_m_f32\000vmaxnmq_x\000vmaxnmq_x_f16\000vmaxnmq_x_f32\000vmaxq_m\000vma"
    "xq_m_s16\000vmaxq_m_s32\000vmaxq_m_s8\000vmaxq_m_u16\000vmaxq_m_u32\000"
    "vmaxq_m_u8\000vmaxq\000vmaxq_s16\000vmaxq_s32\000vmaxq_s8\000vmaxq_u16\000"
    "vmaxq_u32\000vmaxq_u8\000vmaxq_x\000vmaxq_x_s16\000vmaxq_x_s32\000vmaxq"
    "_x_s8\000vmaxq_x_u16\000vmaxq_x_u32\000vmaxq_x_u8\000vmaxvq\000vmaxvq_s"
    "16\000vmaxvq_s32\000vmaxvq_s8\000vmaxvq_u16\000vmaxvq_u32\000vmaxvq_u8\000"
    "vminaq_m\000vminaq_m_s16\000vminaq_m_s32\000vminaq_m_s8\000vminaq\000vm"
    "inaq_s16\000vminaq_s32\000vminaq_s8\000vminnmaq\000vminnmaq_f16\000vmin"
    "nmaq_f32\000vminnmaq_m\000vminnmaq_m_f16\000vminnmaq_m_f32\000vminnmq\000"
    "vminnmq_f16\000vminnmq_f32\000vminnmq_m\000vminnmq_m_f16\000vminnmq_m_f"
    "32\000vminnmq_x\000vminnmq_x_f16\000vminnmq_x_f32\000vminq_m\000vminq_m"
    "_s16\000vminq_m_s32\000vminq_m_s8\000vminq_m_u16\000vminq_m_u32\000vmin"
    "q_m_u8\000vminq\000vminq_s16\000vminq_s32\000vminq_s8\000vminq_u16\000v"
    "minq_u32\000vminq_u8\000vminq_x\000vminq_x_s16\000vminq_x_s32\000vminq_"
    "x_s8\000vminq_x_u16\000vminq_x_u32\000vminq_x_u8\000vminvq\000vminvq_s1"
    "6\000vminvq_s32\000vminvq_s8\000vminvq_u16\000vminvq_u32\000vminvq_u8\000"
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
    "\000vmovlbq_s16\000vmovlbq_s8\000vmovlbq_u16\000vmovlbq_u8\000vmovltq\000"
    "vmovltq_s16\000vmovltq_s8\000vmovltq_u16\000vmovltq_u8\000vmovnbq\000vm"
    "ovnbq_s16\000vmovnbq_s32\000vmovnbq_u16\000vmovnbq_u32\000vmovntq\000vm"
    "ovntq_s16\000vmovntq_s32\000vmovntq_u16\000vmovntq_u32\000vmulhq_m\000v"
    "mulhq_m_s16\000vmulhq_m_s32\000vmulhq_m_s8\000vmulhq_m_u16\000vmulhq_m_"
    "u32\000vmulhq_m_u8\000vmulhq\000vmulhq_s16\000vmulhq_s32\000vmulhq_s8\000"
    "vmulhq_u16\000vmulhq_u32\000vmulhq_u8\000vmulhq_x\000vmulhq_x_s16\000vm"
    "ulhq_x_s32\000vmulhq_x_s8\000vmulhq_x_u16\000vmulhq_x_u32\000vmulhq_x_u"
    "8\000vmullbq_int_m\000vmullbq_int_m_s16\000vmullbq_int_m_s32\000vmullbq"
    "_int_m_s8\000vmullbq_int_m_u16\000vmullbq_int_m_u32\000vmullbq_int_m_u8"
    "\000vmullbq_int\000vmullbq_int_s16\000vmullbq_int_s32\000vmullbq_int_s8"
    "\000vmullbq_int_u16\000vmullbq_int_u32\000vmullbq_int_u8\000vmullbq_int"
    "_x\000vmullbq_int_x_s16\000vmullbq_int_x_s32\000vmullbq_int_x_s8\000vmu"
    "llbq_int_x_u16\000vmullbq_int_x_u32\000vmullbq_int_x_u8\000vmullbq_poly"
    "_m\000vmullbq_poly_m_p16\000vmullbq_poly_m_p8\000vmullbq_poly\000vmullb"
    "q_poly_p16\000vmullbq_poly_p8\000vmullbq_poly_x\000vmullbq_poly_x_p16\000"
    "vmullbq_poly_x_p8\000vmulltq_int_m\000vmulltq_int_m_s16\000vmulltq_int_"
    "m_s32\000vmulltq_int_m_s8\000vmulltq_int_m_u16\000vmulltq_int_m_u32\000"
    "vmulltq_int_m_u8\000vmulltq_int\000vmulltq_int_s16\000vmulltq_int_s32\000"
    "vmulltq_int_s8\000vmulltq_int_u16\000vmulltq_int_u32\000vmulltq_int_u8\000"
    "vmulltq_int_x\000vmulltq_int_x_s16\000vmulltq_int_x_s32\000vmulltq_int_"
    "x_s8\000vmulltq_int_x_u16\000vmulltq_int_x_u32\000vmulltq_int_x_u8\000v"
    "mulltq_poly_m\000vmulltq_poly_m_p16\000vmulltq_poly_m_p8\000vmulltq_pol"
    "y\000vmulltq_poly_p16\000vmulltq_poly_p8\000vmulltq_poly_x\000vmulltq_p"
    "oly_x_p16\000vmulltq_poly_x_p8\000vmulq\000vmulq_f16\000vmulq_f32\000vm"
    "ulq_m\000vmulq_m_f16\000vmulq_m_f32\000vmulq_m_n_f16\000vmulq_m_n_f32\000"
    "vmulq_m_n_s16\000vmulq_m_n_s32\000vmulq_m_n_s8\000vmulq_m_n_u16\000vmul"
    "q_m_n_u32\000vmulq_m_n_u8\000vmulq_m_s16\000vmulq_m_s32\000vmulq_m_s8\000"
    "vmulq_m_u16\000vmulq_m_u32\000vmulq_m_u8\000vmulq_n_f16\000vmulq_n_f32\000"
    "vmulq_n_s16\000vmulq_n_s32\000vmulq_n_s8\000vmulq_n_u16\000vmulq_n_u32\000"
    "vmulq_n_u8\000vmulq_s16\000vmulq_s32\000vmulq_s8\000vmulq_u16\000vmulq_"
    "u32\000vmulq_u8\000vmulq_x\000vmulq_x_f16\000vmulq_x_f32\000vmulq_x_n_f"
    "16\000vmulq_x_n_f32\000vmulq_x_n_s16\000vmulq_x_n_s32\000vmulq_x_n_s8\000"
    "vmulq_x_n_u16\000vmulq_x_n_u32\000vmulq_x_n_u8\000vmulq_x_s16\000vmulq_"
    "x_s32\000vmulq_x_s8\000vmulq_x_u16\000vmulq_x_u32\000vmulq_x_u8\000vmvn"
    "q_m\000vmvnq_m_n_s16\000vmvnq_m_n_s32\000vmvnq_m_n_u16\000vmvnq_m_n_u32"
    "\000vmvnq_n_s16\000vmvnq_n_s32\000vmvnq_n_u16\000vmvnq_n_u32\000vmvnq\000"
    "vmvnq_s16\000vmvnq_s32\000vmvnq_s8\000vmvnq_u16\000vmvnq_u32\000vmvnq_u"
    "8\000vmvnq_x_n_s16\000vmvnq_x_n_s32\000vmvnq_x_n_u16\000vmvnq_x_n_u32\000"
    "vnegq\000vnegq_f16\000vnegq_f32\000vnegq_s16\000vnegq_s32\000vnegq_s8\000"
    "vornq\000vornq_f16\000vornq_f32\000vornq_m\000vornq_m_f16\000vornq_m_f3"
    "2\000vornq_m_s16\000vornq_m_s32\000vornq_m_s8\000vornq_m_u16\000vornq_m"
    "_u32\000vornq_m_u8\000vornq_s16\000vornq_s32\000vornq_s8\000vornq_u16\000"
    "vornq_u32\000vornq_u8\000vornq_x\000vornq_x_f16\000vornq_x_f32\000vornq"
    "_x_s16\000vornq_x_s32\000vornq_x_s8\000vornq_x_u16\000vornq_x_u32\000vo"
    "rnq_x_u8\000vorrq\000vorrq_f16\000vorrq_f32\000vorrq_m\000vorrq_m_f16\000"
    "vorrq_m_f32\000vorrq_m_n\000vorrq_m_n_s16\000vorrq_m_n_s32\000vorrq_m_n"
    "_u16\000vorrq_m_n_u32\000vorrq_m_s16\000vorrq_m_s32\000vorrq_m_s8\000vo"
    "rrq_m_u16\000vorrq_m_u32\000vorrq_m_u8\000vorrq_n_s16\000vorrq_n_s32\000"
    "vorrq_n_u16\000vorrq_n_u32\000vorrq_s16\000vorrq_s32\000vorrq_s8\000vor"
    "rq_u16\000vorrq_u32\000vorrq_u8\000vorrq_x\000vorrq_x_f16\000vorrq_x_f3"
    "2\000vorrq_x_s16\000vorrq_x_s32\000vorrq_x_s8\000vorrq_x_u16\000vorrq_x"
    "_u32\000vorrq_x_u8\000vpnot\000vpselq\000vpselq_f16\000vpselq_f32\000vp"
    "selq_s16\000vpselq_s32\000vpselq_s64\000vpselq_s8\000vpselq_u16\000vpse"
    "lq_u32\000vpselq_u64\000vpselq_u8\000vqabsq\000vqabsq_s16\000vqabsq_s32"
    "\000vqabsq_s8\000vqaddq_m\000vqaddq_m_n_s16\000vqaddq_m_n_s32\000vqaddq"
    "_m_n_s8\000vqaddq_m_n_u16\000vqaddq_m_n_u32\000vqaddq_m_n_u8\000vqaddq_"
    "m_s16\000vqaddq_m_s32\000vqaddq_m_s8\000vqaddq_m_u16\000vqaddq_m_u32\000"
    "vqaddq_m_u8\000vqaddq\000vqaddq_n_s16\000vqaddq_n_s32\000vqaddq_n_s8\000"
    "vqaddq_n_u16\000vqaddq_n_u32\000vqaddq_n_u8\000vqaddq_s16\000vqaddq_s32"
    "\000vqaddq_s8\000vqaddq_u16\000vqaddq_u32\000vqaddq_u8\000vqdmulhq_m\000"
    "vqdmulhq_m_n_s16\000vqdmulhq_m_n_s32\000vqdmulhq_m_n_s8\000vqdmulhq_m_s"
    "16\000vqdmulhq_m_s32\000vqdmulhq_m_s8\000vqdmulhq\000vqdmulhq_n_s16\000"
    "vqdmulhq_n_s32\000vqdmulhq_n_s8\000vqdmulhq_s16\000vqdmulhq_s32\000vqdm"
    "ulhq_s8\000vqdmullbq_m\000vqdmullbq_m_n_s16\000vqdmullbq_m_n_s32\000vqd"
    "mullbq_m_s16\000vqdmullbq_m_s32\000vqdmullbq\000vqdmullbq_n_s16\000vqdm"
    "ullbq_n_s32\000vqdmullbq_s16\000vqdmullbq_s32\000vqdmulltq_m\000vqdmull"
    "tq_m_n_s16\000vqdmulltq_m_n_s32\000vqdmulltq_m_s16\000vqdmulltq_m_s32\000"
    "vqdmulltq\000vqdmulltq_n_s16\000vqdmulltq_n_s32\000vqdmulltq_s16\000vqd"
    "mulltq_s32\000vqnegq\000vqnegq_s16\000vqnegq_s32\000vqnegq_s8\000vqrdmu"
    "lhq_m\000vqrdmulhq_m_n_s16\000vqrdmulhq_m_n_s32\000vqrdmulhq_m_n_s8\000"
    "vqrdmulhq_m_s16\000vqrdmulhq_m_s32\000vqrdmulhq_m_s8\000vqrdmulhq\000vq"
    "rdmulhq_n_s16\000vqrdmulhq_n_s32\000vqrdmulhq_n_s8\000vqrdmulhq_s16\000"
    "vqrdmulhq_s32\000vqrdmulhq_s8\000vqrshlq_m_n\000vqrshlq_m_n_s16\000vqrs"
    "hlq_m_n_s32\000vqrshlq_m_n_s8\000vqrshlq_m_n_u16\000vqrshlq_m_n_u32\000"
    "vqrshlq_m_n_u8\000vqrshlq_m\000vqrshlq_m_s16\000vqrshlq_m_s32\000vqrshl"
    "q_m_s8\000vqrshlq_m_u16\000vqrshlq_m_u32\000vqrshlq_m_u8\000vqrshlq\000"
    "vqrshlq_n_s16\000vqrshlq_n_s32\000vqrshlq_n_s8\000vqrshlq_n_u16\000vqrs"
    "hlq_n_u32\000vqrshlq_n_u8\000vqrshlq_s16\000vqrshlq_s32\000vqrshlq_s8\000"
    "vqrshlq_u16\000vqrshlq_u32\000vqrshlq_u8\000vqrshrnbq_m\000vqrshrnbq_m_"
    "n_s16\000vqrshrnbq_m_n_s32\000vqrshrnbq_m_n_u16\000vqrshrnbq_m_n_u32\000"
    "vqrshrnbq\000vqrshrnbq_n_s16\000vqrshrnbq_n_s32\000vqrshrnbq_n_u16\000v"
    "qrshrnbq_n_u32\000vqrshrntq_m\000vqrshrntq_m_n_s16\000vqrshrntq_m_n_s32"
    "\000vqrshrntq_m_n_u16\000vqrshrntq_m_n_u32\000vqrshrntq\000vqrshrntq_n_"
    "s16\000vqrshrntq_n_s32\000vqrshrntq_n_u16\000vqrshrntq_n_u32\000vqrshru"
    "nbq_m\000vqrshrunbq_m_n_s16\000vqrshrunbq_m_n_s32\000vqrshrunbq\000vqrs"
    "hrunbq_n_s16\000vqrshrunbq_n_s32\000vqrshruntq_m\000vqrshruntq_m_n_s16\000"
    "vqrshruntq_m_n_s32\000vqrshruntq\000vqrshruntq_n_s16\000vqrshruntq_n_s3"
    "2\000vqshlq_m_n\000vqshlq_m_n_s16\000vqshlq_m_n_s32\000vqshlq_m_n_s8\000"
    "vqshlq_m_n_u16\000vqshlq_m_n_u32\000vqshlq_m_n_u8\000vqshlq_m_r\000vqsh"
    "lq_m_r_s16\000vqshlq_m_r_s32\000vqshlq_m_r_s8\000vqshlq_m_r_u16\000vqsh"
    "lq_m_r_u32\000vqshlq_m_r_u8\000vqshlq_m\000vqshlq_m_s16\000vqshlq_m_s32"
    "\000vqshlq_m_s8\000vqshlq_m_u16\000vqshlq_m_u32\000vqshlq_m_u8\000vqshl"
    "q_n\000vqshlq_n_s16\000vqshlq_n_s32\000vqshlq_n_s8\000vqshlq_n_u16\000v"
    "qshlq_n_u32\000vqshlq_n_u8\000vqshlq_r\000vqshlq_r_s16\000vqshlq_r_s32\000"
    "vqshlq_r_s8\000vqshlq_r_u16\000vqshlq_r_u32\000vqshlq_r_u8\000vqshlq\000"
    "vqshlq_s16\000vqshlq_s32\000vqshlq_s8\000vqshlq_u16\000vqshlq_u32\000vq"
    "shlq_u8\000vqshluq_m\000vqshluq_m_n_s16\000vqshluq_m_n_s32\000vqshluq_m"
    "_n_s8\000vqshluq\000vqshluq_n_s16\000vqshluq_n_s32\000vqshluq_n_s8\000v"
    "qshrnbq_m\000vqshrnbq_m_n_s16\000vqshrnbq_m_n_s32\000vqshrnbq_m_n_u16\000"
    "vqshrnbq_m_n_u32\000vqshrnbq\000vqshrnbq_n_s16\000vqshrnbq_n_s32\000vqs"
    "hrnbq_n_u16\000vqshrnbq_n_u32\000vqshrntq_m\000vqshrntq_m_n_s16\000vqsh"
    "rntq_m_n_s32\000vqshrntq_m_n_u16\000vqshrntq_m_n_u32\000vqshrntq\000vqs"
    "hrntq_n_s16\000vqshrntq_n_s32\000vqshrntq_n_u16\000vqshrntq_n_u32\000vq"
    "shrunbq_m\000vqshrunbq_m_n_s16\000vqshrunbq_m_n_s32\000vqshrunbq\000vqs"
    "hrunbq_n_s16\000vqshrunbq_n_s32\000vqshruntq_m\000vqshruntq_m_n_s16\000"
    "vqshruntq_m_n_s32\000vqshruntq\000vqshruntq_n_s16\000vqshruntq_n_s32\000"
    "vqsubq_m\000vqsubq_m_n_s16\000vqsubq_m_n_s32\000vqsubq_m_n_s8\000vqsubq"
    "_m_n_u16\000vqsubq_m_n_u32\000vqsubq_m_n_u8\000vqsubq_m_s16\000vqsubq_m"
    "_s32\000vqsubq_m_s8\000vqsubq_m_u16\000vqsubq_m_u32\000vqsubq_m_u8\000v"
    "qsubq\000vqsubq_n_s16\000vqsubq_n_s32\000vqsubq_n_s8\000vqsubq_n_u16\000"
    "vqsubq_n_u32\000vqsubq_n_u8\000vqsubq_s16\000vqsubq_s32\000vqsubq_s8\000"
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
    "einterpretq_u8_u64\000vrev16q\000vrev16q_s8\000vrev16q_u8\000vrev32q\000"
    "vrev32q_f16\000vrev32q_s16\000vrev32q_s8\000vrev32q_u16\000vrev32q_u8\000"
    "vrev64q\000vrev64q_f16\000vrev64q_f32\000vrev64q_s16\000vrev64q_s32\000"
    "vrev64q_s8\000vrev64q_u16\000vrev64q_u32\000vrev64q_u8\000vrhaddq_m\000"
    "vrhaddq_m_s16\000vrhaddq_m_s32\000vrhaddq_m_s8\000vrhaddq_m_u16\000vrha"
    "ddq_m_u32\000vrhaddq_m_u8\000vrhaddq\000vrhaddq_s16\000vrhaddq_s32\000v"
    "rhaddq_s8\000vrhaddq_u16\000vrhaddq_u32\000vrhaddq_u8\000vrhaddq_x\000v"
    "rhaddq_x_s16\000vrhaddq_x_s32\000vrhaddq_x_s8\000vrhaddq_x_u16\000vrhad"
    "dq_x_u32\000vrhaddq_x_u8\000vrmlaldavhaq_p\000vrmlaldavhaq_p_s32\000vrm"
    "laldavhaq_p_u32\000vrmlaldavhaq\000vrmlaldavhaq_s32\000vrmlaldavhaq_u32"
    "\000vrmlaldavhaxq_p\000vrmlaldavhaxq_p_s32\000vrmlaldavhaxq\000vrmlalda"
    "vhaxq_s32\000vrmlaldavhq_p\000vrmlaldavhq_p_s32\000vrmlaldavhq_p_u32\000"
    "vrmlaldavhq\000vrmlaldavhq_s32\000vrmlaldavhq_u32\000vrmlaldavhxq_p\000"
    "vrmlaldavhxq_p_s32\000vrmlaldavhxq\000vrmlaldavhxq_s32\000vrmlsldavhaq_"
    "p\000vrmlsldavhaq_p_s32\000vrmlsldavhaq\000vrmlsldavhaq_s32\000vrmlslda"
    "vhaxq_p\000vrmlsldavhaxq_p_s32\000vrmlsldavhaxq\000vrmlsldavhaxq_s32\000"
    "vrmlsldavhq_p\000vrmlsldavhq_p_s32\000vrmlsldavhq\000vrmlsldavhq_s32\000"
    "vrmlsldavhxq_p\000vrmlsldavhxq_p_s32\000vrmlsldavhxq\000vrmlsldavhxq_s3"
    "2\000vrmulhq_m\000vrmulhq_m_s16\000vrmulhq_m_s32\000vrmulhq_m_s8\000vrm"
    "ulhq_m_u16\000vrmulhq_m_u32\000vrmulhq_m_u8\000vrmulhq\000vrmulhq_s16\000"
    "vrmulhq_s32\000vrmulhq_s8\000vrmulhq_u16\000vrmulhq_u32\000vrmulhq_u8\000"
    "vrmulhq_x\000vrmulhq_x_s16\000vrmulhq_x_s32\000vrmulhq_x_s8\000vrmulhq_"
    "x_u16\000vrmulhq_x_u32\000vrmulhq_x_u8\000vrndaq\000vrndaq_f16\000vrnda"
    "q_f32\000vrndmq\000vrndmq_f16\000vrndmq_f32\000vrndnq\000vrndnq_f16\000"
    "vrndnq_f32\000vrndpq\000vrndpq_f16\000vrndpq_f32\000vrndq\000vrndq_f16\000"
    "vrndq_f32\000vrndxq\000vrndxq_f16\000vrndxq_f32\000vrshlq_m_n\000vrshlq"
    "_m_n_s16\000vrshlq_m_n_s32\000vrshlq_m_n_s8\000vrshlq_m_n_u16\000vrshlq"
    "_m_n_u32\000vrshlq_m_n_u8\000vrshlq_m\000vrshlq_m_s16\000vrshlq_m_s32\000"
    "vrshlq_m_s8\000vrshlq_m_u16\000vrshlq_m_u32\000vrshlq_m_u8\000vrshlq\000"
    "vrshlq_n_s16\000vrshlq_n_s32\000vrshlq_n_s8\000vrshlq_n_u16\000vrshlq_n"
    "_u32\000vrshlq_n_u8\000vrshlq_s16\000vrshlq_s32\000vrshlq_s8\000vrshlq_"
    "u16\000vrshlq_u32\000vrshlq_u8\000vrshlq_x\000vrshlq_x_s16\000vrshlq_x_"
    "s32\000vrshlq_x_s8\000vrshlq_x_u16\000vrshlq_x_u32\000vrshlq_x_u8\000vr"
    "shrnbq_m\000vrshrnbq_m_n_s16\000vrshrnbq_m_n_s32\000vrshrnbq_m_n_u16\000"
    "vrshrnbq_m_n_u32\000vrshrnbq\000vrshrnbq_n_s16\000vrshrnbq_n_s32\000vrs"
    "hrnbq_n_u16\000vrshrnbq_n_u32\000vrshrntq_m\000vrshrntq_m_n_s16\000vrsh"
    "rntq_m_n_s32\000vrshrntq_m_n_u16\000vrshrntq_m_n_u32\000vrshrntq\000vrs"
    "hrntq_n_s16\000vrshrntq_n_s32\000vrshrntq_n_u16\000vrshrntq_n_u32\000vr"
    "shrq_m\000vrshrq_m_n_s16\000vrshrq_m_n_s32\000vrshrq_m_n_s8\000vrshrq_m"
    "_n_u16\000vrshrq_m_n_u32\000vrshrq_m_n_u8\000vrshrq\000vrshrq_n_s16\000"
    "vrshrq_n_s32\000vrshrq_n_s8\000vrshrq_n_u16\000vrshrq_n_u32\000vrshrq_n"
    "_u8\000vrshrq_x\000vrshrq_x_n_s16\000vrshrq_x_n_s32\000vrshrq_x_n_s8\000"
    "vrshrq_x_n_u16\000vrshrq_x_n_u32\000vrshrq_x_n_u8\000vsetq_lane\000vset"
    "q_lane_f16\000vsetq_lane_f32\000vsetq_lane_s16\000vsetq_lane_s32\000vse"
    "tq_lane_s64\000vsetq_lane_s8\000vsetq_lane_u16\000vsetq_lane_u32\000vse"
    "tq_lane_u64\000vsetq_lane_u8\000vshllbq_m\000vshllbq_m_n_s16\000vshllbq"
    "_m_n_s8\000vshllbq_m_n_u16\000vshllbq_m_n_u8\000vshllbq\000vshllbq_n_s1"
    "6\000vshllbq_n_s8\000vshllbq_n_u16\000vshllbq_n_u8\000vshllbq_x\000vshl"
    "lbq_x_n_s16\000vshllbq_x_n_s8\000vshllbq_x_n_u16\000vshllbq_x_n_u8\000v"
    "shlltq_m\000vshlltq_m_n_s16\000vshlltq_m_n_s8\000vshlltq_m_n_u16\000vsh"
    "lltq_m_n_u8\000vshlltq\000vshlltq_n_s16\000vshlltq_n_s8\000vshlltq_n_u1"
    "6\000vshlltq_n_u8\000vshlltq_x\000vshlltq_x_n_s16\000vshlltq_x_n_s8\000"
    "vshlltq_x_n_u16\000vshlltq_x_n_u8\000vshlq_m_n\000vshlq_m_n_s16\000vshl"
    "q_m_n_s32\000vshlq_m_n_s8\000vshlq_m_n_u16\000vshlq_m_n_u32\000vshlq_m_"
    "n_u8\000vshlq_m_r\000vshlq_m_r_s16\000vshlq_m_r_s32\000vshlq_m_r_s8\000"
    "vshlq_m_r_u16\000vshlq_m_r_u32\000vshlq_m_r_u8\000vshlq_m\000vshlq_m_s1"
    "6\000vshlq_m_s32\000vshlq_m_s8\000vshlq_m_u16\000vshlq_m_u32\000vshlq_m"
    "_u8\000vshlq_n\000vshlq_n_s16\000vshlq_n_s32\000vshlq_n_s8\000vshlq_n_u"
    "16\000vshlq_n_u32\000vshlq_n_u8\000vshlq_r\000vshlq_r_s16\000vshlq_r_s3"
    "2\000vshlq_r_s8\000vshlq_r_u16\000vshlq_r_u32\000vshlq_r_u8\000vshlq\000"
    "vshlq_s16\000vshlq_s32\000vshlq_s8\000vshlq_u16\000vshlq_u32\000vshlq_u"
    "8\000vshlq_x_n\000vshlq_x_n_s16\000vshlq_x_n_s32\000vshlq_x_n_s8\000vsh"
    "lq_x_n_u16\000vshlq_x_n_u32\000vshlq_x_n_u8\000vshlq_x\000vshlq_x_s16\000"
    "vshlq_x_s32\000vshlq_x_s8\000vshlq_x_u16\000vshlq_x_u32\000vshlq_x_u8\000"
    "vshrnbq_m\000vshrnbq_m_n_s16\000vshrnbq_m_n_s32\000vshrnbq_m_n_u16\000v"
    "shrnbq_m_n_u32\000vshrnbq\000vshrnbq_n_s16\000vshrnbq_n_s32\000vshrnbq_"
    "n_u16\000vshrnbq_n_u32\000vshrntq_m\000vshrntq_m_n_s16\000vshrntq_m_n_s"
    "32\000vshrntq_m_n_u16\000vshrntq_m_n_u32\000vshrntq\000vshrntq_n_s16\000"
    "vshrntq_n_s32\000vshrntq_n_u16\000vshrntq_n_u32\000vshrq_m\000vshrq_m_n"
    "_s16\000vshrq_m_n_s32\000vshrq_m_n_s8\000vshrq_m_n_u16\000vshrq_m_n_u32"
    "\000vshrq_m_n_u8\000vshrq\000vshrq_n_s16\000vshrq_n_s32\000vshrq_n_s8\000"
    "vshrq_n_u16\000vshrq_n_u32\000vshrq_n_u8\000vshrq_x\000vshrq_x_n_s16\000"
    "vshrq_x_n_s32\000vshrq_x_n_s8\000vshrq_x_n_u16\000vshrq_x_n_u32\000vshr"
    "q_x_n_u8\000vsliq_m\000vsliq_m_n_s16\000vsliq_m_n_s32\000vsliq_m_n_s8\000"
    "vsliq_m_n_u16\000vsliq_m_n_u32\000vsliq_m_n_u8\000vsliq\000vsliq_n_s16\000"
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
