/* Theremin WAVE Table "Sinus" - 1024 entries full table, amplitude -2048.,*/

#include <avr/pgmspace.h>

const int16_t sine_table4[1024] PROGMEM = {\

0,
3,
8,
16,
24,
32,
43,
47,
47,
47,
54,
54,
54,
58,
62,
69,
69,
69,
77,
77,
81,
84,
92,
92,
92,
92,
100,
100,
107,
111,
115,
115,
130,
134,
137,
137,
152,
160,
160,
175,
183,
186,
190,
198,
213,
213,
220,
220,
235,
250,
250,
250,
266,
281,
288,
315,
318,
326,
333,
348,
348,
364,
379,
386,
416,
424,
424,
454,
480,
484,
507,
530,
560,
563,
567,
590,
597,
620,
620,
650,
658,
669,
673,
688,
695,
718,
733,
733,
741,
756,
778,
786,
794,
809,
816,
843,
846,
846,
869,
877,
877,
892,
907,
914,
926,
929,
944,
952,
959,
959,
967,
975,
982,
990,
990,
997,
997,
997,
997,
1005,
1005,
1012,
1012,
1012,
1012,
1020,
1020,
1020,
1020,
1027,
1027,
1027,
1027,
1027,
1027,
1031,
1035,
1035,
1035,
1042,
1042,
1042,
1042,
1042,
1042,
1042,
1042,
1042,
1050,
1050,
1050,
1050,
1050,
1054,
1058,
1058,
1058,
1058,
1058,
1058,
1058,
1058,
1058,
1058,
1058,
1065,
1065,
1065,
1065,
1065,
1065,
1065,
1065,
1065,
1065,
1073,
1073,
1073,
1073,
1073,
1073,
1073,
1073,
1075,
1078,
1080,
1080,
1080,
1088,
1088,
1088,
1095,
1095,
1099,
1103,
1103,
1103,
1103,
1103,
1107,
1110,
1110,
1114,
1118,
1118,
1118,
1122,
1125,
1125,
1125,
1125,
1125,
1133,
1141,
1141,
1141,
1141,
1148,
1156,
1156,
1156,
1163,
1171,
1171,
1174,
1178,
1186,
1191,
1196,
1201,
1201,
1208,
1213,
1218,
1224,
1231,
1231,
1235,
1239,
1246,
1250,
1254,
1271,
1274,
1276,
1284,
1288,
1291,
1291,
1299,
1306,
1306,
1314,
1314,
1322,
1329,
1329,
1337,
1344,
1348,
1352,
1352,
1367,
1374,
1378,
1382,
1389,
1389,
1397,
1397,
1412,
1412,
1420,
1431,
1435,
1442,
1450,
1454,
1457,
1472,
1488,
1495,
1495,
1495,
1503,
1508,
1513,
1518,
1533,
1543,
1545,
1548,
1563,
1578,
1578,
1586,
1593,
1597,
1601,
1618,
1621,
1623,
1638,
1646,
1650,
1653,
1661,
1671,
1674,
1676,
1691,
1695,
1699,
1710,
1714,
1721,
1729,
1733,
1736,
1752,
1759,
1774,
1779,
1784,
1789,
1797,
1812,
1812,
1819,
1827,
1835,
1842,
1842,
1850,
1857,
1861,
1865,
1868,
1872,
1877,
1882,
1887,
1887,
1908,
1912,
1924,
1927,
1934,
1937,
1939,
1941,
1943,
1945,
1946,
1948,
1948,
1950,
1951,
1951,
1952,
1952,
1954,
1955,
1957,
1957,
1958,
1958,
1958,
1958,
1958,
1958,
1958,
1958,
1957,
1956,
1955,
1954,
1952,
1952,
1951,
1949,
1948,
1947,
1946,
1944,
1944,
1943,
1941,
1940,
1937,
1935,
1930,
1927,
1921,
1914,
1910,
1903,
1899,
1897,
1892,
1880,
1865,
1865,
1865,
1857,
1850,
1835,
1835,
1835,
1827,
1819,
1804,
1804,
1797,
1789,
1774,
1774,
1767,
1759,
1752,
1736,
1736,
1729,
1721,
1706,
1706,
1706,
1699,
1695,
1684,
1681,
1679,
1676,
1669,
1665,
1653,
1653,
1646,
1631,
1631,
1623,
1623,
1608,
1608,
1601,
1593,
1586,
1578,
1574,
1563,
1555,
1563,
1540,
1538,
1535,
1533,
1510,
1495,
1491,
1488,
1472,
1450,
1446,
1442,
1427,
1405,
1400,
1394,
1374,
1363,
1352,
1344,
1337,
1322,
1306,
1295,
1284,
1261,
1254,
1239,
1231,
1224,
1186,
1181,
1176,
1171,
1148,
1103,
1103,
1092,
1080,
1050,
1045,
1040,
1020,
997,
975,
937,
926,
914,
899,
889,
879,
846,
824,
801,
778,
763,
726,
718,
711,
699,
665,
643,
613,
601,
590,
579,
537,
514,
503,
492,
454,
424,
416,
409,
371,
356,
341,
330,
318,
281,
266,
254,
243,
198,
175,
152,
145,
137,
84,
69,
58,
47,
1,
-20,
-35,
-43,
-73,
-111,
-133,
-141,
-171,
-171,
-209,
-216,
-224,
-262,
-307,
-322,
-329,
-337,
-382,
-397,
-409,
-420,
-450,
-480,
-495,
-503,
-541,
-541,
-578,
-586,
-601,
-616,
-639,
-654,
-665,
-676,
-691,
-722,
-729,
-737,
-759,
-774,
-797,
-805,
-812,
-835,
-850,
-857,
-865,
-910,
-918,
-925,
-933,
-963,
-978,
-981,
-983,
-1008,
-1023,
-1038,
-1046,
-1076,
-1080,
-1084,
-1121,
-1125,
-1137,
-1152,
-1174,
-1177,
-1179,
-1197,
-1220,
-1225,
-1230,
-1250,
-1257,
-1272,
-1276,
-1280,
-1295,
-1318,
-1325,
-1330,
-1335,
-1363,
-1365,
-1368,
-1385,
-1397,
-1408,
-1416,
-1423,
-1431,
-1442,
-1461,
-1466,
-1471,
-1476,
-1484,
-1491,
-1499,
-1514,
-1521,
-1529,
-1533,
-1570,
-1589,
-1593,
-1608,
-1608,
-1623,
-1638,
-1638,
-1653,
-1661,
-1668,
-1676,
-1676,
-1683,
-1695,
-1699,
-1706,
-1714,
-1729,
-1736,
-1736,
-1744,
-1751,
-1770,
-1774,
-1774,
-1797,
-1797,
-1812,
-1812,
-1812,
-1834,
-1834,
-1834,
-1849,
-1857,
-1864,
-1864,
-1864,
-1872,
-1872,
-1875,
-1877,
-1880,
-1880,
-1880,
-1880,
-1880,
-1887,
-1887,
-1887,
-1887,
-1887,
-1887,
-1887,
-1887,
-1895,
-1895,
-1895,
-1897,
-1900,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1902,
-1895,
-1895,
-1895,
-1895,
-1895,
-1891,
-1887,
-1887,
-1887,
-1885,
-1882,
-1880,
-1880,
-1872,
-1872,
-1872,
-1868,
-1864,
-1864,
-1864,
-1864,
-1864,
-1854,
-1852,
-1849,
-1842,
-1842,
-1827,
-1825,
-1823,
-1821,
-1819,
-1812,
-1804,
-1798,
-1793,
-1787,
-1782,
-1759,
-1755,
-1751,
-1748,
-1744,
-1729,
-1726,
-1724,
-1721,
-1706,
-1699,
-1691,
-1680,
-1668,
-1661,
-1642,
-1634,
-1634,
-1631,
-1619,
-1619,
-1612,
-1604,
-1599,
-1594,
-1589,
-1584,
-1579,
-1574,
-1559,
-1551,
-1536,
-1536,
-1529,
-1521,
-1514,
-1510,
-1506,
-1499,
-1484,
-1476,
-1476,
-1468,
-1461,
-1453,
-1446,
-1438,
-1423,
-1416,
-1408,
-1404,
-1393,
-1385,
-1363,
-1359,
-1355,
-1348,
-1340,
-1336,
-1318,
-1310,
-1295,
-1287,
-1284,
-1280,
-1265,
-1250,
-1246,
-1242,
-1235,
-1220,
-1204,
-1201,
-1182,
-1182,
-1167,
-1163,
-1159,
-1152,
-1144,
-1139,
-1134,
-1121,
-1106,
-1091,
-1091,
-1084,
-1076,
-1061,
-1054,
-1050,
-1046,
-1038,
-1031,
-1031,
-1031,
-1016,
-1016,
-1016,
-1008,
-1001,
-1001,
-993,
-989,
-986,
-978,
-976,
-973,
-971,
-971,
-971,
-956,
-956,
-956,
-948,
-940,
-940,
-940,
-940,
-933,
-933,
-930,
-928,
-918,
-918,
-918,
-918,
-910,
-910,
-905,
-900,
-895,
-888,
-888,
-888,
-880,
-873,
-865,
-865,
-857,
-857,
-857,
-857,
-857,
-857,
-850,
-850,
-850,
-850,
-850,
-850,
-842,
-835,
-835,
-831,
-820,
-805,
-797,
-797,
-797,
-782,
-774,
-759,
-759,
-752,
-737,
-702,
-695,
-687,
-672,
-642,
-627,
-623,
-596,
-581,
-551,
-547,
-513,
-506,
-476,
-446,
-446,
-431,
-400,
-378,
-374,
-348,
-325,
-295,
-280,
-276,
-242,
-227,
-212,
-208,
-189,
-182,
-166,
-163,
-151,
-136,
-129,
-114,
-110,
-106,
-91,
-84,
-80,
-76,
-68,
-53,
-53,
-50,
-46,
-38,
-31,
-31,
-31,
-23,
-23,
-16,
-12,
-10,
-8,
-7,
-6,
-3,
2,
0
};


