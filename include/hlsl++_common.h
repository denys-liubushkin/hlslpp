namespace hlslpp
{
	//----------------
	// Float Constants
	//----------------

	const n128 f4_0           = _hlslpp_set1_ps(0.0f);
	const n128 f4_1           = _hlslpp_set1_ps(1.0f);
	const n128 f4minusOne     = _hlslpp_set1_ps(-1.0f);
	const n128 f4_05          = _hlslpp_set1_ps(0.5f);
	const n128 f4_minus05     = _hlslpp_set1_ps(-0.5f);
	const n128 f4_2           = _hlslpp_set1_ps(2.0f);
	const n128 f4_minus2      = _hlslpp_set1_ps(-2.0f);
	const n128 f4_3           = _hlslpp_set1_ps(3.0f);
	const n128 f4_10          = _hlslpp_set1_ps(10.0f);
	const n128 f4_e           = _hlslpp_set1_ps(2.718281828f);

	const n128 f4_pi          = _hlslpp_set1_ps(3.14159265f);  // pi
	const n128 f4_minusPi     = _hlslpp_set1_ps(-3.14159265f); // -pi
	const n128 f4_invPi       = _hlslpp_set1_ps(0.31830988f);  // 1 / pi

	const n128 f4_2pi         = _hlslpp_set1_ps(6.28318530f);  //  2 * pi
	const n128 f4_minus2pi    = _hlslpp_set1_ps(-6.28318530f); // -2 * pi
	const n128 f4_inv2pi      = _hlslpp_set1_ps(0.15915494f);  // 1 / (2 * pi)

	const n128 f4_pi2         = _hlslpp_set1_ps(1.57079632f);  //  pi / 2
	const n128 f4_minusPi2    = _hlslpp_set1_ps(-1.57079632f); // -pi / 2
	const n128 f4_invPi2      = _hlslpp_set1_ps(0.63661977f);  // 2 / pi

	const n128 f4_3pi2        = _hlslpp_set1_ps(4.71238898f);  //  3 * pi / 2
	const n128 f4_minus3pi2   = _hlslpp_set1_ps(-4.71238898f); // -3 * pi / 2

	const n128 f4_pi4         = _hlslpp_set1_ps(0.78539816f);  // pi / 4
	const n128 f4_minusPi4    = _hlslpp_set1_ps(-0.78539816f); // -pi / 4

	const n128 f4_NaN         = _hlslpp_set1_ps(nanMask.f);      // Quiet NaN
	const n128 f4_inf         = _hlslpp_set1_ps(infMask.f);      // Infinity
	const n128 f4_minusinf    = _hlslpp_set1_ps(minusinfMask.f); // -Infinity
	const n128 f4_fff         = _hlslpp_set1_ps(fffMask.f);      // 0xffffffff

	const n128 f4_rad2deg     = _hlslpp_set1_ps(180.0f / 3.14159265f);
	const n128 f4_deg2rad     = _hlslpp_set1_ps(3.14159265f / 180.f);

	const n128 f4negativeMask = _hlslpp_set1_ps(negMask.f);
	const n128 f4absMask      = _hlslpp_set1_ps(absMask.f);

	//------------------
	// Integer Constants
	//------------------

	const n128i i4_0           = _hlslpp_set1_epi32(0);
	const n128i i4_1           = _hlslpp_set1_epi32(1);

	const n128i i4negativeMask = _hlslpp_set1_epi32(negMask.i);
	const n128i i4absMask      = _hlslpp_set1_epi32(absMask.i);
	const n128i i4fffMask      = _hlslpp_set1_epi32(fffMask.i);
	const n128i i4negMask      = _hlslpp_set1_epi32(negMask.i);

	const n128u u4_0           = _hlslpp_set1_epu32(0);
	const n128u u4_1           = _hlslpp_set1_epu32(1);

#if defined(HLSLPP_SIMD_REGISTER_FLOAT8)

	const n256 f8_0           = _hlslpp256_set1_ps(0.0f);
	const n256 f8_1           = _hlslpp256_set1_ps(1.0f);
	const n256 f8minusOne     = _hlslpp256_set1_ps(-1.0f);
	const n256 f8_05          = _hlslpp256_set1_ps(0.5f);
	const n256 f8_minus05     = _hlslpp256_set1_ps(-0.5f);
	const n256 f8_2           = _hlslpp256_set1_ps(2.0f);
	const n256 f8_minus2      = _hlslpp256_set1_ps(-2.0f);
	const n256 f8_3           = _hlslpp256_set1_ps(3.0f);
	const n256 f8_10          = _hlslpp256_set1_ps(10.0f);
	const n256 f8_e           = _hlslpp256_set1_ps(2.718281828f);

	const n256 f8_pi          = _hlslpp256_set1_ps(3.14159265f);  // pi
	const n256 f8_minusPi     = _hlslpp256_set1_ps(-3.14159265f); // -pi
	const n256 f8_invPi       = _hlslpp256_set1_ps(0.31830988f);  // 1 / pi

	const n256 f8_2pi         = _hlslpp256_set1_ps(6.28318530f);  //  2 * pi
	const n256 f8_minus2pi    = _hlslpp256_set1_ps(-6.28318530f); // -2 * pi
	const n256 f8_inv2pi      = _hlslpp256_set1_ps(0.15915494f);  // 1 / (2 * pi)

	const n256 f8_pi2         = _hlslpp256_set1_ps(1.57079632f);  //  pi / 2
	const n256 f8_minusPi2    = _hlslpp256_set1_ps(-1.57079632f); // -pi / 2
	const n256 f8_invPi2      = _hlslpp256_set1_ps(0.63661977f);  // 2 / pi

	const n256 f8_3pi2        = _hlslpp256_set1_ps(4.71238898f);  //  3 * pi / 2
	const n256 f8_minus3pi2   = _hlslpp256_set1_ps(-4.71238898f); // -3 * pi / 2

	const n256 f8_pi4         = _hlslpp256_set1_ps(0.78539816f);  // pi / 4
	const n256 f8_minusPi4    = _hlslpp256_set1_ps(-0.78539816f); // -pi / 4

	const n256 f8_NaN         = _hlslpp256_set1_ps(nanMask.f);      // Quiet NaN
	const n256 f8_inf         = _hlslpp256_set1_ps(infMask.f);      // Infinity
	const n256 f8_minusinf    = _hlslpp256_set1_ps(minusinfMask.f); // -Infinity
	const n256 f8_fff         = _hlslpp256_set1_ps(fffMask.f);      // 0xffffffff

	const n256 f8_rad2deg     = _hlslpp256_set1_ps(180.0f / 3.14159265f);
	const n256 f8_deg2rad     = _hlslpp256_set1_ps(3.14159265f / 180.f);

	const n256 f8negativeMask = _hlslpp256_set1_ps(negMask.f);
	const n256 f8absMask      = _hlslpp256_set1_ps(absMask.f);

#endif

	static const int IdentityMask  = ((3 << 6) | (2 << 4) | (1 << 2) | 0);
	static const int IdentityMask2 = (1 << 1) | 0;

	const uint32_t MaskX = 0;
	const uint32_t MaskY = 1;
	const uint32_t MaskZ = 2;
	const uint32_t MaskW = 3;

	const uint32_t MaskA = 4;
	const uint32_t MaskB = 5;
	const uint32_t MaskC = 6;
	const uint32_t MaskD = 7;

	// Auxiliary templates for disambiguation with standard header functions

	#define hlslpp_enable_if_return(T, R) typename std::enable_if<std::is_arithmetic<T>::value, R>::type
	
	#define hlslpp_enable_if_number(T) typename std::enable_if<std::is_arithmetic<T>::value, void*>::type = nullptr
	
	#define hlslpp_enable_if_number_2(T1, T2) \
			typename std::enable_if< \
			std::is_arithmetic<T1>::value * \
			std::is_arithmetic<T2>::value, void*>::type = nullptr
	
	#define hlslpp_enable_if_number_3(T1, T2, T3) \
			typename std::enable_if< \
			std::is_arithmetic<T1>::value * \
			std::is_arithmetic<T2>::value * \
			std::is_arithmetic<T3>::value, void*>::type = nullptr
	
	#define hlslpp_enable_if_number_4(T1, T2, T3, T4) \
			typename std::enable_if< \
			std::is_arithmetic<T1>::value * \
			std::is_arithmetic<T2>::value * \
			std::is_arithmetic<T3>::value * \
			std::is_arithmetic<T4>::value, void*>::type = nullptr

	#define hlslpp_enable_if_number_8(T1, T2, T3, T4, T5, T6, T7, T8) \
			typename std::enable_if< \
			std::is_arithmetic<T1>::value * \
			std::is_arithmetic<T2>::value * \
			std::is_arithmetic<T3>::value * \
			std::is_arithmetic<T4>::value * \
			std::is_arithmetic<T5>::value * \
			std::is_arithmetic<T6>::value * \
			std::is_arithmetic<T7>::value * \
			std::is_arithmetic<T8>::value, void*>::type = nullptr

	// Helper intrinsics

	#define _hlslpp_perm_xxxx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskX, MaskX))
	#define _hlslpp_perm_xxyx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskY, MaskX))
	#define _hlslpp_perm_xxyz_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskY, MaskZ))
	#define _hlslpp_perm_xyxy_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskY, MaskX, MaskY))
	#define _hlslpp_perm_xyww_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskY, MaskW, MaskW))
	#define _hlslpp_perm_xzyw_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskZ, MaskY, MaskW))
	#define _hlslpp_perm_xzxy_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskZ, MaskX, MaskY))
	#define _hlslpp_perm_xzwx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskZ, MaskW, MaskX))
	#define _hlslpp_perm_xwxw_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskW, MaskX, MaskW))
	#define _hlslpp_perm_yxxx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskX, MaskX, MaskX))
	#define _hlslpp_perm_yxwx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskX, MaskW, MaskX))
	#define _hlslpp_perm_yxwz_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskX, MaskW, MaskZ))
	#define _hlslpp_perm_yyyy_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskY, MaskY, MaskY))
	#define _hlslpp_perm_yzxx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskZ, MaskX, MaskX))
	#define _hlslpp_perm_yzxw_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskZ, MaskX, MaskW))
	#define _hlslpp_perm_yzwx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskZ, MaskW, MaskX))
	#define _hlslpp_perm_ywxz_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskW, MaskX, MaskZ))
	#define _hlslpp_perm_zxxx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskX, MaskX, MaskX))
	#define _hlslpp_perm_zxyw_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskX, MaskY, MaskW))
	#define _hlslpp_perm_zyyx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskY, MaskY, MaskX))
	#define _hlslpp_perm_zyzy_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskY, MaskZ, MaskY))
	#define _hlslpp_perm_zzyx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskZ, MaskY, MaskX))
	#define _hlslpp_perm_zzzz_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskZ, MaskZ, MaskZ))
	#define _hlslpp_perm_zwzw_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskW, MaskZ, MaskW))
	#define _hlslpp_perm_wyzx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskW, MaskY, MaskZ, MaskX))
	#define _hlslpp_perm_wzxx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskW, MaskZ, MaskX, MaskX))
	#define _hlslpp_perm_wwyx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskW, MaskW, MaskY, MaskX))
	#define _hlslpp_perm_wwzx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskW, MaskW, MaskZ, MaskX))
	#define _hlslpp_perm_wwzw_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskW, MaskW, MaskZ, MaskW))
	#define _hlslpp_perm_wwww_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskW, MaskW, MaskW, MaskW))
	#define _hlslpp_perm_xxyy_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskY, MaskY))
	#define _hlslpp_perm_zwxx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskW, MaskX, MaskX))
	#define _hlslpp_perm_xyxx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskY, MaskX, MaskX))
	#define _hlslpp_perm_zxwy_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskX, MaskW, MaskY))
	#define _hlslpp_perm_yzzy_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskZ, MaskZ, MaskY))
	#define _hlslpp_perm_zxyz_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskX, MaskY, MaskZ))
	#define _hlslpp_perm_yzxz_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskY, MaskZ, MaskX, MaskZ))
	#define _hlslpp_perm_zyzx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskZ, MaskY, MaskZ, MaskX))
	#define _hlslpp_perm_wwwx_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskW, MaskW, MaskW, MaskX))
	#define _hlslpp_perm_wxyz_ps(x)		_hlslpp_perm_ps((x), HLSLPP_SHUFFLE_MASK(MaskW, MaskX, MaskY, MaskZ))
	
	#define _hlslpp_shuf_xxxx_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskX, MaskX))
	#define _hlslpp_shuf_xxxy_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskX, MaskY))
	#define _hlslpp_shuf_xyxx_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskY, MaskX, MaskX))
	#define _hlslpp_shuf_xyxy_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskY, MaskX, MaskY))
	#define _hlslpp_shuf_yzyz_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskY, MaskZ, MaskY, MaskZ))
	#define _hlslpp_shuf_xzxw_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskZ, MaskX, MaskW))
	#define _hlslpp_shuf_ywyw_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskY, MaskW, MaskY, MaskW))
	#define _hlslpp_shuf_ywzw_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskY, MaskW, MaskZ, MaskW))
	#define _hlslpp_shuf_zwzw_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskZ, MaskW, MaskZ, MaskW))
	#define _hlslpp_shuf_xzxz_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskZ, MaskX, MaskZ))
	#define _hlslpp_shuf_wzxx_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskW, MaskZ, MaskX, MaskX))
	#define _hlslpp_shuf_ywzy_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskY, MaskW, MaskZ, MaskY))
	#define _hlslpp_shuf_xzxx_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskZ, MaskX, MaskX))
	#define _hlslpp_shuf_ywyy_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskY, MaskW, MaskY, MaskY))
	#define _hlslpp_shuf_yyyy_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskY, MaskY, MaskY, MaskY))
	#define _hlslpp_shuf_zyzy_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskZ, MaskY, MaskZ, MaskY))
	#define _hlslpp_shuf_xwxw_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskW, MaskX, MaskW))
	#define _hlslpp_shuf_wxwx_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskW, MaskX, MaskW, MaskX))
	#define _hlslpp_shuf_zxxz_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskZ, MaskX, MaskX, MaskZ))
	#define _hlslpp_shuf_wyyw_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskW, MaskY, MaskY, MaskW))
	#define _hlslpp_shuf_xzzx_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskZ, MaskZ, MaskX))
	#define _hlslpp_shuf_ywwy_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskY, MaskW, MaskW, MaskY))
	#define _hlslpp_shuf_yxwz_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskY, MaskX, MaskW, MaskZ))
	#define _hlslpp_shuf_zzxx_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskZ, MaskZ, MaskX, MaskX))
	#define _hlslpp_shuf_zwxx_ps(x, y)	_hlslpp_shuffle_ps((x), (y), HLSLPP_SHUFFLE_MASK(MaskZ, MaskW, MaskX, MaskX))
	
	#define _hlslpp256_perm_xxxx_xxxx_ps(x) _hlslpp256_perm_ps(x, MaskX, MaskX, MaskX, MaskX, MaskX, MaskX, MaskX, MaskX)
	#define _hlslpp256_perm_xxxx_yyyy_ps(x) _hlslpp256_perm_ps(x, MaskX, MaskX, MaskX, MaskX, MaskY, MaskY, MaskY, MaskY)
	#define _hlslpp256_perm_xxxx_aaaa_ps(x) _hlslpp256_perm_ps(x, MaskX, MaskX, MaskX, MaskX, MaskA, MaskA, MaskA, MaskA)
	#define _hlslpp256_perm_xxxx_bbbb_ps(x) _hlslpp256_perm_ps(x, MaskX, MaskX, MaskX, MaskX, MaskB, MaskB, MaskB, MaskB)
	#define _hlslpp256_perm_xzxy_badc_ps(x) _hlslpp256_perm_ps(x, MaskX, MaskZ, MaskX, MaskY, MaskB, MaskA, MaskD, MaskC)
	#define _hlslpp256_perm_xzzx_acca_ps(x) _hlslpp256_perm_ps(x, MaskX, MaskZ, MaskZ, MaskX, MaskA, MaskC, MaskC, MaskA)
	#define _hlslpp256_perm_xzzx_bddb_ps(x) _hlslpp256_perm_ps(x, MaskX, MaskZ, MaskZ, MaskX, MaskB, MaskD, MaskD, MaskB)
	#define _hlslpp256_perm_yxwz_acab_ps(x) _hlslpp256_perm_ps(x, MaskY, MaskX, MaskW, MaskZ, MaskA, MaskC, MaskA, MaskB)
	#define _hlslpp256_perm_yyyy_bbbb_ps(x) _hlslpp256_perm_ps(x, MaskY, MaskY, MaskY, MaskY, MaskB, MaskB, MaskB, MaskB)
	#define _hlslpp256_perm_yyyy_aaaa_ps(x) _hlslpp256_perm_ps(x, MaskY, MaskY, MaskY, MaskY, MaskA, MaskA, MaskA, MaskA)
	#define _hlslpp256_perm_ywwy_bddb_ps(x) _hlslpp256_perm_ps(x, MaskY, MaskW, MaskW, MaskY, MaskB, MaskD, MaskD, MaskB)
	#define _hlslpp256_perm_ywwy_acca_ps(x) _hlslpp256_perm_ps(x, MaskY, MaskW, MaskW, MaskY, MaskA, MaskC, MaskC, MaskA)
	#define _hlslpp256_perm_ywwz_cbaa_ps(x) _hlslpp256_perm_ps(x, MaskY, MaskW, MaskW, MaskZ, MaskC, MaskB, MaskA, MaskA)
	#define _hlslpp256_perm_zyyx_ddcd_ps(x) _hlslpp256_perm_ps(x, MaskZ, MaskY, MaskY, MaskX, MaskD, MaskD, MaskC, MaskD)
	#define _hlslpp256_perm_zzzz_wwww_ps(x) _hlslpp256_perm_ps(x, MaskZ, MaskZ, MaskZ, MaskZ, MaskW, MaskW, MaskW, MaskW)
	#define _hlslpp256_perm_zzzz_cccc_ps(x) _hlslpp256_perm_ps(x, MaskZ, MaskZ, MaskZ, MaskZ, MaskC, MaskC, MaskC, MaskC)
	#define _hlslpp256_perm_zzzz_dddd_ps(x) _hlslpp256_perm_ps(x, MaskZ, MaskZ, MaskZ, MaskZ, MaskD, MaskD, MaskD, MaskD)
	#define _hlslpp256_perm_zwxx_cdaa_ps(x) _hlslpp256_perm_ps(x, MaskZ, MaskW, MaskX, MaskX, MaskC, MaskD, MaskA, MaskA)
	#define _hlslpp256_perm_wzyw_aacb_ps(x) _hlslpp256_perm_ps(x, MaskW, MaskZ, MaskY, MaskW, MaskA, MaskA, MaskC, MaskB)
	#define _hlslpp256_perm_wwzw_cbba_ps(x) _hlslpp256_perm_ps(x, MaskW, MaskW, MaskZ, MaskW, MaskC, MaskB, MaskB, MaskA)
	#define _hlslpp256_perm_wwww_cccc_ps(x) _hlslpp256_perm_ps(x, MaskW, MaskW, MaskW, MaskW, MaskC, MaskC, MaskC, MaskC)
	#define _hlslpp256_perm_wwww_dddd_ps(x) _hlslpp256_perm_ps(x, MaskW, MaskW, MaskW, MaskW, MaskD, MaskD, MaskD, MaskD)

	#define _hlslpp256_perm_aaaa_xxxx_ps(x) _hlslpp256_perm_ps(x, MaskA, MaskA, MaskA, MaskA, MaskX, MaskX, MaskX, MaskX)

	// Reference http://www.liranuna.com/sse-intrinsics-optimizations-in-popular-compilers/
	#define _hlslpp_sign_ps(val)				_hlslpp_and_ps(_hlslpp_or_ps(_hlslpp_and_ps((val), f4minusOne), f4_1), _hlslpp_cmpneq_ps((val), f4_0))
	
	#define _hlslpp_cmpneq1_ps(val1, val2)		_hlslpp_and_ps(_hlslpp_cmpneq_ps((val1), (val2)), f4_1)
	#define _hlslpp_cmpeq1_ps(val1, val2)		_hlslpp_and_ps(_hlslpp_cmpeq_ps((val1), (val2)), f4_1)
	
	#define _hlslpp_cmpgt1_ps(val1, val2)		_hlslpp_and_ps(_hlslpp_cmpgt_ps((val1), (val2)), f4_1)
	#define _hlslpp_cmpge1_ps(val1, val2)		_hlslpp_and_ps(_hlslpp_cmpge_ps((val1), (val2)), f4_1)
	
	#define _hlslpp_cmplt1_ps(val1, val2)		_hlslpp_and_ps(_hlslpp_cmplt_ps((val1), (val2)), f4_1)
	#define _hlslpp_cmple1_ps(val1, val2)		_hlslpp_and_ps(_hlslpp_cmple_ps((val1), (val2)), f4_1)

	#define _hlslpp_perm_xxxx_epi32(x)			_hlslpp_perm_epi32((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskX, MaskX))
	#define _hlslpp_perm_xxyx_epi32(x)			_hlslpp_perm_epi32((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskY, MaskX))
	#define _hlslpp_perm_xxyz_epi32(x)			_hlslpp_perm_epi32((x), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskY, MaskZ))

	#define _hlslpp_shuf_xxxx_epi32(x, y)		_hlslpp_shuffle_epi32((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskX, MaskX))
	#define _hlslpp_shuf_xyxx_epi32(x, y)		_hlslpp_shuffle_epi32((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskY, MaskX, MaskX))
	#define _hlslpp_shuf_xxxy_epi32(x, y)		_hlslpp_shuffle_epi32((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskX, MaskX, MaskY))
	#define _hlslpp_shuf_xyxy_epi32(x, y)		_hlslpp_shuffle_epi32((x), (y), HLSLPP_SHUFFLE_MASK(MaskX, MaskY, MaskX, MaskY))

	#define _hlslpp_cmpneq1_epi32(val1, val2)	_hlslpp_and_si128(_hlslpp_cmpneq_epi32((val1), (val2)), i4_1)
	#define _hlslpp_cmpeq1_epi32(val1, val2)	_hlslpp_and_si128(_hlslpp_cmpeq_epi32((val1), (val2)), i4_1)
	
	#define _hlslpp_cmpgt1_epi32(val1, val2)	_hlslpp_and_si128(_hlslpp_cmpgt_epi32((val1), (val2)), i4_1)
	#define _hlslpp_cmpge1_epi32(val1, val2)	_hlslpp_and_si128(_hlslpp_cmpge_epi32((val1), (val2)), i4_1)
	
	#define _hlslpp_cmplt1_epi32(val1, val2)	_hlslpp_and_si128(_hlslpp_cmplt_epi32((val1), (val2)), i4_1)
	#define _hlslpp_cmple1_epi32(val1, val2)	_hlslpp_and_si128(_hlslpp_cmple_epi32((val1), (val2)), i4_1)

	#define _hlslpp256_sign_ps(val)				_hlslpp256_and_ps(_hlslpp256_or_ps(_hlslpp256_and_ps((val), f8minusOne), f8_1), _hlslpp256_cmpneq_ps((val), f8_0))

	#define _hlslpp256_cmpneq1_ps(val1, val2)	_hlslpp256_and_ps(_hlslpp256_cmpneq_ps((val1), (val2)), f8_1)
	#define _hlslpp256_cmpeq1_ps(val1, val2)	_hlslpp256_and_ps(_hlslpp256_cmpeq_ps((val1), (val2)), f8_1)

	#define _hlslpp256_cmpgt1_ps(val1, val2)	_hlslpp256_and_ps(_hlslpp256_cmpgt_ps((val1), (val2)), f8_1)
	#define _hlslpp256_cmpge1_ps(val1, val2)	_hlslpp256_and_ps(_hlslpp256_cmpge_ps((val1), (val2)), f8_1)

	#define _hlslpp256_cmplt1_ps(val1, val2)	_hlslpp256_and_ps(_hlslpp256_cmplt_ps((val1), (val2)), f8_1)
	#define _hlslpp256_cmple1_ps(val1, val2)	_hlslpp256_and_ps(_hlslpp256_cmple_ps((val1), (val2)), f8_1)

	// Forward declarations

	struct float1;
	struct float2;
	struct float3;
	struct float4;

	struct int1;
	struct int2;
	struct int3;
	struct int4;

	struct uint1;
	struct uint2;
	struct uint3;
	struct uint4;

	struct float1x1;

	struct double1;
	struct double2;
	struct double3;
	struct double4;
}